//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDFetchRecordsOperation, CKDRecordCache, NSDictionary, NSMutableDictionary, NSObject, NSSet;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDRecordFetchAggregator : CKDDatabaseOperation
{
    CKDRecordCache *_recordCache;
    _Bool _fetchAssetContents;
    _Bool _preserveOrdering;
    _Bool _started;
    _Bool _markedToFinishByParent;
    _Bool _forceDecryptionAttempt;
    CDUnknownBlockType _fetchAggregatorCompletionBlock;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
    NSSet *_desiredKeys;
    NSObject<OS_dispatch_source> *_recordReadySource;
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSObject<OS_dispatch_source> *_fetchSource;
    NSObject<OS_dispatch_group> *_fetchGroup;
    NSMutableDictionary *_fetchInfosByOrder;
    unsigned long long _curFetchOrder;
    unsigned long long _highestReturnedOrder;
    CKDFetchRecordsOperation *_currentFetchOp;
}

@property(nonatomic) _Bool forceDecryptionAttempt; // @synthesize forceDecryptionAttempt=_forceDecryptionAttempt;
@property(getter=isMarkedToFinishByParent) _Bool markedToFinishByParent; // @synthesize markedToFinishByParent=_markedToFinishByParent;
@property _Bool started; // @synthesize started=_started;
@property(nonatomic) __weak CKDFetchRecordsOperation *currentFetchOp; // @synthesize currentFetchOp=_currentFetchOp;
@property unsigned long long highestReturnedOrder; // @synthesize highestReturnedOrder=_highestReturnedOrder;
@property unsigned long long curFetchOrder; // @synthesize curFetchOrder=_curFetchOrder;
@property(retain, nonatomic) NSMutableDictionary *fetchInfosByOrder; // @synthesize fetchInfosByOrder=_fetchInfosByOrder;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *fetchSource; // @synthesize fetchSource=_fetchSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource; // @synthesize recordReadySource=_recordReadySource;
@property(retain, nonatomic) NSSet *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) _Bool preserveOrdering; // @synthesize preserveOrdering=_preserveOrdering;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(nonatomic) _Bool fetchAssetContents; // @synthesize fetchAssetContents=_fetchAssetContents;
@property(copy, nonatomic) CDUnknownBlockType fetchAggregatorCompletionBlock; // @synthesize fetchAggregatorCompletionBlock=_fetchAggregatorCompletionBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_finishRecordFetchAggregator;
- (void)finishIfAppropriate;
- (void)fetchRecordFromResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)main;
- (void)_addRecordFetchInfo:(id)arg1;
- (void)_recordFetchesAvailable;
- (void)_lockedSendFetchRequest;
- (void)_flushFetchedRecordsToConsumerLocked;
- (void)_flushFetchedRecordsToConsumerNoOrderingLocked;
- (void)_flushFetchedRecordsToConsumerOrderedLocked;
- (void)_performCallbackForFetchInfoLocked:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (void)dealloc;
@property(readonly, nonatomic) CKDRecordCache *recordCache;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

