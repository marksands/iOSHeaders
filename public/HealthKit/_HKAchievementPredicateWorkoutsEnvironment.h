//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class NSArray, _HKAchievementPredicateWorkoutEnvironment;

@interface _HKAchievementPredicateWorkoutsEnvironment : _HKBaseAchievementPredicateEnvironment
{
    _HKAchievementPredicateWorkoutEnvironment *_addedWorkout;
    NSArray *_allWorkoutTimeZoneOffsets;
    NSArray *_previousAllWorkoutTimeZoneOffsets;
    id <_HKAchievementPredicateWorkoutsEnvironmentDataSource> _dataSource;
    NSArray *__excludedWorkoutUUIDs;
}

@property(retain, nonatomic, setter=_setExcludedWorkoutUUIDs:) NSArray *_excludedWorkoutUUIDs; // @synthesize _excludedWorkoutUUIDs=__excludedWorkoutUUIDs;
@property(retain, nonatomic) NSArray *previousAllWorkoutTimeZoneOffsets; // @synthesize previousAllWorkoutTimeZoneOffsets=_previousAllWorkoutTimeZoneOffsets;
@property(retain, nonatomic) NSArray *allWorkoutTimeZoneOffsets; // @synthesize allWorkoutTimeZoneOffsets=_allWorkoutTimeZoneOffsets;
@property(retain, nonatomic) _HKAchievementPredicateWorkoutEnvironment *addedWorkout; // @synthesize addedWorkout=_addedWorkout;
@property(nonatomic) __weak id <_HKAchievementPredicateWorkoutsEnvironmentDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (double)averageCaloriesBurnedInWorkoutsFromTimeNumber:(id)arg1 toTimeNumber:(id)arg2;
- (id)_workoutsByFilteringExcludedUUIDs:(id)arg1;
- (id)_workoutEnvironmentsFromWorkouts:(id)arg1;
- (id)workoutsInDateRangeStart:(id)arg1 end:(id)arg2;
- (id)workoutsOfType:(id)arg1;
- (id)previousBestCaloriesForWorkoutOfType:(id)arg1;

@end

