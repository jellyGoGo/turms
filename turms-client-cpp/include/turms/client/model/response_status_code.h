#ifndef TURMS_CLIENT_MODEL_RESPONSE_STATUS_CODE_H
#define TURMS_CLIENT_MODEL_RESPONSE_STATUS_CODE_H

namespace turms {
namespace client {
namespace model {

namespace ResponseStatusCode {

// **********************************************************
// * Defined on the client side
// **********************************************************

// **********************************************************
// * For application error
// **********************************************************

// Client - Common
const int kConnectTimeout = 1;
const int kDataNotFound = 10;
const int kHttpError = 90;
const int kHttpNotSuccessfulResponse = 91;

// Client - Request
const int kInvalidRequest = 100;
const int kClientRequestsTooFrequent = 101;
const int kRequestTimeout = 102;
const int kIllegalArgument = 103;

// Server - Notification
const int kInvalidNotification = 200;
const int kInvalidResponse = 201;

// **********************************************************
// * For business error
// **********************************************************

// User
const int kClientSessionAlreadyEstablished = 300;
const int kClientSessionHasBeenClosed = 301;

// Group

// Conversation

// Message

// Storage

// **********************************************************
// * Defined on the server side
// **********************************************************

// Successful responses
const int kOk = 1000;
const int kNoContent = 1001;
const int kAlreadyUpToDate = 1002;

// **********************************************************
// * For application error
// **********************************************************

// Client
const int kInvalidRequestFromServer = 1100;
const int kClientRequestsTooFrequentFromServer = 1101;
const int kIllegalArgumentFromServer = 1102;
const int kRecordContainsDuplicateKey = 1103;
const int kRequestedRecordsTooMany = 1104;
const int kSendRequestFromNonexistentSession = 1105;
const int kUnauthorizedRequest = 1106;

// Server
const int kServerInternalError = 1200;
const int kServerUnavailable = 1201;

// **********************************************************
// * For business error
// **********************************************************

// User

// User - Login
const int kUnsupportedClientVersion = 2000;

const int kLoginTimeout = 2010;
const int kLoginAuthenticationFailed = 2011;
const int kLoggingInUserNotActive = 2012;
const int kLoginFromForbiddenDeviceType = 2013;

// User - Session
const int kSessionSimultaneousConflictsDecline = 2100;
const int kSessionSimultaneousConflictsNotify = 2101;
const int kSessionSimultaneousConflictsOffline = 2102;
const int kCreateExistingSession = 2103;
const int kUpdateHeartbeatOfNonexistentSession = 2104;

// User - Location
const int kUserLocationRelatedFeaturesAreDisabled = 2200;
const int kQueryingNearestUsersBySessionIdIsDisabled = 2201;

// User - Info
const int kUpdateInfoOfNonexistentUser = 2300;
const int kUserProfileNotFound = 2301;
const int kProfileRequesterNotInContactsOrBlocked = 2302;
const int kProfileRequesterHasBeenBlocked = 2303;

// User - Permission
const int kQueryPermissionOfNonexistentUser = 2400;

// User - Relationship
const int kAddNonRelatedUserToGroup = 2500;
const int kCreateExistingRelationship = 2501;

// User - Friend Request
const int kRequesterNotFriendRequestRecipient = 2600;
const int kCreateExistingFriendRequest = 2601;
const int kFriendRequestSenderHasBeenBlocked = 2602;

// Group

// Group - Info
const int kUpdateInfoOfNonexistentGroup = 3000;
const int kNotGroupOwnerToUpdateGroupInfo = 3001;
const int kNotGroupOwnerOrManagerToUpdateGroupInfo = 3002;
const int kNotGroupMemberToUpdateGroupInfo = 3003;

// Group - Type
const int kNoPermissionToCreateGroupWithGroupType = 3100;
const int kCreateGroupWithNonexistentGroupType = 3101;

// Group - Ownership
const int kNotActiveUserToCreateGroup = 3200;
const int kNotGroupOwnerToTransferGroup = 3201;
const int kNotGroupOwnerToDeleteGroup = 3202;
const int kSuccessorNotGroupMember = 3203;
const int kOwnerQuitsWithoutSpecifyingSuccessor = 3204;
const int kMaxOwnedGroupsReached = 3205;
const int kTransferNonexistentGroup = 3206;

// Group - Question
const int kNotGroupOwnerOrManagerToCreateGroupQuestion = 3300;
const int kNotGroupOwnerOrManagerToDeleteGroupQuestion = 3301;
const int kNotGroupOwnerOrManagerToUpdateGroupQuestion = 3302;
const int kNotGroupOwnerOrManagerToAccessGroupQuestionAnswer = 3303;
const int kCreateGroupQuestionForInactiveGroup = 3304;
const int kCreateGroupQuestionForGroupUsingJoinRequest = 3305;
const int kCreateGroupQuestionForGroupUsingInvitation = 3306;
const int kCreateGroupQuestionForGroupUsingMembershipRequest = 3307;
const int kGroupQuestionAnswererHasBeenBlocked = 3308;
const int kGroupMemberAnswerGroupQuestion = 3309;
const int kAnswerInactiveGroupQuestion = 3310;
const int kAnswerGroupQuestionOfInactiveGroup = 3311;

// Group - Member
const int kAddUserToGroupRequiringInvitation = 3400;
const int kAddUserToInactiveGroup = 3401;
const int kAddUserToGroupWithRoleHigherThanRequester = 3402;
const int kAddUserToGroupWithSizeLimitReached = 3403;
const int kAddBlockedUserToGroup = 3404;
const int kAddBlockedUserToInactiveGroup = 3405;
const int kNotGroupOwnerOrManagerToRemoveGroupMember = 3406;
const int kNotGroupOwnerToRemoveGroupOwnerOrManager = 3407;
const int kNotGroupOwnerToUpdateGroupMemberRole = 3408;
const int kUpdateGroupMemberRoleOfNonexistentGroup = 3409;
const int kNotGroupOwnerToUpdateGroupMemberInfo = 3410;
const int kNotGroupOwnerOrManagerToUpdateGroupMemberInfo = 3411;
const int kNotGroupMemberToUpdateGroupMemberInfo = 3412;
const int kUpdateGroupMemberInfoOfNonexistentGroup = 3413;
const int kUpdateInfoOfNonexistentGroupMember = 3414;
const int kNotGroupOwnerOrManagerToMuteGroupMember = 3415;
const int kMuteGroupMemberWithRoleEqualToOrHigherThanRequester = 3416;
const int kMuteGroupMemberOfNonexistentGroup = 3417;
const int kMuteNonexistentGroupMember = 3418;
const int kNotGroupMemberToQueryGroupMemberInfo = 3419;

// Group - Blocklist
const int kNotGroupOwnerOrManagerToAddBlockedUser = 3500;
const int kNotGroupOwnerOrManagerToRemoveBlockedUser = 3501;

// Group - Join Request
const int kGroupJoinRequestSenderHasBeenBlocked = 3600;
const int kNotGroupJoinRequestSenderToRecallRequest = 3601;
const int kNotGroupOwnerOrManagerToAccessGroupJoinRequest = 3602;
const int kRecallNonPendingGroupJoinRequest = 3603;
const int kSendGroupJoinRequestToInactiveGroup = 3604;
const int kSendGroupJoinRequestToGroupUsingMembershipRequest = 3605;
const int kSendGroupJoinRequestToGroupUsingInvitation = 3606;
const int kSendGroupJoinRequestToGroupUsingQuestion = 3607;
const int kRecallingGroupJoinRequestIsDisabled = 3608;

// Group - Invitation
const int kGroupInviterNotGroupMember = 3700;
const int kGroupInviteeAlreadyGroupMember = 3701;
const int kGroupInviteeHasBeenBlockedByGroup = 3702;
const int kNotGroupOwnerOrManagerToRecallGroupInvitation = 3703;
const int kNotGroupOwnerOrManagerToAccessGroupInvitation = 3704;
const int kNotGroupOwnerToSendGroupInvitation = 3705;
const int kNotGroupOwnerOrManagerToSendGroupInvitation = 3706;
const int kNotGroupMemberToSendGroupInvitation = 3707;
const int kRecallingGroupInvitationIsDisabled = 3708;
const int kSendGroupInvitationToGroupNotRequireInvitation = 3709;
const int kRecallNonPendingGroupInvitation = 3710;

// Conversation

// Conversation - Read Date
const int kUpdatingReadDateIsDisabled = 4000;
const int kUpdatingReadDateIsDisabledByGroup = 4001;
const int kUpdatingReadDateOfNonexistentGroupConversation = 4002;
const int kNotGroupMemberToUpdateReadDateOfGroupConversation = 4003;
const int kMovingReadDateForwardIsDisabled = 4004;

// Conversation - Typing Status
const int kUpdatingTypingStatusIsDisabled = 4100;
const int kNotGroupMemberToSendTypingStatus = 4101;
const int kNotFriendToSendTypingStatus = 4102;

// Message

// Message - Send
const int kMessageRecipientNotActive = 5000;
const int kMessageSenderNotInContactsOrBlocked = 5001;
const int kPrivateMessageSenderHasBeenBlocked = 5002;
const int kGroupMessageSenderHasBeenBlocked = 5003;
const int kSendMessageToInactiveGroup = 5004;
const int kSendMessageToMutedGroup = 5005;
const int kSendMessageToNonexistentGroup = 5006;
const int kSendingMessagesToOneselfIsDisabled = 5007;
const int kMutedGroupMemberSendMessage = 5008;
const int kGuestsHaveBeenMuted = 5009;
const int kMessageIsIllegal = 5010;

// Message - Update
const int kUpdatingMessageBySenderIsDisabled = 5100;
const int kNotSenderToUpdateMessage = 5101;
const int kUpdateMessageOfNonexistentGroup = 5102;
const int kUpdatingGroupMessageBySenderIsDisabled = 5103;

// Message - Recall
const int kRecallNonexistentMessage = 5200;
const int kRecallingMessageIsDisabled = 5201;
const int kNotSenderToRecallMessage = 5202;
const int kRecallMessageOfNonexistentGroup = 5203;
const int kMessageRecallTimeout = 5204;

// Message - Query
const int kNotGroupMemberToQueryGroupMessages = 5300;

// Storage
const int kStorageNotImplemented = 6000;

// Storage - Message attachment
const int kNotFriendToUploadMessageAttachmentInPrivateConversation = 6100;
const int kNotGroupMemberToUploadMessageAttachmentInGroupConversation = 6101;
const int kNotUploaderToShareMessageAttachment = 6102;
const int kNotUploaderOrGroupManagerToUnshareMessageAttachmentInGroupConversation = 6103;
const int kNotUploaderToUnshareMessageAttachmentInPrivateConversation = 6104;
const int kNotUploaderOrGroupManagerToDeleteMessageAttachmentInGroupConversation = 6105;
const int kNotUploaderToDeleteMessageAttachmentInPrivateConversation = 6106;
const int kNotUploaderOrSharedWithUserToDownloadMessageAttachment = 6107;

// Storage - Message attachment info
const int kNotFriendToQueryMessageAttachmentInfoInPrivateConversation = 6130;
const int kNotGroupMemberToQueryMessageAttachmentInfoInGroupConversation = 6131;

auto isSuccessCode(int businessCode) -> bool;

auto isErrorCode(int businessCode) -> bool;

}  // namespace ResponseStatusCode

}  // namespace model
}  // namespace client
}  // namespace turms

#endif  // TURMS_CLIENT_MODEL_RESPONSE_STATUS_CODE_H