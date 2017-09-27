//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKGraphSeriesBlockCoordinateInfo.h"

@class NSString;

@interface HKActivityChartPointSummary : NSObject <HKGraphSeriesBlockCoordinateInfo>
{
    NSString *_formattedDateString;
    NSString *_workoutSummaryString;
    NSString *_energyBurnSummaryString;
    NSString *_activityGoalSummaryString;
}

+ (id)_distanceFormatter;
+ (id)_energyFormatter;
+ (id)_workoutDurationFormatter;
+ (id)_dateFormatter;
@property(readonly, nonatomic) NSString *activityGoalSummaryString; // @synthesize activityGoalSummaryString=_activityGoalSummaryString;
@property(readonly, nonatomic) NSString *energyBurnSummaryString; // @synthesize energyBurnSummaryString=_energyBurnSummaryString;
@property(readonly, nonatomic) NSString *workoutSummaryString; // @synthesize workoutSummaryString=_workoutSummaryString;
@property(readonly, nonatomic) NSString *formattedDateString; // @synthesize formattedDateString=_formattedDateString;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_createWorkoutSummaryWithWorkouts:(id)arg1;
- (id)initWithActivityCache:(id)arg1 workouts:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

