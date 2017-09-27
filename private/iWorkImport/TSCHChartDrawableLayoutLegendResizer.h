//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCHChartDrawableLayoutLegendResizer : NSObject
{
    int mAnchoringStates[2];
    double mAnchoringPosition[2];
    _Bool mShouldUpdateConfinedPushableAnchoring;
    NSArray *mLegendConfinementBounds;
}

+ (id)legendResizerWithInitialFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1;
+ (struct CGRect)snappedLegendFrame:(struct CGRect)arg1 forChartAreaFrame:(struct CGRect)arg2;
+ (struct CGRect)outerAnchoringFrameFromChartAreaFrame:(struct CGRect)arg1;
+ (struct CGRect)innerAnchoringFrameFromChartAreaFrame:(struct CGRect)arg1;
+ (double)p_sideIntersectionLengthForChartAreaFrame:(struct CGRect)arg1;
+ (double)p_sideIntersectionLengthForChartAreaRange:(struct TSCHLegendAnchorRange)arg1;
@property(copy, nonatomic) NSArray *p_legendConfinementBounds; // @synthesize p_legendConfinementBounds=mLegendConfinementBounds;
@property(nonatomic) _Bool p_shouldUpdateConfinedPushableAnchoring; // @synthesize p_shouldUpdateConfinedPushableAnchoring=mShouldUpdateConfinedPushableAnchoring;
- (id)resizedLegendGeometry:(id)arg1 forLastChartAreaFrame:(struct CGRect)arg2 newChartAreaFrame:(struct CGRect)arg3 isIndirectResizing:(_Bool)arg4;
- (void)p_updateStateForIsIndirectResizing:(_Bool)arg1;
- (struct TSCHLegendAnchorRange)p_resizedLegendForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1 dimension:(long long)arg2;
- (struct TSCHLegendAnchorRange)p_pushedLegendForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1 dimension:(long long)arg2 returningIsConfined:(_Bool *)arg3;
- (_Bool)p_hasConfinedLocationWithinConfinementBoundsForLocation:(double)arg1 dimension:(long long)arg2 returningConfinedLocation:(double *)arg3;
- (_Bool)p_isLegendAnchoredForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1 dimension:(long long)arg2 returningLegendLocation:(double *)arg3;
- (void)p_updateLegendConfinementBoundsForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1;
- (void)p_updateLegendConfinementBoundsForChartAreaFrame:(struct CGRect)arg1 legendFrame:(struct CGRect)arg2;
- (_Bool)p_isInFrontOfLine:(struct TSCHLegendAnchorLine)arg1 forRect:(struct CGRect)arg2;
- (_Bool)p_isConfinedPushableAnchoring;
- (void)p_initializeAnchoringStateForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1;
- (int)p_anchoringStateForLegendFrame:(struct CGRect)arg1 chartAreaFrame:(struct CGRect)arg2 dimension:(long long)arg3 returningAnchoringPosition:(double *)arg4;
- (void)dealloc;
- (id)initWithInitialFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1;

@end

