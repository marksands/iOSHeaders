//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LAUIPearlGlyphView, NSSet, SBUICAPackageView, SBUIFaceIDCameraGlyphView, UIColor, _UILegibilitySettings;

@interface SBUIProudLockIconView : UIView
{
    long long _state;
    SBUICAPackageView *_lockView;
    NSSet *_imageLayers;
    LAUIPearlGlyphView *_lazy_pearlGlyphView;
    id _pearlGlyphViewSharedResources;
    SBUIFaceIDCameraGlyphView *_cameraCoveredView;
    _UILegibilitySettings *_legibilitySettings;
    double _durationOnCameraCoveredGlyphBeforeCoaching;
    UIColor *_contentColor;
}

@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching; // @synthesize durationOnCameraCoveredGlyphBeforeCoaching=_durationOnCameraCoveredGlyphBeforeCoaching;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) SBUIFaceIDCameraGlyphView *cameraCoveredView; // @synthesize cameraCoveredView=_cameraCoveredView;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)_pearlGlyphView;
- (double)_alphaForActiveViewForState:(long long)arg1;
- (struct CGAffineTransform)_outgoingTransformForView:(id)arg1 fromState:(long long)arg2;
- (struct CGAffineTransform)_transformForActiveViewForState:(long long)arg1;
- (struct CGAffineTransform)_incomingTransformForActiveView:(id)arg1 forState:(long long)arg2;
- (id)_activeViewsForState:(long long)arg1;
- (id)_defaultAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4;
- (id)_alphaAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 forIncomingViews:(_Bool)arg5;
- (id)_transformAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 forIncomingViews:(_Bool)arg5;
- (void)_transitionToState:(long long)arg1 animated:(_Bool)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_forEachLayerInHierarchy:(id)arg1 perform:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

