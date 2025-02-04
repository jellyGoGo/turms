class ResponseStatusCode {
  // **********************************************************
  // * Defined on the client side
  // **********************************************************

  // **********************************************************
  // * For application error
  // **********************************************************

  // Client - Common
  static const connectTimeout = 1;
  static const dataNotFound = 10;
  static const httpError = 90;
  static const httpNotSuccessfulResponse = 91;

  // Client - Request
  static const invalidRequest = 100;
  static const clientRequestsTooFrequent = 101;
  static const requestTimeout = 102;
  static const illegalArgument = 103;

  // Server - Notification
  static const invalidNotification = 200;
  static const invalidResponse = 201;

  // **********************************************************
  // * For business error
  // **********************************************************

  // User
  static const clientSessionAlreadyEstablished = 300;
  static const clientSessionHasBeenClosed = 301;

  // Group

  // Conversation

  // Message

  // Storage

  // **********************************************************
  // * Defined on the server side
  // **********************************************************

  // Successful responses
  static const ok = 1000;
  static const noContent = 1001;
  static const alreadyUpToDate = 1002;

  // **********************************************************
  // * For application error
  // **********************************************************

  // Client
  static const invalidRequestFromServer = 1100;
  static const clientRequestsTooFrequentFromServer = 1101;
  static const illegalArgumentFromServer = 1102;
  static const recordContainsDuplicateKey = 1103;
  static const requestedRecordsTooMany = 1104;
  static const sendRequestFromNonexistentSession = 1105;
  static const unauthorizedRequest = 1106;

  // Server
  static const serverInternalError = 1200;
  static const serverUnavailable = 1201;

  // **********************************************************
  // * For business error
  // **********************************************************

  // User

  // User - Login
  static const unsupportedClientVersion = 2000;

  static const loginTimeout = 2010;
  static const loginAuthenticationFailed = 2011;
  static const loggingInUserNotActive = 2012;
  static const loginFromForbiddenDeviceType = 2013;

  // User - Session
  static const sessionSimultaneousConflictsDecline = 2100;
  static const sessionSimultaneousConflictsNotify = 2101;
  static const sessionSimultaneousConflictsOffline = 2102;
  static const createExistingSession = 2103;
  static const updateHeartbeatOfNonexistentSession = 2104;

  // User - Location
  static const userLocationRelatedFeaturesAreDisabled = 2200;
  static const queryingNearestUsersBySessionIdIsDisabled = 2201;

  // User - Info
  static const updateInfoOfNonexistentUser = 2300;
  static const userProfileNotFound = 2301;
  static const profileRequesterNotInContactsOrBlocked = 2302;
  static const profileRequesterHasBeenBlocked = 2303;

  // User - Permission
  static const queryPermissionOfNonexistentUser = 2400;

  // User - Relationship
  static const addNonRelatedUserToGroup = 2500;
  static const createExistingRelationship = 2501;

  // User - Friend Request
  static const requesterNotFriendRequestRecipient = 2600;
  static const createExistingFriendRequest = 2601;
  static const friendRequestSenderHasBeenBlocked = 2602;

  // Group

  // Group - Info
  static const updateInfoOfNonexistentGroup = 3000;
  static const notGroupOwnerToUpdateGroupInfo = 3001;
  static const notGroupOwnerOrManagerToUpdateGroupInfo = 3002;
  static const notGroupMemberToUpdateGroupInfo = 3003;

  // Group - Type
  static const noPermissionToCreateGroupWithGroupType = 3100;
  static const createGroupWithNonexistentGroupType = 3101;

  // Group - Ownership
  static const notActiveUserToCreateGroup = 3200;
  static const notGroupOwnerToTransferGroup = 3201;
  static const notGroupOwnerToDeleteGroup = 3202;
  static const successorNotGroupMember = 3203;
  static const ownerQuitsWithoutSpecifyingSuccessor = 3204;
  static const maxOwnedGroupsReached = 3205;
  static const transferNonexistentGroup = 3206;

  // Group - Question
  static const notGroupOwnerOrManagerToCreateGroupQuestion = 3300;
  static const notGroupOwnerOrManagerToDeleteGroupQuestion = 3301;
  static const notGroupOwnerOrManagerToUpdateGroupQuestion = 3302;
  static const notGroupOwnerOrManagerToAccessGroupQuestionAnswer = 3303;
  static const createGroupQuestionForInactiveGroup = 3304;
  static const createGroupQuestionForGroupUsingJoinRequest = 3305;
  static const createGroupQuestionForGroupUsingInvitation = 3306;
  static const createGroupQuestionForGroupUsingMembershipRequest = 3307;
  static const groupQuestionAnswererHasBeenBlocked = 3308;
  static const groupMemberAnswerGroupQuestion = 3309;
  static const answerInactiveGroupQuestion = 3310;
  static const answerGroupQuestionOfInactiveGroup = 3311;

  // Group - Member
  static const addUserToGroupRequiringInvitation = 3400;
  static const addUserToInactiveGroup = 3401;
  static const addUserToGroupWithRoleHigherThanRequester = 3402;
  static const addUserToGroupWithSizeLimitReached = 3403;
  static const addBlockedUserToGroup = 3404;
  static const addBlockedUserToInactiveGroup = 3405;
  static const notGroupOwnerOrManagerToRemoveGroupMember = 3406;
  static const notGroupOwnerToRemoveGroupOwnerOrManager = 3407;
  static const notGroupOwnerToUpdateGroupMemberRole = 3408;
  static const updateGroupMemberRoleOfNonexistentGroup = 3409;
  static const notGroupOwnerToUpdateGroupMemberInfo = 3410;
  static const notGroupOwnerOrManagerToUpdateGroupMemberInfo = 3411;
  static const notGroupMemberToUpdateGroupMemberInfo = 3412;
  static const updateGroupMemberInfoOfNonexistentGroup = 3413;
  static const updateInfoOfNonexistentGroupMember = 3414;
  static const notGroupOwnerOrManagerToMuteGroupMember = 3415;
  static const muteGroupMemberWithRoleEqualToOrHigherThanRequester = 3416;
  static const muteGroupMemberOfNonexistentGroup = 3417;
  static const muteNonexistentGroupMember = 3418;
  static const notGroupMemberToQueryGroupMemberInfo = 3419;

  // Group - Blocklist
  static const notGroupOwnerOrManagerToAddBlockedUser = 3500;
  static const notGroupOwnerOrManagerToRemoveBlockedUser = 3501;

  // Group - Join Request
  static const groupJoinRequestSenderHasBeenBlocked = 3600;
  static const notGroupJoinRequestSenderToRecallRequest = 3601;
  static const notGroupOwnerOrManagerToAccessGroupJoinRequest = 3602;
  static const recallNonPendingGroupJoinRequest = 3603;
  static const sendGroupJoinRequestToInactiveGroup = 3604;
  static const sendGroupJoinRequestToGroupUsingMembershipRequest = 3605;
  static const sendGroupJoinRequestToGroupUsingInvitation = 3606;
  static const sendGroupJoinRequestToGroupUsingQuestion = 3607;
  static const recallingGroupJoinRequestIsDisabled = 3608;

  // Group - Invitation
  static const groupInviterNotGroupMember = 3700;
  static const groupInviteeAlreadyGroupMember = 3701;
  static const groupInviteeHasBeenBlockedByGroup = 3702;
  static const notGroupOwnerOrManagerToRecallGroupInvitation = 3703;
  static const notGroupOwnerOrManagerToAccessGroupInvitation = 3704;
  static const notGroupOwnerToSendGroupInvitation = 3705;
  static const notGroupOwnerOrManagerToSendGroupInvitation = 3706;
  static const notGroupMemberToSendGroupInvitation = 3707;
  static const recallingGroupInvitationIsDisabled = 3708;
  static const sendGroupInvitationToGroupNotRequireInvitation = 3709;
  static const recallNonPendingGroupInvitation = 3710;

  // Conversation

  // Conversation - Read Date
  static const updatingReadDateIsDisabled = 4000;
  static const updatingReadDateIsDisabledByGroup = 4001;
  static const updatingReadDateOfNonexistentGroupConversation = 4002;
  static const notGroupMemberToUpdateReadDateOfGroupConversation = 4003;
  static const movingReadDateForwardIsDisabled = 4004;

  // Conversation - Typing Status
  static const updatingTypingStatusIsDisabled = 4100;
  static const notGroupMemberToSendTypingStatus = 4101;
  static const notFriendToSendTypingStatus = 4102;

  // Message

  // Message - Send
  static const messageRecipientNotActive = 5000;
  static const messageSenderNotInContactsOrBlocked = 5001;
  static const privateMessageSenderHasBeenBlocked = 5002;
  static const groupMessageSenderHasBeenBlocked = 5003;
  static const sendMessageToInactiveGroup = 5004;
  static const sendMessageToMutedGroup = 5005;
  static const sendMessageToNonexistentGroup = 5006;
  static const sendingMessagesToOneselfIsDisabled = 5007;
  static const mutedGroupMemberSendMessage = 5008;
  static const guestsHaveBeenMuted = 5009;
  static const messageIsIllegal = 5010;

  // Message - Update
  static const updatingMessageBySenderIsDisabled = 5100;
  static const notSenderToUpdateMessage = 5101;
  static const updateMessageOfNonexistentGroup = 5102;
  static const updatingGroupMessageBySenderIsDisabled = 5103;

  // Message - Recall
  static const recallNonexistentMessage = 5200;
  static const recallingMessageIsDisabled = 5201;
  static const notSenderToRecallMessage = 5202;
  static const recallMessageOfNonexistentGroup = 5203;
  static const messageRecallTimeout = 5204;

  // Message - Query
  static const notGroupMemberToQueryGroupMessages = 5300;

  // Storage
  static const storageNotImplemented = 6000;

  // Storage - Message attachment
  static const notFriendToUploadMessageAttachmentInPrivateConversation = 6100;
  static const notGroupMemberToUploadMessageAttachmentInGroupConversation =
      6101;
  static const notUploaderToShareMessageAttachment = 6102;
  static const notUploaderOrGroupManagerToUnshareMessageAttachmentInGroupConversation =
      6103;
  static const notUploaderToUnshareMessageAttachmentInPrivateConversation =
      6104;
  static const notUploaderOrGroupManagerToDeleteMessageAttachmentInGroupConversation =
      6105;
  static const notUploaderToDeleteMessageAttachmentInPrivateConversation = 6106;
  static const notUploaderOrSharedWithUserToDownloadMessageAttachment = 6107;

  // Storage - Message attachment info
  static const notFriendToQueryMessageAttachmentInfoInPrivateConversation =
      6130;
  static const notGroupMemberToQueryMessageAttachmentInfoInGroupConversation =
      6131;

  static bool isSuccessCode(int code) => 1000 <= code && code < 1100;

  static bool isErrorCode(int code) => !isSuccessCode(code);
}
