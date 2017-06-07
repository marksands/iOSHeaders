//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardUIServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardUIServices/NSObject-Protocol.h>

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneLayer, FBSSceneSpecification, FBSSceneTransitionContext, NSSet, NSString;
@protocol FBUISceneClientProxy;

@protocol FBUISceneHostProxy <NSObject, BSDescriptionProviding>
- (void)didInvalidateSceneClient:(id <FBUISceneClientProxy>)arg1;
- (void)sceneClient:(id <FBUISceneClientProxy>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)sceneClient:(id <FBUISceneClientProxy>)arg1 didUpdateClientSettings:(FBSSceneClientSettings *)arg2 withDiff:(FBSSceneClientSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)sceneClient:(id <FBUISceneClientProxy>)arg1 didDetachLayer:(FBSSceneLayer *)arg2;
- (void)sceneClient:(id <FBUISceneClientProxy>)arg1 didUpdateLayer:(FBSSceneLayer *)arg2;
- (void)sceneClient:(id <FBUISceneClientProxy>)arg1 didAttachLayer:(FBSSceneLayer *)arg2;
- (FBSSceneSpecification *)sceneSpecification;
- (NSString *)sceneIdentifier;
@end

