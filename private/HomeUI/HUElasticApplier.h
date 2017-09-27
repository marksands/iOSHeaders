//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUApplier.h>

@class CADisplayLink;

@interface HUElasticApplier : HUApplier
{
    _Bool _completesWhenAtRest;
    _Bool _progressBeginsFromInitialInputProgress;
    _Bool _applyOnlyOnProgressChanges;
    double _friction;
    double _tension;
    double _currentVelocity;
    CDUnknownBlockType _progressInputBlock;
    CADisplayLink *_displayLink;
    unsigned long long _frameCount;
    unsigned long long _restingFrameCount;
    double _previousForce;
}

@property(nonatomic) double previousForce; // @synthesize previousForce=_previousForce;
@property(nonatomic) unsigned long long restingFrameCount; // @synthesize restingFrameCount=_restingFrameCount;
@property(nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType progressInputBlock; // @synthesize progressInputBlock=_progressInputBlock;
@property(nonatomic) double currentVelocity; // @synthesize currentVelocity=_currentVelocity;
@property(nonatomic) _Bool applyOnlyOnProgressChanges; // @synthesize applyOnlyOnProgressChanges=_applyOnlyOnProgressChanges;
@property(nonatomic) _Bool progressBeginsFromInitialInputProgress; // @synthesize progressBeginsFromInitialInputProgress=_progressBeginsFromInitialInputProgress;
@property(nonatomic) _Bool completesWhenAtRest; // @synthesize completesWhenAtRest=_completesWhenAtRest;
@property(nonatomic) double tension; // @synthesize tension=_tension;
@property(nonatomic) double friction; // @synthesize friction=_friction;
- (void).cxx_destruct;
- (_Bool)complete:(_Bool)arg1;
- (void)_invalidateDisplayLinkIfNecessary;
- (void)_updateProgressForInitialUpdate:(_Bool)arg1;
- (void)_displayLinkTick;
- (_Bool)start;
- (id)initWithProgressInputBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

