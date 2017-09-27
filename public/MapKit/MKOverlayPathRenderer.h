//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKOverlayRenderer.h>

@class NSArray, UIColor;

@interface MKOverlayPathRenderer : MKOverlayRenderer
{
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _lineWidth;
    int _lineJoin;
    int _lineCap;
    double _miterLimit;
    double _lineDashPhase;
    NSArray *_lineDashPattern;
    struct CGPath *_path;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)canDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)applyFillPropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
@property(copy) NSArray *lineDashPattern;
- (void)invalidatePath;
@property const struct CGPath *path;
- (void)createPath;
- (id)initWithOverlay:(id)arg1;
@property double lineDashPhase;
@property double miterLimit;
@property int lineCap;
@property int lineJoin;
@property double lineWidth;
@property(retain) UIColor *strokeColor;
@property(retain) UIColor *fillColor;

@end

