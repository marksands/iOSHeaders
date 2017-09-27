//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKAnchoredObjectQuery, HKHealthStore, HKSampleQuery, HKWorkout, NSArray, NSDate, _HKSampleQueryUtility;

@interface _HKWorkoutRecoveryHeartRateQueryUtility : NSObject
{
    HKHealthStore *_healthStore;
    HKWorkout *_workout;
    HKSampleQuery *_heartRateQuery;
    HKAnchoredObjectQuery *_workoutQuery;
    _HKSampleQueryUtility *_workoutQueryUtility;
    NSArray *_heartRateSamples;
    NSDate *_workoutRecoveryEndDate;
    CDUnknownBlockType _resultsHandler;
}

+ (id)perMinuteWorkoutRecoveryHeartRateFromHeartRateObjects:(id)arg1 workoutEndDate:(id)arg2 dateFromHeartRateBlock:(CDUnknownBlockType)arg3;
+ (id)perMinuteWorkoutRecoveryHeartRateFromHeartRates:(id)arg1 workoutEndDate:(id)arg2;
+ (id)perMinuteWorkoutRecoveryHeartRateFromReadings:(id)arg1 workoutEndDate:(id)arg2;
+ (id)workoutRecoveryHeartRatesForWorkout:(id)arg1 recoveryDateInterval:(id)arg2 heartRates:(id)arg3;
+ (id)workoutRecoveryDateIntervalForWorkout:(id)arg1 overlappingWorkouts:(id)arg2;
+ (id)predicateForWorkoutRecoveryTimeWithWorkout:(id)arg1;
+ (id)_recoveryEndDateWithStartDate:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
- (void).cxx_destruct;
- (void)stop;
- (void)execute;
- (void)heartRatesPostWorkout:(id)arg1 recoveryInterval:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupQueries;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1 workout:(id)arg2 resultsHandler:(CDUnknownBlockType)arg3;

@end

