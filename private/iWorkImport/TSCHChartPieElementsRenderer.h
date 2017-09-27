//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHRenderer.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface TSCHChartPieElementsRenderer : TSCHRenderer
{
    struct CGPoint mHitPoint;
    unsigned long long mHitSeries;
    float mHitStartAngle;
    float mHitRadius;
    float mHitExplosion;
    _Bool mDidMoveDuringTouchIfNotThenRotateChartForDemo;
    NSIndexSet *mPartialRenderingSeriesIndexSet;
    _Bool mPartialRenderingInclusionFlag;
}

- (struct CGRect)chartLayoutSpaceRenderingRect;
- (void)drawAll;
- (void)drawAllButSeriesIndicies:(id)arg1;
- (void)drawOnlySeriesIndicies:(id)arg1;
- (_Bool)p_shouldRenderSeriesIndex:(unsigned long long)arg1;
- (void)renderLabelWithPieLabel:(id)arg1 combinedLabelTransform:(struct CGAffineTransform)arg2 context:(struct CGContext *)arg3 paragraphStyle:(id)arg4;
- (void)renderLabelsWithWedgeLayoutInfo:(id)arg1 paragraphStyle:(id)arg2 context:(struct CGContext *)arg3;
- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (struct CGLayer *)p_newPreRenderedImageWithContext:(struct CGContext *)arg1 path:(struct CGPath *)arg2 fill:(id)arg3 stroke:(id)arg4 shadow:(id)arg5 outUserSpaceLayerBounds:(struct CGRect *)arg6;
- (struct CGLayer *)p_newCGLayerForUserSpaceRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 outUserSpaceLayerBounds:(struct CGRect *)arg3;
- (void)p_drawLinePathsIntoContext:(struct CGContext *)arg1 linePath:(struct CGPath *)arg2 tailPath:(struct CGPath *)arg3 headPath:(struct CGPath *)arg4 fillTail:(_Bool)arg5 fillHead:(_Bool)arg6 stroke:(id)arg7;
- (void)p_drawWedgePathIntoContext:(struct CGContext *)arg1 path:(struct CGPath *)arg2 fill:(id)arg3 stroke:(id)arg4 opacity:(double)arg5;
- (void)p_drawOnlyShadow:(id)arg1 forImage:(struct CGLayer *)arg2 intoRect:(struct CGRect)arg3 intoContext:(struct CGContext *)arg4 atViewScale:(double)arg5 usingBlendMode:(int)arg6 opacity:(double)arg7;
- (void)p_drawOnlyShapeImage:(struct CGLayer *)arg1 intoRect:(struct CGRect)arg2 intoContext:(struct CGContext *)arg3 usingBlendMode:(int)arg4 opacity:(double)arg5;
- (int)chunkPlane;
- (void)dealloc;

@end

