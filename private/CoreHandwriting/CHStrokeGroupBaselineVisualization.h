//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroupBasedVisualization.h>

@interface CHStrokeGroupBaselineVisualization : CHStrokeGroupBasedVisualization
{
}

- (struct CGRect)_labelBoundsForAnchorPoint:(struct CGPoint)arg1;
- (struct CGAffineTransform)_orientationTransformForStrokeBounds:(struct CGRect)arg1 atWritingDirectionIndex:(long long)arg2 inGroup:(id)arg3;
- (void)_getOrientedBounds:(struct CGRect *)arg1 length:(double *)arg2 forStroke:(id)arg3 atWritingDirectionIndex:(long long)arg4 inGroup:(id)arg5;
- (struct CGPath *)_newBaselinePathForStrokeGroup:(id)arg1 outFirstPoint:(struct CGPoint *)arg2 strokeProvider:(id)arg3;
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;
- (long long)layeringPriority;

@end

