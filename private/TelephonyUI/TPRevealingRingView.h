//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, _TPTemplatedColoredImageView;

@interface TPRevealingRingView : UIView
{
    CDStruct_f15746dd _outerViewDrawingProperties;
    _TPTemplatedColoredImageView *_outerView;
    CDStruct_f15746dd _innerViewDrawingProperties;
    _TPTemplatedColoredImageView *_innerView;
    UIColor *_colorOutsideRing;
    UIColor *_colorInsideRing;
    struct UIEdgeInsets _paddingOutsideRing;
    double _defaultRingStrokeWidth;
    double _revealAnimationDuration;
    double _unrevealAnimationDuration;
    double _cornerRadius;
    _Bool _isCircularRing;
    _Bool _revealed;
    double _alphaInsideRing;
    double _alphaOutsideRing;
    UIColor *_colorInsidegamRing;
}

+ (id)classIdentifier;
@property(retain, nonatomic) UIColor *colorInsideRing; // @synthesize colorInsideRing=_colorInsidegamRing;
@property(retain, nonatomic) UIColor *colorOutsideRing; // @synthesize colorOutsideRing=_colorOutsideRing;
@property(nonatomic) double unrevealAnimationDuration; // @synthesize unrevealAnimationDuration=_unrevealAnimationDuration;
@property(nonatomic) double revealAnimationDuration; // @synthesize revealAnimationDuration=_revealAnimationDuration;
@property(nonatomic) double defaultRingStrokeWidth; // @synthesize defaultRingStrokeWidth=_defaultRingStrokeWidth;
@property(readonly, nonatomic) struct UIEdgeInsets paddingOutsideRing; // @synthesize paddingOutsideRing=_paddingOutsideRing;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double alphaOutsideRing; // @synthesize alphaOutsideRing=_alphaOutsideRing;
@property(nonatomic) double alphaInsideRing; // @synthesize alphaInsideRing=_alphaInsideRing;
- (void).cxx_destruct;
- (void)_animateForReveal:(_Bool)arg1 withDuration:(float)arg2 delay:(double)arg3;
- (_Bool)_shouldDrawAsCircle:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (_Bool)_isSquare:(struct CGSize)arg1;
- (void)_evaluateCircularness;
- (void)_computeOuterViewDrawingPropertiesWithScale:(double)arg1;
- (void)_computeInnerViewDrawingPropertiesWithScale:(double)arg1;
- (void)_calculateOuter:(struct CGRect *)arg1 inner:(struct CGRect *)arg2 newXOffset:(double *)arg3 newYOffset:(double *)arg4 withScale:(double)arg5;
- (void)layoutSubviews;
- (id)description;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2 delay:(double)arg3;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPaddingOutsideRing:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) struct CGSize ringSize; // @dynamic ringSize;
- (id)initWithFrame:(struct CGRect)arg1 paddingOutsideRing:(struct UIEdgeInsets)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

