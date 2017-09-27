//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (PhotosUI)
+ (void)_pu_ensureLocalAssets:(id)arg1 forReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)pu_copyAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)pu_currentViewControllerStack;
- (void)pu_ensureLocalAssetsForCloudPhotoSharing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pu_copyAssets:(id)arg1;
- (void)_pu_setPreferredStatusBarUpdateAnimation:(long long)arg1;
- (void)_pu_setTabBarVisible:(_Bool)arg1 withAnimationSettings:(struct PUBarAnimationSettings)arg2;
- (void)_pu_setToolbarVisible:(_Bool)arg1 withAnimationSettings:(struct PUBarAnimationSettings)arg2;
- (void)_pu_setNavigationBarVisible:(_Bool)arg1 withAnimationSettings:(struct PUBarAnimationSettings)arg2;
- (void)_pu_updateStatusBarVisibilityWithAnimationSettings:(struct PUBarAnimationSettings)arg1;
- (void)_pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings)arg1 isStatusBarHidden:(_Bool)arg2;
- (void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings)arg1;
@property(readonly, nonatomic) long long pu_preferredStatusBarUpdateAnimation;
- (void)pu_setupInitialBarsVisibilityOnViewWillAppearAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool pu_wantsTabBarVisible;
@property(readonly, nonatomic) _Bool pu_wantsToolbarVisible;
@property(readonly, nonatomic) _Bool pu_wantsNavigationBarVisible;
- (_Bool)pu_isForceTouchEnabled;
@end

