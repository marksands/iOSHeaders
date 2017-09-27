//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MailAccount.h"

#import "MFIMAPConnectionDelegate.h"
#import "MFIMAPMailboxListFilter.h"

@class MFIMAPOperationCache, NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSSet, NSString;

@interface IMAPAccount : MailAccount <MFIMAPConnectionDelegate, MFIMAPMailboxListFilter>
{
    NSString *_separatorChar;
    NSString *_serverNamespace;
    struct __CFArray *_cachedConnections;
    struct __CFArray *_mailboxesToSynchronize;
    MFIMAPOperationCache *_offlineCache;
    unsigned long long _greatestInboxUid;
    double _timeLastFetchedMailboxList;
    NSRecursiveLock *_flagChangesLock;
    NSMutableArray *_recentFlagChanges;
    NSRecursiveLock *_connectionLock;
    int _nextConnectionTag;
    void *_packetContextAssertion;
    NSArray *_lockOrderingArray;
    unsigned int _readBufferSize;
    CDUnknownBlockType _offlineCacheFlushHandler;
    unsigned int _fetchedMailboxList:1;
    unsigned int _isOffline:1;
    NSArray *_lastKnownCapabilities;
    double _lastPushRegistration;
    NSString *_apsTopic;
    NSSet *_pushedMailboxUids;
    NSMutableDictionary *_pushRegisteredMailboxes;
    int _supportedPushServiceLevel;
    unsigned int _observingPushedFoldersPrefsChanged:1;
    unsigned int _mustRegisterForPushOnNextConnection:1;
    unsigned int _didRequestPushRegistration:1;
    unsigned int _listeningForDeviceTokenChanges:1;
    unsigned int _didUpdateSeparatorAndNamespace:1;
}

+ (void)_deleteQueuedMailboxes:(id)arg1;
+ (void *)legacyKeychainProtocol;
+ (id)csAccountTypeString;
+ (id)accountTypeString;
+ (id)saslProfileName;
+ (unsigned int)defaultSecurePortNumber;
+ (unsigned int)defaultPortNumber;
+ (id)accountTypeIdentifier;
- (id)copyDiagnosticInformation;
- (void)transferNotificationSessionToAccount:(id)arg1;
- (void)stopListeningForNotifications;
- (void)startListeningForNotifications;
- (void)_unregisterForDeviceTokenChanges;
- (void)_registerForDeviceTokenChanges;
- (void)_apsDeviceTokenChanged:(id)arg1;
- (void)handlePushNotificationOnMailboxes:(id)arg1 missedNotifications:(_Bool)arg2;
- (void)_mailboxListingChanged;
- (id)mailboxNamesForPushRegistration;
- (id)_externalMailboxUids;
- (void)changePushedMailboxUidsAdded:(id)arg1 deleted:(id)arg2;
- (id)pushedMailboxUids;
- (_Bool)supportsUserPushedMailboxes;
- (void)_updatePushedMailboxesAndNotify:(_Bool)arg1;
- (id)_copyPushedMailboxesForPrefix:(id)arg1;
- (id)_copyUserPushedMailboxes;
- (id)_copyMailboxListPreferenceForKey:(id)arg1;
- (id)_copyMailboxListForNames:(id)arg1;
- (_Bool)canFetch;
- (_Bool)_registerPushNotificationPrefix:(id)arg1 forMailboxNames:(id)arg2;
- (id)registerPushNotificationPrefix:(id)arg1 forMailboxUids:(id)arg2;
- (id)notificationNamesForPrefix:(id)arg1 mailboxUids:(id)arg2;
- (id)_notesPrefix;
- (id)_notificationNameForMailbox:(id)arg1 withPrefix:(id)arg2;
- (void)serverRegisteredMailboxes:(id)arg1 withTopic:(id)arg2 version:(int)arg3;
- (_Bool)canReceiveNewMailNotifications;
- (_Bool)canAttemptPushRegistration;
- (_Bool)shouldRegisterForPush;
- (void)_schedulePushRegistrationConnection;
- (void)setAPSTopic:(id)arg1;
- (id)apsTopic;
- (void)updatePushRegisteredMailboxes:(id)arg1;
- (id)mailboxesRegisteredForPushByHash;
- (void)setSupportedPushServiceLevel:(int)arg1;
- (int)supportedPushServiceLevel;
- (void)setMustRegisterForPushOnNextConnection:(_Bool)arg1;
- (_Bool)mustRegisterForPushOnNextConnection;
- (void)setLastPushRegistration:(double)arg1;
- (double)lastPushRegistration;
- (_Bool)shouldRestoreMessagesAfterFailedDelete;
- (_Bool)shouldExpungeMessagesOnDelete;
- (_Bool)supportsMailboxEditing;
- (_Bool)supportsRemoteAppend;
- (_Bool)supportsAppend;
- (void)setLibrary:(id)arg1;
- (void)setConnectionTag:(unsigned int)arg1 forFlagChanges:(id)arg2 forMessages:(id)arg3;
- (void)setCommitTime:(double)arg1 forConnectionTag:(unsigned int)arg2;
- (void)removeFlagChangesCommittedBefore:(double)arg1;
- (void)removeFlagChanges:(id)arg1 forMessages:(id)arg2;
- (id)flagChangesForMailboxPath:(id)arg1 UID:(unsigned int)arg2 connectTime:(double)arg3;
- (void)addFlagChanges:(id)arg1 forMailboxPath:(id)arg2 UID:(unsigned int)arg3;
- (id)flagChangesLock;
- (void)setValueInAccountInfo:(id)arg1 forKey:(id)arg2;
- (id)_infoForMatchingURL:(id)arg1;
- (id)_URLScheme;
- (id)mailboxUidForRelativePath:(id)arg1 create:(_Bool)arg2;
- (_Bool)requiresDataForOfflineTransfersFromStore:(id)arg1;
- (_Bool)hasPendingOfflineOperations;
- (id)offlineCacheDirectoryPath;
- (id)offlineCache;
- (id)offlineCacheIfOffline;
- (id)offlineCacheIfExists;
- (void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(unsigned int)arg2;
- (id)_mailboxPathPrefix;
- (id)_fileSystemServerPathPrefix;
- (void)setServerPathPrefix:(id)arg1;
- (void)setServerPathPrefix:(id)arg1 shouldSync:(_Bool)arg2;
- (id)serverPathPrefixAccountValue;
- (id)serverPathPrefix;
- (_Bool)canMailboxBeDeleted:(id)arg1;
- (id)_mailboxUidForName:(id)arg1;
- (id)nameForMailboxUid:(id)arg1;
- (id)_nameForMailboxUid:(id)arg1;
- (id)_uidNameForPathComponent:(id)arg1;
- (id)_pathComponentForUidName:(id)arg1;
- (_Bool)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (_Bool)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id *)arg2;
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2;
- (void)_waitForMailboxListingLoadToComplete;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (void)fetchMailboxList;
- (void)_synchronizeAccountWithServer;
- (void)throttledGetMailboxListWithConnection:(id)arg1;
- (_Bool)getMailboxListWithConnection:(id)arg1 statusDataItems:(id)arg2 statusEntriesByMailbox:(id *)arg3;
- (_Bool)getMailboxListWithConnection:(id)arg1;
- (void)resetMailboxTimer;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (id)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(_Bool)arg4;
- (id)specialUseAttributesForMailbox:(id)arg1;
- (_Bool)isSpecialMailbox:(id)arg1;
- (id)allMailMailboxUid;
- (id)_specialMailboxUidWithType:(int)arg1 create:(_Bool)arg2;
- (id)specialUseAttributeForType:(int)arg1;
- (void)_renameLocalSpecialMailboxesToName:(id)arg1;
- (_Bool)isMailboxLocalForType:(int)arg1;
- (void)_setSpecialMailbox:(id)arg1 forType:(int)arg2;
- (_Bool)_deleteMailbox:(id)arg1;
- (id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5;
- (id)_listingForMailboxUid:(id)arg1 listAllChildren:(_Bool)arg2;
- (id)_listingForMailboxUid:(id)arg1 listAllChildren:(_Bool)arg2 onlySubscribed:(_Bool)arg3;
- (id)_listingForMailboxUid:(id)arg1 listAllChildren:(_Bool)arg2 onlySubscribed:(_Bool)arg3 statusDataItems:(id)arg4 withConnection:(id)arg5 statusEntriesByMailbox:(id *)arg6;
- (_Bool)xListSupportedOnConnection:(id)arg1;
- (id)fetchLimits;
- (void)_setCapabilities:(id)arg1;
- (id)lastKnownCapabilities;
- (id)separatorChar;
- (void)_updateSeparatorAndNamespaceWithConnection:(id)arg1;
- (void)setIsOffline:(_Bool)arg1;
- (_Bool)isOffline;
- (_Bool)canGoOffline;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(CDStruct_1f207a6d *)arg3;
- (_Bool)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(CDStruct_1f207a6d *)arg3;
- (void)connectionDidDisconnect:(id)arg1;
- (void)releaseNetworkAssertion;
- (void)acquireNetworkAssertion;
- (void)setHandlerForOfflineCacheFlush:(CDUnknownBlockType)arg1;
- (void)networkChanged;
- (void)flushOfflineCache;
- (void)_flushOfflineCache;
- (void)releaseAllConnectionsIdleForTimeInterval:(double)arg1;
- (void)releaseAllForcedConnections;
- (void)releaseAllConnections;
- (void)_releaseAllConnectionsAndCallSuper:(_Bool)arg1;
- (void)_releaseAllConnectionsAndCallSuper:(_Bool)arg1 edgeForcedOnly:(_Bool)arg2 ifIdleForTimeInterval:(double)arg3 saveOfflineCache:(_Bool)arg4;
- (void)_invokeBlock:(CDUnknownBlockType)arg1;
- (void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(int)arg3;
- (void)unselectMailbox:(id)arg1;
- (void)checkInConnectionsForStore:(id)arg1;
- (void)checkInConnection:(id)arg1 destroy:(_Bool)arg2;
- (void)checkInConnection:(id)arg1;
- (void)_purgeStaleFlagChanges;
- (id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3;
- (_Bool)connectAndAuthenticate:(id)arg1;
- (_Bool)deleteInPlaceForMailbox:(id)arg1;
- (_Bool)deleteInPlaceForAllMailboxes;
- (void)setAllowsPartialDownloads:(_Bool)arg1;
- (_Bool)allowsPartialDownloads;
- (unsigned int)minimumPartialDownloadSize;
- (id)_dataForTemporaryUid:(unsigned int)arg1;
- (void)setReadBufferSize:(unsigned int)arg1;
- (unsigned int)readBufferSize;
- (id)errorForResponse:(id)arg1;
- (void)handleOverQuotaResponse:(id)arg1;
- (void)handleAlertResponse:(id)arg1;
- (id)clientToken;
- (void)setStoreMailboxType:(int)arg1 onServer:(_Bool)arg2;
- (_Bool)storeMailboxTypeOnServer:(int)arg1;
- (_Bool)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (void)_didSynchronizeMailboxCachesAndFoundChanges:(_Bool)arg1;
- (_Bool)needToSynchronizeMailboxCaches;
- (void)setCompactWhenClosingMailboxes:(_Bool)arg1;
- (_Bool)compactWhenClosingMailboxes;
- (Class)connectionClass;
- (_Bool)requiresAuthentication;
- (id)secureServiceName;
- (id)serviceName;
- (void)setDisplayName:(id)arg1;
- (id)mailboxPathExtension;
- (Class)storeClass;
- (id)hostname;
- (id)statisticsKind;
- (void)saveState;
- (void)dealloc;
- (void)_writeCustomInfoToMailboxCache:(id)arg1;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (unsigned long long)minID;
- (unsigned long long)minUID;
- (unsigned long long)greatestInboxUid;
- (void)messagesAdded:(id)arg1;
- (id)certUIService;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (id)mf_lockOrdering;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

