/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package im.turms.turms.workflow.service.impl.group;

import com.google.protobuf.Int64Value;
import com.mongodb.client.result.DeleteResult;
import com.mongodb.client.result.UpdateResult;
import im.turms.common.constant.GroupInvitationStrategy;
import im.turms.common.constant.RequestStatus;
import im.turms.common.model.bo.group.GroupInvitationsWithVersion;
import im.turms.common.util.Validator;
import im.turms.server.common.bo.common.DateRange;
import im.turms.server.common.cluster.node.Node;
import im.turms.server.common.cluster.service.idgen.ServiceType;
import im.turms.server.common.constant.TurmsStatusCode;
import im.turms.server.common.exception.TurmsBusinessException;
import im.turms.server.common.manager.TrivialTaskManager;
import im.turms.server.common.mongo.IMongoDataGenerator;
import im.turms.server.common.mongo.TurmsMongoClient;
import im.turms.server.common.mongo.operation.option.Filter;
import im.turms.server.common.mongo.operation.option.QueryOptions;
import im.turms.server.common.mongo.operation.option.Update;
import im.turms.server.common.property.TurmsPropertiesManager;
import im.turms.server.common.util.AssertUtil;
import im.turms.turms.bo.ServicePermission;
import im.turms.turms.constant.OperationResultConstant;
import im.turms.turms.constraint.ValidRequestStatus;
import im.turms.turms.util.ProtoUtil;
import im.turms.turms.workflow.dao.domain.group.GroupInvitation;
import im.turms.turms.workflow.service.documentation.UsesNonIndexedData;
import im.turms.turms.workflow.service.impl.user.UserVersionService;
import im.turms.turms.workflow.service.util.DomainConstraintUtil;
import im.turms.turms.workflow.service.util.RequestStatusUtil;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.context.annotation.DependsOn;
import org.springframework.stereotype.Service;
import reactor.core.publisher.Flux;
import reactor.core.publisher.Mono;

import javax.annotation.Nullable;
import javax.validation.constraints.NotEmpty;
import javax.validation.constraints.NotNull;
import javax.validation.constraints.PastOrPresent;
import java.time.Instant;
import java.time.temporal.ChronoUnit;
import java.util.Date;
import java.util.Set;
import java.util.stream.Collectors;

import static im.turms.turms.constant.DaoConstant.ID_FIELD_NAME;

/**
 * @author James Chen
 */
@Service
@DependsOn(IMongoDataGenerator.BEAN_NAME)
public class GroupInvitationService {

    private final Node node;
    private final TurmsMongoClient mongoClient;
    private final GroupMemberService groupMemberService;
    private final GroupVersionService groupVersionService;
    private final UserVersionService userVersionService;

    public GroupInvitationService(
            Node node,
            TurmsPropertiesManager turmsPropertiesManager,
            @Qualifier("groupMongoClient") TurmsMongoClient mongoClient,
            GroupMemberService groupMemberService,
            UserVersionService userVersionService,
            GroupVersionService groupVersionService,
            TrivialTaskManager taskManager) {
        this.groupMemberService = groupMemberService;
        this.node = node;
        this.mongoClient = mongoClient;
        this.userVersionService = userVersionService;
        this.groupVersionService = groupVersionService;

        // Set up the checker for expired group invitations
        taskManager.reschedule(
                "groupInvitationsChecker",
                turmsPropertiesManager.getLocalProperties().getService().getGroup().getExpiredGroupInvitationsCheckerCron(),
                () -> {
                    if (node.isLocalNodeMaster()) {
                        if (node.getSharedProperties().getService().getGroup()
                                .isDeleteExpiredGroupInvitationsWhenCronTriggered()) {
                            removeAllExpiredGroupInvitations().subscribe();
                        } else {
                            updateExpiredRequestsStatus().subscribe();
                        }
                    }
                });
    }

    public Mono<Void> removeAllExpiredGroupInvitations() {
        Date now = new Date();
        Filter filter = Filter.newBuilder()
                .lt(GroupInvitation.Fields.EXPIRATION_DATE, now);
        return mongoClient.deleteMany(GroupInvitation.class, filter).then();
    }

    /**
     * Warning: Only use expirationDate to check whether a request is expired.
     * Because of the excessive resource consumption, the request status of requests
     * won't be expiry immediately when reaching the expiration date.
     */
    public Mono<Void> updateExpiredRequestsStatus() {
        Date now = new Date();
        Filter filter = Filter.newBuilder()
                .lt(GroupInvitation.Fields.EXPIRATION_DATE, now)
                .eq(GroupInvitation.Fields.STATUS, RequestStatus.PENDING);
        Update update = Update.newBuilder()
                .set(GroupInvitation.Fields.STATUS, RequestStatus.EXPIRED);
        return mongoClient.updateMany(GroupInvitation.class, filter, update).then();
    }

    public Mono<GroupInvitation> authAndCreateGroupInvitation(
            @NotNull Long groupId,
            @NotNull Long inviterId,
            @NotNull Long inviteeId,
            @Nullable String content) {
        try {
            AssertUtil.notNull(groupId, "groupId");
            AssertUtil.notNull(inviterId, "inviterId");
            AssertUtil.notNull(inviteeId, "inviteeId");
            validInvitationContentLength(content);
        } catch (TurmsBusinessException e) {
            return Mono.error(e);
        }
        return groupMemberService
                .isAllowedToInviteOrAdd(groupId, inviterId, null)
                .flatMap(pair -> {
                    ServicePermission permission = pair.getLeft();
                    TurmsStatusCode statusCode = permission.getCode();
                    if (statusCode != TurmsStatusCode.OK) {
                        return Mono.error(TurmsBusinessException.get(statusCode, permission.getReason()));
                    }
                    return groupMemberService
                            .isAllowedToBeInvited(groupId, inviteeId)
                            .flatMap(code -> {
                                if (code != TurmsStatusCode.OK) {
                                    return Mono.error(TurmsBusinessException.get(code));
                                }
                                GroupInvitationStrategy strategy = pair.getRight();
                                if (strategy.requireAcceptance()) {
                                    String finalContent = content != null ? content : "";
                                    return createGroupInvitation(null, groupId, inviterId, inviteeId, finalContent,
                                            RequestStatus.PENDING, null, null, null);
                                } else {
                                    return Mono.error(TurmsBusinessException.get(TurmsStatusCode.REDUNDANT_GROUP_INVITATION,
                                            "The invitation is redundant under the strategy " + strategy));
                                }
                            });
                });
    }

    public Mono<GroupInvitation> createGroupInvitation(
            @Nullable Long id,
            @NotNull Long groupId,
            @NotNull Long inviterId,
            @NotNull Long inviteeId,
            @Nullable String content,
            @Nullable @ValidRequestStatus RequestStatus status,
            @Nullable @PastOrPresent Date creationDate,
            @Nullable @PastOrPresent Date responseDate,
            @Nullable Date expirationDate) {
        try {
            AssertUtil.notNull(groupId, "groupId");
            AssertUtil.notNull(inviterId, "inviterId");
            AssertUtil.notNull(inviteeId, "inviteeId");
            validInvitationContentLength(content);
            DomainConstraintUtil.validRequestStatus(status);
            AssertUtil.pastOrPresent(creationDate, "creationDate");
            AssertUtil.pastOrPresent(responseDate, "responseDate");
        } catch (TurmsBusinessException e) {
            return Mono.error(e);
        }
        id = id != null ? id : node.nextRandomId(ServiceType.GROUP_INVITATION);
        if (content == null) {
            content = "";
        }
        if (creationDate == null) {
            creationDate = new Date();
        }
        if (expirationDate == null) {
            int groupInvitationTimeToLiveHours = node.getSharedProperties().getService().getGroup()
                    .getGroupInvitationTimeToLiveHours();
            Instant expirationInstant = Instant.now().plus(groupInvitationTimeToLiveHours, ChronoUnit.HOURS);
            expirationDate = Date.from(expirationInstant);
        }
        if (status == null) {
            status = RequestStatus.PENDING;
        }
        GroupInvitation groupInvitation =
                new GroupInvitation(id, groupId, inviterId, inviteeId, content, status, creationDate, responseDate, expirationDate);
        return mongoClient.insert(groupInvitation)
                .flatMap(invitation -> groupVersionService.updateGroupInvitationsVersion(groupId).onErrorResume(t -> Mono.empty())
                        .then(userVersionService.updateSentGroupInvitationsVersion(inviterId).onErrorResume(t -> Mono.empty()))
                        .then(userVersionService.updateReceivedGroupInvitationsVersion(inviteeId).onErrorResume(t -> Mono.empty()))
                ).thenReturn(groupInvitation);
    }

    public Mono<GroupInvitation> queryGroupIdAndStatus(@NotNull Long invitationId) {
        try {
            AssertUtil.notNull(invitationId, "invitationId");
        } catch (TurmsBusinessException e) {
            return Mono.error(e);
        }
        Filter filter = Filter.newBuilder()
                .eq(ID_FIELD_NAME, invitationId);
        QueryOptions options = QueryOptions.newBuilder()
                .include(GroupInvitation.Fields.GROUP_ID, GroupInvitation.Fields.STATUS);
        return mongoClient.findOne(GroupInvitation.class, filter, options)
                .map(groupInvitation -> {
                    Date expirationDate = groupInvitation.getExpirationDate();
                    return expirationDate != null
                            && groupInvitation.getStatus() == RequestStatus.PENDING
                            && expirationDate.getTime() < System.currentTimeMillis()
                            ? groupInvitation.toBuilder().status(RequestStatus.EXPIRED).build()
                            : groupInvitation;
                });
    }

    /**
     * @return return a empty publisher even if the invitation doesn't exist
     */
    public Mono<Void> recallPendingGroupInvitation(
            @NotNull Long requesterId,
            @NotNull Long invitationId) {
        try {
            AssertUtil.notNull(requesterId, "requesterId");
            AssertUtil.notNull(invitationId, "invitationId");
        } catch (TurmsBusinessException e) {
            return Mono.error(e);
        }
        if (!node.getSharedProperties()
                .getService().getGroup().isAllowRecallingPendingGroupInvitationByOwnerAndManager()) {
            return Mono.error(TurmsBusinessException.get(TurmsStatusCode.RECALLING_GROUP_INVITATION_IS_DISABLED));
        }
        return queryGroupIdAndStatus(invitationId)
                .flatMap(invitation -> {
                    RequestStatus requestStatus = invitation.getStatus();
                    if (requestStatus != RequestStatus.PENDING) {
                        String reason = "The invitation is under the status " + requestStatus;
                        return Mono.error(TurmsBusinessException.get(TurmsStatusCode.RECALL_NOT_PENDING_GROUP_INVITATION, reason));
                    }
                    return groupMemberService.isOwnerOrManager(requesterId, invitation.getGroupId())
                            .flatMap(authenticated -> {
                                if (!authenticated) {
                                    return Mono
                                            .error(TurmsBusinessException.get(TurmsStatusCode.NOT_OWNER_OR_MANAGER_TO_RECALL_INVITATION));
                                }
                                Filter filter = Filter.newBuilder()
                                        .eq(ID_FIELD_NAME, invitationId);
                                Update update = Update.newBuilder()
                                        .set(GroupInvitation.Fields.STATUS, RequestStatus.CANCELED);
                                return mongoClient.updateOne(GroupInvitation.class, filter, update)
                                        .flatMap(result -> {
                                            if (result.getModifiedCount() > 0) {
                                                return groupVersionService.updateGroupInvitationsVersion(invitation.getGroupId())
                                                        .onErrorResume(t -> Mono.empty())
                                                        .then();
                                            } else {
                                                return Mono.empty();
                                            }
                                        });
                            });
                });
    }

    public Flux<GroupInvitation> queryGroupInvitationsByInviteeId(@NotNull Long inviteeId) {
        try {
            AssertUtil.notNull(inviteeId, "inviteeId");
        } catch (TurmsBusinessException e) {
            return Flux.error(e);
        }
        Filter filter = Filter.newBuilder()
                .eq(GroupInvitation.Fields.INVITEE_ID, inviteeId);
        return queryExpirableData(filter);
    }

    @UsesNonIndexedData
    public Flux<GroupInvitation> queryGroupInvitationsByInviterId(@NotNull Long inviterId) {
        try {
            AssertUtil.notNull(inviterId, "inviterId");
        } catch (TurmsBusinessException e) {
            return Flux.error(e);
        }
        Filter filter = Filter.newBuilder()
                .eq(GroupInvitation.Fields.INVITER_ID, inviterId);
        return queryExpirableData(filter);
    }

    public Flux<GroupInvitation> queryGroupInvitationsByGroupId(@NotNull Long groupId) {
        try {
            AssertUtil.notNull(groupId, "groupId");
        } catch (TurmsBusinessException e) {
            return Flux.error(e);
        }
        Filter filter = Filter.newBuilder()
                .eq(GroupInvitation.Fields.GROUP_ID, groupId);
        return queryExpirableData(filter);
    }

    public Mono<GroupInvitationsWithVersion> queryUserGroupInvitationsWithVersion(
            @NotNull Long userId,
            boolean areSentByUser,
            @Nullable Date lastUpdatedDate) {
        try {
            AssertUtil.notNull(userId, "userId");
        } catch (TurmsBusinessException e) {
            return Mono.error(e);
        }
        Mono<Date> versionMono = areSentByUser
                ? userVersionService.querySentGroupInvitationsLastUpdatedDate(userId)
                : userVersionService.queryReceivedGroupInvitationsLastUpdatedDate(userId);
        return versionMono
                .flatMap(version -> {
                    if (lastUpdatedDate == null || lastUpdatedDate.before(version)) {
                        Flux<GroupInvitation> invitationFlux = areSentByUser
                                ? queryGroupInvitationsByInviterId(userId)
                                : queryGroupInvitationsByInviteeId(userId);
                        return invitationFlux
                                .collectList()
                                .map(groupInvitations -> {
                                    if (groupInvitations.isEmpty()) {
                                        throw TurmsBusinessException.get(TurmsStatusCode.NO_CONTENT);
                                    }
                                    GroupInvitationsWithVersion.Builder builder = GroupInvitationsWithVersion.newBuilder();
                                    for (GroupInvitation groupInvitation : groupInvitations) {
                                        builder.addGroupInvitations(ProtoUtil.groupInvitation2proto(groupInvitation));
                                    }
                                    return builder
                                            .setLastUpdatedDate(Int64Value.of(version.getTime()))
                                            .build();
                                });
                    } else {
                        return Mono.error(TurmsBusinessException.get(TurmsStatusCode.ALREADY_UP_TO_DATE));
                    }
                })
                .switchIfEmpty(Mono.error(TurmsBusinessException.get(TurmsStatusCode.ALREADY_UP_TO_DATE)));
    }

    public Mono<GroupInvitationsWithVersion> queryGroupInvitationsWithVersion(
            @NotNull Long userId,
            @NotNull Long groupId,
            @Nullable Date lastUpdatedDate) {
        try {
            AssertUtil.notNull(userId, "userId");
            AssertUtil.notNull(groupId, "groupId");
        } catch (TurmsBusinessException e) {
            return Mono.error(e);
        }
        return groupMemberService.isOwnerOrManager(userId, groupId)
                .flatMap(authenticated -> {
                    if (!authenticated) {
                        return Mono.error(TurmsBusinessException.get(TurmsStatusCode.NOT_OWNER_OR_MANAGER_TO_ACCESS_INVITATION));
                    }
                    return groupVersionService.queryGroupInvitationsVersion(groupId)
                            .flatMap(version -> {
                                if (lastUpdatedDate == null || lastUpdatedDate.before(version)) {
                                    return queryGroupInvitationsByGroupId(groupId)
                                            .collect(Collectors.toSet())
                                            .map(groupInvitations -> {
                                                if (groupInvitations.isEmpty()) {
                                                    throw TurmsBusinessException.get(TurmsStatusCode.NO_CONTENT);
                                                }
                                                GroupInvitationsWithVersion.Builder builder = GroupInvitationsWithVersion.newBuilder()
                                                        .setLastUpdatedDate(Int64Value.of(version.getTime()));
                                                for (GroupInvitation invitation : groupInvitations) {
                                                    builder.addGroupInvitations(ProtoUtil.groupInvitation2proto(invitation).build());
                                                }
                                                return builder.build();
                                            });
                                } else {
                                    return Mono.error(TurmsBusinessException.get(TurmsStatusCode.ALREADY_UP_TO_DATE));
                                }
                            })
                            .switchIfEmpty(Mono.error(TurmsBusinessException.get(TurmsStatusCode.ALREADY_UP_TO_DATE)));
                });
    }

    public Mono<Long> queryInviteeIdByInvitationId(@NotNull Long invitationId) {
        try {
            AssertUtil.notNull(invitationId, "invitationId");
        } catch (TurmsBusinessException e) {
            return Mono.error(e);
        }
        Filter filter = Filter.newBuilder()
                .eq(ID_FIELD_NAME, invitationId);
        QueryOptions options = QueryOptions.newBuilder()
                .include(GroupInvitation.Fields.INVITEE_ID);
        return mongoClient.findOne(GroupInvitation.class, filter, options)
                .map(GroupInvitation::getInviteeId);
    }

    public Flux<GroupInvitation> queryInvitations(
            @Nullable Set<Long> ids,
            @Nullable Set<Long> groupIds,
            @Nullable Set<Long> inviterIds,
            @Nullable Set<Long> inviteeIds,
            @Nullable Set<RequestStatus> statuses,
            @Nullable DateRange creationDateRange,
            @Nullable DateRange responseDateRange,
            @Nullable DateRange expirationDateRange,
            @Nullable Integer page,
            @Nullable Integer size) {
        Filter filter = Filter
                .newBuilder()
                .inIfNotNull(ID_FIELD_NAME, ids)
                .inIfNotNull(GroupInvitation.Fields.GROUP_ID, groupIds)
                .inIfNotNull(GroupInvitation.Fields.INVITER_ID, inviterIds)
                .inIfNotNull(GroupInvitation.Fields.INVITEE_ID, inviteeIds)
                .inIfNotNull(GroupInvitation.Fields.STATUS, statuses)
                .addBetweenIfNotNull(GroupInvitation.Fields.CREATION_DATE, creationDateRange)
                .addBetweenIfNotNull(GroupInvitation.Fields.RESPONSE_DATE, responseDateRange)
                .addBetweenIfNotNull(GroupInvitation.Fields.EXPIRATION_DATE, expirationDateRange);
        QueryOptions options = QueryOptions.newBuilder()
                .paginateIfNotNull(page, size);
        return mongoClient.findMany(GroupInvitation.class, filter, options);
    }

    public Mono<Long> countInvitations(
            @Nullable Set<Long> ids,
            @Nullable Set<Long> groupIds,
            @Nullable Set<Long> inviterIds,
            @Nullable Set<Long> inviteeIds,
            @Nullable Set<RequestStatus> statuses,
            @Nullable DateRange creationDateRange,
            @Nullable DateRange responseDateRange,
            @Nullable DateRange expirationDateRange) {
        Filter filter = Filter
                .newBuilder()
                .inIfNotNull(ID_FIELD_NAME, ids)
                .inIfNotNull(GroupInvitation.Fields.GROUP_ID, groupIds)
                .inIfNotNull(GroupInvitation.Fields.INVITER_ID, inviterIds)
                .inIfNotNull(GroupInvitation.Fields.INVITEE_ID, inviteeIds)
                .inIfNotNull(GroupInvitation.Fields.STATUS, statuses)
                .addBetweenIfNotNull(GroupInvitation.Fields.CREATION_DATE, creationDateRange)
                .addBetweenIfNotNull(GroupInvitation.Fields.RESPONSE_DATE, responseDateRange)
                .addBetweenIfNotNull(GroupInvitation.Fields.EXPIRATION_DATE, expirationDateRange);
        return mongoClient.count(GroupInvitation.class, filter);
    }

    public Mono<DeleteResult> deleteInvitations(@Nullable Set<Long> ids) {
        Filter filter = Filter.newBuilder()
                .inIfNotNull(ID_FIELD_NAME, ids);
        return mongoClient.deleteMany(GroupInvitation.class, filter);
    }

    public Mono<UpdateResult> updateInvitations(
            @NotEmpty Set<Long> invitationIds,
            @Nullable Long inviterId,
            @Nullable Long inviteeId,
            @Nullable String content,
            @Nullable @ValidRequestStatus RequestStatus status,
            @Nullable @PastOrPresent Date creationDate,
            @Nullable @PastOrPresent Date responseDate,
            @Nullable Date expirationDate) {
        try {
            AssertUtil.notEmpty(invitationIds, "invitationIds");
            validInvitationContentLength(content);
            DomainConstraintUtil.validRequestStatus(status);
            AssertUtil.pastOrPresent(creationDate, "creationDate");
            AssertUtil.pastOrPresent(responseDate, "responseDate");
        } catch (TurmsBusinessException e) {
            return Mono.error(e);
        }
        if (Validator.areAllNull(inviterId, inviteeId, content, status, creationDate, expirationDate)) {
            return Mono.just(OperationResultConstant.ACKNOWLEDGED_UPDATE_RESULT);
        }
        Filter filter = Filter.newBuilder()
                .in(ID_FIELD_NAME, invitationIds);
        Update update = Update
                .newBuilder()
                .setIfNotNull(GroupInvitation.Fields.INVITER_ID, inviterId)
                .setIfNotNull(GroupInvitation.Fields.INVITEE_ID, inviteeId)
                .setIfNotNull(GroupInvitation.Fields.CONTENT, content)
                .setIfNotNull(GroupInvitation.Fields.STATUS, status)
                .setIfNotNull(GroupInvitation.Fields.CREATION_DATE, creationDate)
                .setIfNotNull(GroupInvitation.Fields.EXPIRATION_DATE, expirationDate);
        RequestStatusUtil.updateResponseDateBasedOnStatus(update, status, responseDate);
        return mongoClient.updateMany(GroupInvitation.class, filter, update);
    }

    private Flux<GroupInvitation> queryExpirableData(Filter filter) {
        return mongoClient.findMany(GroupInvitation.class, filter)
                .map(groupInvitation -> {
                    Date expirationDate = groupInvitation.getExpirationDate();
                    boolean isExpired = expirationDate != null
                            && groupInvitation.getStatus() == RequestStatus.PENDING
                            && expirationDate.getTime() < System.currentTimeMillis();
                    return isExpired
                            ? groupInvitation.toBuilder().status(RequestStatus.EXPIRED).build()
                            : groupInvitation;
                });
    }

    private void validInvitationContentLength(@Nullable String content) {
        if (content != null) {
            int contentLimit = node.getSharedProperties().getService().getGroup().getGroupInvitationContentLimit();
            if (contentLimit > 0) {
                AssertUtil.max(content.length(), "content", contentLimit);
            }
        }
    }

}