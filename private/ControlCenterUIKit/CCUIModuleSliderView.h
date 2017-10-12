//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "CCUIContentClipping.h"
#import "CCUIContentModuleExpandedStateListener.h"
#import "CCUIContentModuleTopLevelGestureProvider.h"
#import "CCUIGroupRendering.h"
#import "UIGestureRecognizerDelegate.h"

@class CALayer, CCUICAPackageDescription, CCUICAPackageView, NSArray, NSString, NSTimer, UIImage, UIImageView, UILongPressGestureRecognizer, UISelectionFeedbackGenerator, _UIEdgeFeedbackGenerator;

@interface CCUIModuleSliderView : UIControl <UIGestureRecognizerDelegate, CCUIContentModuleTopLevelGestureProvider, CCUIContentModuleExpandedStateListener, CCUIContentClipping, CCUIGroupRendering>
{
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    CCUICAPackageView *_compensatingGlyphPackageView;
    NSArray *_stepBackgroundViews;
    NSArray *_separatorViews;
    double _startingHeight;
    struct CGPoint _startingLocation;
    float _startingValue;
    NSTimer *_updatesCommitTimer;
    float _previousValue;
    UILongPressGestureRecognizer *_valueChangeGestureRecognizer;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    _Bool _glyphVisible;
    _Bool _throttleUpdates;
    _Bool _firstStepIsDisabled;
    _Bool _firstStepIsOff;
    _Bool _interactiveWhenUnexpanded;
    float _value;
    UIImage *_glyphImage;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    unsigned long long _numberOfSteps;
    unsigned long long _step;
}

@property(nonatomic, getter=isInteractiveWhenUnexpanded) _Bool interactiveWhenUnexpanded; // @synthesize interactiveWhenUnexpanded=_interactiveWhenUnexpanded;
@property(nonatomic) unsigned long long step; // @synthesize step=_step;
@property(nonatomic) _Bool firstStepIsOff; // @synthesize firstStepIsOff=_firstStepIsOff;
@property(nonatomic) _Bool firstStepIsDisabled; // @synthesize firstStepIsDisabled=_firstStepIsDisabled;
@property(nonatomic) unsigned long long numberOfSteps; // @synthesize numberOfSteps=_numberOfSteps;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) _Bool throttleUpdates; // @synthesize throttleUpdates=_throttleUpdates;
@property(nonatomic, getter=isGlyphVisible) _Bool glyphVisible; // @synthesize glyphVisible=_glyphVisible;
@property(retain, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
@property(retain, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
- (void).cxx_destruct;
- (void)_endTrackingWithGestureRecognizer:(id)arg1;
- (void)_continueTrackingWithGestureRecognizer:(id)arg1;
- (void)_beginTrackingWithGestureRecognizer:(id)arg1;
- (void)_handleValueChangeGestureRecognizer:(id)arg1;
- (void)_updateStepFromValue:(float)arg1 playHaptic:(_Bool)arg2;
- (void)_updateValueForTouchLocation:(struct CGPoint)arg1 withAbsoluteReference:(_Bool)arg2 forContinuedGesture:(_Bool)arg3;
- (float)_valueForTouchLocation:(struct CGPoint)arg1 withAbsoluteReference:(_Bool)arg2;
- (float)_valueFromStep:(unsigned long long)arg1;
- (unsigned long long)_stepFromValue:(float)arg1;
- (double)_sliderHeightForValue:(float)arg1;
- (double)_sliderHeight;
- (double)_fullStepHeight;
- (double)_heightForStep:(unsigned long long)arg1;
- (id)_createSeparatorView;
- (id)_createBackgroundViewForStep:(unsigned long long)arg1;
- (void)_createSeparatorViewsForNumberOfSteps:(unsigned long long)arg1;
- (void)_createStepViewsForNumberOfSteps:(unsigned long long)arg1;
- (void)_layoutContinuousValueViewForValue:(float)arg1;
- (void)_layoutContinuousValueView;
- (void)_layoutValueViewsForStepChange:(_Bool)arg1;
- (void)_layoutValueViewsForStepChange;
- (void)_layoutValueViews;
- (id)_continuousValueView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
@property(readonly, nonatomic) CALayer *punchOutRootLayer;
@property(readonly, nonatomic, getter=isGroupRenderingRequired) _Bool groupRenderingRequired;
@property(readonly, nonatomic, getter=isContentClippingRequired) _Bool contentClippingRequired;
- (void)contentModuleWillTransitionToExpandedContentMode:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *topLevelBlockingGestureRecognizers;
@property(readonly, nonatomic) NSArray *topLevelGestureRecognizers;
- (void)layoutSubviews;
- (void)_configureCompensatingGlyphPackageView:(id)arg1;
- (void)_configureGlyphPackageView:(id)arg1;
- (id)_newGlyphPackageView;
@property(readonly, nonatomic, getter=isStepped) _Bool stepped;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
