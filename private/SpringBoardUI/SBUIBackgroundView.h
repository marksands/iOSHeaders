//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUIBackgroundStyleTransitioning.h"
#import "SBUIWallpaperOverlay.h"

@class BSUIBackdropView, MTMaterialView, NSString, UIColor;

@interface SBUIBackgroundView : UIView <SBUIBackgroundStyleTransitioning, SBUIWallpaperOverlay>
{
    long long _style;
    long long _transitionStyle;
    _Bool _transitioning;
    double _progress;
    BSUIBackdropView *_backdropView;
    _Bool _isReducedTransparencyEnabled;
    UIView *_reduceTransparencyView;
    UIView *_reduceTransparencyTintingView;
    UIView *_sourceOverView;
    UIView *_darkenSourceOverView;
    UIView *_tintView;
    UIView *_lightenSourceOverView;
    UIColor *_reduceTransparencyBackingColor;
    MTMaterialView *_luminanceView;
}

@property(readonly, nonatomic, getter=isTransitioningBackgroundStyle) _Bool transitioningBackgroundStyle; // @synthesize transitioningBackgroundStyle=_transitioning;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_style;
- (void).cxx_destruct;
- (double)_valueFromStart:(double)arg1 toEnd:(double)arg2 withFraction:(double)arg3;
- (id)_backgroundColorForDarkenAlpha:(double)arg1 andProgress:(double)arg2;
- (void)_luminanceWithProgress:(double)arg1;
- (void)_lightenSourceOverWithProgress:(double)arg1;
- (void)_reduceTransparencyWithProgress:(double)arg1;
- (void)_tintWithProgress:(double)arg1 backgroundColorAlpha:(double)arg2;
- (void)_darkenWithProgress:(double)arg1;
- (double)_reducedTransparencyValueForBackgroundStyle:(long long)arg1;
- (_Bool)_shouldApplyReducedTransparencyTintForBackgroundStyle:(long long)arg1;
- (double)_lightenSourceOverValueForBackgroundStyle:(long long)arg1;
- (double)_luminanceValueForBackgroundStyle:(long long)arg1;
- (double)_tintValueForBackgroundStyle:(long long)arg1;
- (double)_tintColorAlphaForBackgroundStyle:(long long)arg1;
- (double)_darkenValueForBackgroundStyle:(long long)arg1;
- (void)_updateAppearanceForTransitionFromStyle:(long long)arg1 toStyle:(long long)arg2 withProgress:(double)arg3;
- (void)_updateAppearanceForBackgroundStyle:(long long)arg1 transitionToSettings:(_Bool)arg2;
- (void)_reduceTransparencyEnabledStateDidChange:(id)arg1;
- (void)_updateReduceTransparencyTinting;
- (void)_updateReduceTransparencyTintingWithProgressWeighting:(double)arg1;
- (void)setReduceTransparencyBackingColor:(id)arg1;
- (id)backdropView;
@property(retain, nonatomic) NSString *groupName;
- (void)completeTransitionToBackgroundStyle:(long long)arg1;
- (void)updateBackgroundStyleTransitionProgress:(double)arg1;
- (void)beginTransitionToBackgroundStyle:(long long)arg1;
- (void)modifyAllViewsWithChanges:(CDUnknownBlockType)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

