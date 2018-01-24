//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceView.h>

#import "UIGestureRecognizerDelegate.h"

@class NSString, NTKCharacterTimeView, NTKUtilityComplicationFactory, UIColor, UITapGestureRecognizer, UIView;

@interface NTKCharacterFaceView : NTKFaceView <UIGestureRecognizerDelegate>
{
    NTKCharacterTimeView *_characterTimeView;
    UIView *_circleView;
    UIView *_handsView;
    NTKUtilityComplicationFactory *_complicationFactory;
    UITapGestureRecognizer *_timeTapRecognizer;
    unsigned int _isContentLoaded:1;
    long long _prevDataMode;
    unsigned long long _optionCharacter;
    UIColor *_optionClothingColor;
    double _optionClothingDesaturation;
}

+ (id)_swatchColorForColorOption:(id)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;
+ (void)_prewarm;
- (void).cxx_destruct;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_supportsTimeScrubbing;
- (struct CGRect)_tapToSpeakRect;
- (void)_faceTapped:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (void)_cleanupAfterZoom;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (_Bool)_usesCustomZoom;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (double)_verticalPaddingForStatusBar;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_updateComplicationViewsAlphasWithAnimation:(_Bool)arg1;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowsCanonicalContent;
- (void)_applyDataMode;
- (void)_applyDataModeFromOldDataMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (long long)_utilitySlotForSlot:(id)arg1;
- (_Bool)_needsForegroundContainerView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

