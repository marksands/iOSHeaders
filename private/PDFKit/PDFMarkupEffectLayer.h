//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class PDFMarkupEffectLayerPrivate;

__attribute__((visibility("hidden")))
@interface PDFMarkupEffectLayer : CALayer
{
    PDFMarkupEffectLayerPrivate *_private;
}

- (void).cxx_destruct;
- (void)updateRotation;
- (void)setQuadrilateralPoints:(id)arg1 forMarkupType:(long long)arg2 forAnnotationBounds:(struct CGRect)arg3 withColor:(struct CGColor *)arg4;
- (void)setDisplayBox:(long long)arg1;
- (void)setPage:(id)arg1;
- (void)dealloc;
- (id)initWithGeometryFlipped:(_Bool)arg1;

@end

