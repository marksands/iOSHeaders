//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMItemsController.h>

#import <IMCore/IMSendProgressDelegate-Protocol.h>
#import <IMCore/INSpeakable-Protocol.h>

@class IMAccount, IMChatRegistry, IMHandle, IMMessage, IMScheduledUpdater, IMSendProgress, IMTimingCollection, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString;
@protocol IMChatItemRules;

@interface IMChat : IMItemsController <INSpeakable, IMSendProgressDelegate>
{
    NSString *_guid;
    NSString *_typingGUID;
    NSString *_localUserIsComposing;
    NSString *_currentLocationGUID;
    NSString *_identifier;
    IMAccount *_account;
    NSString *_displayName;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSString *_lastAddressedHandleID;
    NSString *_groupID;
    NSData *_engramID;
    NSArray *_participants;
    NSMutableDictionary *_participantStates;
    IMMessage *_invitationForPendingParticipants;
    NSMutableArray *_messagesPendingJoin;
    NSMutableSet *_guids;
    NSMutableDictionary *_chatProperties;
    NSMutableDictionary *_participantProperties;
    NSArray *_frequentReplies;
    NSArray *_attachments;
    NSNumber *_countOfMessagesMarkedAsSpam;
    IMTimingCollection *_timingCollection;
    id <IMChatItemRules> _chatItemRules;
    IMScheduledUpdater *_chatItemsUpdater;
    IMSendProgress *_sendProgress;
    BOOL _downgradeState;
    IMScheduledUpdater *_downgradeStateUpdater;
    long long _joinState;
    unsigned char _style;
    unsigned long long _dbFailedCount;
    unsigned long long _dbUnreadCount;
    void *_context;
    unsigned int _hasBeenConfigured:1;
    unsigned int _isFirstMessageInvitation:1;
    unsigned int _wasInvitationHandled:1;
    unsigned int _didSendAFinishedMessage:1;
    unsigned int _hasPendingMarkRead:1;
    unsigned int _isUpdatingChatItems:1;
    unsigned int _ignoreDowngradeStatusUpdates:1;
    unsigned int _isFiltered:1;
    unsigned int _forceMMS:1;
    _Bool _hasRefreshedServiceForSending;
    _Bool _hasHadSuccessfulQuery;
    NSString *_currentUnreadHistoryQuery;
    _Bool _hasEarlierMessagesToLoad;
    _Bool _hasMoreRecentMessagesToLoad;
    NSString *_personCentricID;
    NSDictionary *_bizIntent;
    double _latestTypingIndicatorTimeInterval;
}

+ (Class)chatItemRulesClass;
+ (void)setChatItemRulesClass:(Class)arg1;
+ (void)_initializeFMF;
+ (Class)_NPSManagerClass;
+ (void)moveVIPChatAtIndex:(long long)arg1 toIndex:(long long)arg2;
+ (void)updateVIPChatIdentifiers:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)watermarkComparator;
+ (void)cleanWatermarkCache;
+ (id)__im_adjustMessageSummaryInfoForSending:(id)arg1;
@property(nonatomic) double latestTypingIndicatorTimeInterval; // @synthesize latestTypingIndicatorTimeInterval=_latestTypingIndicatorTimeInterval;
@property(copy, nonatomic) NSDictionary *bizIntent; // @synthesize bizIntent=_bizIntent;
@property(readonly, nonatomic) NSData *engramID; // @synthesize engramID=_engramID;
@property(retain, nonatomic) NSString *personCentricID; // @synthesize personCentricID=_personCentricID;
@property(retain, nonatomic) IMMessage *invitationForPendingParticipants; // @synthesize invitationForPendingParticipants=_invitationForPendingParticipants;
@property(readonly, nonatomic) long long joinState; // @synthesize joinState=_joinState;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(nonatomic) void *contextInfo; // @synthesize contextInfo=_context;
@property(readonly, nonatomic) unsigned char chatStyle; // @synthesize chatStyle=_style;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic, setter=_setGUIDs:) NSMutableSet *_guids; // @synthesize _guids;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) NSString *lastAddressedHandleID; // @synthesize lastAddressedHandleID=_lastAddressedHandleID;
@property(retain, nonatomic) NSArray *frequentReplies; // @synthesize frequentReplies=_frequentReplies;
- (void).cxx_destruct;
- (void)sendProgress:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(_Bool)arg6;
- (id)sendProgressDelegate;
- (void)setSendProgressDelegate:(id)arg1;
- (id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4;
- (_Bool)hasStoredMessageWithGUID:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_daemonDied:(id)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_accountControllerUpdated:(id)arg1;
- (_Bool)_sanityCheckAccounts;
- (void)_handleAddressBookChange:(id)arg1;
- (void)addPendingParticipants:(id)arg1;
- (void)_removeParticipantsFromChat:(id)arg1 reason:(id)arg2 fromiMessageChat:(_Bool)arg3;
- (void)removeParticipantsFromiMessageChat:(id)arg1 reason:(id)arg2;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)_inviteParticipantsToChat:(id)arg1 reason:(id)arg2 toiMessageChat:(_Bool)arg3;
- (void)inviteParticipantsToiMessageChat:(id)arg1 reason:(id)arg2;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)_invitePendingParticipants;
- (void)_inviteParticipants:(id)arg1 reason:(id)arg2 toiMessageChat:(_Bool)arg3;
- (id)_pendingParticipants;
- (_Bool)canAddParticipants:(id)arg1;
- (_Bool)canAddParticipant:(id)arg1;
@property(readonly, nonatomic) _Bool canLeaveChat;
- (void)_addParticipants:(id)arg1 withState:(unsigned long long)arg2;
- (void)remove;
- (void)_leaveChat:(_Bool)arg1;
- (void)leave;
- (void)leaveiMessageGroup;
- (void)join;
@property(retain, nonatomic) IMHandle *recipient;
- (void)setRecipient:(id)arg1 locally:(_Bool)arg2;
- (void)_setAccount:(id)arg1 locally:(_Bool)arg2;
- (void)_setAccount:(id)arg1;
- (_Bool)_hasCommunicatedOnService:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;
- (id)allPropertiesOfParticipant:(id)arg1;
- (void)userToggledReadReceiptSwitch:(_Bool)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (id)valueForChatProperty:(id)arg1;
- (id)allChatProperties;
- (void)_setChatProperties:(id)arg1;
- (_Bool)_isDuplicate:(id)arg1;
- (void)markAllMessagesAsRead;
- (void)markMessagesAsRead:(id)arg1;
- (void)markMessageAsRead:(id)arg1;
- (void)_setTimerForReadMessageCache;
- (void)__clearReadMessageCache;
- (void)updateMessage:(id)arg1 flags:(unsigned long long)arg2;
- (void)updateMessage:(id)arg1;
- (_Bool)authorizedToSendCurrentLocationMessage;
- (_Bool)canSendCurrentLocationMessage;
- (_Bool)canSendTransfer:(id)arg1;
- (_Bool)canSendMessage:(id)arg1;
@property(nonatomic) _Bool localUserIsRecording;
@property(nonatomic) _Bool localUserIsTyping;
@property(retain, nonatomic) NSString *localUserIsComposing;
- (void)setLocalUserIsComposing:(id)arg1 typingIndicatorData:(id)arg2;
- (void)_setLocalUserIsComposing:(id)arg1 suppliedGUID:(id)arg2 typingIndicatorData:(id)arg3;
- (void)_setLocalUserIsComposing:(id)arg1 suppliedGUID:(id)arg2;
- (_Bool)_shouldSendCancelTypingIndicator;
@property(readonly, nonatomic) NSString *localTypingMessageGUID;
- (void)_sendCurrentLocationMessageUsingLocationManager:(id)arg1;
- (void)sendCurrentLocationMessage;
- (void)sendMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 adjustingSender:(_Bool)arg2 shouldQueue:(_Bool)arg3;
- (void)cancelMessage:(id)arg1;
- (void)declineInvitation;
- (void)acceptInvitation;
@property(readonly, nonatomic) _Bool hasUnhandledInvitation;
@property(readonly, nonatomic) NSString *roomNameWithoutSuffix;
@property(readonly, nonatomic) NSString *deviceIndependentID;
@property(readonly, nonatomic) NSString *persistentID;
- (void)_updateEngramID:(id)arg1;
- (void)_updateDisplayName:(id)arg1;
- (void)_setDisplayName:(id)arg1;
- (void)setRoomName:(id)arg1;
@property(readonly, nonatomic, getter=isGroupChat) _Bool groupChat;
@property(readonly, nonatomic) unsigned long long overallChatStatus;
@property(readonly, nonatomic) _Bool canHaveMultipleParticipants;
@property(readonly, nonatomic) NSString *chatIdentifier;
- (void)_clearCachedIdentifier;
- (unsigned long long)stateForParticipant:(id)arg1;
- (id)participantsWithState:(unsigned long long)arg1;
- (void)_engroupParticipantsUpdated;
- (void)_handleAttributionChanged;
- (void)beginListeningToAttributionChanges;
- (void)endListeningToAttributionChanges;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(_Bool)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_showErrorMessage:(id)arg1;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (void)_setJoinState:(long long)arg1 quietly:(_Bool)arg2;
- (void)_setJoinState:(long long)arg1;
- (_Bool)_handleIncomingItem:(id)arg1;
- (void)_fixSendingItemDate:(id)arg1;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (void)_setParticipantState:(unsigned long long)arg1 forHandles:(id)arg2 quietly:(_Bool)arg3;
- (void)_setParticipantState:(unsigned long long)arg1 forHandle:(id)arg2 quietly:(_Bool)arg3;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2 shouldLog:(_Bool)arg3;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (void)_endTiming;
- (void)_startTiming:(id)arg1;
- (id)_timingCollection;
- (void)_accountLoggedOut:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_recomputeOverallChatStatusQuietly:(_Bool)arg1;
- (void)didUnregisterFromRegistry:(id)arg1;
- (void)clear;
@property(nonatomic) _Bool hasHadSuccessfulQuery;
- (void)verifyChatShouldBeSMSSpam;
- (void)updateWasDetectedAsSMSSpam:(_Bool)arg1;
- (_Bool)hasKnownParticipants;
- (void)updateIsFiltered:(_Bool)arg1;
@property(nonatomic) _Bool isFiltered; // @dynamic isFiltered;
- (void)autoReportSpam;
- (void)markAsAutoSpamReported;
- (unsigned long long)markAsSpam;
- (_Bool)deleteAllHistory;
@property(readonly, nonatomic) unsigned long long messageFailureCount;
@property(readonly, nonatomic) unsigned long long unreadMessageCount;
@property(readonly, nonatomic) unsigned long long messageCount;
@property(readonly, nonatomic) long long lastFinishedMessageID;
@property(readonly, nonatomic) NSDate *lastSentMessageDate;
@property(readonly, nonatomic) NSDate *lastFinishedMessageDate;
@property(readonly, nonatomic) IMMessage *lastMessage;
- (id)lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1;
@property(readonly, nonatomic) IMMessage *lastIncomingFinishedMessageWithTextContent;
@property(readonly, nonatomic) IMMessage *lastIncomingFinishedMessage;
@property(readonly, nonatomic) IMMessage *lastIncomingMessage;
@property(readonly, nonatomic) IMMessage *lastFinishedMessage;
@property(readonly, nonatomic) IMMessage *firstMessage;
- (id)messageForGUID:(id)arg1;
- (id)_appendArchivedItemsToItemsArray:(id)arg1;
- (id)_archivedItemsToReplace:(id)arg1 numberOfMessagesBeforeGUID:(unsigned long long)arg2 numberOfMessagesAfterGUID:(unsigned long long)arg3;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(_Bool)arg3 isHistoryQuery:(_Bool)arg4 limit:(unsigned long long)arg5 numberOfMessagesBeforeGUID:(unsigned long long)arg6 numberOfMessagesAfterGUID:(unsigned long long)arg7;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(_Bool)arg3 isHistoryQuery:(_Bool)arg4 limit:(unsigned long long)arg5;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(_Bool)arg3 isHistoryQuery:(_Bool)arg4;
- (_Bool)_shouldAnnouncePeopleJoin;
- (void)_setDBFailedCount:(unsigned long long)arg1;
- (void)_setDBUnreadCount:(unsigned long long)arg1;
- (void)_clearUnreadCount;
@property(readonly, nonatomic) _Bool _shouldRegisterChat;
- (void)_itemsDidChange:(id)arg1;
- (id)_initWithItems:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_initialize;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 items:(id)arg6 participants:(id)arg7 isFiltered:(_Bool)arg8 hasHadSuccessfulQuery:(_Bool)arg9;
- (void)_setupObservation;
@property(nonatomic) _Bool forceMMS;
@property(readonly, nonatomic) _Bool suppressAccountRetargetingForNamedGroupConversation;
- (void)_calculateDowngradeState;
- (void)_setAndIncrementDowngradeMarkersForManual:(_Bool)arg1;
- (void)_clearDowngradeMarkers;
- (id)_consecutiveDowngradeAttemptsViaManualDowngrades:(_Bool)arg1;
- (void)_calculateDowngradeStateTimerFired;
- (void)_updateDowngradeState:(BOOL)arg1 checkAgainInterval:(double)arg2;
- (void)_invalidateDowngradeState;
- (_Bool)isDowngraded;
- (void)_targetToService:(id)arg1 newComposition:(_Bool)arg2;
- (void)_setPreviousAccount:(id)arg1 forService:(id)arg2;
- (id)_previousAccountForService:(id)arg1;
- (_Bool)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (_Bool)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)_delayedInvalidateDowngradeState;
- (void)_handleIncomingCommand:(id)arg1;
- (void)_handleDeliveredCommand:(id)arg1;
- (_Bool)sendDowngradeNotificationTo:(id)arg1;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(_Bool)arg2;
- (void)refreshServiceForSending;
- (long long)compareChatByDate:(id)arg1;
- (_Bool)_hasJustSentAMessage;
- (void)verifyFiltering;
- (void)saveWatermark;
- (void)updateWatermarks;
@property(nonatomic, getter=isVIP) _Bool VIP;
@property(readonly, copy, nonatomic) NSDate *watermarkDate;
@property(readonly, nonatomic) long long watermarkMessageID;
- (id)_storedWatermarkMessageID;
- (id)messageAcknowledgmentSummaryForConversationListWithMessage:(id)arg1;
- (void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withAssociatedMessageInfo:(id)arg3;
- (void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withMessageSummaryInfo:(id)arg3;
- (void)closeSession;
- (_Bool)isAppleChat;
- (_Bool)isMakoChat;
- (_Bool)isBusinessChat;
- (_Bool)isReplyEnabled;
- (id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5 isFiltered:(_Bool)arg6 hasHadSuccessfulQuery:(_Bool)arg7;
- (void)deleteTransfers:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *attachments;
- (void)loadAttachments:(CDUnknownBlockType)arg1;
- (void)_setCountOfMessagesMarkedAsSpam:(id)arg1;
- (void)_setAttachments:(id)arg1;
- (id)loadUnreadMessagesWithLimit:(unsigned long long)arg1 fallbackToMessagesUpToGUID:(id)arg2;
- (id)loadFrequentRepliesLimit:(unsigned long long)arg1 loadImmediately:(_Bool)arg2;
- (id)loadMessagesBeforeAndAfterGUID:(id)arg1 numberOfMessagesToLoadBeforeGUID:(unsigned long long)arg2 numberOfMessagesToLoadAfterGUID:(unsigned long long)arg3 loadImmediately:(_Bool)arg4;
- (id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned long long)arg3 loadImmediately:(_Bool)arg4;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(_Bool)arg3;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool hasMoreRecentMessagesToLoad;
@property(readonly, nonatomic) _Bool hasMoreMessagesToLoad;
@property(nonatomic) unsigned long long numberOfMessagesToKeepLoaded;
- (id)chatItemsForItems:(id)arg1;
- (void)markChatItemAsPlayedExpressiveSend:(id)arg1;
- (void)_markItemAsPlayed:(id)arg1;
- (void)markChatItemAsPlayed:(id)arg1;
- (void)markChatItemAsSaved:(id)arg1;
- (void)deleteChatItems:(id)arg1;
- (id)_getMessageChatItemMap:(id)arg1 withDeleteMap:(id)arg2 andAllChatItems:(id)arg3;
- (id)_getDeleteChatItemMap:(id)arg1;
- (void)_replaceStaleChatItems;
- (void)_updateChatItemsWithReason:(id)arg1 block:(CDUnknownBlockType)arg2 shouldPost:(_Bool)arg3;
- (void)_updateChatItemsWithReason:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_updateChatItems;
- (void)updateChatItemsIfNeeded;
- (void)endHoldingUpdatesForAllKeys;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (id)chatItems;
- (void)_updateLocationShareItemsForSender:(id)arg1;
- (void)_configureLocationShareItem:(id)arg1;
- (void)stopTrackingParticipantLocations;
- (void)startTrackingParticipantLocations;
- (void)stopSharingLocation;
- (void)shareLocationUntilDate:(id)arg1;
@property(readonly, nonatomic) _Bool allRecipientsSharingLocation;
@property(readonly, nonatomic) _Bool hasSiblingRecipientsSharingLocation;
@property(readonly, nonatomic) _Bool hasRecipientsSharingLocation;
@property(readonly, nonatomic) _Bool allRecipientsFollowingLocation;
@property(readonly, nonatomic) _Bool hasRecipientsFollowingLocation;
@property(readonly, nonatomic) NSSet *allSiblingFMFHandles;
- (void)markAllLocationShareItemsAsUnactionable;
@property(readonly, nonatomic) NSSet *fmfHandles;
@property(readonly, nonatomic) IMChatRegistry *chatRegistry;
- (id)testChatItems;
- (_Bool)canEditChatItem:(id)arg1;
@property(readonly, nonatomic) NSArray *alternativeSpeakableMatches;
@property(readonly, nonatomic) NSString *vocabularyIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *pronunciationHint;
@property(readonly, nonatomic) NSString *spokenPhrase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

