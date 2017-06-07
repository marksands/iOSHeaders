//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUI/SBLockScreenPluginController-Protocol.h>
#import <SpringBoardUI/SBLockScreenPluginViewController-Protocol.h>

@class NSString, SBLockScreenPluginAction, SBLockScreenPluginMutableAppearanceContext, _UILegibilitySettings;
@protocol SBLockScreenPluginAgent, SBLockScreenPluginAppearance, SBLockScreenPluginViewController;

@interface SBAwayViewPluginController : UIViewController <SBLockScreenPluginViewController, SBLockScreenPluginController>
{
    id <SBLockScreenPluginAgent> _agent;
    SBLockScreenPluginMutableAppearanceContext *_appearance;
    _Bool _viewCanBeDisplayed;
}

+ (void)disableBundleNamed:(id)arg1;
+ (void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2;
+ (void)enableBundleNamed:(id)arg1;
+ (void)enableBundleNamed:(id)arg1 activationContext:(id)arg2;
@property(nonatomic) _Bool viewCanBeDisplayed; // @synthesize viewCanBeDisplayed=_viewCanBeDisplayed;
@property(nonatomic) __weak id <SBLockScreenPluginAgent> pluginAgent; // @synthesize pluginAgent=_agent;
- (void).cxx_destruct;
- (void)setNeedsLegibilityAppearanceUpdate;
- (_Bool)isContentViewWhiteUnderSlideToUnlockText;
- (_Bool)legibilitySettingsOverridesVibrancy;
- (_Bool)allowsLogout;
- (_Bool)wantsMesaAutoUnlock;
- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;
- (_Bool)handleVolumeDownButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (_Bool)handleLockButtonPressed;
- (_Bool)handleMenuButtonHeld;
- (_Bool)wantsMenuButtonHeldEvent;
- (_Bool)handleMenuButtonDoubleTap;
- (_Bool)handleMenuButtonTap;
- (id)slideToUnlockText;
- (_Bool)allowsUnlocking;
- (_Bool)allowsSiri;
- (_Bool)allowsPhotoSlideshow;
- (_Bool)allowsLockScreenMediaControls;
- (_Bool)allowsLockScreenCamera;
- (id)customHeaderView;
- (_Bool)showStatusBar;
- (id)customSubtitleColor;
- (id)customSubtitleText;
- (_Bool)hasCustomSubtitle;
- (_Bool)showDate;
- (_Bool)showBatteryChargingText;
- (_Bool)showDateView;
- (_Bool)disablesAwayItemsCompletely;
- (unsigned long long)unlockAnimationStyleForDestinationApp:(id)arg1;
- (id)bundleIDForUnlock;
- (_Bool)animateResumingToApplicationWithIdentifier:(id)arg1;
- (_Bool)allowsLockScreenHint;
- (_Bool)allowsTimer;
- (_Bool)allowsControlCenter;
- (_Bool)shouldAutoHideNotifications;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)shouldDisableOnUnlock;
- (_Bool)shouldDisableOnRelock;
- (_Bool)viewWantsOverlayLayout;
- (void)setFullscreen:(_Bool)arg1 duration:(double)arg2;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (long long)notificationBehavior;
- (long long)presentationStyle;
- (long long)overlayStyle;
- (CDUnknownBlockType)enableTransitionBlock;
- (void)disable;
@property(nonatomic) long long orientation;
- (void)setDeactivationContext:(id)arg1;
- (void)setActivationContext:(id)arg1;
- (void)purgeView;
- (void)_updateAppearance;
- (id)pluginAnimateAppearanceTransition:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)pluginAnimatesAppearanceTransition:(_Bool)arg1;
- (_Bool)pluginHandleEvent:(long long)arg1;
@property(readonly, retain, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
- (void)pluginDidDeactivateWithContext:(id)arg1;
- (void)pluginWillActivateWithContext:(id)arg1;
@property(readonly, nonatomic) id <SBLockScreenPluginAppearance> pluginAppearance;
@property(readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property(readonly, nonatomic) long long pluginPriority;
- (id)_legibilitySettings;
- (void)_updateAppearanceAndNotify:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

