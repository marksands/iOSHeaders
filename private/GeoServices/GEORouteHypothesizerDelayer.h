//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEORouteHypothesizer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerDelayer : NSObject
{
    struct __CFBinaryHeap *_minHeap;
    GEORouteHypothesizer *_nextHypothesizer;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (void)checkin;
- (void).cxx_destruct;
- (void)dealloc;
- (void)delayStartOfHypothesizer:(id)arg1;
- (void)_setNextHypothesizer:(id)arg1;
- (void)_startValidHypothesizers;
- (id)init;

@end

