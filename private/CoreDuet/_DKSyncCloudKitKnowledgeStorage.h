//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContainer, CKServerChangeToken, NSHashTable, NSMutableDictionary, NSMutableSet, NSOperation, _DKSyncPeerStatusTracker, _DKThrottledActivity;

@interface _DKSyncCloudKitKnowledgeStorage : NSObject
{
    _Bool _started;
    id <_DKKeyValueStore> _keyValueStore;
    _DKThrottledActivity *_activityThrottler;
    _DKSyncPeerStatusTracker *_tracker;
    _Bool _cloudSyncAvailablityObserverRegistered;
    CKContainer *_container;
    double _updateSyncedDeviceIdentifiersBackoffTimeInterval;
    NSMutableDictionary *_zoneIDsBySourceDeviceID;
    NSMutableSet *_zoneIDsWithAdditionChanges;
    NSMutableSet *_zoneIDsWithDeletionChanges;
    CKServerChangeToken *_fetchDatabaseChangesServerChangeToken;
    NSOperation *_previousDependentOperation;
    NSHashTable *_outstandingOperations;
    _Bool _available;
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

+ (id)deviceIDFromZoneID:(id)arg1;
+ (id)zoneIDWithDeviceID:(id)arg1;
+ (void)setMySyncZoneID:(id)arg1;
+ (id)mySyncZoneID;
+ (id)sharedInstance;
@property(getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(retain) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)transportType;
- (id)name;
- (void)syncUpToCloudWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setFetchDelegate:(id)arg1;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 deletedRecordIDsAndTypes:(id)arg2 attempt:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_resetPreviousServerChangeTokenForRecordZoneID:(id)arg1;
- (void)_setPreviousServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (id)_previousServerChangeTokenForRecordZoneID:(id)arg1;
- (id)_previousServerChangeTokenKeyForRecordZoneID:(id)arg1;
- (void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)syncDownAdditionsFromCloudWithZoneID:(id)arg1 creationDateBetweenDate:(id)arg2 andDate:(id)arg3 streamNames:(id)arg4 limit:(unsigned long long)arg5 fetchOrder:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)fetchEventsFromPeer:(id)arg1 creationDateBetweenDate:(id)arg2 andDate:(id)arg3 streamNames:(id)arg4 limit:(unsigned long long)arg5 fetchOrder:(long long)arg6 highPriority:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)commitFetchDatabaseChangesServerChangeToken;
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeSourceDeviceIdentifierWithRecordZoneID:(id)arg1;
- (void)fastForwardPastDeletionsInZoneWithZoneID:(id)arg1;
- (void)configurePeerWithSourceDeviceID:(id)arg1 zoneID:(id)arg2;
- (void)addSourceDeviceIdentifierWithRecordZoneID:(id)arg1;
- (void)fetchChangedZonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_storeZoneIDFromRecords:(id)arg1 orError:(id)arg2;
- (void)_createZoneWithZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setZoneIDsBySourceDeviceID:(id)arg1;
- (void)configureCloudPseudoPeerWithMySyncZoneID:(id)arg1;
- (void)scheduleRetryUpdateSyncedDeviceIdentifiers;
- (void)finishUpdatingSyncedDeviceIdentifiersWithMySyncZoneID:(id)arg1 orError:(id)arg2 zoneIDsBySourceDeviceID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateSyncedDeviceIdentifiersWithRecordZonesByZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performThrottledUpdateSyncedDeviceIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)performUpdateSyncedDeviceIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_queueOperationForPrivateCloudDatabase:(id)arg1 dependent:(_Bool)arg2 policy:(id)arg3 error:(id *)arg4;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)_registerCloudSyncAvailablityObserver;
- (void)cancelOutstandingOperations;
- (void)start;
- (void)dealloc;
- (id)init;

@end

