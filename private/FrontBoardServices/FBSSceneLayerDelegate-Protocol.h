//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSSceneLayer;

@protocol FBSSceneLayerDelegate <NSObject>
- (void)sceneLayerDidInvalidate:(FBSSceneLayer *)arg1;
- (void)sceneLayerDidUpdate:(FBSSceneLayer *)arg1;
- (_Bool)sceneLayerShouldObserveUpdates:(FBSSceneLayer *)arg1;
@end

