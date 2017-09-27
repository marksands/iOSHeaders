//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNRenderContext.h"

@class NSDictionary, NSString, SCNRenderTargetRegistry;

@interface SCNRenderContextImp : NSObject <SCNRenderContext>
{
    struct C3DColor4 _rendererPremultipliedBackgroundColor;
    long long _currentFrameIndex;
    struct __C3DEngineStats *__engineStats;
    SCNRenderTargetRegistry *_renderTargetRegistry;
    double _superSamplingFactor;
    struct SCNMatrix4 _screenTransform;
    _Bool _needSuperSampling;
    _Bool enablesDeferredShading;
    _Bool collectsCompilationErrors;
    _Bool wantsWideGamut;
    _Bool disableLinearRendering;
    _Bool isOpaque;
    double contentScaleFactor;
    long long pendingGPUFrameCount;
    long long sampleCount;
    unsigned long long debugOptions;
}

@property(nonatomic) unsigned long long debugOptions; // @synthesize debugOptions;
@property(readonly, nonatomic) SCNRenderTargetRegistry *renderTargetRegistry; // @synthesize renderTargetRegistry=_renderTargetRegistry;
@property(nonatomic) _Bool isOpaque; // @synthesize isOpaque;
@property(nonatomic) _Bool disableLinearRendering; // @synthesize disableLinearRendering;
@property(nonatomic) _Bool wantsWideGamut; // @synthesize wantsWideGamut;
@property(nonatomic) long long sampleCount; // @synthesize sampleCount;
@property(nonatomic) _Bool collectsCompilationErrors; // @synthesize collectsCompilationErrors;
@property(nonatomic) _Bool enablesDeferredShading; // @synthesize enablesDeferredShading;
@property(readonly, nonatomic) long long pendingGPUFrameCount; // @synthesize pendingGPUFrameCount;
@property(nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor;
@property(readonly, nonatomic) NSDictionary *compilationErrors;
- (void)drawWireframeOverlayForElements:(CDStruct_d65e47c4 *)arg1 range:(CDStruct_912cb5d2)arg2 store:(struct __C3DRendererElementStore *)arg3;
- (void)endDeferredLighting;
-     // Error parsing type: v36@0:8^{__C3DNode=}16i24^{__C3DLightRuntimeData=If[4{?=[4]}]^v^{__C3DTextureSampler}^v^{__C3DTextureSampler}}28, name: renderLight:lightType:lightData:
- (void)beginDeferredLighting;
- (void)unmapVolatileMeshElement:(struct __C3DMeshElement *)arg1;
- (struct __C3DMeshElement *)createVolatileMeshElementOfType:(BOOL)arg1 primitiveCount:(long long)arg2 bytesPerIndex:(long long)arg3;
- (void)unmapVolatileMesh:(struct __C3DMesh *)arg1 modifiedVerticesCount:(long long)arg2;
- (_Bool)mapVolatileMesh:(struct __C3DMesh *)arg1 verticesCount:(long long)arg2;
- (void)renderVideoBackground:(struct __C3DImageProxy *)arg1 engineContext:(struct __C3DEngineContext *)arg2;
-     // Error parsing type: v32@0:8^{__C3DEffectSlot={__CFRuntimeBase=QAQ}{C3DColor4=(?=[4f]{?=ffff})}^v(?=^{__C3DImage}^v^{__C3DImageProxy}^{__C3DTexture})b8b1b1b1b4c^{__C3DTextureSampler}^(C3DMatrix4x4)fi^v}16^{__C3DEngineContext=}24, name: renderBackground:engineContext:
-     // Error parsing type: v24@0:8^{__C3DFXPass={__CFRuntimeBase=QAQ}^{__CFString}iiB^{__C3DFXTechnique}^{__CFString}^{__CFString}^{__CFString}^{__CFString}B^{__C3DFXProgram}^{__C3DMaterial}^{__C3DBlendStates}^{__C3DRasterizerStates}{C3DColor4=(?=[4f]{?=ffff})}CIb1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1^{__C3DRendererElement}QQ{?=^?^?^?^?^?^?^?^?^v}{?=[4{?=CCCb1b1b1b1b1[4C]}]{?=CCCb1b1b1b1b1[4C]}b3b1b1}{CGPoint=dd}^{?}I^{__C3DNode}^{__C3DNode}^{__CFArray}^{__C3DNode}^{__CFString}^{__CFString}^{__CFString}^^{__C3DFXPassInput}qq^{__CFDictionary}^{__CFDictionary}}16, name: drawFullScreenQuadForPass:
-     // Error parsing type: v148@0:8^{__C3DMesh=}16^{__C3DMeshElement=}24^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}32^{__C3DEngineContext=}40(C3DMatrix4x4=[16f][4]{?=[4]})48r^{C3DColor4=(?=[4f]{?=ffff})}112^{__C3DRasterizerStates=}120^{__C3DBlendStates=}128^{__C3DImage=}136B144, name: renderMesh:meshElement:withProgram:engineContext:transform:color:rasterizerStates:blendState:texture:depthBias:
-     // Error parsing type: v32@0:8^{__C3DRendererElement=}16^{__C3DFXPass={__CFRuntimeBase=QAQ}^{__CFString}iiB^{__C3DFXTechnique}^{__CFString}^{__CFString}^{__CFString}^{__CFString}B^{__C3DFXProgram}^{__C3DMaterial}^{__C3DBlendStates}^{__C3DRasterizerStates}{C3DColor4=(?=[4f]{?=ffff})}CIb1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1^{__C3DRendererElement}QQ{?=^?^?^?^?^?^?^?^?^v}{?=[4{?=CCCb1b1b1b1b1[4C]}]{?=CCCb1b1b1b1b1[4C]}b3b1b1}{CGPoint=dd}^{?}I^{__C3DNode}^{__C3DNode}^{__CFArray}^{__C3DNode}^{__CFString}^{__CFString}^{__CFString}^^{__C3DFXPassInput}qq^{__CFDictionary}^{__CFDictionary}}24, name: drawRenderElement:withPass:
- (void)processRendererElement:(struct __C3DRendererElement *)arg1 engineIterationContext:(CDStruct_256c7a3c *)arg2;
- (void)stopProcessingRendererElements;
- (void)processRendererElements:(CDStruct_d65e47c4 *)arg1 count:(unsigned int)arg2 engineIterationContext:(CDStruct_256c7a3c *)arg3;
- (void)startProcessingRendererElementsWithEngineIterationContext:(CDStruct_256c7a3c *)arg1;
- (id)newRenderTargetWithDescription:(CDStruct_fd8065c6 *)arg1 size:(unsigned long long)arg2 arrayLength: /* Error: Ran out of types for this method. */;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
-     // Error parsing type: @24@0:8^{__C3DEffectSlot={__CFRuntimeBase=QAQ}{C3DColor4=(?=[4f]{?=ffff})}^v(?=^{__C3DImage}^v^{__C3DImageProxy}^{__C3DTexture})b8b1b1b1b4c^{__C3DTextureSampler}^(C3DMatrix4x4)fi^v}16, name: textureForEffectSlot:
@property(nonatomic) _Bool showsAuthoringEnvironment;
@property(readonly, nonatomic) id <SCNResourceManager> resourceManager;
- (struct __C3DEngineStats *)stats;
@property(readonly, nonatomic) long long currentFrameIndex;
- (void)setRendererPremultipliedBackgroundColor:(struct C3DColor4)arg1;
- (void)endRenderPass;
-     // Error parsing type: B27@0:8^{__C3DFXPass={__CFRuntimeBase=QAQ}^{__CFString}iiB^{__C3DFXTechnique}^{__CFString}^{__CFString}^{__CFString}^{__CFString}B^{__C3DFXProgram}^{__C3DMaterial}^{__C3DBlendStates}^{__C3DRasterizerStates}{C3DColor4=(?=[4f]{?=ffff})}CIb1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1^{__C3DRendererElement}QQ{?=^?^?^?^?^?^?^?^?^v}{?=[4{?=CCCb1b1b1b1b1[4C]}]{?=CCCb1b1b1b1b1[4C]}b3b1b1}{CGPoint=dd}^{?}I^{__C3DNode}^{__C3DNode}^{__CFArray}^{__C3DNode}^{__CFString}^{__CFString}^{__CFString}^^{__C3DFXPassInput}qq^{__CFDictionary}^{__CFDictionary}}16{?=CCB}24, name: beginRenderPass:parameters:
- (void)endFrameWaitingUntilCompleted:(_Bool)arg1;
- (void)beginFrame:(id)arg1;
- (_Bool)supportsFeatureSet:(unsigned long long)arg1;
@property(readonly, nonatomic) int profile;
@property(readonly, nonatomic) unsigned int features;
@property(nonatomic) struct SCNMatrix4 screenTransform;
@property(nonatomic) double superSamplingFactor;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

