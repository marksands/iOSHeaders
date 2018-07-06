//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CIContext : NSObject
{
    void *_priv;
}

+ (struct CGColorSpace *)defaultGrayColorSpace;
+ (struct CGColorSpace *)defaultRGBColorSpace;
+ (struct CGColorSpace *)defaultWorkingColorSpace;
+ (int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void *)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect)arg4 format:(int)arg5 colorSpace:(struct CGColorSpace *)arg6;
+ (id)contextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (id)contextWithMTLDevice:(id)arg1;
+ (id)contextWithEAGLContext:(id)arg1 options:(id)arg2;
+ (id)contextWithEAGLContext:(id)arg1;
+ (id)contextWithCGContext:(struct CGContext *)arg1 options:(id)arg2;
+ (id)contextWithOptions:(id)arg1;
+ (id)context;
+ (id)_singletonContext;
+     // Error parsing type: ^{Context=^^?{atomic<unsigned int>=AI}^{CGColorSpace}^{CGColorSpace}iBBBBB^{CGContext}fB{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}IQQi[64c]B^{ObjectCache<CI::MainProgram, false>}^{ObjectCache<CI::Node, false>}^{ObjectCache<CI::Node, false>}dd^{RenderTask}ii^{Context}Q@@}24@0:8@16, name: internalCLContextWithOptions:
+     // Error parsing type: ^{Context=^^?{atomic<unsigned int>=AI}^{CGColorSpace}^{CGColorSpace}iBBBBB^{CGContext}fB{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}IQQi[64c]B^{ObjectCache<CI::MainProgram, false>}^{ObjectCache<CI::Node, false>}^{ObjectCache<CI::Node, false>}dd^{RenderTask}ii^{Context}Q@@}32@0:8@16^v24, name: internalCLContextWithOptions:glContext:
+     // Error parsing type: ^{Context=^^?{atomic<unsigned int>=AI}^{CGColorSpace}^{CGColorSpace}iBBBBB^{CGContext}fB{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}IQQi[64c]B^{ObjectCache<CI::MainProgram, false>}^{ObjectCache<CI::Node, false>}^{ObjectCache<CI::Node, false>}dd^{RenderTask}ii^{Context}Q@@}32@0:8@16@24, name: internalContextWithMTLDevice:options:
+     // Error parsing type: ^{Context=^^?{atomic<unsigned int>=AI}^{CGColorSpace}^{CGColorSpace}iBBBBB^{CGContext}fB{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}IQQi[64c]B^{ObjectCache<CI::MainProgram, false>}^{ObjectCache<CI::Node, false>}^{ObjectCache<CI::Node, false>}dd^{RenderTask}ii^{Context}Q@@}32@0:8@16@24, name: internalContextWithEAGLContext:options:
+     // Error parsing type: ^{Context=^^?{atomic<unsigned int>=AI}^{CGColorSpace}^{CGColorSpace}iBBBBB^{CGContext}fB{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}IQQi[64c]B^{ObjectCache<CI::MainProgram, false>}^{ObjectCache<CI::Node, false>}^{ObjectCache<CI::Node, false>}dd^{RenderTask}ii^{Context}Q@@}24@0:8@16, name: internalGLContextWithOptions:
- (id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2;
- (id)description;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGAffineTransform)CTM;
- (void)setCTM:(struct CGAffineTransform)arg1;
- (_Bool)measureRequirementsOf:(id)arg1 query:(int)arg2:(id *)arg3 results:(struct CGRect *)arg4;
- (id)flatten:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (void)clearCaches;
- (void)reclaimResources;
@property(readonly, nonatomic) int workingFormat;
@property(readonly, nonatomic) struct CGColorSpace *workingColorSpace;
- (struct CGColorSpace *)_outputColorSpace;
- (struct CGSize)outputImageMaximumSize;
- (struct CGSize)inputImageMaximumSize;
- (unsigned long long)maximumOutputImageSize;
- (unsigned long long)maximumInputImageSize;
- (struct CGLayer *)createCGLayerWithSize:(struct CGSize)arg1 info:(struct __CFDictionary *)arg2;
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 deferred:(_Bool)arg5;
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3;
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)render:(id)arg1 toMTLTexture:(id)arg2 commandBuffer:(id)arg3 bounds:(struct CGRect)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 target:(unsigned int)arg3 bounds:(struct CGRect)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 bounds:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (void)drawImage:(id)arg1 inRect:(struct CGRect)arg2 fromRect:(struct CGRect)arg3;
- (void)drawImage:(id)arg1 atPoint:(struct CGPoint)arg2 fromRect:(struct CGRect)arg3;
- (void)render:(id)arg1;
- (void)_insertEventMarker:(const char *)arg1;
- (_Bool)_isCGBackedContext;
- (_Bool)_isGLBackedContext;
- (_Bool)_isGLInternalContext;
- (_Bool)_isMetalInternalContext;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer *)arg2 bounds:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer *)arg2;
- (void)render:(id)arg1 toBitmap:(void *)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect)arg4 format:(int)arg5 colorSpace:(struct CGColorSpace *)arg6;
- (id)initWithMTLDevice:(id)arg1 options:(id)arg2;
- (id)initWithEAGLContext:(id)arg1 options:(id)arg2;
- (id)initWithEAGLContext:(id)arg1;
- (id)initWithCGContext:(struct CGContext *)arg1 options:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)abort;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)unlock;
- (void)lock;
- (int)_contextColorForInstruments;
@property(readonly) unsigned long long identifier;
- (id)device;
- (void)dealloc;
- (void)_gpuContextCheck;
- (id)_initWithInternalRepresentation:(void *)arg1;
// Error parsing type for property _internalContext:
// Property attributes: T^{Context=^^?{atomic<unsigned int>=AI}^{CGColorSpace}^{CGColorSpace}iBBBBB^{CGContext}fB{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}IQQi[64c]B^{ObjectCache<CI::MainProgram, false>}^{ObjectCache<CI::Node, false>}^{ObjectCache<CI::Node, false>}dd^{RenderTask}ii^{Context}Q@@},R

- (struct CGImage *)_createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 deferred:(_Bool)arg5 textureLimit:(unsigned long long)arg6;
- (id)_pdfDataRepresentation;
- (_Bool)writeHEIFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 error:(id *)arg6;
- (_Bool)writeJPEGRepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4 error:(id *)arg5;
- (_Bool)writePNGRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 error:(id *)arg6;
- (_Bool)writeTIFFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 error:(id *)arg6;
- (id)HEIFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4;
- (id)JPEGRepresentationOfImage:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3;
- (id)PNGRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4;
- (id)TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4;
- (id)startTaskToClear:(id)arg1 error:(id *)arg2;
- (_Bool)prepareRender:(id)arg1 fromRect:(struct CGRect)arg2 toDestination:(id)arg3 atPoint:(struct CGPoint)arg4 error:(id *)arg5;
- (id)startTaskToRender:(id)arg1 toDestination:(id)arg2 error:(id *)arg3;
- (id)_startTaskToRender:(id)arg1 toDestination:(id)arg2 forPrepareRender:(_Bool)arg3 error:(id *)arg4;
- (id)startTaskToRender:(id)arg1 fromRect:(struct CGRect)arg2 toDestination:(id)arg3 atPoint:(struct CGPoint)arg4 error:(id *)arg5;
- (id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 orientation:(unsigned int)arg4 options:(id)arg5;
- (id)depthBlurEffectFilterForImageURL:(id)arg1 options:(id)arg2;

@end

