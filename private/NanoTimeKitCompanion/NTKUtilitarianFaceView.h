//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKSpriteKitAnalogFaceView.h>

#import <NanoTimeKitCompanion/NTKUtilityComplicationFactoryDelegate-Protocol.h>

@class NSString, NTKUtilitarianScene, NTKUtilityComplicationFactory, UIColor;

@interface NTKUtilitarianFaceView : NTKSpriteKitAnalogFaceView <NTKUtilityComplicationFactoryDelegate>
{
    NTKUtilityComplicationFactory *_complicationFactory;
    UIColor *_accentColor;
    unsigned long long _density;
    unsigned long long _dateStyle;
}

+ (id)_swatchColorForColorOption:(id)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;
+ (id)_swatchImageFaceName;
@property(nonatomic) unsigned long long dateStyle; // @synthesize dateStyle=_dateStyle;
@property(nonatomic) unsigned long long density; // @synthesize density=_density;
- (void).cxx_destruct;
- (struct CGPoint)_dateComplicationCenterOffset;
- (struct CGPoint)_dateComplicationRightAlignment;
- (void)_updateDateComplicationPositionIfNecessary;
- (double)_backgroundAlphaForEditMode:(long long)arg1;
- (double)_handsAlphaForEditMode:(long long)arg1;
- (double)_secondHandAlphaForEditMode:(long long)arg1;
- (id)_dateComplicationFontForStyle:(unsigned long long)arg1;
- (unsigned long long)_keylineLabelAlignmentForColorEditing;
- (struct CGRect)_keylineFrameForColorEditing;
- (id)_keylineViewForColorEditing;
- (double)alphaForDimmedState;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;
- (void)_configureComplicationFactory:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForDensityEditing;
- (struct CGRect)_keylineFrameForDensityEditing;
- (id)_keylineViewForDensityEditing;
- (id)_utilityComplicationSlots;
- (Class)_utilitarianSceneClass;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (_Bool)_shouldFreezeSceneForEditMode:(long long)arg1;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (long long)_utilitySlotForSlot:(id)arg1;
- (double)_verticalPaddingForStatusBar;
- (_Bool)_supportsUnadornedSnapshot;
- (void)_loadScene;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) NTKUtilitarianScene *analogScene; // @dynamic analogScene;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

