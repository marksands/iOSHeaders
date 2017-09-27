//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUAnimationSettings.h>

@class CASpringAnimation;

@interface HUSpringAnimationSettings : HUAnimationSettings
{
    double _completionEpsilon;
    CASpringAnimation *_springAnimation;
}

+ (id)criticallyDampedSpringSettings;
@property(readonly, nonatomic) CASpringAnimation *springAnimation; // @synthesize springAnimation=_springAnimation;
@property(nonatomic) double completionEpsilon; // @synthesize completionEpsilon=_completionEpsilon;
- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_updateDuration;
- (double)interpolatedProgressForProgress:(double)arg1;
- (void)setRepeatCount:(float)arg1;
- (float)repeatCount;
- (void)setSpeed:(double)arg1;
- (double)speed;
- (void)setDelay:(double)arg1;
- (double)delay;
- (void)setDuration:(double)arg1;
- (double)duration;
@property(nonatomic) double initialVelocity;
@property(nonatomic) double damping;
@property(nonatomic) double stiffness;
@property(nonatomic) double mass;
- (void)setTimingFunction:(id)arg1;
- (id)timingFunction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithSpringAnimation:(id)arg1 completionEpsilon:(double)arg2;
- (id)init;

@end

