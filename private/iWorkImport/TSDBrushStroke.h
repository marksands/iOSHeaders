//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDSmartStroke.h>

__attribute__((visibility("hidden")))
@interface TSDBrushStroke : TSDSmartStroke
{
}

+ (id)brushProgram;
+ (id)sharedContext;
+ (void)loadSectionsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;
+ (id)loadImageForBrush:(id)arg1;
+ (void)loadLineEndsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;
+ (void)loadLineEndTextureForBrush:(id)arg1 lineEnd:(id)arg2 path:(struct CGPath *)arg3 andBounds:(struct CGRect)arg4;
+ (void)loadBrush:(id)arg1;
+ (id)cacheDirectory;
+ (Class)mutableClass;
- (struct CGImage *)newCGImageFromGLWithColorSpace:(struct CGColorSpace *)arg1;
- (void)brushPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 parameterized:(_Bool)arg3 drawWithOpenGL:(_Bool)arg4 shouldReverseDrawOrder:(_Bool)arg5;
- (void)brushPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(struct _NSRange)arg3 intoPath:(id)arg4 orIntoVector:(vector_b5dead7b *)arg5 sectionIndex:(unsigned long long *)arg6 viewScale:(double)arg7;
- (void)brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(CDStruct_c3b9c2ee)arg4 inElementRange:(struct _NSRange)arg5 intoPath:(id)arg6 orIntoVector:(vector_b5dead7b *)arg7 viewScale:(double)arg8;
- (double)i_verticalOffsetForSwatch;
- (double)horizontalMarginForSwatch;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4 parameterized:(_Bool)arg5 drawWithOpenGL:(_Bool)arg6 shouldReverseDrawOrder:(_Bool)arg7;
- (void)glBrushPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 parameterized:(_Bool)arg3 shouldReverseDrawOrder:(_Bool)arg4;
- (void)finishOpenGLRenderInContext:(struct CGContext *)arg1 pathVertexData:(vector_b5dead7b *)arg2 parameterized:(_Bool)arg3 shouldReverseDrawOrder:(_Bool)arg4;
- (void)renderOpenGLSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(CDStruct_c3b9c2ee)arg4 inElementRange:(struct _NSRange)arg5 into:(vector_b5dead7b *)arg6 viewScale:(double)arg7;
- (id)brushTextureForId:(id)arg1;
- (_Bool)needsToExtendJoinsForBoundsCalculation;
- (int)cap;
- (id)description;
- (_Bool)supportsPattern;
- (_Bool)usesOpenGL;
- (_Bool)drawsInOneStep;
- (_Bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (_Bool)canApplyToCAShapeLayer;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;
- (id)strokeLineEnd:(id)arg1;
- (double)suggestedMinimumLineWidth;
- (double)lineEndInsetAdjustment;
- (id)brushBoundsForId:(id)arg1;
- (id)brushPathsForId:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

