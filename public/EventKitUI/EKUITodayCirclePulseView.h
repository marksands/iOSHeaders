//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_UIBasicAnimationFactory.h"

@class NSDictionary, NSString, TodayCirclePulseBackground, UIFont, UILabel;

@interface EKUITodayCirclePulseView : UIView <_UIBasicAnimationFactory>
{
    UIView *_backgroundContainer;
    TodayCirclePulseBackground *_background;
    UILabel *_label;
    UILabel *_overlayLabel;
    NSDictionary *_attributes;
    NSDictionary *_overlayAttributes;
    _Bool _usesTextYOffsetWithoutAdjustmentForOverlay;
    _Bool _circleShouldFillFrame;
    _Bool _dontApplyCenteringOffset;
    double _circleDiameter;
    double _textYOffset;
    double _textFrameWidthAdjustment;
    struct CGPoint _textOffsetFromCircle;
}

@property(nonatomic) double textFrameWidthAdjustment; // @synthesize textFrameWidthAdjustment=_textFrameWidthAdjustment;
@property(nonatomic) _Bool dontApplyCenteringOffset; // @synthesize dontApplyCenteringOffset=_dontApplyCenteringOffset;
@property(nonatomic) _Bool circleShouldFillFrame; // @synthesize circleShouldFillFrame=_circleShouldFillFrame;
@property(nonatomic) _Bool usesTextYOffsetWithoutAdjustmentForOverlay; // @synthesize usesTextYOffsetWithoutAdjustmentForOverlay=_usesTextYOffsetWithoutAdjustmentForOverlay;
@property(nonatomic) struct CGPoint textOffsetFromCircle; // @synthesize textOffsetFromCircle=_textOffsetFromCircle;
@property(nonatomic) double textYOffset; // @synthesize textYOffset=_textYOffset;
@property(nonatomic) double circleDiameter; // @synthesize circleDiameter=_circleDiameter;
- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)pulse:(CDUnknownBlockType)arg1;
- (void)_layoutSubviews;
- (void)_updateOverlayLabelAttributedString;
@property(retain, nonatomic) NSDictionary *overlayAttributes;
@property(retain, nonatomic) UIFont *overlayFont;
@property(copy, nonatomic) NSString *overlayString;
- (id)_overlayLabel;
- (void)_updateLabelAttributedString;
@property(nonatomic) double roundedRectCornerRadius;
@property(nonatomic) _Bool usesRoundedRectInsteadOfCircle;
@property(retain, nonatomic) NSDictionary *attributes;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *string;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

