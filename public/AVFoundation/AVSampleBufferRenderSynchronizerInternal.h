//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference, NSMutableArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface AVSampleBufferRenderSynchronizerInternal : NSObject
{
    AVWeakReference *weakObserver;
    struct OpaqueCMTimebase *readOnlyTimebase;
    NSObject<OS_dispatch_queue> *rateQueue;
    float rate;
    NSObject<OS_dispatch_queue> *rendererListQueue;
    NSMutableArray *renderers;
    NSMutableArray *timedRenderRemovals;
    NSObject<OS_dispatch_queue> *figSynchronizerAccessQueue;
    struct OpaqueFigSampleBufferRenderSynchronizer *figSynchronizer;
}

@end

