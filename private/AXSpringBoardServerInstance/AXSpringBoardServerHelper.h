//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXSpringBoardServerInstanceDelegate.h"
#import "AXSpringBoardServerSideAppManagerDelegate.h"

@class AXAssertion, AXSpringBoardServerAlertManager, AXSpringBoardServerSideAppManager, NSMutableArray, NSString, UIAlertController, UIWindow;

@interface AXSpringBoardServerHelper : NSObject <AXSpringBoardServerSideAppManagerDelegate, AXSpringBoardServerInstanceDelegate>
{
    CDUnknownBlockType _alertHandler;
    UIWindow *_presentationWindow;
    NSMutableArray *_visibleTripleClickItems;
    _Bool _shouldOverrideInterfaceOrientation;
    NSMutableArray *_notificationObservers;
    AXSpringBoardServerAlertManager *_alertManager;
    UIAlertController *_alertControllerToDismissAfterPresentation;
    AXAssertion *_disableSystemGesturesAssertionForAlert;
    UIAlertController *_zoomConflictController;
    UIAlertController *_zoomTripleClickController;
    UIAlertController *_zoomBuddyUsageController;
    UIAlertController *_switchUsageConfirmedController;
    UIAlertController *_voiceOverUsageConfirmedController;
    UIAlertController *_touchAccommodationsUsageConfirmedController;
    UIAlertController *_tripleClickAlertController;
    UIAlertController *_brokenHomeButtonAlertController;
    UIAlertController *_rebootDeviceAlertController;
}

+ (id)_wallpaperController;
+ (id)_syncController;
+ (id)_assistantController;
+ (id)_iconController;
+ (id)_lockScreenManager;
+ (id)_awayController;
+ (id)_applicationController;
+ (id)_backlightController;
+ (id)_globalIdleTimeCoordinator;
+ (id)_uiController;
+ (id)sharedServerHelper;
+ (void)initialize;
@property(retain, nonatomic) UIAlertController *rebootDeviceAlertController; // @synthesize rebootDeviceAlertController=_rebootDeviceAlertController;
@property(retain, nonatomic) UIAlertController *brokenHomeButtonAlertController; // @synthesize brokenHomeButtonAlertController=_brokenHomeButtonAlertController;
@property(retain, nonatomic) UIAlertController *tripleClickAlertController; // @synthesize tripleClickAlertController=_tripleClickAlertController;
@property(retain, nonatomic) UIAlertController *touchAccommodationsUsageConfirmedController; // @synthesize touchAccommodationsUsageConfirmedController=_touchAccommodationsUsageConfirmedController;
@property(retain, nonatomic) UIAlertController *voiceOverUsageConfirmedController; // @synthesize voiceOverUsageConfirmedController=_voiceOverUsageConfirmedController;
@property(retain, nonatomic) UIAlertController *switchUsageConfirmedController; // @synthesize switchUsageConfirmedController=_switchUsageConfirmedController;
@property(retain, nonatomic) UIAlertController *zoomBuddyUsageController; // @synthesize zoomBuddyUsageController=_zoomBuddyUsageController;
@property(retain, nonatomic) UIAlertController *zoomTripleClickController; // @synthesize zoomTripleClickController=_zoomTripleClickController;
@property(retain, nonatomic) UIAlertController *zoomConflictController; // @synthesize zoomConflictController=_zoomConflictController;
@property(retain, nonatomic) AXAssertion *disableSystemGesturesAssertionForAlert; // @synthesize disableSystemGesturesAssertionForAlert=_disableSystemGesturesAssertionForAlert;
@property(retain, nonatomic) UIAlertController *alertControllerToDismissAfterPresentation; // @synthesize alertControllerToDismissAfterPresentation=_alertControllerToDismissAfterPresentation;
@property(retain, nonatomic) AXSpringBoardServerAlertManager *alertManager; // @synthesize alertManager=_alertManager;
- (void).cxx_destruct;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)didFailToPinAppForSideAppManager:(id)arg1;
- (void)didFailToFloatAppForSideAppManager:(id)arg1;
- (_Bool)_accessibilityHandleHomeOrLockButtonPress;
- (void)_handleConfirmRebootDevice;
- (void)_handleZoomInBuddyAlert;
- (void)handleBrokenHomeButtonAlert;
- (void)_handleTouchAccommodationsUsageConfirmed;
- (void)_handleDisableSwitchControlConfirmation;
- (void)_handleSwitchUsageConfirmed;
- (void)_handleDisallowUSBRestrictedModeSCInformativeOnly:(_Bool)arg1;
- (void)_handleDisallowUSBRestrictedModeVOInformativeOnly:(_Bool)arg1;
- (void)_handleVONoHomeButtonGestureAlert;
- (void)_handleVoiceOverUsageConfirmation;
- (id)_handleUsageConfirmationDialogWithMessage:(id)arg1 dismissBlock:(CDUnknownBlockType)arg2;
- (void)_handleDisableBrightnessFiltersAlert:(id)arg1;
- (void)_handleZoomTripleClickAfterConflict;
- (void)_handleZoomConflictAlert:(id)arg1;
- (void)_handleTripleClickAskAlert;
- (void)dismissAlertWithCancel;
- (void)_cleanupAlertController;
- (void)_dismissAlertController:(id)arg1;
- (void)_displayAlertController:(id)arg1;
- (void)_toggleTripleClickDisplay;
- (void)_handleAlertActionPress:(id)arg1;
- (void)_sortVisibleItems;
- (_Bool)shouldOverrideInterfaceOrientation;
- (_Bool)_shouldShowTCOption:(int)arg1;
- (_Bool)isPasscodeLockVisible;
- (_Bool)isPreferencesFrontmost;
- (_Bool)isBuddyRunning;
- (id)_visibleTripleClickItems;
- (_Bool)isMultiTaskingActive;
- (id)runningAppProcessesWithServerInstance:(id)arg1;
- (id)focusedAppProcessWithServerInstance:(id)arg1;
- (id)frontmostAppProcessWithServerInstance:(id)arg1;
- (_Bool)isPurpleBuddyAppFrontmostWithServerInstance:(id)arg1;
- (id)focusedAppsWithServerInstance:(id)arg1;
- (_Bool)isSettingsAppFrontmostWithServerInstance:(id)arg1;
- (_Bool)isSystemAppFrontmostExcludingSiri:(_Bool)arg1 withServerInstance:(id)arg2;
- (id)runningAppPIDsWithServerInstance:(id)arg1;
- (int)purpleBuddyPIDWithServerInstance:(id)arg1;
- (id)focusedAppPIDWithServerInstance:(id)arg1;
- (_Bool)isSystemAppShowingAnAlertWithServerInstance:(id)arg1;
- (_Bool)accessibilityShowControlCenter:(_Bool)arg1;
- (_Bool)_accessibilityAllowShowNotificationGestureOverride;
- (void)_accessibilitySetAllowShowNotificationGestureOverride:(_Bool)arg1;
- (id)_accessibilityCoverSheetPresentationManagerSharedInstance;
- (_Bool)_accessibilityShowNotificationCenter:(_Bool)arg1 serverInstance:(id)arg2;
- (_Bool)_accessibilityShowCoverSheet:(_Bool)arg1 serverInstance:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)accessibilityIsNotificationVisible;
- (_Bool)_accessibilityIsUILocked;
- (unsigned long long)_accessibilityNotificationCount;
- (id)_accessibilityNotificationSummary:(unsigned long long)arg1;
- (id)appForLayoutRole:(long long)arg1;
- (id)sceneLayoutState;
- (_Bool)canLaunchAsFloatingApplicationForIconView:(id)arg1;
- (_Bool)canLaunchAsPinnedApplicationForIconView:(id)arg1;
- (void)launchFloatingApplication:(id)arg1;
- (void)launchPinnedApplication:(id)arg1 onLeadingSide:(_Bool)arg2;
- (void)launchApplicationWithFullConfiguration:(id)arg1;
- (void)launchApplication:(id)arg1;
- (void)rebootDeviceWithServerInstance:(id)arg1;
- (void)activateSOSModeWithServerInstance:(id)arg1;
- (void)setDashBoardSystemGesturesEnabled:(_Bool)arg1 withServerInstance:(id)arg2;
- (void)setLockScreenDimTimerEnabled:(_Bool)arg1 withServerInstance:(id)arg2;
- (void)userEventOccurredWithServerInstance:(id)arg1;
- (id)dashBoardViewController;
- (_Bool)isMagnifierVisibleWithServerInstance:(id)arg1;
- (void)launchMagnifierAppWithServerInstance:(id)arg1;
- (void)reactivateInCallServiceWithServerInstance:(id)arg1;
- (void)forceLoadGAXBundleWithServerInstance:(id)arg1;
- (void)revealSpotlightWithServerInstance:(id)arg1;
- (id)medusaBundleIDsToLayoutRoles;
- (_Bool)canSetDockIconActivationModeForServerInstance:(id)arg1;
- (void)serverInstance:(id)arg1 setDockIconActivationMode:(unsigned long long)arg2;
- (id)medusaAppsWithServerInstance:(id)arg1;
- (_Bool)serverInstance:(id)arg1 performMedusaGesture:(unsigned long long)arg2;
- (id)allowedMedusaGesturesWithServerInstance:(id)arg1;
- (void)setSiriIsTalking:(_Bool)arg1 withServerInstance:(id)arg2;
- (double)reachabilityOffsetWithServerInstance:(id)arg1;
- (_Bool)hasActiveOrPendingCallOrFaceTimeWithServerInstance:(id)arg1;
- (_Bool)hasActiveOrPendingCallWithServerInstance:(id)arg1;
- (_Bool)hasActiveEndpointCallWithServerInstance:(id)arg1;
- (_Bool)hasActiveCallWithServerInstance:(id)arg1;
- (void)serverInstance:(id)arg1 pauseMedia:(_Bool)arg2 forBundleId:(id)arg3;
- (void)serverInstance:(id)arg1 showSpeechPlaybackControls:(_Bool)arg2;
- (void)unlockDeviceWithServerInstance:(id)arg1;
- (void)wakeUpDeviceIfNecessaryWithServerInstance:(id)arg1;
- (void)_unlockWithIntent:(int)arg1;
- (id)installedAppsWithServerInstance:(id)arg1;
- (id)serverInstance:(id)arg1 appWithIdentifier:(id)arg2;
- (id)serverInstance:(id)arg1 springBoardSystemInfoQuery:(unsigned long long)arg2;
- (_Bool)areSystemGesturesDisabledByAccessibilityWithServerInstance:(id)arg1;
- (_Bool)areSystemGesturesDisabledNativelyWithServerInstance:(id)arg1;
- (_Bool)isSpeakThisTemporarilyDisabledWithServerInstance:(id)arg1;
- (_Bool)isSystemGestureActiveWithServerInstance:(id)arg1;
- (_Bool)isSyncingRestoringResettingOrUpdatingWithServerInstance:(id)arg1;
- (void)dismissAppSwitcherWithServerInstance:(id)arg1;
- (_Bool)isAppSwitcherVisibleWithServerInstance:(id)arg1;
- (_Bool)isShowingHomescreenWithServerInstance:(id)arg1;
- (_Bool)isPasscodeLockVisibleWithServerInstance:(id)arg1;
- (_Bool)isDockVisibleWithServerInstance:(id)arg1;
- (_Bool)isSiriVisibleWithServerInstance:(id)arg1;
- (void)toggleDockWithServerInstance:(id)arg1;
- (_Bool)isControlCenterVisibleWithServerInstance:(id)arg1;
- (_Bool)serverInstance:(id)arg1 showControlCenter:(_Bool)arg2;
- (void)serverInstance:(id)arg1 setReachabilityEnabled:(_Bool)arg2;
- (_Bool)serverInstance:(id)arg1 showNotificationCenter:(_Bool)arg2;
- (_Bool)isCoverSheetVisibleWithServerInstance:(id)arg1;
- (_Bool)isNotificationCenterVisibleWithServerInstance:(id)arg1;
- (void)toggleNotificationCenterWithServerInstance:(id)arg1;
- (_Bool)isNotificationVisibleWithServerInstance:(id)arg1;
- (_Bool)isScreenshotWindowVisibleWithServerInstance:(id)arg1;
- (void)armApplePayWithServerInstance:(id)arg1;
- (void)openVoiceControlWithServerInstance:(id)arg1;
- (_Bool)dismissSiriWithServerInstance:(id)arg1;
- (_Bool)openSiriWithServerInstance:(id)arg1;
- (void)simulateEdgePressHaptics:(id)arg1;
- (void)openAppSwitcherWithServerInstance:(id)arg1;
- (void)resetDimTimerWithServerInstance:(id)arg1;
- (_Bool)isMediaPlayingWithServerInstance:(id)arg1 forBundleId:(id)arg2;
- (_Bool)isPasscodeRequiredOnLockWithServerInstance:(id)arg1;
- (_Bool)isMakingEmergencyCallWithServerInstance:(id)arg1;
- (_Bool)isSystemSleepingWithServerInstance:(id)arg1;
- (_Bool)isScreenLockedWithServerInstance:(id)arg1;
- (void)openCustomGestureCreationForSCATWithServerInstance:(id)arg1;
- (void)openCustomGestureCreationForASTWithServerInstance:(id)arg1;
- (void)serverInstance:(id)arg1 setOrientationLocked:(_Bool)arg2;
- (_Bool)isOrientationLockedWithServerInstance:(id)arg1;
- (_Bool)isRingerMutedWithServerInstance:(id)arg1;
- (_Bool)isSideSwitchUsedForOrientationWithServerInstance:(id)arg1;
- (void)setReachabilityActive:(_Bool)arg1;
- (_Bool)isReachabilityActive;
- (double)volumeLevelWithServerInstance:(id)arg1;
- (_Bool)isVoiceControlRunningWithServerInstance:(id)arg1;
- (_Bool)handleToggleIncomingCallWithServerInstance:(id)arg1;
- (void)serverInstance:(id)arg1 hideRemoteViewType:(long long)arg2 withData:(id)arg3;
- (void)serverInstance:(id)arg1 showRemoteViewType:(long long)arg2 withData:(id)arg3;
- (void)hideAlertWithServerInstance:(id)arg1;
- (void)serverInstance:(id)arg1 showAlertType:(long long)arg2 withHandler:(CDUnknownBlockType)arg3 withData:(id)arg4;
@property(readonly, nonatomic) AXSpringBoardServerSideAppManager *sideAppManager;
- (void)dealloc;
- (id)init;
- (void)_performValidation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

