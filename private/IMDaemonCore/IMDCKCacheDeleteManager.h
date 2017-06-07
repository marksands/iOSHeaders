//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IMDCKCacheDeleteManager : NSObject
{
}

+ (id)sharedInstance;
- (void)_fetchTransfersFromCloudKit:(id)arg1 indexOfTransfers:(unsigned long long)arg2 numberOfBatchesToFetch:(unsigned long long)arg3;
- (_Bool)_shouldFetchNextBatch:(unsigned long long)arg1 totalTransfers:(id)arg2;
- (unsigned long long)_indexOfNextBatch:(id)arg1 totalTransfers:(id)arg2 indexOfTransfers:(unsigned long long)arg3;
- (id)_getIndexSetForBatch:(id)arg1 indexOfTransfers:(unsigned long long)arg2;
- (void)_fetchTransfersFromCloudKit:(id)arg1;
- (id)_randomSampleOfFileTransfers:(struct __CFArray *)arg1 bytesToFreeUp:(long long)arg2;
- (void)metricAttachmentsToPurge:(long long)arg1;
- (void)_postTransferInfoOfDeletedTransfers:(id)arg1;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)arg1;
- (id)_fileTransfersToDelete:(struct __CFArray *)arg1;
- (long long)purgeAttachments:(long long)arg1;
- (long long)purgeableAttachmentSize;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)arg1 urgency:(int)arg2;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)arg1 urgency:(int)arg2;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)arg1;
- (long long)_purgeableSpaceGivenUrgency:(int)arg1;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)arg1 urgency:(int)arg2;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)arg1 urgency:(int)arg2;
- (id)reportAvailableSpaceToBeDeleted:(id)arg1 urgency:(int)arg2;
- (void)_cacheDeleteSetUp;
- (void)registerWithCacheDelete;
- (id)_ckUtilitiesSharedInstance;

@end

