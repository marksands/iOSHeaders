//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SCNAnimatable.h"
#import "SCNTechniqueSupport.h"

@class NSArray, NSData, NSMutableDictionary, NSString, NSURL, SCNMaterialProperty, SCNOrderedDictionary, SCNTechnique;

@interface SCNLight : NSObject <SCNAnimatable, SCNTechniqueSupport, NSCopying, NSSecureCoding>
{
    // Error parsing type: ^{__C3DLight={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}{C3DColor4=(?=[4f]{?=ffff})}iffffffff{C3DColor4=(?=[4f]{?=ffff})}fffffCCQBb1b1b1b1b1b1b1b1b1ddd^{__C3DEffectSlot}^{__C3DEffectSlot}if^{__C3DFXTechnique}^v^{__CFData}}, name: _light
    unsigned int _isPresentationInstance:1;
    unsigned int _goboProjectShadows:1;
    unsigned int _castsShadow:1;
    unsigned int _usesDeferredShadows:1;
    unsigned int _usesModulatedMode:1;
    unsigned int _baked:1;
    unsigned int _shouldBakeDirectLighting:1;
    unsigned int _shouldBakeIndirectLighting:1;
    unsigned int _automaticallyAdjustsShadowProjection:1;
    unsigned int _forcesBackFaceCasters:1;
    unsigned int _sampleDistributedShadowMaps:1;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    NSString *_type;
    id _color;
    id _shadowColor;
    float _shadowRadius;
    double _intensity;
    double _temperature;
    double _orthographicScale;
    struct CGSize _shadowMapSize;
    unsigned long long _categoryBitMask;
    unsigned char _shadowSampleCount;
    unsigned char _shadowCascadeCount;
    double _maximumShadowDistance;
    double _shadowCascadeSplittingFactor;
    double _cascadeDebugFactor;
    double _zNear;
    double _zFar;
    double _shadowBias;
    float _attenuationStartDistance;
    float _attenuationEndDistance;
    float _attenuationFalloffExponent;
    float _spotInnerAngle;
    float _spotOuterAngle;
    float _spotFalloffExponent;
    SCNMaterialProperty *_gobo;
    SCNMaterialProperty *_ies;
    NSURL *_IESProfileURL;
    SCNTechnique *_technique;
    NSData *_sphericalHarmonics;
    id <MTLTexture> _probeTexture;
}

+ (_Bool)supportsSecureCoding;
+     // Error parsing type: @24@0:8^{__C3DLight={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}{C3DColor4=(?=[4f]{?=ffff})}iffffffff{C3DColor4=(?=[4f]{?=ffff})}fffffCCQBb1b1b1b1b1b1b1b1b1ddd^{__C3DEffectSlot}^{__C3DEffectSlot}if^{__C3DFXTechnique}^v^{__CFData}}16, name: lightWithLightRef:
+ (id)light;
+ (id)lightWithMDLLightProbe:(id)arg1;
+ (id)lightWithMDLLight:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNLight:(id)arg1;
- (void)_customDecodingOfSCNLight:(id)arg1;
- (void)_customEncodingOfSCNLight:(id)arg1;
@property(retain, nonatomic) NSURL *IESProfileURL;
@property(readonly, nonatomic) SCNMaterialProperty *gobo;
@property(nonatomic) long long shadowMode;
- (void)set_shadowCascadeDebugFactor:(double)arg1;
- (double)_shadowCascadeDebugFactor;
@property(nonatomic) double shadowCascadeSplittingFactor;
@property(nonatomic) _Bool sampleDistributedShadowMaps;
@property(nonatomic) _Bool forcesBackFaceCasters;
@property(nonatomic) double maximumShadowDistance;
@property(nonatomic) _Bool automaticallyAdjustsShadowProjection;
- (void)setAdjustsShadowProjection:(_Bool)arg1;
- (_Bool)adjustsShadowProjection;
- (void)setForceBackFaceCasters:(_Bool)arg1;
- (_Bool)forceBackFaceCasters;
@property(nonatomic) unsigned long long shadowCascadeCount;
@property(nonatomic) double zNear;
@property(nonatomic) double zFar;
- (void)setUsesModulatedMode:(_Bool)arg1;
- (_Bool)usesModulatedMode;
- (void)setUsesDeferredShadows:(_Bool)arg1;
- (_Bool)usesDeferredShadows;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) double temperature;
@property(copy, nonatomic) SCNTechnique *technique;
@property(nonatomic) double spotOuterAngle;
@property(nonatomic) double spotInnerAngle;
- (void)setSpotFalloffExponent:(double)arg1;
- (double)spotFalloffExponent;
@property(nonatomic) unsigned long long shadowSampleCount;
@property(nonatomic) double shadowRadius;
@property(nonatomic) struct CGSize shadowMapSize;
@property(retain, nonatomic) id shadowColor;
@property(nonatomic) double shadowBias;
@property(nonatomic) double orthographicScale;
@property(nonatomic) double intensity;
@property(retain, nonatomic) id color;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) _Bool castsShadow;
- (void)setBaked:(_Bool)arg1;
- (_Bool)isBaked;
@property(nonatomic) double attenuationStartDistance;
@property(nonatomic) double attenuationFalloffExponent;
@property(nonatomic) double attenuationEndDistance;
- (void)setShouldBakeIndirectLighting:(_Bool)arg1;
- (_Bool)shouldBakeIndirectLighting;
- (void)setShouldBakeDirectLighting:(_Bool)arg1;
- (_Bool)shouldBakeDirectLighting;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
@property(readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
- (void)set_sphericalHarmonics:(id)arg1;
- (id)_sphericalHarmonics;
- (void)set_probeTexture:(id)arg1;
- (id)_probeTexture;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_scnBindings;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;
- (id)animationPlayerForKey:(id)arg1;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (const void *)__CFObject;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (_Bool)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationLight;
- (void)_syncObjCModel;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (void)dealloc;
-     // Error parsing type: ^{__C3DLight={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}{C3DColor4=(?=[4f]{?=ffff})}iffffffff{C3DColor4=(?=[4f]{?=ffff})}fffffCCQBb1b1b1b1b1b1b1b1b1ddd^{__C3DEffectSlot}^{__C3DEffectSlot}if^{__C3DFXTechnique}^v^{__CFData}}16@0:8, name: lightRef
-     // Error parsing type: @24@0:8^{__C3DLight={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}{C3DColor4=(?=[4f]{?=ffff})}iffffffff{C3DColor4=(?=[4f]{?=ffff})}fffffCCQBb1b1b1b1b1b1b1b1b1ddd^{__C3DEffectSlot}^{__C3DEffectSlot}if^{__C3DFXTechnique}^v^{__CFData}}16, name: initPresentationLightWithLightRef:
-     // Error parsing type: @24@0:8^{__C3DLight={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}{C3DColor4=(?=[4f]{?=ffff})}iffffffff{C3DColor4=(?=[4f]{?=ffff})}fffffCCQBb1b1b1b1b1b1b1b1b1ddd^{__C3DEffectSlot}^{__C3DEffectSlot}if^{__C3DFXTechnique}^v^{__CFData}}16, name: initWithLightRef:
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

