//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKHeartRateSummary, HKHeartRateSummaryStatistics, HKQuantity, NSDateInterval, NSMutableArray, NSMutableDictionary;

@interface HDActivityCacheHeartRateStatisticsBuilder : NSObject
{
    NSDateInterval *_dateInterval;
    long long _activityCacheIndex;
    vector_4f6645df _heartRateSamples;
    vector_53e1d725 _workouts;
    HKQuantity *_restingHeartRate;
    HKQuantity *_walkingAverageHeartRate;
    HKHeartRateSummaryStatistics *_allDayStatistics;
    NSMutableArray *_workoutStatistics;
    NSMutableArray *_workoutRecoveryStatistics;
    NSMutableArray *_breatheStatistics;
    NSMutableDictionary *_averageCalculatorsByWorkoutUUID;
    NSMutableDictionary *_recoveryReadingsByWorkoutUUID;
    NSMutableDictionary *_breatheSessionReadingsBySessionUUID;
    NSMutableDictionary *_breatheSessionDateIntervalBySessionUUID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateMetricsForBreatheStatistics:(id)arg1;
- (id)_sessionReadingsForBreatheStatistics:(id)arg1;
- (void)addBreatheSessions:(const vector_b2eb559c *)arg1;
- (void)_updateMetricsForWorkoutRecoveryStatistics:(id)arg1;
- (id)_filteredRecoveryReadings:(id)arg1;
- (id)_recoveryReadingsForWorkoutStatistics:(id)arg1;
- (void)_updateMetricsForWorkoutStatistics:(id)arg1;
- (id)_averageCalculatorForWorkoutStatistics:(id)arg1;
- (void)_addHeartRateStatisticsForNewWorkouts:(const vector_53e1d725 *)arg1;
- (void)addWorkouts:(const vector_53e1d725 *)arg1;
- (void)_updateMetricsForSessionStatistics:(id)arg1;
- (void)_addBeatsPerMinute:(double)arg1 date:(id)arg2 toSessionStatistics:(id)arg3;
- (void)_addHeartRateSamples:(const vector_4f6645df *)arg1 toStatistics:(id)arg2;
- (void)_addHeartRateSamplesToAllStatistics:(const vector_4f6645df *)arg1;
- (void)addHeartRateSamples:(const vector_4f6645df *)arg1;
- (id)heartRateDateInterval;
- (id)walkingAverageHeartRate;
- (id)restingHeartRate;
@property(readonly, nonatomic) HKHeartRateSummary *heartRateSummary;
- (id)initWithDateInterval:(id)arg1 activityCacheIndex:(long long)arg2;

@end
