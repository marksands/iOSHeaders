//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKAxis.h>

@protocol HKAxisLabelDimension, HKZoomScale;

@interface HKNumericAxis : HKAxis
{
    long long _labelEndingOptions;
    id <HKAxisLabelDimension> _labelDimension;
    double _verticalLabelPadding;
    id <HKZoomScale> _scalarZoomScaleEngine;
}

+ (double)_roundUpByMultiple:(double)arg1 factor:(double)arg2;
+ (double)_roundDownByMultiple:(double)arg1 factor:(double)arg2;
+ (id)ticksAndLabelsForRangeInModelCoordinates:(id)arg1 maximumLabelCount:(long long)arg2 endingOptions:(long long)arg3 dimension:(id)arg4;
@property(readonly, nonatomic) id <HKZoomScale> scalarZoomScaleEngine; // @synthesize scalarZoomScaleEngine=_scalarZoomScaleEngine;
@property(nonatomic) double verticalLabelPadding; // @synthesize verticalLabelPadding=_verticalLabelPadding;
@property(retain, nonatomic) id <HKAxisLabelDimension> labelDimension; // @synthesize labelDimension=_labelDimension;
@property(nonatomic) long long labelEndingOptions; // @synthesize labelEndingOptions=_labelEndingOptions;
- (void).cxx_destruct;
- (id)adjustValueRangeForLabels:(id)arg1;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)zoomScaleEngine;
- (double)labelSpacingFactorForNumberFormatter;
- (id)stringFromNumber:(id)arg1;
- (id)adjustedRangeForFittedRange:(id)arg1 chartRange:(struct HKRange)arg2;
- (id)init;

@end

