//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKGraphSeriesBlockCoordinate.h"

@class NSArray, NSString;

@interface HKDistributionBlockPoint : NSObject <HKGraphSeriesBlockCoordinate>
{
    NSArray *_distributionSegments;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    struct CGPoint _minPoint;
    struct CGPoint _maxPoint;
}

@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSArray *distributionSegments; // @synthesize distributionSegments=_distributionSegments;
@property(readonly, nonatomic) struct CGPoint maxPoint; // @synthesize maxPoint=_maxPoint;
@property(readonly, nonatomic) struct CGPoint minPoint; // @synthesize minPoint=_minPoint;
- (void).cxx_destruct;
- (id)_applyTransformToSegments:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)_segmentsFromChartPoint:(id)arg1 forX:(double)arg2 minY:(double)arg3 maxY:(double)arg4;
@property(readonly, copy) NSString *description;
- (id)_quickDate:(id)arg1;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithTransform:(struct CGAffineTransform)arg1 blockPoint:(id)arg2;
- (id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

