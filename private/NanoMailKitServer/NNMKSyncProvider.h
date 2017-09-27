//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoMailKitServer/NNMKSyncEndpoint.h>

#import "NNMKAccountsSyncServiceServerDelegate.h"
#import "NNMKBatchRequestHandlerDelegate.h"
#import "NNMKDeviceRegistryHolder.h"
#import "NNMKFetchesSyncServiceServerDelegate.h"
#import "NNMKInitialSyncProgressTrackerDelegate.h"
#import "NNMKMessageContentSyncServiceServerDelegate.h"
#import "NNMKMessagesSyncServiceServerDelegate.h"
#import "NNMKResendSchedulerDelegate.h"
#import "NNMKSyncStateManagerDelegate.h"

@class NNMKAccountsSyncServiceServer, NNMKBatchRequestHandler, NNMKDeviceSyncRegistry, NNMKFetchesSyncServiceServer, NNMKInitialSyncProgressTracker, NNMKMailboxSelection, NNMKMessageContentSyncServiceServer, NNMKMessagesSyncServiceServer, NNMKPairedDeviceInfo, NNMKProtectedContentSyncServiceServer, NNMKProtectedSyncServiceServer, NNMKResendScheduler, NNMKSyncController, NNMKSyncPersistenceHandler, NNMKSyncSessionController, NSObject<OS_dispatch_queue>, NSString;

@interface NNMKSyncProvider : NNMKSyncEndpoint <NNMKMessagesSyncServiceServerDelegate, NNMKMessageContentSyncServiceServerDelegate, NNMKAccountsSyncServiceServerDelegate, NNMKFetchesSyncServiceServerDelegate, NNMKInitialSyncProgressTrackerDelegate, NNMKDeviceRegistryHolder, NNMKResendSchedulerDelegate, NNMKSyncStateManagerDelegate, NNMKBatchRequestHandlerDelegate>
{
    _Bool _pairedDeviceSupportsMultipleMailboxes;
    _Bool _fullSyncRecoveredInThisSession;
    id <NNMKSyncProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_providerQueue;
    id <NNMKSyncStateManager> _syncStateManager;
    NNMKDeviceSyncRegistry *_pairedDeviceRegistry;
    NNMKSyncPersistenceHandler *_persistenceHandler;
    NNMKMessagesSyncServiceServer *_messagesSyncService;
    NNMKMessageContentSyncServiceServer *_contentSyncService;
    NNMKAccountsSyncServiceServer *_accountsSyncService;
    NNMKFetchesSyncServiceServer *_fetchesSyncService;
    NNMKProtectedSyncServiceServer *_protectedSyncService;
    NNMKProtectedContentSyncServiceServer *_protectedContentSyncService;
    NNMKSyncController *_syncController;
    NNMKSyncSessionController *_sessionController;
    id <NNMKDirectoryProvider> _directoryProvider;
    NNMKResendScheduler *_resendScheduler;
    NNMKInitialSyncProgressTracker *_initialSyncProgressTracker;
    NNMKBatchRequestHandler *_batchRequestHandler;
}

+ (_Bool)prepareForSystemAppDeletion:(id *)arg1;
@property(retain, nonatomic) NNMKBatchRequestHandler *batchRequestHandler; // @synthesize batchRequestHandler=_batchRequestHandler;
@property(retain, nonatomic) NNMKInitialSyncProgressTracker *initialSyncProgressTracker; // @synthesize initialSyncProgressTracker=_initialSyncProgressTracker;
@property(retain, nonatomic) NNMKResendScheduler *resendScheduler; // @synthesize resendScheduler=_resendScheduler;
@property(retain, nonatomic) id <NNMKDirectoryProvider> directoryProvider; // @synthesize directoryProvider=_directoryProvider;
@property(retain, nonatomic) NNMKSyncSessionController *sessionController; // @synthesize sessionController=_sessionController;
@property(retain, nonatomic) NNMKSyncController *syncController; // @synthesize syncController=_syncController;
@property(retain, nonatomic) NNMKProtectedContentSyncServiceServer *protectedContentSyncService; // @synthesize protectedContentSyncService=_protectedContentSyncService;
@property(retain, nonatomic) NNMKProtectedSyncServiceServer *protectedSyncService; // @synthesize protectedSyncService=_protectedSyncService;
@property(retain, nonatomic) NNMKFetchesSyncServiceServer *fetchesSyncService; // @synthesize fetchesSyncService=_fetchesSyncService;
@property(retain, nonatomic) NNMKAccountsSyncServiceServer *accountsSyncService; // @synthesize accountsSyncService=_accountsSyncService;
@property(retain, nonatomic) NNMKMessageContentSyncServiceServer *contentSyncService; // @synthesize contentSyncService=_contentSyncService;
@property(retain, nonatomic) NNMKMessagesSyncServiceServer *messagesSyncService; // @synthesize messagesSyncService=_messagesSyncService;
@property(retain, nonatomic) NNMKSyncPersistenceHandler *persistenceHandler; // @synthesize persistenceHandler=_persistenceHandler;
@property(nonatomic) _Bool fullSyncRecoveredInThisSession; // @synthesize fullSyncRecoveredInThisSession=_fullSyncRecoveredInThisSession;
@property(retain, nonatomic) NNMKDeviceSyncRegistry *pairedDeviceRegistry; // @synthesize pairedDeviceRegistry=_pairedDeviceRegistry;
@property(retain, nonatomic) id <NNMKSyncStateManager> syncStateManager; // @synthesize syncStateManager=_syncStateManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue; // @synthesize providerQueue=_providerQueue;
@property(nonatomic) __weak id <NNMKSyncProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pairedDeviceSupportsMultipleMailboxes;
- (id)currentDeviceRegistry;
- (_Bool)_pairedDeviceSupportsMultipleMailboxes;
- (void)_setPairedDeviceSupportsMultipleMailboxes:(_Bool)arg1;
- (id)_createDefaultSyncStateManager;
- (void)_requestDelegateForMessagesToSendAsFetchResponseForMessageIds:(id)arg1;
- (id)syncServiceEndpoints;
- (void)trackerDidFinishSendingInitialSyncContentToPairedDevice:(id)arg1;
- (void)_requestDelegateForResendingAccountWithId:(id)arg1;
- (void)_requestDelegateForResendingMessagesWithIds:(id)arg1;
- (void)_requestDelegateToSendComposedMessage:(id)arg1;
- (void)_requestDelegateForFetchForMailboxes:(id)arg1;
- (void)_requestDelegateToStopDownloadingAllMessageElements;
- (void)_requestDelegateToStopDownloadingMessageElementsForMessageWithId:(id)arg1;
- (void)_requestDelegateForContentForMessageWithId:(id)arg1 highPriority:(_Bool)arg2;
- (void)_requestDelegateForContentForMessageIds:(id)arg1 highPriority:(_Bool)arg2;
- (void)_requestDelegateForFirstMessagesForMailboxes:(id)arg1;
- (void)_requestDelegateForMoreMessagesBeforeDateReceived:(id)arg1 forConversationWithId:(id)arg2 mailbox:(id)arg3;
- (void)_requestDelegateForMoreMessagesWithMailbox:(id)arg1 beforeDate:(id)arg2 messagesForspecialMailboxFilterType:(unsigned long long)arg3;
- (void)_requestDelegateForAccounts;
- (void)_notifyDelegateThatMessagesStatusWereUpdated:(id)arg1;
- (void)_handleDidFailSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)_checkBatchFetchedMessages;
- (_Bool)_isConnectedToWatch;
- (void)batchRequestHandlerDidTimeoutFetchRequest:(id)arg1;
- (void)_checkConnectivityBasedSuspensionTimer:(_Bool)arg1;
- (id)_messageProtobufForMessage:(id)arg1;
- (_Bool)isMessageOkForSyncedMailboxes:(id)arg1;
- (void)_stopTaks;
- (void)_fastForwardToFullSyncVersion:(unsigned long long)arg1;
- (void)_handleNotificationPayloadAck:(CDUnknownBlockType)arg1 forMessageId:(id)arg2;
- (void)syncStateManager:(id)arg1 didAcknowledgeNotificationPayload:(CDUnknownBlockType)arg2 forRecordId:(id)arg3;
- (id)_bbSubsectionIdsForMessage:(id)arg1;
- (void)_markConversationWithId:(id)arg1 forNotify:(_Bool)arg2 mailbox:(id)arg3;
- (void)_addMessages:(id)arg1 messagesAreNew:(_Bool)arg2 mailbox:(id)arg3;
- (_Bool)_verifyDatabaseOkForFullSyncVersion:(unsigned long long)arg1;
- (_Bool)_verifyDatabaseOkForFullSyncVersion:(unsigned long long)arg1 mailbox:(id)arg2;
- (unsigned long long)resendScheduler:(id)arg1 didRequestNewResendIntervalForPreviousResendInterval:(unsigned long long)arg2 errorCode:(long long)arg3;
- (void)resendScheduler:(id)arg1 didRequestDequeueIDSIdentifierForResend:(id)arg2;
- (void)resendScheduler:(id)arg1 didRequestEnqueueIDSIdentifiersForResend:(id)arg2;
- (void)resendScheduler:(id)arg1 didRequestEnqueueIDSIdentifierForResend:(id)arg2 date:(id)arg3 silent:(_Bool)arg4;
- (void)resendScheduler:(id)arg1 didRequestRetrySendingComposeMessageProgress:(long long)arg2 messageId:(id)arg3 resendInterval:(unsigned long long)arg4;
- (void)resendScheduler:(id)arg1 didRequestRetrySendingDeletionForAccountWithId:(id)arg2 resendInterval:(unsigned long long)arg3;
- (void)resendScheduler:(id)arg1 didRequestRetrySendingAccountWithId:(id)arg2;
- (void)resendScheduler:(id)arg1 didRequestRetrySendingContentForMessageId:(id)arg2 highPriority:(_Bool)arg3;
- (void)resendScheduler:(id)arg1 didRequestRetrySendingMessageDeletions:(id)arg2 deletionsMessageIds:(id)arg3 resendInterval:(unsigned long long)arg4;
- (void)resendScheduler:(id)arg1 didRequestRetrySendingMessageWithIds:(id)arg2;
- (void)resendScheduler:(id)arg1 didRequestToRetrySendMailboxSelectionWithResendInterval:(unsigned long long)arg2;
- (void)resendScheduler:(id)arg1 didRequestRetryFullSyncForMailboxes:(id)arg2;
- (void)_storeScreenRelatedValues;
- (void)_verifyPairingForcingSync:(_Bool)arg1;
- (void)_handleDidUnpair;
- (void)_handleDidPairWithNewDevice;
- (void)syncStateManagerDidInvalidateSyncSession:(id)arg1 syncSessionIdentifier:(id)arg2;
- (void)syncStateManagerDidBeginSyncSession:(id)arg1 syncSessionType:(id)arg2 syncSessionIdentifier:(id)arg3;
- (void)syncStateManagerDidChangePairedDevice:(id)arg1;
- (void)syncStateManagerDidUnpair:(id)arg1;
- (void)fetchesSyncServiceServer:(id)arg1 didNotifyInitialSyncFinished:(id)arg2;
- (void)_handleHaltSyncForMailbox:(id)arg1;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestHaltSync:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestFullSync:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestContent:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesForConversation:(id)arg2;
- (void)_handleFetchRequestFromWatch:(id)arg1;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessages:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesInBatch:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestFetch:(id)arg2;
- (id)_handleFetchRequest:(id)arg1 shouldResumeSync:(_Bool *)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestFetchInBatch:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)accountsSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)accountsSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)messageContentSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)messageContentSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)messagesSyncServiceServer:(id)arg1 didRequestCompactMessages:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didWarnMessagesFilteredOut:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didUpdateMailboxSelection:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didRequestSendMessage:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didDeleteMessages:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didUpdateMessagesStatus:(id)arg2;
- (void)messagesSyncServiceServerConnectivityChanged:(id)arg1;
- (void)messagesSyncServiceServerSpaceBecameAvailable:(id)arg1;
- (void)messagesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)resendObjectsForIDSIdentifier:(id)arg1;
@property(readonly, nonatomic) NNMKPairedDeviceInfo *pairedDeviceInfo;
@property(nonatomic) _Bool organizeByThread;
- (_Bool)containsSyncedMailbox:(id)arg1;
- (id)syncedMailboxes;
@property(readonly, nonatomic) NNMKMailboxSelection *mailboxSelection;
- (_Bool)_isPaired;
@property(readonly, nonatomic) _Bool isPaired;
- (id)bulletinFlagsForMessageStatus:(unsigned long long)arg1 dateReceived:(id)arg2 messageWillBeAddedToSyncProvider:(_Bool)arg3 mailboxId:(id)arg4;
- (void)notifyFetchCompleted;
- (void)_sendUpdatedMailboxSelection:(unsigned long long)arg1 resendInterval:(unsigned long long)arg2;
- (void)_sendUpdatedMailboxSelection:(unsigned long long)arg1;
- (void)_updateMailboxSelection:(id)arg1 notifyClient:(_Bool)arg2;
- (void)updateMailboxSelection:(id)arg1;
- (void)addUpdateOrDeleteAccounts:(id)arg1;
- (void)reportWillDownloadFirstMessages;
- (void)_addImageAttachment:(id)arg1 forMessageId:(id)arg2 contentId:(id)arg3 loadedProtected:(_Bool)arg4 mailbox:(id)arg5;
- (void)addImageAttachment:(id)arg1 forMessageId:(id)arg2 contentId:(id)arg3 loadedProtected:(_Bool)arg4;
- (void)_reportMessageContentDownloadFailureForMessageId:(id)arg1 mailbox:(id)arg2;
- (void)reportMessageContentDownloadFailureForMessageId:(id)arg1;
- (void)_addMessageContent:(id)arg1 forMessage:(id)arg2 loadedProtected:(_Bool)arg3 mailbox:(id)arg4;
- (void)addMessageContent:(id)arg1 forMessage:(id)arg2 loadedProtected:(_Bool)arg3;
- (void)markConversationIdForNotNotify:(id)arg1;
- (void)_markConversationIdForNotify:(id)arg1 messages:(id)arg2 includesProtectedMessages:(_Bool)arg3 mailbox:(id)arg4;
- (void)markConversationIdForNotify:(id)arg1 messages:(id)arg2 includesProtectedMessages:(_Bool)arg3;
- (void)_deleteMessagesWithIds:(id)arg1 mailbox:(id)arg2;
- (void)deleteMessagesWithIds:(id)arg1;
- (void)_updateMessagesStatus:(id)arg1 mailbox:(id)arg2;
- (void)updateMessagesStatus:(id)arg1;
- (void)_addMessages:(id)arg1 mailbox:(id)arg2;
- (void)addMessages:(id)arg1;
- (void)replyWithMessageSendingProgress:(long long)arg1 forComposedMessageId:(id)arg2;
- (void)replyWithAccountToResend:(id)arg1;
- (void)_replyWithMessagesToResend:(id)arg1 includesProtectedMessages:(_Bool)arg2 mailbox:(id)arg3;
- (void)replyWithMessagesToResend:(id)arg1 includesProtectedMessages:(_Bool)arg2;
- (void)replyWithMessagesToSendAsFetchResponse:(id)arg1 includesProtectedMessages:(_Bool)arg2;
- (void)_replyWithMoreMessages:(id)arg1 forConversationWithId:(id)arg2 includesProtectedMessages:(_Bool)arg3 mailbox:(id)arg4;
- (void)_replyWithMoreMessages:(id)arg1 forDateReceivedBefore:(id)arg2 includesProtectedMessages:(_Bool)arg3 mailbox:(id)arg4 messagesForSpecialMailbox:(unsigned long long)arg5;
- (void)replyWithMoreMessages:(id)arg1 context:(id)arg2;
- (id)_legacy_sendFirstMessages:(id)arg1 syncedMailbox:(id)arg2 shouldUseProtectedChannel:(_Bool)arg3;
- (id)_initialSyncForMailbox:(id)arg1 messages:(id)arg2 shouldUseProtectedChannel:(_Bool)arg3;
- (id)_sendFirstMessages:(id)arg1 mailboxes:(id)arg2 shouldUseProtectedChannel:(_Bool)arg3;
- (void)replyWithFirstMessages:(id)arg1 includesProtectedMessages:(_Bool)arg2 mailboxes:(id)arg3 organizedByThread:(_Bool)arg4;
- (void)_triggerFullSyncForMailboxes:(id)arg1;
- (void)_triggerFullSyncForMailbox:(id)arg1;
- (void)replyWithAccounts:(id)arg1;
- (void)_triggerInitialSyncTrackingProgress:(_Bool)arg1;
- (void)_triggerInitialSync;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 syncStateManager:(id)arg2 directoryProvider:(id)arg3;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

