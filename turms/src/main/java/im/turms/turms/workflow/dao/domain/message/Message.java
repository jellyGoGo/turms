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

package im.turms.turms.workflow.dao.domain.message;

import im.turms.server.common.mongo.entity.annotation.CompoundIndex;
import im.turms.server.common.mongo.entity.annotation.Document;
import im.turms.server.common.mongo.entity.annotation.Field;
import im.turms.server.common.mongo.entity.annotation.Id;
import im.turms.server.common.mongo.entity.annotation.Indexed;
import im.turms.server.common.mongo.entity.annotation.Sharded;
import im.turms.turms.workflow.dao.index.OptionalIndexedForColdData;
import im.turms.turms.workflow.dao.index.OptionalIndexedForExtendedFeature;
import lombok.Data;

import java.util.Date;
import java.util.List;

/**
 * @author James Chen
 */
@Data
@Document(Message.COLLECTION_NAME)
@CompoundIndex({Message.Fields.TARGET_ID, Message.Fields.DELIVERY_DATE})
@Sharded(shardKey = {Message.Fields.TARGET_ID, Message.Fields.DELIVERY_DATE})
public final class Message {

    public static final String COLLECTION_NAME = "message";

    /**
     * Note that because it's not common for most instant messaging scenarios to
     * send query requests that depends on ID only, and ID is only used to query
     * a message when a user forwards (copies) it to another recipient/group currently,
     * we don't use ID as a part of the shard key.
     */
    @Id
    private final Long id;

    /**
     * Not indexed because it has a low index selectivity
     * and the clients cannot/shouldn't just query messages by isGroupMessage (there must come with other conditions)
     * https://github.com/turms-im/turms/issues/336
     */
    @Field(Fields.IS_GROUP_MESSAGE)
    private final Boolean isGroupMessage;

    @Field(Fields.IS_SYSTEM_MESSAGE)
    private final Boolean isSystemMessage;

    @Field(Fields.DELIVERY_DATE)
    private final Date deliveryDate;

    @Field(Fields.MODIFICATION_DATE)
    private final Date modificationDate;

    @Field(Fields.DELETION_DATE)
    @OptionalIndexedForColdData
    @Indexed
    private final Date deletionDate;

    @Field(Fields.RECALL_DATE)
    private final Date recallDate;

    @Field(Fields.TEXT)
    private final String text;

    @Field(Fields.SENDER_ID)
    @OptionalIndexedForExtendedFeature
    private final Long senderId;

    /**
     * Use "target" rather than "recipient" because the target may be a recipient or a group.
     */
    @Field(Fields.TARGET_ID)
    private final Long targetId;

    /**
     * Use list to keep order
     */
    @Field(Fields.RECORDS)
    private final List<byte[]> records;

    @Field(Fields.BURN_AFTER)
    private final Integer burnAfter;

    @Field(Fields.REFERENCE_ID)
    @OptionalIndexedForExtendedFeature
    private final Long referenceId;

    public Long groupId() {
        return isGroupMessage != null && isGroupMessage ? targetId : null;
    }

    public static final class Fields {
        public static final String IS_GROUP_MESSAGE = "gm";
        public static final String IS_SYSTEM_MESSAGE = "sm";
        public static final String DELIVERY_DATE = "dyd";
        public static final String MODIFICATION_DATE = "md";
        public static final String DELETION_DATE = "dd";
        public static final String RECALL_DATE = "rd";
        public static final String TEXT = "txt";
        public static final String SENDER_ID = "sid";
        public static final String TARGET_ID = "tid";
        public static final String RECORDS = "rec";
        public static final String BURN_AFTER = "bf";
        public static final String REFERENCE_ID = "rid";

        private Fields() {
        }
    }
}