//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PIPhotoEditHelper : NSObject
{
}

+ (id)pipelineFiltersForRAWShowingOriginalWithGeometry;
+ (id)pipelineFiltersForShowingOriginalWithGeometry;
+ (id)pipelineFiltersForOriginalGeometry;
+ (id)pipelineFiltersForCropping;
+ (id)filterNameForEffectName:(id)arg1;
+ (id)effectNameForFilterName:(id)arg1;
+ (_Bool)isSupportedAutoLoopRecipe:(id)arg1;
+ (_Bool)isPortraitEffect:(id)arg1;
+ (_Bool)is3DEffect:(id)arg1;
+ (void)removeAssetIdentifierFromMetadataArray:(id)arg1;
+ (void)addAssetIdentifier:(id)arg1 toMetadataArray:(id)arg2;
+ (void)addAssetIdentifier:(id)arg1 toMetadataDictionary:(id)arg2;
+ (id)portraitEffectsMatteRenderRequestWithComposition:(id)arg1;
+ (id)depthDataRenderRequestWithComposition:(id)arg1;
+ (id)imageExportRequestWithComposition:(id)arg1 format:(id)arg2 wideGamut:(_Bool)arg3;
+ (id)newJPEGExportFormatWithCompressionQuality:(double)arg1;
+ (id)videoExportRequestWithComposition:(id)arg1 destinationURL:(id)arg2 wideGamut:(_Bool)arg3;
+ (id)videoRenderRequestWithComposition:(id)arg1 fitInSize:(struct CGSize)arg2 wideGamut:(_Bool)arg3;
+ (id)priorityWithLevel:(long long)arg1;
+ (struct CGImage *)newCGImageFromBufferImage:(id)arg1;
+ (id)_imageRenderRequestWithComposition:(id)arg1 wideGamut:(_Bool)arg2;
+ (id)imageRenderRequestWithComposition:(id)arg1 fillInSize:(struct CGSize)arg2 wideGamut:(_Bool)arg3;
+ (id)imageRenderRequestWithComposition:(id)arg1 fitInSize:(struct CGSize)arg2 wideGamut:(_Bool)arg3;
+ (id)geometryRequestWithComposition:(id)arg1;
+ (id)newVideoExportClientWithName:(id)arg1;
+ (id)newVideoPropertiesClientWithName:(id)arg1;
+ (id)newImageExportClientWithName:(id)arg1;
+ (id)newImagePropertiesClientWithName:(id)arg1;
+ (id)newImageRenderClientWithName:(id)arg1;
+ (id)newAdjustmentWithName:(id)arg1;
+ (id)newComposition;
+ (id)livePhotoSourceWithPhotoSource:(id)arg1 videoSource:(id)arg2;
+ (id)videoSourceWithURL:(id)arg1;
+ (id)imageSourceWithCIImage:(id)arg1 orientation:(long long)arg2;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 proxyImage:(id)arg3 orientation:(long long)arg4 useEmbeddedPreview:(_Bool)arg5;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(_Bool)arg3;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 proxyImage:(id)arg3 orientation:(long long)arg4;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2;
+ (void)initialize;

@end

