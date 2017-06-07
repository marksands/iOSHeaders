//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKServerChangeToken, HDCloudSyncOperationConfiguration, HDCloudSyncStore, HDCloudSyncStoreRecord, NSMutableArray, _HDCloudSyncStorePersistableState;
@protocol OS_dispatch_queue;

@interface HDCloudSyncPullOperation : NSObject
{
    HDCloudSyncOperationConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    HDCloudSyncStoreRecord *_storeRecord;
    HDCloudSyncStore *_syncStore;
    _HDCloudSyncStorePersistableState *_persistedStoreState;
    NSMutableArray *_fetchedChangeRecords;
    CKServerChangeToken *_serverChangeToken;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)_queue_endFetchChangesOperation:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (_Bool)_applySyncChanges:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (id)_zipArchiveExtractorForChangeRecord:(id)arg1 assetContentInMemory:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_persistFetchedChangeRecord:(id)arg1 assetContentInMemory:(_Bool)arg2 error:(id *)arg3;
- (void)_fetchRecordsCompletionForOperation:(id)arg1 recordsByRecordID:(id)arg2 operatioError:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_perRecordCompletionForOperation:(id)arg1 record:(id)arg2 recordID:(id)arg3 recordAssetContentInMemory:(_Bool)arg4 error:(id)arg5 errorCompletion:(CDUnknownBlockType)arg6;
- (void)_queue_fetchAssetForChangeRecord:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (_Bool)_shouldApplyAnchorRangeMap:(id)arg1 receivedAnchorMap:(id)arg2;
- (id)_queue_requiredRecordsWithFetchedChangeRecords:(id)arg1;
- (_Bool)_isValidChangeRecord:(id)arg1;
- (void)_recordChangedForOperation:(id)arg1 record:(id)arg2;
- (_Bool)_queue_updatePersistedServerChangeToken:(id)arg1 error:(id *)arg2;
- (void)_recordZoneFetchCompletionForOperation:(id)arg1 recordZoneID:(id)arg2 serverChangeToken:(id)arg3 recordZoneError:(id)arg4;
- (void)_queue_fetchAssetsForOrderedChangeRecords:(id)arg1 operation:(id)arg2;
- (void)_queue_helpFetchAssetsForOrderedChangeRecords:(id)arg1 operation:(id)arg2 recordIndex:(long long)arg3;
- (void)_fetchRecordZoneChangesCompletionForOperation:(id)arg1 error:(id)arg2;
- (void)_queue_setupAndTriggerFetchChangesOperation:(id)arg1 store:(id)arg2;
- (id)_getFetchChangesOperationForStore:(id)arg1 error:(id *)arg2;
- (void)_queue_pullFromStore:(id)arg1;
- (void)_queue_startPullOperation;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1 storeRecord:(id)arg2;

@end

