//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _MKMarkerStyle : NSObject
{
    UIColor *_markerColor;
    double _shadowAlpha;
    UIColor *_strokeColor;
    double _strokeWidth;
    UIColor *_glyphColor;
    UIImage *_glyphImage;
}

+ (id)markerStyleForTraitCollection:(id)arg1 state:(long long)arg2;
@property(readonly, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(readonly, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(readonly, nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(readonly, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(readonly, nonatomic) UIColor *markerColor; // @synthesize markerColor=_markerColor;
- (void).cxx_destruct;

@end

