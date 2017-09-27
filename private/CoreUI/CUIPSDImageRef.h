//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _CUIPSDSublayerInfo;

@interface CUIPSDImageRef : NSObject
{
    NSString *_path;
    _Bool _parsedForLayers;
    int _file;
    struct CPSDFile *_psd;
    _CUIPSDSublayerInfo *_rootLayers;
}

+ (_Bool)isValidPSDResourceAtPath:(id)arg1 withImageInfo:(struct _PSDImageInfo *)arg2;
+ (_Bool)isValidPSDResourceAtPath:(id)arg1 withLayerCount:(unsigned int *)arg2 validateLayers:(_Bool)arg3;
+ (_Bool)isValidPSDResourceAtPath:(id)arg1 withLayerCount:(unsigned int *)arg2;
+ (_Bool)isValidPSDResourceAtPath:(id)arg1;
- (id)_layerEffectsAtAbsoluteIndex:(unsigned int)arg1;
- (id)_bevelEmbossFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo *)arg1;
- (id)_gradientOverlayFromLayerEffectsAtAbsoluteIndex:(unsigned int)arg1;
- (id)_colorOverlayFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo *)arg1;
- (id)_outerGlowFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo *)arg1;
- (id)_innerGlowFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo *)arg1;
- (id)_innerShadowFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo *)arg1;
- (id)_dropShadowFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo *)arg1;
- (id)colorFromDocumentColor:(double *)arg1;
- (id)_gradientAtAbsoluteIndex:(unsigned int)arg1;
- (int)cgBlendModeForPSDLayerOrLayerEffectBlendMode:(unsigned int)arg1;
- (id)_fillSampleAtAbsoluteIndex:(unsigned int)arg1;
- (id)_createMaskFromSlice:(unsigned int)arg1 atAbsoluteIndex:(unsigned int)arg2;
- (id)_patternFromSlice:(unsigned int)arg1 atAbsoluteIndex:(unsigned int)arg2 isZeroSizeImage:(_Bool *)arg3;
- (id)_imageFromSlice:(unsigned int)arg1 atAbsoluteIndex:(unsigned int)arg2 isEmptyImage:(_Bool *)arg3;
- (id)_imageAtAbsoluteIndex:(unsigned int)arg1 isZeroSizeImage:(_Bool *)arg2;
- (struct CGImage *)_copyCGImageAtAbsoluteIndex:(unsigned int)arg1;
- (int)_blendModeAtAbsluteIndex:(unsigned int)arg1;
- (double)_fillOpacityAtAbsoluteIndex:(unsigned int)arg1;
- (double)_opacityAtAbsoluteIndex:(unsigned int)arg1;
- (_Bool)_visibilityAtAbsoluteIndex:(unsigned int)arg1;
- (struct CGRect)_boundsAtAbsoluteIndex:(unsigned int)arg1;
- (id)_namesOfSublayers:(id)arg1;
- (id)_nameAtAbsoluteIndex:(unsigned int)arg1;
- (void)_logInvalidAbsoluteIndex:(unsigned int)arg1 psd:(struct CPSDFile *)arg2;
- (id)_copySublayerInfoAtAbsoluteIndex:(unsigned int)arg1 atRoot:(_Bool)arg2;
- (_Bool)_treatDividerAsLayer;
- (id)_layerRefAtAbsoluteIndex:(unsigned int)arg1;
- (struct CPSDLayerRecord *)_psdLayerRecordAtAbsoluteIndex:(unsigned int)arg1;
- (unsigned int)_absoluteIndexOfRootLayer:(unsigned int)arg1;
- (id)_layerInfo;
- (id)gradientAtLayer:(unsigned int)arg1;
- (id)fillSampleAtLayer:(unsigned int)arg1;
- (struct CGSize)size;
- (id)metadataString;
- (id)layerNames;
- (unsigned int)numberOfChannels;
- (unsigned int)numberOfSlices;
- (unsigned int)numberOfLayers;
- (struct _PSDImageInfo)imageInfo;
- (struct CGColorSpace *)copyColorSpace;
- (id)layerRefAtIndex:(unsigned int)arg1;
- (_Bool)visibilityAtLayer:(unsigned int)arg1;
- (CDStruct_1ba92a5e)metricsInMask:(id)arg1 forRect:(struct CGRect)arg2;
- (CDStruct_1ba92a5e)metricsInAlphaChannel:(long long)arg1 forRect:(struct CGRect)arg2;
- (int)_layerIndexFromLayerNames:(id)arg1 indexRangeBegin:(int)arg2 indexRangeEnd:(int)arg3 isTopLevel:(_Bool)arg4;
- (int)absoluteLayerIndexFromLayerNames:(id)arg1;
- (struct CGRect)boundsForSlice:(unsigned int)arg1;
- (struct CGRect)boundsAtLayer:(unsigned int)arg1;
- (id)maskFromCompositeAlphaChannel:(long long)arg1;
- (id)compositeImage;
- (struct CGImage *)createCompositeCGImage;
- (id)maskFromSlice:(unsigned int)arg1 atLayer:(unsigned int)arg2;
- (id)patternFromSlice:(unsigned int)arg1 atLayer:(unsigned int)arg2 isZeroSizeImage:(_Bool *)arg3;
- (id)patternFromSlice:(unsigned int)arg1 atLayer:(unsigned int)arg2;
- (id)imageFromSlice:(unsigned int)arg1 atLayer:(unsigned int)arg2 isEmptyImage:(_Bool *)arg3;
- (id)imageFromSlice:(unsigned int)arg1 atAbsoluteLayer:(unsigned int)arg2;
- (id)imageFromSlice:(unsigned int)arg1 atLayer:(unsigned int)arg2;
- (id)imageAtLayer:(unsigned int)arg1 isZeroSizeImage:(_Bool *)arg2;
- (id)imageAtLayer:(unsigned int)arg1;
- (struct CGImage *)createCGImageAtLayer:(unsigned int)arg1;
- (id)imageFromRef:(struct CGImage *)arg1;
- (struct CPSDFile *)psdFileForComposite;
- (struct CPSDFile *)psdFile;
- (struct CPSDFile *)_psdFileWithLayers:(_Bool)arg1;
- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (_Bool)loadPSDFileWithLayers:(_Bool)arg1;
- (_Bool)openImageFile;
- (void)enumerateLayersUsingBlock:(CDUnknownBlockType)arg1;
- (id)layerEnumerator;

@end

