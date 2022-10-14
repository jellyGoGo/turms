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

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/group/update_group_request.proto

package im.turms.client.model.proto.request.group;

/**
 * Protobuf type {@code im.turms.proto.UpdateGroupRequest}
 */
public  final class UpdateGroupRequest extends
    com.google.protobuf.GeneratedMessageLite<
        UpdateGroupRequest, UpdateGroupRequest.Builder> implements
    // @@protoc_insertion_point(message_implements:im.turms.proto.UpdateGroupRequest)
    UpdateGroupRequestOrBuilder {
  private UpdateGroupRequest() {
    groupName_ = "";
    intro_ = "";
    announcement_ = "";
  }
  private int bitField0_;
  public static final int GROUP_ID_FIELD_NUMBER = 1;
  private long groupId_;
  /**
   * <code>int64 group_id = 1;</code>
   * @return The groupId.
   */
  @java.lang.Override
  public long getGroupId() {
    return groupId_;
  }
  /**
   * <code>int64 group_id = 1;</code>
   * @param value The groupId to set.
   */
  private void setGroupId(long value) {

    groupId_ = value;
  }
  /**
   * <code>int64 group_id = 1;</code>
   */
  private void clearGroupId() {

    groupId_ = 0L;
  }

  public static final int GROUP_NAME_FIELD_NUMBER = 2;
  private java.lang.String groupName_;
  /**
   * <code>optional string group_name = 2;</code>
   * @return Whether the groupName field is set.
   */
  @java.lang.Override
  public boolean hasGroupName() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <code>optional string group_name = 2;</code>
   * @return The groupName.
   */
  @java.lang.Override
  public java.lang.String getGroupName() {
    return groupName_;
  }
  /**
   * <code>optional string group_name = 2;</code>
   * @return The bytes for groupName.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getGroupNameBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(groupName_);
  }
  /**
   * <code>optional string group_name = 2;</code>
   * @param value The groupName to set.
   */
  private void setGroupName(
      java.lang.String value) {
    java.lang.Class<?> valueClass = value.getClass();
  bitField0_ |= 0x00000001;
    groupName_ = value;
  }
  /**
   * <code>optional string group_name = 2;</code>
   */
  private void clearGroupName() {
    bitField0_ = (bitField0_ & ~0x00000001);
    groupName_ = getDefaultInstance().getGroupName();
  }
  /**
   * <code>optional string group_name = 2;</code>
   * @param value The bytes for groupName to set.
   */
  private void setGroupNameBytes(
      com.google.protobuf.ByteString value) {
    checkByteStringIsUtf8(value);
    groupName_ = value.toStringUtf8();
    bitField0_ |= 0x00000001;
  }

  public static final int INTRO_FIELD_NUMBER = 3;
  private java.lang.String intro_;
  /**
   * <code>optional string intro = 3;</code>
   * @return Whether the intro field is set.
   */
  @java.lang.Override
  public boolean hasIntro() {
    return ((bitField0_ & 0x00000002) != 0);
  }
  /**
   * <code>optional string intro = 3;</code>
   * @return The intro.
   */
  @java.lang.Override
  public java.lang.String getIntro() {
    return intro_;
  }
  /**
   * <code>optional string intro = 3;</code>
   * @return The bytes for intro.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getIntroBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(intro_);
  }
  /**
   * <code>optional string intro = 3;</code>
   * @param value The intro to set.
   */
  private void setIntro(
      java.lang.String value) {
    java.lang.Class<?> valueClass = value.getClass();
  bitField0_ |= 0x00000002;
    intro_ = value;
  }
  /**
   * <code>optional string intro = 3;</code>
   */
  private void clearIntro() {
    bitField0_ = (bitField0_ & ~0x00000002);
    intro_ = getDefaultInstance().getIntro();
  }
  /**
   * <code>optional string intro = 3;</code>
   * @param value The bytes for intro to set.
   */
  private void setIntroBytes(
      com.google.protobuf.ByteString value) {
    checkByteStringIsUtf8(value);
    intro_ = value.toStringUtf8();
    bitField0_ |= 0x00000002;
  }

  public static final int ANNOUNCEMENT_FIELD_NUMBER = 4;
  private java.lang.String announcement_;
  /**
   * <code>optional string announcement = 4;</code>
   * @return Whether the announcement field is set.
   */
  @java.lang.Override
  public boolean hasAnnouncement() {
    return ((bitField0_ & 0x00000004) != 0);
  }
  /**
   * <code>optional string announcement = 4;</code>
   * @return The announcement.
   */
  @java.lang.Override
  public java.lang.String getAnnouncement() {
    return announcement_;
  }
  /**
   * <code>optional string announcement = 4;</code>
   * @return The bytes for announcement.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getAnnouncementBytes() {
    return com.google.protobuf.ByteString.copyFromUtf8(announcement_);
  }
  /**
   * <code>optional string announcement = 4;</code>
   * @param value The announcement to set.
   */
  private void setAnnouncement(
      java.lang.String value) {
    java.lang.Class<?> valueClass = value.getClass();
  bitField0_ |= 0x00000004;
    announcement_ = value;
  }
  /**
   * <code>optional string announcement = 4;</code>
   */
  private void clearAnnouncement() {
    bitField0_ = (bitField0_ & ~0x00000004);
    announcement_ = getDefaultInstance().getAnnouncement();
  }
  /**
   * <code>optional string announcement = 4;</code>
   * @param value The bytes for announcement to set.
   */
  private void setAnnouncementBytes(
      com.google.protobuf.ByteString value) {
    checkByteStringIsUtf8(value);
    announcement_ = value.toStringUtf8();
    bitField0_ |= 0x00000004;
  }

  public static final int MINIMUM_SCORE_FIELD_NUMBER = 5;
  private int minimumScore_;
  /**
   * <code>optional int32 minimum_score = 5;</code>
   * @return Whether the minimumScore field is set.
   */
  @java.lang.Override
  public boolean hasMinimumScore() {
    return ((bitField0_ & 0x00000008) != 0);
  }
  /**
   * <code>optional int32 minimum_score = 5;</code>
   * @return The minimumScore.
   */
  @java.lang.Override
  public int getMinimumScore() {
    return minimumScore_;
  }
  /**
   * <code>optional int32 minimum_score = 5;</code>
   * @param value The minimumScore to set.
   */
  private void setMinimumScore(int value) {
    bitField0_ |= 0x00000008;
    minimumScore_ = value;
  }
  /**
   * <code>optional int32 minimum_score = 5;</code>
   */
  private void clearMinimumScore() {
    bitField0_ = (bitField0_ & ~0x00000008);
    minimumScore_ = 0;
  }

  public static final int GROUP_TYPE_ID_FIELD_NUMBER = 6;
  private long groupTypeId_;
  /**
   * <code>optional int64 group_type_id = 6;</code>
   * @return Whether the groupTypeId field is set.
   */
  @java.lang.Override
  public boolean hasGroupTypeId() {
    return ((bitField0_ & 0x00000010) != 0);
  }
  /**
   * <code>optional int64 group_type_id = 6;</code>
   * @return The groupTypeId.
   */
  @java.lang.Override
  public long getGroupTypeId() {
    return groupTypeId_;
  }
  /**
   * <code>optional int64 group_type_id = 6;</code>
   * @param value The groupTypeId to set.
   */
  private void setGroupTypeId(long value) {
    bitField0_ |= 0x00000010;
    groupTypeId_ = value;
  }
  /**
   * <code>optional int64 group_type_id = 6;</code>
   */
  private void clearGroupTypeId() {
    bitField0_ = (bitField0_ & ~0x00000010);
    groupTypeId_ = 0L;
  }

  public static final int MUTE_END_DATE_FIELD_NUMBER = 7;
  private long muteEndDate_;
  /**
   * <code>optional int64 mute_end_date = 7;</code>
   * @return Whether the muteEndDate field is set.
   */
  @java.lang.Override
  public boolean hasMuteEndDate() {
    return ((bitField0_ & 0x00000020) != 0);
  }
  /**
   * <code>optional int64 mute_end_date = 7;</code>
   * @return The muteEndDate.
   */
  @java.lang.Override
  public long getMuteEndDate() {
    return muteEndDate_;
  }
  /**
   * <code>optional int64 mute_end_date = 7;</code>
   * @param value The muteEndDate to set.
   */
  private void setMuteEndDate(long value) {
    bitField0_ |= 0x00000020;
    muteEndDate_ = value;
  }
  /**
   * <code>optional int64 mute_end_date = 7;</code>
   */
  private void clearMuteEndDate() {
    bitField0_ = (bitField0_ & ~0x00000020);
    muteEndDate_ = 0L;
  }

  public static final int SUCCESSOR_ID_FIELD_NUMBER = 8;
  private long successorId_;
  /**
   * <code>optional int64 successor_id = 8;</code>
   * @return Whether the successorId field is set.
   */
  @java.lang.Override
  public boolean hasSuccessorId() {
    return ((bitField0_ & 0x00000040) != 0);
  }
  /**
   * <code>optional int64 successor_id = 8;</code>
   * @return The successorId.
   */
  @java.lang.Override
  public long getSuccessorId() {
    return successorId_;
  }
  /**
   * <code>optional int64 successor_id = 8;</code>
   * @param value The successorId to set.
   */
  private void setSuccessorId(long value) {
    bitField0_ |= 0x00000040;
    successorId_ = value;
  }
  /**
   * <code>optional int64 successor_id = 8;</code>
   */
  private void clearSuccessorId() {
    bitField0_ = (bitField0_ & ~0x00000040);
    successorId_ = 0L;
  }

  public static final int QUIT_AFTER_TRANSFER_FIELD_NUMBER = 9;
  private boolean quitAfterTransfer_;
  /**
   * <code>optional bool quit_after_transfer = 9;</code>
   * @return Whether the quitAfterTransfer field is set.
   */
  @java.lang.Override
  public boolean hasQuitAfterTransfer() {
    return ((bitField0_ & 0x00000080) != 0);
  }
  /**
   * <code>optional bool quit_after_transfer = 9;</code>
   * @return The quitAfterTransfer.
   */
  @java.lang.Override
  public boolean getQuitAfterTransfer() {
    return quitAfterTransfer_;
  }
  /**
   * <code>optional bool quit_after_transfer = 9;</code>
   * @param value The quitAfterTransfer to set.
   */
  private void setQuitAfterTransfer(boolean value) {
    bitField0_ |= 0x00000080;
    quitAfterTransfer_ = value;
  }
  /**
   * <code>optional bool quit_after_transfer = 9;</code>
   */
  private void clearQuitAfterTransfer() {
    bitField0_ = (bitField0_ & ~0x00000080);
    quitAfterTransfer_ = false;
  }

  public static im.turms.client.model.proto.request.group.UpdateGroupRequest parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static im.turms.client.model.proto.request.group.UpdateGroupRequest parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.UpdateGroupRequest parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static im.turms.client.model.proto.request.group.UpdateGroupRequest parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.UpdateGroupRequest parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static im.turms.client.model.proto.request.group.UpdateGroupRequest parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.UpdateGroupRequest parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static im.turms.client.model.proto.request.group.UpdateGroupRequest parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.UpdateGroupRequest parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static im.turms.client.model.proto.request.group.UpdateGroupRequest parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.UpdateGroupRequest parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static im.turms.client.model.proto.request.group.UpdateGroupRequest parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(im.turms.client.model.proto.request.group.UpdateGroupRequest prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code im.turms.proto.UpdateGroupRequest}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        im.turms.client.model.proto.request.group.UpdateGroupRequest, Builder> implements
      // @@protoc_insertion_point(builder_implements:im.turms.proto.UpdateGroupRequest)
      im.turms.client.model.proto.request.group.UpdateGroupRequestOrBuilder {
    // Construct using im.turms.client.model.proto.request.group.UpdateGroupRequest.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <code>int64 group_id = 1;</code>
     * @return The groupId.
     */
    @java.lang.Override
    public long getGroupId() {
      return instance.getGroupId();
    }
    /**
     * <code>int64 group_id = 1;</code>
     * @param value The groupId to set.
     * @return This builder for chaining.
     */
    public Builder setGroupId(long value) {
      copyOnWrite();
      instance.setGroupId(value);
      return this;
    }
    /**
     * <code>int64 group_id = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearGroupId() {
      copyOnWrite();
      instance.clearGroupId();
      return this;
    }

    /**
     * <code>optional string group_name = 2;</code>
     * @return Whether the groupName field is set.
     */
    @java.lang.Override
    public boolean hasGroupName() {
      return instance.hasGroupName();
    }
    /**
     * <code>optional string group_name = 2;</code>
     * @return The groupName.
     */
    @java.lang.Override
    public java.lang.String getGroupName() {
      return instance.getGroupName();
    }
    /**
     * <code>optional string group_name = 2;</code>
     * @return The bytes for groupName.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getGroupNameBytes() {
      return instance.getGroupNameBytes();
    }
    /**
     * <code>optional string group_name = 2;</code>
     * @param value The groupName to set.
     * @return This builder for chaining.
     */
    public Builder setGroupName(
        java.lang.String value) {
      copyOnWrite();
      instance.setGroupName(value);
      return this;
    }
    /**
     * <code>optional string group_name = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearGroupName() {
      copyOnWrite();
      instance.clearGroupName();
      return this;
    }
    /**
     * <code>optional string group_name = 2;</code>
     * @param value The bytes for groupName to set.
     * @return This builder for chaining.
     */
    public Builder setGroupNameBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setGroupNameBytes(value);
      return this;
    }

    /**
     * <code>optional string intro = 3;</code>
     * @return Whether the intro field is set.
     */
    @java.lang.Override
    public boolean hasIntro() {
      return instance.hasIntro();
    }
    /**
     * <code>optional string intro = 3;</code>
     * @return The intro.
     */
    @java.lang.Override
    public java.lang.String getIntro() {
      return instance.getIntro();
    }
    /**
     * <code>optional string intro = 3;</code>
     * @return The bytes for intro.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getIntroBytes() {
      return instance.getIntroBytes();
    }
    /**
     * <code>optional string intro = 3;</code>
     * @param value The intro to set.
     * @return This builder for chaining.
     */
    public Builder setIntro(
        java.lang.String value) {
      copyOnWrite();
      instance.setIntro(value);
      return this;
    }
    /**
     * <code>optional string intro = 3;</code>
     * @return This builder for chaining.
     */
    public Builder clearIntro() {
      copyOnWrite();
      instance.clearIntro();
      return this;
    }
    /**
     * <code>optional string intro = 3;</code>
     * @param value The bytes for intro to set.
     * @return This builder for chaining.
     */
    public Builder setIntroBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setIntroBytes(value);
      return this;
    }

    /**
     * <code>optional string announcement = 4;</code>
     * @return Whether the announcement field is set.
     */
    @java.lang.Override
    public boolean hasAnnouncement() {
      return instance.hasAnnouncement();
    }
    /**
     * <code>optional string announcement = 4;</code>
     * @return The announcement.
     */
    @java.lang.Override
    public java.lang.String getAnnouncement() {
      return instance.getAnnouncement();
    }
    /**
     * <code>optional string announcement = 4;</code>
     * @return The bytes for announcement.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getAnnouncementBytes() {
      return instance.getAnnouncementBytes();
    }
    /**
     * <code>optional string announcement = 4;</code>
     * @param value The announcement to set.
     * @return This builder for chaining.
     */
    public Builder setAnnouncement(
        java.lang.String value) {
      copyOnWrite();
      instance.setAnnouncement(value);
      return this;
    }
    /**
     * <code>optional string announcement = 4;</code>
     * @return This builder for chaining.
     */
    public Builder clearAnnouncement() {
      copyOnWrite();
      instance.clearAnnouncement();
      return this;
    }
    /**
     * <code>optional string announcement = 4;</code>
     * @param value The bytes for announcement to set.
     * @return This builder for chaining.
     */
    public Builder setAnnouncementBytes(
        com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setAnnouncementBytes(value);
      return this;
    }

    /**
     * <code>optional int32 minimum_score = 5;</code>
     * @return Whether the minimumScore field is set.
     */
    @java.lang.Override
    public boolean hasMinimumScore() {
      return instance.hasMinimumScore();
    }
    /**
     * <code>optional int32 minimum_score = 5;</code>
     * @return The minimumScore.
     */
    @java.lang.Override
    public int getMinimumScore() {
      return instance.getMinimumScore();
    }
    /**
     * <code>optional int32 minimum_score = 5;</code>
     * @param value The minimumScore to set.
     * @return This builder for chaining.
     */
    public Builder setMinimumScore(int value) {
      copyOnWrite();
      instance.setMinimumScore(value);
      return this;
    }
    /**
     * <code>optional int32 minimum_score = 5;</code>
     * @return This builder for chaining.
     */
    public Builder clearMinimumScore() {
      copyOnWrite();
      instance.clearMinimumScore();
      return this;
    }

    /**
     * <code>optional int64 group_type_id = 6;</code>
     * @return Whether the groupTypeId field is set.
     */
    @java.lang.Override
    public boolean hasGroupTypeId() {
      return instance.hasGroupTypeId();
    }
    /**
     * <code>optional int64 group_type_id = 6;</code>
     * @return The groupTypeId.
     */
    @java.lang.Override
    public long getGroupTypeId() {
      return instance.getGroupTypeId();
    }
    /**
     * <code>optional int64 group_type_id = 6;</code>
     * @param value The groupTypeId to set.
     * @return This builder for chaining.
     */
    public Builder setGroupTypeId(long value) {
      copyOnWrite();
      instance.setGroupTypeId(value);
      return this;
    }
    /**
     * <code>optional int64 group_type_id = 6;</code>
     * @return This builder for chaining.
     */
    public Builder clearGroupTypeId() {
      copyOnWrite();
      instance.clearGroupTypeId();
      return this;
    }

    /**
     * <code>optional int64 mute_end_date = 7;</code>
     * @return Whether the muteEndDate field is set.
     */
    @java.lang.Override
    public boolean hasMuteEndDate() {
      return instance.hasMuteEndDate();
    }
    /**
     * <code>optional int64 mute_end_date = 7;</code>
     * @return The muteEndDate.
     */
    @java.lang.Override
    public long getMuteEndDate() {
      return instance.getMuteEndDate();
    }
    /**
     * <code>optional int64 mute_end_date = 7;</code>
     * @param value The muteEndDate to set.
     * @return This builder for chaining.
     */
    public Builder setMuteEndDate(long value) {
      copyOnWrite();
      instance.setMuteEndDate(value);
      return this;
    }
    /**
     * <code>optional int64 mute_end_date = 7;</code>
     * @return This builder for chaining.
     */
    public Builder clearMuteEndDate() {
      copyOnWrite();
      instance.clearMuteEndDate();
      return this;
    }

    /**
     * <code>optional int64 successor_id = 8;</code>
     * @return Whether the successorId field is set.
     */
    @java.lang.Override
    public boolean hasSuccessorId() {
      return instance.hasSuccessorId();
    }
    /**
     * <code>optional int64 successor_id = 8;</code>
     * @return The successorId.
     */
    @java.lang.Override
    public long getSuccessorId() {
      return instance.getSuccessorId();
    }
    /**
     * <code>optional int64 successor_id = 8;</code>
     * @param value The successorId to set.
     * @return This builder for chaining.
     */
    public Builder setSuccessorId(long value) {
      copyOnWrite();
      instance.setSuccessorId(value);
      return this;
    }
    /**
     * <code>optional int64 successor_id = 8;</code>
     * @return This builder for chaining.
     */
    public Builder clearSuccessorId() {
      copyOnWrite();
      instance.clearSuccessorId();
      return this;
    }

    /**
     * <code>optional bool quit_after_transfer = 9;</code>
     * @return Whether the quitAfterTransfer field is set.
     */
    @java.lang.Override
    public boolean hasQuitAfterTransfer() {
      return instance.hasQuitAfterTransfer();
    }
    /**
     * <code>optional bool quit_after_transfer = 9;</code>
     * @return The quitAfterTransfer.
     */
    @java.lang.Override
    public boolean getQuitAfterTransfer() {
      return instance.getQuitAfterTransfer();
    }
    /**
     * <code>optional bool quit_after_transfer = 9;</code>
     * @param value The quitAfterTransfer to set.
     * @return This builder for chaining.
     */
    public Builder setQuitAfterTransfer(boolean value) {
      copyOnWrite();
      instance.setQuitAfterTransfer(value);
      return this;
    }
    /**
     * <code>optional bool quit_after_transfer = 9;</code>
     * @return This builder for chaining.
     */
    public Builder clearQuitAfterTransfer() {
      copyOnWrite();
      instance.clearQuitAfterTransfer();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:im.turms.proto.UpdateGroupRequest)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new im.turms.client.model.proto.request.group.UpdateGroupRequest();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "groupId_",
            "groupName_",
            "intro_",
            "announcement_",
            "minimumScore_",
            "groupTypeId_",
            "muteEndDate_",
            "successorId_",
            "quitAfterTransfer_",
          };
          java.lang.String info =
              "\u0000\t\u0000\u0001\u0001\t\t\u0000\u0000\u0000\u0001\u0002\u0002\u1208\u0000\u0003" +
              "\u1208\u0001\u0004\u1208\u0002\u0005\u1004\u0003\u0006\u1002\u0004\u0007\u1002\u0005" +
              "\b\u1002\u0006\t\u1007\u0007";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<im.turms.client.model.proto.request.group.UpdateGroupRequest> parser = PARSER;
        if (parser == null) {
          synchronized (im.turms.client.model.proto.request.group.UpdateGroupRequest.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<im.turms.client.model.proto.request.group.UpdateGroupRequest>(
                      DEFAULT_INSTANCE);
              PARSER = parser;
            }
          }
        }
        return parser;
    }
    case GET_MEMOIZED_IS_INITIALIZED: {
      return (byte) 1;
    }
    case SET_MEMOIZED_IS_INITIALIZED: {
      return null;
    }
    }
    throw new UnsupportedOperationException();
  }


  // @@protoc_insertion_point(class_scope:im.turms.proto.UpdateGroupRequest)
  private static final im.turms.client.model.proto.request.group.UpdateGroupRequest DEFAULT_INSTANCE;
  static {
    UpdateGroupRequest defaultInstance = new UpdateGroupRequest();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      UpdateGroupRequest.class, defaultInstance);
  }

  public static im.turms.client.model.proto.request.group.UpdateGroupRequest getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<UpdateGroupRequest> PARSER;

  public static com.google.protobuf.Parser<UpdateGroupRequest> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

