//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSScene, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, _UICanvas;

@protocol _UICanvasSettingsDiffAction <NSObject>
- (void)performActionsForCanvas:(_UICanvas *)arg1 withUpdatedScene:(FBSScene *)arg2 settingsDiff:(FBSSceneSettingsDiff *)arg3 fromSettings:(FBSSceneSettings *)arg4 transitionContext:(FBSSceneTransitionContext *)arg5;
@end

