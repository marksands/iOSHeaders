//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>
#import <HomeUI/UIGestureRecognizerDelegate-Protocol.h>

@class HFColorPalette, HFColorPaletteColor, HUQuickControlColorViewProfile, NSArray, NSNumber, NSString, UILongPressGestureRecognizer;
@protocol HUQuickControlColorPaletteViewInteractionDelegate;

@interface HUColorPaletteView : UIView <UIGestureRecognizerDelegate, HUQuickControlInteractiveView>
{
    _Bool _userInteractionActive;
    _Bool _colorPaletteHasChanged;
    HUQuickControlColorViewProfile *_profile;
    id <HUQuickControlColorPaletteViewInteractionDelegate> _interactionDelegate;
    HFColorPalette *_colorPalette;
    double _circleRadius;
    NSArray *_colorSwatchViews;
    HFColorPalette *_calibratedColorPalette;
    HFColorPaletteColor *_selectedColor;
    NSNumber *_trackingColorIndex;
    NSNumber *_selectedColorBiasIndex;
    UILongPressGestureRecognizer *_gestureRecognizer;
    UILongPressGestureRecognizer *_changePresetRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *changePresetRecognizer; // @synthesize changePresetRecognizer=_changePresetRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) _Bool colorPaletteHasChanged; // @synthesize colorPaletteHasChanged=_colorPaletteHasChanged;
@property(nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(retain, nonatomic) NSNumber *selectedColorBiasIndex; // @synthesize selectedColorBiasIndex=_selectedColorBiasIndex;
@property(retain, nonatomic) NSNumber *trackingColorIndex; // @synthesize trackingColorIndex=_trackingColorIndex;
@property(retain, nonatomic) HFColorPaletteColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) HFColorPalette *calibratedColorPalette; // @synthesize calibratedColorPalette=_calibratedColorPalette;
@property(copy, nonatomic) NSArray *colorSwatchViews; // @synthesize colorSwatchViews=_colorSwatchViews;
@property(nonatomic) double circleRadius; // @synthesize circleRadius=_circleRadius;
@property(retain, nonatomic) HFColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) __weak id <HUQuickControlColorPaletteViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) HUQuickControlColorViewProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (double)radiusFittingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
@property(retain, nonatomic) id value;
- (id)_swatchIndexForGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleGestureForVeryLongPress:(id)arg1;
- (void)_handleGesture:(id)arg1;
- (unsigned long long)_indexForSelectedColor:(id)arg1 includeBias:(_Bool)arg2;
- (void)_updateColorSelectionAnimated:(_Bool)arg1;
- (void)_setSelectedColor:(id)arg1 notifyDelegate:(_Bool)arg2 updateSelectionState:(_Bool)arg3;
- (void)_updateCalibratedColorPalette;
- (void)_setColorPalette:(id)arg1 notifyDelegate:(_Bool)arg2;
- (void)_updateColorSwatchViewsWithAnimations:(_Bool)arg1;
- (void)_buildColorSwatchViews;
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id secondaryValue;
@property(nonatomic) long long sizeSubclass;
@property(readonly) Class superclass;

@end

