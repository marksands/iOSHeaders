//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface CUIRuntimeStatistics : NSObject
{
    long long _wasted_size;
    long long _total_size;
    long long _shortCircuitImageLookup;
    long long _total_lookup;
    NSObject<OS_dispatch_queue> *_queue;
    int _notify_token;
}

+ (void)generateLog;
+ (id)sharedRuntimeStatistics;
- (void)incrementStatisticLookup;
- (void)incrementStatisticDidShortCircuitImageLookup;
- (void)addStatisticAllocatedImageSize:(unsigned long long)arg1 roundedSize:(unsigned long long)arg2;
- (void)_logStatistics:(int)arg1;
- (void)dealloc;
- (id)init;

@end

