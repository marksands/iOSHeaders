//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUSourceNode.h>

@class NUComposition, NURenderPipeline;

@interface NUCompositionSourceNode : NUSourceNode
{
    NURenderPipeline *_renderPipeline;
    NUComposition *_composition;
    CDStruct_d58201db _pixelSize;
}

- (void).cxx_destruct;
- (id)_evaluateImageProperties:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id *)arg5;
- (id)_compositionRenderNodeForPipelineState:(id)arg1 error:(out id *)arg2;
- (CDStruct_912cb5d2)pixelSize;
- (_Bool)load:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithComposition:(id)arg1 renderPipeline:(id)arg2 settings:(id)arg3;

@end

