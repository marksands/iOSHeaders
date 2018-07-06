//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import "CPLAbstractObject.h"
#import "CPLBatchExtractionStrategyStorage.h"

@class CPLBatchExtractionStrategy, CPLPlatformObject, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CPLEnginePushRepository : CPLEngineStorage <CPLAbstractObject, CPLBatchExtractionStrategyStorage>
{
    NSMutableDictionary *_propertiesPerClass;
    CPLBatchExtractionStrategy *_extractionStrategy;
    NSString *_lastStrategyName;
    NSObject<OS_dispatch_queue> *_uploadRateQueue;
    NSObject<OS_dispatch_queue> *_timingStatisticQueue;
    NSDate *_lastUploadRateUpdateDate;
    NSMutableDictionary *_timingStatistics;
    double _lastApproximativeUploadRate;
}

- (void).cxx_destruct;
- (id)status;
- (_Bool)isEmpty;
- (id)_timingStatisticStatuses;
- (void)updateTimingStatisticForKey:(id)arg1 duration:(double)arg2 recordCount:(unsigned long long)arg3 error:(_Bool)arg4;
@property(readonly, nonatomic) unsigned long long maximumResourceSizePerBatch;
- (void)updateApproximativeUploadRate:(double)arg1;
- (_Bool)removeChange:(id)arg1 error:(id *)arg2;
- (id)allChangesWithScopeIdentifier:(id)arg1;
- (id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2;
- (id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;
- (id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3;
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(_Bool)arg3;
- (id)changeWithScopedIdentifier:(id)arg1;
@property(retain, nonatomic) CPLBatchExtractionStrategy *extractionStrategy;
- (id)storedExtractedBatch;
- (_Bool)reinjectExtractedBatch:(id)arg1 overwrittenRecordIdentifiers:(id *)arg2 error:(id *)arg3;
- (_Bool)storeExtractedBatch:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAllChangesWithError:(id *)arg1;
- (_Bool)discardChangeWithScopedIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)hasSomeChangeWithScopedIdentifier:(id)arg1;
- (_Bool)reinjectChange:(id)arg1 dequeueOrder:(long long)arg2 overwrittenRecord:(_Bool *)arg3 error:(id *)arg4;
- (id)_completeChange:(id)arg1;
- (id)_propertiesForChange:(id)arg1;
- (_Bool)storeChange:(id)arg1 uploadIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)hasChangesWithScopeFilter:(id)arg1;
- (_Bool)hasChangesInScopeWithIdentifier:(id)arg1;
- (unsigned long long)countOfChangesInScopeWithIdentifier:(id)arg1;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (unsigned long long)scopeType;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

