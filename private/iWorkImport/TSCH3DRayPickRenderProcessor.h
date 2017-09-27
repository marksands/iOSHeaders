//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class NSArray, NSMutableArray, TSCH3DDataBuffer, TSCH3DRayPickPipelineDelegate;

__attribute__((visibility("hidden")))
@interface TSCH3DRayPickRenderProcessor : TSCH3DRetargetRenderProcessor
{
    TSCH3DDataBuffer *mBuffer;
    NSMutableArray *mPickedPoints;
    tvec2_84d5962d mPosition;
    float mSlack;
    TSCH3DRayPickPipelineDelegate *mSceneObjectDelegate;
}

@property(retain, nonatomic) TSCH3DRayPickPipelineDelegate *sceneObjectDelegate; // @synthesize sceneObjectDelegate=mSceneObjectDelegate;
@property(nonatomic) float slack; // @synthesize slack=mSlack;
@property(nonatomic) tvec2_84d5962d position; // @synthesize position=mPosition;
- (id).cxx_construct;
@property(readonly, nonatomic) NSArray *pickedPoints;
- (void)submit:(const struct PrimitiveInfo *)arg1;
- (void)geometry:(id)arg1;
- (id)matrix;
- (void)dealloc;
- (id)init;

@end

