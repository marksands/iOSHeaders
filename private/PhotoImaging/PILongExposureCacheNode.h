//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUCacheNode.h>

@class NSDictionary;

@interface PILongExposureCacheNode : NUCacheNode
{
    NSDictionary *_recipe;
}

@property(readonly, nonatomic) NSDictionary *recipe; // @synthesize recipe=_recipe;
- (void).cxx_destruct;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (void)resolveSourceWithResponse:(struct NUResponse *)arg1;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 persistentURL:(id)arg2;
- (_Bool)tryLoadPersistentURL:(id)arg1 error:(out id *)arg2;
- (id)persistentMaskURL;
- (id)persistentURL;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)initWithInput:(id)arg1 settings:(id)arg2 subsampleFactor:(long long)arg3;
- (id)descriptionSubClassHook;

@end

