//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDMediaRep.h>

#import "CALayerDelegate.h"
#import "TSDImageDrawingDataSource.h"
#import "TSDMagicMoveMatching.h"

@class NSMutableArray, NSObject<OS_dispatch_semaphore>, NSString, TSDImageDrawingHelper, TSDImageInfo, TSDImageLayout, TSDLayoutGeometry, TSDMaskInfo, TSDMaskLayout, TSPData;

__attribute__((visibility("hidden")))
@interface TSDImageRep : TSDMediaRep <CALayerDelegate, TSDImageDrawingDataSource, TSDMagicMoveMatching>
{
    TSDLayoutGeometry *mLastImageGeometryInRoot;
    TSDLayoutGeometry *mLastMaskGeometryInRoot;
    struct CGAffineTransform mLastLayoutToImageTransform;
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    _Bool mFrameInUnscaledCanvasIsValid;
    TSDImageDrawingHelper *mDrawingHelper;
    NSMutableArray *mUpdateFromLayoutBlocks;
    NSObject<OS_dispatch_semaphore> *mUpdateFromLayoutBlocksLock;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
- (void).cxx_destruct;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;
- (_Bool)p_drawsInOneStep;
- (id)p_validatedBitmapImageProvider;
- (id)p_validatedImageProvider;
- (id)textureForDescription:(id)arg1;
- (_Bool)p_shouldUseSourceImageForDescription:(id)arg1 clipBounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 image:(struct CGImage *)arg4;
- (void)setTextureAttributes:(id)arg1 textureBounds:(struct CGRect)arg2;
- (id)imageDrawingHelperThumbnailAdjustedImageData:(id)arg1;
- (id)imageDrawingHelperAdjustedImageData:(id)arg1;
- (_Bool)imageDrawingHelperImageHasAlpha:(id)arg1;
- (struct CGAffineTransform)imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)arg1;
- (struct CGRect)imageDrawingHelperImageRect:(id)arg1;
- (id)imageDrawingHelperThumbnailImageData:(id)arg1;
- (id)imageDrawingHelperImageData:(id)arg1;
- (struct CGRect)frameInUnscaledCanvas;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(double)arg4 withMask:(_Bool)arg5 withIAMask:(_Bool)arg6 forLayer:(_Bool)arg7 forShadow:(_Bool)arg8 forHitTest:(_Bool)arg9;
- (_Bool)canDrawInParallel;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (id)downloadProgressPlaceholderImage;
- (_Bool)shouldShowCheckerboard;
- (_Bool)isDataCurrentlyDownloading;
@property(readonly) TSPData *imageDataForRendering;
- (void)willBeRemoved;
@property(readonly, nonatomic) TSDMaskLayout *maskLayout;
@property(readonly, nonatomic) TSDMaskInfo *maskInfo;
@property(readonly, nonatomic) TSDImageLayout *imageLayout;
@property(readonly, nonatomic) TSDImageInfo *imageInfo;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

