//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface NAUIUsageStatistics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_nextAllowedUsageEventType;
    NSString *_usageStatisticsDomain;
}

+ (id)sharedUsageStatisticsForDomain:(id)arg1;
+ (id)voiceMemoUsageStatistics;
@property(readonly, nonatomic) NSString *usageStatisticsDomain; // @synthesize usageStatisticsDomain=_usageStatisticsDomain;
- (void).cxx_destruct;
- (void)_incrementUsageCountForEventWithUsageStatisticName:(id)arg1 statisticType:(long long)arg2;
- (void)_pushDistributionStatisticNamed:(id)arg1 value:(double)arg2;
- (id)_eventKeyForUsageStatisticName:(id)arg1 groupingKey:(id)arg2;
- (void)pushDistributionStatisticNamed:(id)arg1 value:(double)arg2;
- (void)incrementUsageStatisticNamed:(id)arg1 statisticType:(long long)arg2;
- (id)initWithUsageStatisticsDomain:(id)arg1;

@end

