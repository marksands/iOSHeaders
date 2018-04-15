//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMDCloudChangeTree, HMDCloudGroup, NSArray, NSMutableArray;

@interface HMDCloudGroupChange : HMFObject
{
    _Bool _temporaryCache;
    _Bool _decryptionFailed;
    _Bool _encryptionFailed;
    _Bool _controllerIdentifierChanged;
    HMDCloudGroup *_cloudGroup;
    HMDCloudChangeTree *_cloudChangeTree;
    NSMutableArray *_cloudChanges;
    NSMutableArray *_processingCloudChanges;
    NSMutableArray *_processedCloudChanges;
}

+ (id)shortDescription;
@property(retain, nonatomic) NSMutableArray *processedCloudChanges; // @synthesize processedCloudChanges=_processedCloudChanges;
@property(retain, nonatomic) NSMutableArray *processingCloudChanges; // @synthesize processingCloudChanges=_processingCloudChanges;
@property(retain, nonatomic) NSMutableArray *cloudChanges; // @synthesize cloudChanges=_cloudChanges;
@property(retain, nonatomic) HMDCloudChangeTree *cloudChangeTree; // @synthesize cloudChangeTree=_cloudChangeTree;
@property(readonly, nonatomic) __weak HMDCloudGroup *cloudGroup; // @synthesize cloudGroup=_cloudGroup;
@property(nonatomic) _Bool controllerIdentifierChanged; // @synthesize controllerIdentifierChanged=_controllerIdentifierChanged;
@property(nonatomic) _Bool encryptionFailed; // @synthesize encryptionFailed=_encryptionFailed;
@property(nonatomic) _Bool decryptionFailed; // @synthesize decryptionFailed=_decryptionFailed;
@property(readonly, nonatomic, getter=isTemporaryCache) _Bool temporaryCache; // @synthesize temporaryCache=_temporaryCache;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *objectChanges;
- (_Bool)isRootRecord:(id)arg1;
- (_Bool)isRootRecordName:(id)arg1;
- (void)flushAllChangesToCache;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)resetRecordWithRecordID:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (void)fetchBatchToUpload:(CDUnknownBlockType)arg1;
- (void)removeChangeWithObjectID:(id)arg1;
- (void)_removeChange:(id)arg1;
- (void)addChange:(id)arg1 setAsProcessing:(_Bool)arg2;
- (void)collectRecordsForBatch;
- (void)addRootRecordChange;
- (id)rootRecordModelObject;
@property(readonly, nonatomic, getter=isRootRecordRequired) _Bool rootRecordRequired;
- (void)setAllChangedAsProcessed;
- (void)setAsProcessedChange:(id)arg1;
- (_Bool)moreChangesToProcess;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(CDUnknownBlockType)arg1;
- (void)loadCloudRecordsFromCache:(CDUnknownBlockType)arg1;
- (void)_initializeCloudChanges;
- (void)loadCloudChangeTreeFromCache:(CDUnknownBlockType)arg1;
- (void)_loadTreeWithRecordMapping:(id)arg1;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)_addChangeWithDeletedCloudRecord:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
- (id)cloudRecordWithName:(id)arg1;
- (id)changeWithRecordName:(id)arg1;
- (id)cachedCloudRecordWithObjectID:(id)arg1;
- (void)cachedCloudRecordWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cloudRecordWithObjectID:(id)arg1;
- (id)changeWithObjectID:(id)arg1;
@property(readonly, nonatomic) _Bool hasValidChanges;
@property(readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property(readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
- (id)description;
- (id)shortDescription;
- (id)initWithGroup:(id)arg1 temporaryCache:(_Bool)arg2;
- (id)init;

@end

