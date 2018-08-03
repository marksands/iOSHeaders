//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKSpriteKitAnalogFaceView.h>

@class NTKZeusAnalogScene, NTKZeusColorPalette, UIView;

@interface NTKZeusAnalogFaceView : NTKSpriteKitAnalogFaceView
{
    _Bool _isEditing;
    _Bool _isHandsVisibleInColorEditing;
    NTKZeusColorPalette *_palette;
    UIView *_cornerView;
}

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (id)_supportedComplicationSlots;
- (void).cxx_destruct;
- (_Bool)_timeViewBehindContentForEditMode:(long long)arg1;
- (struct CGPoint)_timeTravelStatusModuleCenter;
- (void)_prepareForStatusChange:(_Bool)arg1;
- (double)_verticalPaddingForStatusBar;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (double)_numbersAlphaForEditMode:(long long)arg1;
- (double)_handAlphaForEditing:(_Bool)arg1;
- (double)_secondHandAlphaForDensity:(unsigned long long)arg1 isEditing:(_Bool)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_updateDateComplicationPositionIfNecessary;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (struct CGSize)_sceneSize;
- (void)_prepareTimeViewForReuse:(id)arg1;
- (void)_configureReusableTimeView:(id)arg1;
- (void)_loadScene;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NTKZeusAnalogScene *analogScene; // @dynamic analogScene;

@end

