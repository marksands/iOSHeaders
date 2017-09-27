//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSCache, NSMapTable, NSString;

@interface CUICatalog : NSObject
{
    unsigned long long _storageRef;
    NSMapTable *_storageMapTable;
    NSBundle *_bundle;
    NSString *_assetStoreName;
    NSCache *_lookupCache;
    NSCache *_negativeCache;
    unsigned int _purgeWhenFinished:1;
    unsigned int _fileHasDisplayGamutInKeySpace:2;
    unsigned int _reserved:28;
}

+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(unsigned long long)arg5 layoutDirection:(unsigned long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 displayGamut:(unsigned long long)arg4 deviceSubtype:(unsigned long long)arg5 sizeClassHorizontal:(long long)arg6 sizeClassVertical:(long long)arg7;
+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4;
+ (id)bestMatchUsingObjects:(id)arg1 getAttributeValueUsing:(CDUnknownBlockType)arg2 scaleFactor:(double)arg3 deviceIdiom:(long long)arg4 deviceSubtype:(unsigned long long)arg5 displayGamut:(long long)arg6 deploymentTarget:(long long)arg7 layoutDirection:(long long)arg8 sizeClassHorizontal:(long long)arg9 sizeClassVertical:(long long)arg10 memoryClass:(long long)arg11 graphicsFeatureSetClass:(long long)arg12 graphicsFallBackOrder:(id)arg13;
+ (id)defaultUICatalogForBundle:(id)arg1;
+ (id)systemUICatalog;
+ (id)defaultUICatalog;
+ (_Bool)isValidAssetStorageWithURL:(id)arg1;
+ (_Bool)isValidLCRWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)negativeCache;
- (id)lookupCache;
- (void)clearCachedImageResources;
- (id)debugDescription;
- (id)imageByStylingImage:(struct CGImage *)arg1 stylePresetName:(id)arg2 styleConfiguration:(id)arg3 foregroundColor:(struct CGColor *)arg4 scale:(double)arg5;
- (CDStruct_3c058996)styledInsetsForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor *)arg3 scale:(double)arg4;
- (int)blendModeForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (struct CGColor *)equivalentForegroundColorForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (_Bool)hasStylePresetWithName:(id)arg1;
- (_Bool)hasStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (_Bool)fillStyledRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (_Bool)fillStyledPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (_Bool)strokeStyledPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (_Bool)_doStyledQuartzDrawingInContext:(struct CGContext *)arg1 inBounds:(struct CGRect)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4 drawingHandler:(CDUnknownBlockType)arg5;
- (_Bool)drawGlyphs:(const unsigned short *)arg1 atPositions:(const struct CGPoint *)arg2 inContext:(struct CGContext *)arg3 withFont:(struct __CTFont *)arg4 count:(unsigned long long)arg5 stylePresetName:(id)arg6 styleConfiguration:(id)arg7 foregroundColor:(struct CGColor *)arg8;
- (_Bool)requiredDrawOfUnstyledGlyphs:(const unsigned short *)arg1 atPositions:(const struct CGPoint *)arg2 inContext:(struct CGContext *)arg3 withFont:(struct __CTFont *)arg4 count:(unsigned long long)arg5;
- (id)newShapeEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor *)arg3;
- (id)newTextEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor *)arg3;
- (id)newShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2;
- (id)renditionKeyForShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2;
- (_Bool)_effectStyle:(unsigned long long *)arg1 state:(long long *)arg2 presentationState:(long long *)arg3 value:(long long *)arg4 resolution:(unsigned long long *)arg5 fromStyleConfiguration:(id)arg6;
- (id)renditionKeyForShapeEffectPresetWithStylePresetName:(id)arg1 state:(long long)arg2 presentationState:(long long)arg3 value:(long long)arg4 resolution:(unsigned long long)arg5;
- (id)renditionKeyForShapeEffectPresetWithStyleID:(unsigned long long)arg1 state:(long long)arg2 presentationState:(long long)arg3 value:(long long)arg4 resolution:(unsigned long long)arg5;
- (_Bool)canGetShapeEffectRenditionWithKey:(id)arg1;
- (id)newShapeEffectPresetWithRenditionKey:(id)arg1;
- (long long)artVariantIDOrZero;
- (id)_resolvedRenditionKeyFromThemeRef:(unsigned long long)arg1 withBaseKey:(id)arg2 scaleFactor:(double)arg3 deviceIdiom:(long long)arg4 deviceSubtype:(unsigned long long)arg5 displayGamut:(long long)arg6 layoutDirection:(long long)arg7 sizeClassHorizontal:(long long)arg8 sizeClassVertical:(long long)arg9 memoryClass:(unsigned long long)arg10 graphicsClass:(unsigned long long)arg11 graphicsFallBackOrder:(id)arg12 iconSizeIndex:(unsigned long long)arg13;
- (id)_resolvedRenditionKeyForName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(unsigned long long)arg9 graphicsClass:(unsigned long long)arg10 graphicsFallBackOrder:(id)arg11 withBaseKeySelector:(SEL)arg12;
- (id)_baseMultisizeImageSetKeyForName:(id)arg1;
- (id)_defaultAssetRenditionKey:(id)arg1;
- (id)_baseAtlasContentsKeyForName:(id)arg1;
- (id)_baseAtlasKeyForName:(id)arg1;
- (id)_baseKeyForName:(id)arg1;
- (id)_themeStore;
- (unsigned long long)_themeRef;
- (unsigned long long)_storageRefForRendition:(id)arg1 representsODRContent:(_Bool *)arg2;
- (id)modelWithName:(id)arg1;
- (id)_modelWithName:(id)arg1;
- (id)colorWithName:(id)arg1 displayGamut:(long long)arg2;
- (id)colorWithName:(id)arg1 displayGamut:(long long)arg2 deviceIdiom:(long long)arg3;
- (id)_colorWithName:(id)arg1 displayGamut:(long long)arg2 deviceIdiom:(long long)arg3;
- (id)iconImageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(unsigned long long)arg3 layoutDirection:(long long)arg4 desiredSize:(struct CGSize)arg5;
- (id)namedTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3;
- (id)_namedTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3;
- (id)namedTextureWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)_namedTextureWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)_baseTextureKeyForName:(id)arg1;
- (id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
- (id)_namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
- (id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)defaultNamedAssetWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5;
- (id)_defaultNamedAssetWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5;
- (id)defaultLayerStackWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5;
- (id)_defaultLayerStackWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5;
- (id)layerStackWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)_layerStackWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)layerStackWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3;
- (id)layerStackWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)layerStackWithName:(id)arg1;
- (id)namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
- (id)_namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
- (id)_baseVectorRenditionKey:(id)arg1;
- (id)namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 layoutDirection:(long long)arg4;
- (struct CGPDFDocument *)pdfDocumentWithName:(id)arg1;
- (void)enumerateNamedLookupsUsingBlock:(CDUnknownBlockType)arg1;
- (id)imagesWithName:(id)arg1;
- (id)allImageNames;
- (void)preloadNamedAtlasWithScaleFactor:(double)arg1 andNames:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)parentNamedImageAtlastForImageNamed:(id)arg1 scaleFactor:(double)arg2;
- (id)parentNamedImageAtlasForImageNamed:(id)arg1 scaleFactor:(double)arg2 displayGamut:(unsigned long long)arg3;
- (id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(unsigned long long)arg3;
- (id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3;
- (id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 displayGamut:(long long)arg4 deviceSubtype:(unsigned long long)arg5 memoryClass:(unsigned long long)arg6 graphicsClass:(unsigned long long)arg7 graphicsFallBackOrder:(id)arg8;
- (id)_namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 displayGamut:(long long)arg4 deviceSubtype:(unsigned long long)arg5 memoryClass:(unsigned long long)arg6 graphicsClass:(unsigned long long)arg7 graphicsFallBackOrder:(id)arg8;
- (id)dataWithName:(id)arg1;
- (id)dataWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 memoryClass:(unsigned long long)arg4 graphicsClass:(unsigned long long)arg5 graphicsFallBackOrder:(id)arg6;
- (id)_dataWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 memoryClass:(unsigned long long)arg4 graphicsClass:(unsigned long long)arg5 graphicsFallBackOrder:(id)arg6;
- (_Bool)imageExistsWithName:(id)arg1 scaleFactor:(double)arg2;
- (_Bool)imageExistsWithName:(id)arg1;
- (id)iconImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 desiredSize:(struct CGSize)arg9;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(unsigned long long)arg9 graphicsClass:(unsigned long long)arg10 graphicsFallBackOrder:(id)arg11;
- (id)_imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(unsigned long long)arg9 graphicsClass:(unsigned long long)arg10 graphicsFallBackOrder:(id)arg11;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(long long)arg9 graphicsClass:(long long)arg10;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 layoutDirection:(long long)arg4;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2;
- (void)_resourceUnPinnedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2 error:(id *)arg3;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2;

@end

