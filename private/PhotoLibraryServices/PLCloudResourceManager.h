//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>, PLCloudResourcePrefetchManager, PLCloudResourcePruneManager;

@interface PLCloudResourceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    _Bool _enqueuedOperation;
}

- (id)statusForDebug:(_Bool)arg1;
- (void)stop;
- (void)updateCacheDeletePurgeableAmount;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(_Bool)arg1;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithCPLManager:(id)arg1;
- (id)init;

@end

