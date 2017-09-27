//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DSceneRenderPipeline.h>

#import "TSCH3DSceneObjectDelegator.h"

@class NSArray, TSCH3DPickedPoint, TSCH3DRayPickPipelineDelegate;

__attribute__((visibility("hidden")))
@interface TSCH3DRayPickPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator>
{
    tvec2_84d5962d mPickPosition;
    TSCH3DRayPickPipelineDelegate *mSceneObjectDelegate;
}

+ (id)pipelineWithScene:(id)arg1 position:(const tvec2_84d5962d *)arg2;
- (id).cxx_construct;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
@property(readonly, nonatomic) TSCH3DPickedPoint *pickedPoint;
- (id)p_frontMostPickedPoint;
- (id)p_closestPickedPoint;
@property(nonatomic) float slack;
@property(readonly, nonatomic) NSArray *pickedPoints;
- (id)p_renderProcessor;
- (id)p_unsortedPickedPoints;
- (_Bool)run;
- (void)rayPick:(id)arg1;
- (void)dealloc;
- (id)initWithScene:(id)arg1 position:(const tvec2_84d5962d *)arg2;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;

@end

