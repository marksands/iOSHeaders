//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKHealthStore, HKQuery, NSDateInterval, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface HKHeartRateQueryUtility : NSObject
{
    HKHealthStore *_healthStore;
    NSDateInterval *_dateInterval;
    long long _timeScope;
    HKQuery *_heartRateQuery;
    HKQuery *_restingHeartRateQuery;
    HKQuery *_walkingHeartRateQuery;
    HKQuery *_workoutQuery;
    HKQuery *_breatheQuery;
    HKQuery *_stationaryDiscordanceQuery;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSMutableDictionary *_sampleResults;
    CDUnknownBlockType _resultsHandler;
}

+ (id)orderedDisplayTypeContextResults:(id)arg1;
+ (id)_histogramQueryForContext:(long long)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_displayTypeQueryForContext:(long long)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_queryForContext:(long long)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (long long)_contextStyleForDisplayTypeContext:(long long)arg1;
+ (id)_quantityTypeForDisplayTypeContext:(long long)arg1;
+ (id)_statisticsDateComponentsForTimeScope:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property(retain, nonatomic) NSMutableDictionary *sampleResults; // @synthesize sampleResults=_sampleResults;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // @synthesize resourceQueue=_resourceQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) HKQuery *stationaryDiscordanceQuery; // @synthesize stationaryDiscordanceQuery=_stationaryDiscordanceQuery;
@property(retain, nonatomic) HKQuery *breatheQuery; // @synthesize breatheQuery=_breatheQuery;
@property(retain, nonatomic) HKQuery *workoutQuery; // @synthesize workoutQuery=_workoutQuery;
@property(retain, nonatomic) HKQuery *walkingHeartRateQuery; // @synthesize walkingHeartRateQuery=_walkingHeartRateQuery;
@property(retain, nonatomic) HKQuery *restingHeartRateQuery; // @synthesize restingHeartRateQuery=_restingHeartRateQuery;
@property(retain, nonatomic) HKQuery *heartRateQuery; // @synthesize heartRateQuery=_heartRateQuery;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) __weak HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (void)stop;
- (void)execute;
- (id)contextResultForContext:(long long)arg1 statistics:(id)arg2;
- (void)setupQueries;
- (id)initWithHealthStore:(id)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 resultsHandler:(CDUnknownBlockType)arg4;

@end

