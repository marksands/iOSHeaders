//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoKit/NURenderView.h>

@class CMMotionManager, UILongPressGestureRecognizer;

@interface NUDebugRenderView : NURenderView
{
    UILongPressGestureRecognizer *_doubleTap;
    _Bool _showDebug;
    CMMotionManager *_motionManager;
}

- (void).cxx_destruct;
- (void)_setupDeviceMotion;
- (void)_stopDeviceMotion;
- (void)_startDeviceMotion;
- (void)_resetOrientation:(id)arg1;
- (void)_orientWithX:(double)arg1 andY:(double)arg2;
- (void)_debugToggle:(id)arg1;
- (_Bool)debugMode;
- (void)setDebugMode:(_Bool)arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

