//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDevice, CADisplayLink, CMKTorchPattern;

@interface CMKTorchPatternController : NSObject
{
    _Bool __performing;
    double _stepInterval;
    CMKTorchPattern *__currentPattern;
    double __startTime;
    CADisplayLink *__displayLink;
    AVCaptureDevice *_captureDevice;
}

@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(readonly, nonatomic) CADisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property(readonly, nonatomic) double _startTime; // @synthesize _startTime=__startTime;
@property(readonly, nonatomic) CMKTorchPattern *_currentPattern; // @synthesize _currentPattern=__currentPattern;
@property(nonatomic, setter=_setPerforming:) _Bool _performing; // @synthesize _performing=__performing;
@property(nonatomic) double stepInterval; // @synthesize stepInterval=_stepInterval;
- (void).cxx_destruct;
- (void)displayLinkFired:(id)arg1;
- (void)doubleBlink;
- (void)blink;
- (void)_applyTorchLevel:(float)arg1;
- (void)_resetTorchLevel;
- (void)stopPerformingPattern;
- (void)startPerformingPattern:(id)arg1;
- (id)init;

@end

