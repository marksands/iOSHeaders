//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

#import "NTKUtilityComplicationFactoryDelegate.h"

@class NSString, NTKUtilityComplicationFactory;

@interface NTKColorCircularUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKUtilityComplicationFactoryDelegate>
{
    NTKUtilityComplicationFactory *_complicationFactory;
    id <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> _delegate;
}

@property(nonatomic) __weak id <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;
- (void)applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1 attributes:(unsigned long long)arg2 faceView:(id)arg3;
- (void)applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1 faceView:(id)arg2;
- (void)cleanupAfterEditingForFaceView:(id)arg1;
- (void)prepareForEditingForFaceView:(id)arg1;
- (id)_complicationSlots;
- (id)_colorComplicationSlots;
- (id)_utilityComplicationSlots;
- (double)_lisaGapForState:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (id)_slotForUtilitySlot:(long long)arg1;
- (long long)_utilitySlotForSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)initForDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

