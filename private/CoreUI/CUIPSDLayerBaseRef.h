//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUIPSDImageRef;

__attribute__((visibility("hidden")))
@interface CUIPSDLayerBaseRef : NSObject
{
    CUIPSDImageRef *_imageRef;
    unsigned int _layerIndex;
}

- (struct CGImage *)_createMaskFromAlphaChannel:(long long)arg1;
- (id)vectorMaskRef;
- (id)layerMaskRef;
@property(readonly) _Bool hasVectorMask;
@property(readonly) _Bool hasLayerMask;
@property(readonly) int blendMode;
@property(readonly) double fillOpacity;
@property(readonly) double opacity;
@property(readonly) _Bool visibility;
@property(readonly) struct CGRect bounds;
- (_Bool)isLayerGroup;
- (id)name;
- (id)_psdImageRef;
- (struct CPSDLayerRecord *)_psdLayerRecord;

@end

