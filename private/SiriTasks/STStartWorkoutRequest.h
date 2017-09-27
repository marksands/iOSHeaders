//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFSiriRequest.h"

@class HKQuantity;

@interface STStartWorkoutRequest : AFSiriRequest
{
    long long _activityType;
    long long _locationType;
    long long _goalType;
    long long _userMode;
    HKQuantity *_goal;
    _Bool _isOpenGoal;
    _Bool _skipActivitySetup;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;
- (_Bool)isOpenGoal;
- (_Bool)skipActivitySetup;
- (id)workoutGoal;
- (long long)goalType;
- (long long)userMode;
- (long long)locationType;
- (long long)activityType;
- (id)_initWithType:(long long)arg1 location:(long long)arg2 goal:(id)arg3 goalType:(long long)arg4 userMode:(long long)arg5 isOpenGoal:(_Bool)arg6 skipActivitySetup:(_Bool)arg7;

@end

