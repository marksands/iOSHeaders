//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DFramebufferGaussianBlurPipeline.h>

@class TSCH3DGLFramebuffer;

__attribute__((visibility("hidden")))
@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline
{
    float mBlendFactor;
    TSCH3DGLFramebuffer *mBlendTexture;
}

+ (id)effectsArray;
@property(retain, nonatomic) TSCH3DGLFramebuffer *blendTexture; // @synthesize blendTexture=mBlendTexture;
@property(nonatomic) float blendFactor; // @synthesize blendFactor=mBlendFactor;
- (void)updateShaderEffectsStates;
- (void)dealloc;

@end

