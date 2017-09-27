//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"

@class APSConnection, NSArray, NSObject<OS_dispatch_queue>, NSString, _DKKnowledgeStorage, _DKSyncState;

@interface _DKSyncCoordinator : NSObject <APSConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSString *_triggeredSyncDelayActivityName;
    NSString *_syncActivityName;
    _DKSyncState *_syncState;
    _Bool _periodJobIsRegistered;
    _Bool _databaseObserversRegistered;
    _Bool _cloudSyncAvailablityObserverRegistered;
    _Bool _siriSyncEnabledObserverRegistered;
    _Bool _syncPolicyChangedObserverRegistered;
    APSConnection *_connection;
    _Bool _triggeredSyncObserverRegistered;
    NSArray *_streamNamesObservedForAdditions;
    NSArray *_streamNamesObservedForDeletions;
    _DKKnowledgeStorage *_storage;
}

+ (void)validateConfigurationWithStorePath:(id)arg1;
@property(readonly, nonatomic) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)deleteRemoteStateWithReply:(CDUnknownBlockType)arg1;
- (void)_deleteRemoteCloudEventsAndStorage;
- (void)_deleteRemoteCloudEvents;
- (void)_destroyPushConnection;
- (void)_createPushConnection;
- (void)_unregisterSyncPolicyChangedObserver;
- (void)_registerSyncPolicyChangedObserver;
- (void)_syncPolicyDidChange:(id)arg1;
- (void)_unregisterSiriSyncEnabledObserver;
- (void)_registerSiriSyncEnabledObserver;
- (void)_deleteSiriSyncData;
- (void)_siriSyncEnabledDidChange;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)_registerCloudSyncAvailablityObserver;
- (void)_cloudSyncDidReset:(id)arg1;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_unregisterDatabaseObservers;
- (void)_registerDatabaseObservers;
- (void)_databaseDidDeleteFromStream:(id)arg1;
- (void)_databaseDidDeleteFromStreamName:(id)arg1;
- (void)_databaseDidAddToStream:(id)arg1;
- (void)_databaseDidAddToStreamName:(id)arg1;
- (void)_checkIfNumChangesTriggersSync;
- (void)_databaseDidHaveInsertsAndDeletesWithInsertsAndDeletesCount:(unsigned long long)arg1;
- (void)_databaseDidHaveInsertsAndDeletes:(id)arg1;
- (void)_unregisterPeriodicJob;
- (void)_registerPeriodicJob;
- (double)_intervalForJobGivenPolicy:(id)arg1 isSingleDevice:(_Bool)arg2;
- (void)_performPeriodicJob;
- (void)_sendNotificationsForCreatedDeletionChangeSet:(id)arg1;
- (void)_sendNotificationsForCreatedAdditionChangeSet:(id)arg1;
- (void)_sendNotificationsForCreatedChangeSet:(id)arg1;
- (void)_sendNotificationsForAppliedRemoteDeletionChangeSet:(id)arg1 deleted:(unsigned long long)arg2;
- (void)_sendNotificationsForAppliedRemoteAdditionChangeSet:(id)arg1;
- (_Bool)_performSyncUpWithPolicy:(id)arg1 queryStartDate:(id)arg2 localChangeSets:(id)arg3 error:(id *)arg4;
- (_Bool)_performSyncDownWithPolicy:(id)arg1 deletionChangeSets:(id)arg2;
- (_Bool)_performSyncDownWithPolicy:(id)arg1 additionChangeSets:(id)arg2;
- (_Bool)_performSyncDownWithPolicy:(id)arg1 queryStartDate:(id)arg2 error:(id *)arg3;
- (id)_prunedAdditionChangeSetsFromSyncChanges:(id)arg1;
- (id)_prunedAdditionChangeSets:(id)arg1 withDevicesToPrune:(id)arg2;
- (id)_fetchLocalChangeSetsSinceQueryStartDate:(id)arg1 error:(id *)arg2;
- (void)_deleteEventsForDevices:(id)arg1;
- (_Bool)_device:(id)arg1 hasMissingChangeSetInDeletionChangeSets:(id)arg2;
- (id)_changeSetsByDeviceFromChangeSets:(id)arg1;
- (void)__performSyncWithPolicy:(id)arg1 isTriggeredSync:(_Bool)arg2 localChangeSets:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_performSyncWithPolicy:(id)arg1 isTriggeredSync:(_Bool)arg2 localChangeSets:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)performSyncWithPolicy:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_queryStartDateGivenPolicy:(id)arg1 lastQueryEndDate:(id)arg2 isTriggeredSync:(_Bool)arg3;
- (id)changeSetForSyncWithTombstones:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id *)arg4;
- (id)changeSetForSyncWithInsertedObjects:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id *)arg4;
- (void)syncWithReply:(CDUnknownBlockType)arg1;
- (void)_setIfHigherSequenceNumber:(unsigned long long)arg1 ofLastDeletionChangeSetProcessedFromDevice:(id)arg2;
- (unsigned long long)_sequenceNumberOfLastDeletionChangeSetProcessedFromDevice:(id)arg1;
- (void)_setLastChangeCount:(unsigned long long)arg1;
- (unsigned long long)_lastChangeCount;
- (void)_addLastSyncDate:(id)arg1;
- (id)_lastDaySyncDates;
- (id)_lastSyncUpToCloudDate;
- (void)_setLastSyncUpToCloudDate:(id)arg1;
- (id)_lastSyncDownFromCloudDate;
- (void)_setLastSyncDownFromCloudDate:(id)arg1;
- (id)_lastLocalQueryEndDate;
- (void)_setLastLocalQueryEndDate:(id)arg1;
- (id)_lastSyncQueryEndDate;
- (void)_setLastSyncQueryEndDate:(id)arg1;
- (void)_deleteAllRemoteSyncDataIfSiriCloudSyncHasBeenDisabled;
- (void)_possiblyPerformInitialSync;
- (void)_performSyncTogglesChangedActions;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

