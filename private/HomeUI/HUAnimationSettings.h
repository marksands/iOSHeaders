//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "_UIBasicAnimationFactory.h"

@class CAMediaTimingFunction, NSString;

@interface HUAnimationSettings : NSObject <NSCopying, _UIBasicAnimationFactory>
{
    float _repeatCount;
    double _duration;
    double _delay;
    double _speed;
    CAMediaTimingFunction *_timingFunction;
}

+ (id)settingsWithDuration:(double)arg1 curve:(long long)arg2;
+ (id)settingsWithDuration:(double)arg1;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) float repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)settingsSpedUpByFactor:(double)arg1;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (double)interpolatedProgressForTime:(double)arg1;
- (double)interpolatedProgressForProgress:(double)arg1;
@property(readonly, nonatomic) double durationWithSpeed;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

