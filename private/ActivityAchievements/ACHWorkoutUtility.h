//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDProfile, HDSQLitePredicate;

@interface ACHWorkoutUtility : NSObject
{
    HDProfile *_profile;
    HDSQLitePredicate *_firstPartyPredicate;
}

@property(retain, nonatomic) HDSQLitePredicate *firstPartyPredicate; // @synthesize firstPartyPredicate=_firstPartyPredicate;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)arg1 endingBeforeDate:(id)arg2;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 withType:(id)arg2 startingAtOrAfterDate:(id)arg3 endingOnOrBeforeDate:(id)arg4;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 withType:(unsigned long long)arg2 endingOnOrBeforeDate:(id)arg3;
- (id)workoutsInDateInterval:(id)arg1;
- (id)initWithProfile:(id)arg1;

@end

