//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INSpeakableString, NSNumber;

@protocol INStartWorkoutIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSNumber *isOpenEnded;
@property(nonatomic) long long workoutLocationType;
@property(nonatomic) long long workoutGoalUnitType;
@property(copy, nonatomic) NSNumber *goalValue;
@property(copy, nonatomic) INSpeakableString *workoutName;
- (id)init;
@end

