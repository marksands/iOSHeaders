//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXFillView.h>

@class NSArray, SXClippingLayer, SXGradientFill;

@interface SXGradientFillView : SXFillView
{
    NSArray *_locations;
    NSArray *_colors;
    SXGradientFill *_gradientFill;
    SXClippingLayer *_clippingLayer;
}

@property(retain, nonatomic) SXClippingLayer *clippingLayer; // @synthesize clippingLayer=_clippingLayer;
@property(readonly, nonatomic) SXGradientFill *gradientFill; // @synthesize gradientFill=_gradientFill;
- (void).cxx_destruct;
- (void)setContentFrame:(struct CGRect)arg1;
- (struct CGRect)contentFrame;
@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void)setupGradientLayer;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithGradientFill:(id)arg1;

@end

