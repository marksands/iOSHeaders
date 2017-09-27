//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class HKQuantity, NSDate, NSMutableArray, NSMutableData;

@interface _HDDemoDataActivityWorkoutState : NSObject <NSSecureCoding>
{
    NSMutableData *_associatedObjectUUIDs;
    NSMutableArray *_workoutEvents;
    unsigned long long _workoutActivityType;
    unsigned long long _goalType;
    HKQuantity *_goal;
    NSDate *_startDate;
    double _totalEnergyBurnedInKilocalories;
    double _totalDistanceWalkingInMeters;
    double _totalDistanceCyclingInMeters;
    double _totalDistanceSwimmingInYards;
    double _totalSwimmingStrokes;
    long long _swimmingStrokeStyle;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long swimmingStrokeStyle; // @synthesize swimmingStrokeStyle=_swimmingStrokeStyle;
@property(nonatomic) double totalSwimmingStrokes; // @synthesize totalSwimmingStrokes=_totalSwimmingStrokes;
@property(nonatomic) double totalDistanceSwimmingInYards; // @synthesize totalDistanceSwimmingInYards=_totalDistanceSwimmingInYards;
@property(nonatomic) double totalDistanceCyclingInMeters; // @synthesize totalDistanceCyclingInMeters=_totalDistanceCyclingInMeters;
@property(nonatomic) double totalDistanceWalkingInMeters; // @synthesize totalDistanceWalkingInMeters=_totalDistanceWalkingInMeters;
@property(nonatomic) double totalEnergyBurnedInKilocalories; // @synthesize totalEnergyBurnedInKilocalories=_totalEnergyBurnedInKilocalories;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) HKQuantity *goal; // @synthesize goal=_goal;
@property(nonatomic) unsigned long long goalType; // @synthesize goalType=_goalType;
@property(nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
@property(retain, nonatomic) NSMutableArray *workoutEvents; // @synthesize workoutEvents=_workoutEvents;
@property(retain, nonatomic) NSMutableData *associatedObjectUUIDs; // @synthesize associatedObjectUUIDs=_associatedObjectUUIDs;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)lapCount;
- (void)addWorkoutRouteFromFilePath:(id)arg1 profile:(id)arg2 provenance:(id)arg3;
- (void)addWorkoutEvent:(id)arg1;
- (void)addAssociatedObjectUUID:(id)arg1;
- (id)generateWorkoutWithEndDate:(id)arg1 profile:(id)arg2 provenance:(id)arg3;
- (id)init;

@end

