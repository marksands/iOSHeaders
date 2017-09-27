//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIFoundation/UIPointFIFO.h>

@class UIView, _UIPointVector;

@interface UIQuadCurvePointFIFO : UIPointFIFO
{
    float _unitScale;
    _Bool _emitInterpolatedPoints;
    struct CGPath *_path;
    double _lineWidth;
    CDUnknownBlockType _emissionHandler;
    _UIPointVector *_prevPoints;
    _UIPointVector *_points;
    _UIPointVector *_controlPoints;
    // Error parsing type: , name: _lastPoint
    UIView *_view;
}

+     // Error parsing type: 68@0:8163248f64, name: interpolateFromPoint:toPoint:controlPoint:time:
@property(nonatomic) _Bool emitInterpolatedPoints; // @synthesize emitInterpolatedPoints=_emitInterpolatedPoints;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
// Error parsing type for property lastPoint:
// Property attributes: T,N,V_lastPoint

@property(nonatomic) _UIPointVector *controlPoints; // @synthesize controlPoints=_controlPoints;
@property(nonatomic) _UIPointVector *points; // @synthesize points=_points;
@property(nonatomic) _UIPointVector *prevPoints; // @synthesize prevPoints=_prevPoints;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
@property(nonatomic) float unitScale; // @synthesize unitScale=_unitScale;
@property(copy) CDUnknownBlockType emissionHandler; // @synthesize emissionHandler=_emissionHandler;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (void)setUnitScaleForViewSize:(struct CGSize)arg1 normalizedSize:(struct CGSize)arg2 contentScaleFactor:(double)arg3;
- (void)enumerateInterpolationFromPoint:(CDUnknownBlockType)arg1 toPoint:controlPoint:usingBlock: /* Error: Ran out of types for this method. */;
- (void)dealloc;
- (id)initWithFIFO:(id)arg1 strokeView:(id)arg2;
- (id)initWithFIFO:(id)arg1;

@end

