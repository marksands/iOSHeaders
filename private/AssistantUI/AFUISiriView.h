//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AssistantUI/AFUISiriRemoteViewHosting-Protocol.h>
#import <AssistantUI/SiriUISiriStatusViewDelegate-Protocol.h>

@class NSString, SiriUIAudioRoutePickerButton, SiriUIConfiguration, SiriUIContentButton, SiriUIHelpButton, SiriUIVisualEffectView, UIImageView, _UIBackdropView;
@protocol AFUISiriViewDelegate, SiriUISiriStatusViewProtocol;

@interface AFUISiriView : UIView <SiriUISiriStatusViewDelegate, AFUISiriRemoteViewHosting>
{
    _UIBackdropView *_backdropView;
    UIView *_carPlayGatekeeperBackdropView;
    _Bool _backdropViewVisible;
    _Bool _carPlayGatekeeperBackdropViewVisible;
    UIView *_dimmingView;
    UIView *_dimmingAndLockContainer;
    UIView *_statusViewContainer;
    UIView<SiriUISiriStatusViewProtocol> *_siriStatusView;
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    SiriUIHelpButton *_helpButton;
    SiriUIContentButton *_reportBugButton;
    SiriUIConfiguration *_configuration;
    UIView *_lockView;
    unsigned long long _unlockAttemptCount;
    CDUnknownBlockType _unlockCompletion;
    _Bool _inShowUnlockViewAnimation;
    _Bool _inHideUnlockViewanimation;
    _Bool _remoteContentViewHidden;
    _Bool _lockViewHidden;
    SiriUIVisualEffectView *_eyesFreeEffectView;
    UIImageView *_eyesFreeLogoView;
    _Bool _disabled;
    _Bool _statusViewHidden;
    _Bool _keepStatusViewHidden;
    _Bool _flamesViewDeferred;
    _Bool _flamesViewPaused;
    _Bool _carDisplaySnippetVisible;
    UIView *_remoteContentView;
    UIView *_foregroundView;
    id <AFUISiriViewDelegate> _delegate;
    long long _siriSessionState;
    long long _mode;
    UIView *_frozenBackdropSnapshotView;
}

+ (void)_animateView:(id)arg1 fromYPosition:(double)arg2 toYPosition:(double)arg3 fade:(long long)arg4 completion:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) UIView *frozenBackdropSnapshotView; // @synthesize frozenBackdropSnapshotView=_frozenBackdropSnapshotView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long siriSessionState; // @synthesize siriSessionState=_siriSessionState;
@property(nonatomic) _Bool carDisplaySnippetVisible; // @synthesize carDisplaySnippetVisible=_carDisplaySnippetVisible;
@property(nonatomic) _Bool flamesViewPaused; // @synthesize flamesViewPaused=_flamesViewPaused;
@property(nonatomic) _Bool flamesViewDeferred; // @synthesize flamesViewDeferred=_flamesViewDeferred;
@property(nonatomic) _Bool keepStatusViewHidden; // @synthesize keepStatusViewHidden=_keepStatusViewHidden;
@property(nonatomic) _Bool statusViewHidden; // @synthesize statusViewHidden=_statusViewHidden;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <AFUISiriViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) UIView *remoteContentView; // @synthesize remoteContentView=_remoteContentView;
- (void).cxx_destruct;
- (void)siriDidActivateFromSource:(long long)arg1;
- (_Bool)_isTextInputEnabled;
- (void)siriStatusViewHoldDidEnd:(id)arg1;
- (void)siriStatusViewHoldDidBegin:(id)arg1;
- (void)siriStatusViewWasTapped:(id)arg1;
- (float)audioLevelForSiriStatusView:(id)arg1;
- (void)cancelShowingPasscodeUnlock;
- (void)showPasscodeUnlockWithStatusText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 unlockCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_configureEyesFreeLogo;
- (_Bool)_helpButtonIsVisible;
- (void)pulseHelpButton;
- (void)setHelpButtonEmphasized:(_Bool)arg1;
- (void)_helpButtonTapped:(id)arg1;
- (void)_configureHelpButton;
- (void)setBugReportingAvailable:(_Bool)arg1;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (void)_configureReportBugButtonWithHoldToTalkState:(_Bool)arg1;
- (void)_createReportBugButtonWithTemplateImage:(id)arg1 andConfigureWithHoldToTalkState:(_Bool)arg2;
- (void)configureReportBugButtonToShowHoldToTalkState:(_Bool)arg1;
- (_Bool)_shouldIndicateHoldToTalkMode;
- (_Bool)_showsReportBugButton;
- (void)_preferencesDidChange:(id)arg1;
- (void)_audioRouteButtonTapped:(id)arg1;
- (void)setAudioRoutePickerBluetoothOn:(_Bool)arg1;
- (void)setShowAudioRoutePicker:(_Bool)arg1;
- (double)_buttonInset;
- (double)_statusViewHeight;
- (struct CGRect)_statusViewContainerFrame;
- (struct CGRect)_lockViewFrame;
- (void)updateForPercentageRevealed:(double)arg1;
- (struct CGRect)_remoteContentViewFrame;
- (id)dimBackdropSettings;
- (void)setBackdropShouldRasterize:(_Bool)arg1;
- (void)setBackdropVisible:(_Bool)arg1;
- (void)setCarPlayGatekeeperBackdropVisible:(_Bool)arg1;
@property(nonatomic, getter=isInUITrackingMode) _Bool inUITrackingMode;
- (void)teardownStatusView;
- (void)setStatusViewUserInteractionEnabled:(_Bool)arg1;
- (void)_animateButtonsHidden:(_Bool)arg1;
- (void)_updateControlsAppearance;
- (void)_layoutReportBugButton;
- (void)layoutSubviews;
- (void)dealloc;
- (_Bool)isCarPlayMode;
- (_Bool)_reducesMotionEffects;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

