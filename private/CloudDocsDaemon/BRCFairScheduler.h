//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

__attribute__((visibility("hidden")))
@interface BRCFairScheduler : NSObject
{
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    unsigned long long _maxRegistedSourceBit;
    unsigned long long _lastVisitedBit;
    NSMutableDictionary *_sourceForBitIndex;
}

- (void).cxx_destruct;
- (void)close;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (void)schedule;
- (void)signalSourceForBitIndex:(unsigned long long)arg1;
- (id)sourceForBitIndex:(unsigned long long)arg1;
- (void)unregisterSources;
- (void)addSource:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (id)initWithQueue:(id)arg1 name:(id)arg2;

@end

