//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthUI/HKFillStyle.h>

@class UIColor;

@interface HKGradientFillStyle : HKFillStyle
{
    UIColor *_firstColor;
    UIColor *_secondColor;
    double _fillPercentage;
    long long _fillDirection;
    double _gradientSize;
}

@property(nonatomic) double gradientSize; // @synthesize gradientSize=_gradientSize;
@property(nonatomic) long long fillDirection; // @synthesize fillDirection=_fillDirection;
@property(nonatomic) double fillPercentage; // @synthesize fillPercentage=_fillPercentage;
@property(retain, nonatomic) UIColor *secondColor; // @synthesize secondColor=_secondColor;
@property(retain, nonatomic) UIColor *firstColor; // @synthesize firstColor=_firstColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
- (_Bool)_useReversedFillDirection;
- (id)init;

@end

