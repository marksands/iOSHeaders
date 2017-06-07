//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, NLArcLayer, NLArcMaskLayer;

@interface NLArcView : UIView
{
    NLArcLayer *_baseRing;
    CALayer *_iconLayer;
    CAGradientLayer *_gradientLayer;
    NLArcMaskLayer *_arcMaskLayer;
    CALayer *_whiteDotIndicatorLayer;
    CALayer *_coloredDotIndicatorLayer;
    _Bool _shouldDrawIndicator;
    _Bool _shouldShowIcon;
    double _radius;
    double _indicatorPercentage;
}

@property(nonatomic) double indicatorPercentage; // @synthesize indicatorPercentage=_indicatorPercentage;
@property(nonatomic) _Bool shouldShowIcon; // @synthesize shouldShowIcon=_shouldShowIcon;
@property(nonatomic) _Bool shouldDrawIndicator; // @synthesize shouldDrawIndicator=_shouldDrawIndicator;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void).cxx_destruct;
- (void)setIcon:(id)arg1;
- (void)setGradientColors:(id)arg1;
- (void)setBaseColor:(id)arg1;
- (void)animateToCenter:(struct CGPoint)arg1 radius:(double)arg2 lineWidth:(double)arg3 duration:(double)arg4;
- (void)layoutSubviews;
@property(nonatomic) double lineWidth;
@property(nonatomic) double arcStart;
- (void)_positionIndicator;
- (void)setPercentageUnfull:(double)arg1 animatedWithDuration:(double)arg2;
- (void)setPercentageFull:(double)arg1 animatedWithDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPercentageFull:(double)arg1 animatedWithDuration:(double)arg2;
- (void)setPercentageFull:(double)arg1 animated:(_Bool)arg2;
- (void)setPercentageFull:(double)arg1;
- (double)percentageFull;
- (void)setRadius:(double)arg1 animated:(_Bool)arg2;
- (void)_showIndicatorIfNecessary;
- (id)_coloredDotIndicatorLayer;
- (id)_whiteDotIndicatorLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end
