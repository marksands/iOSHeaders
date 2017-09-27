//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSOperationQueue, NSProgress;

@interface BRTransfersStatusManager : NSObject
{
    NSMutableArray *_transfers;
    NSOperationQueue *_queue;
    NSProgress *_globalUploadProgress;
    NSProgress *_globalDownloadProgress;
    NSMutableArray *_coordinators;
    id _globalProgressSubscriber;
    unsigned long long _shouldHideGlobalDownloadProgressCount;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)_progressSubscription;
- (void)_setGlobalProgress:(id)arg1 forIvar:(id *)arg2;
- (void)insertTransfer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addTransfer:(id)arg1;
- (void)removeTransfer:(id)arg1;
- (void)stopObservingItemDownloadProgress:(id)arg1;
- (id)startObservingItemDownloadProgressAtURL:(id)arg1;
- (void)downloadAndObserveItemAtURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSArray *transfers; // @synthesize transfers=_transfers;
- (void)dealloc;
- (id)init;

@end

