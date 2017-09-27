//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HUItemPresentationContainer.h"
#import "HUPresentationDelegate.h"
#import "HUPresentationDelegateHost.h"
#import "HUQuickControlContainerViewDelegate.h"
#import "HUQuickControlControllerCoordinatorDelegate.h"
#import "HUQuickControlInteractionHost.h"
#import "HUViewControllerCustomDissmissing.h"

@class HFItem, HFItem<NSCopying>, HMHome, HUAnimationApplier, HUQuickControlContainerView, HUQuickControlController, HUQuickControlControllerCoordinator, HUQuickControlInteractionCoordinator, NSString, UITapGestureRecognizer, UIView<HUQuickControlPresentableView>;

@interface HUQuickControlViewController : UIViewController <HUPresentationDelegate, HUQuickControlContainerViewDelegate, HUQuickControlControllerCoordinatorDelegate, HUQuickControlInteractionHost, HUItemPresentationContainer, HUPresentationDelegateHost, HUViewControllerCustomDissmissing>
{
    _Bool _presentedDetailView;
    id <HUPresentationDelegate> presentationDelegate;
    HFItem<NSCopying> *_item;
    HMHome *_home;
    id <HUQuickControlViewControllerDelegate> _delegate;
    UITapGestureRecognizer *_dismissGestureRecognizer;
    HUAnimationApplier *_presentationApplier;
    unsigned long long _presentationState;
    HUQuickControlControllerCoordinator *_controlControllerCoordinator;
    HUQuickControlContainerView *_controlContainerView;
    UIView<HUQuickControlPresentableView> *_controlView;
    struct CGRect _sourceRect;
}

+ (id)_detailChromeAnimationSettingsForPresenting:(_Bool)arg1;
+ (id)_statusBarHidingAnimationSettingsForPresenting:(_Bool)arg1;
+ (id)_sourceViewTransitionAnimationSettingsForPresenting:(_Bool)arg1;
+ (id)_blurAnimationSettingsForPresenting:(_Bool)arg1;
+ (id)_controlAlphaAnimationSettingsForPresenting:(_Bool)arg1;
+ (id)_controlScaleAnimationSettingsForPresenting:(_Bool)arg1;
+ (id)_easeOutTimingFunction;
@property(nonatomic) _Bool presentedDetailView; // @synthesize presentedDetailView=_presentedDetailView;
@property(retain, nonatomic) UIView<HUQuickControlPresentableView> *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) HUQuickControlContainerView *controlContainerView; // @synthesize controlContainerView=_controlContainerView;
@property(retain, nonatomic) HUQuickControlControllerCoordinator *controlControllerCoordinator; // @synthesize controlControllerCoordinator=_controlControllerCoordinator;
@property(nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
@property(retain, nonatomic) HUAnimationApplier *presentationApplier; // @synthesize presentationApplier=_presentationApplier;
@property(retain, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(nonatomic) __weak id <HUQuickControlViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) HFItem<NSCopying> *item; // @synthesize item=_item;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate;
- (void).cxx_destruct;
- (void)_tearDownMobileTimerUI:(id)arg1;
- (void)_displayMobileTimerUI;
- (_Bool)_shouldDisplayMobileTimerUIForControlType:(unsigned long long)arg1;
@property(readonly, nonatomic) HFItem *hu_presentedItem;
- (void)hideAuxiliaryViewForInteractionCoordinator:(id)arg1;
- (void)interactionCoordinator:(id)arg1 showAuxiliaryView:(id)arg2;
- (void)interactionCoordinator:(id)arg1 updateControlHorizontalCompressionFactor:(double)arg2;
- (void)interactionCoordinator:(id)arg1 updateControlVerticalStretchFactor:(double)arg2;
- (void)interactionCoordinatorWantsDismissal:(id)arg1;
- (void)controllerCoordinator:(id)arg1 didUpdateReachability:(_Bool)arg2;
- (void)controllerCoordinator:(id)arg1 didUpdateStatusWithPrimaryText:(id)arg2 secondaryText:(id)arg3;
- (void)controllerCoordinator:(id)arg1 didUpdateIconDescriptor:(id)arg2 showOffState:(_Bool)arg3;
- (void)detailsButtonPressedInContainerView:(id)arg1;
- (void)containerView:(id)arg1 didSelectControlType:(unsigned long long)arg2;
- (id)containerView:(id)arg1 createControlViewForControlType:(unsigned long long)arg2;
- (id)containerView:(id)arg1 titleForControlType:(unsigned long long)arg2;
- (_Bool)containerView:(id)arg1 hasControlOfType:(unsigned long long)arg2;
- (id)_controlControllerOfType:(unsigned long long)arg1;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (id)hu_prepareForDismissalAnimated:(_Bool)arg1;
- (void)beginReceivingTouchesWithGestureRecognizer:(id)arg1;
- (void)_handleDismissGesture:(id)arg1;
- (id)_dismissDetailViewControllerAnimated:(_Bool)arg1 dismissControl:(_Bool)arg2;
- (id)_prepareDetailViewController;
- (void)_controlDidDismiss;
- (void)_createControlContainerViewWithSourceRect:(struct CGRect)arg1;
- (void)_performTransitionToPresentationState:(unsigned long long)arg1 animated:(_Bool)arg2 initialProgress:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)dismissControlAnimated:(_Bool)arg1;
- (_Bool)isControlDismissedOrDismissing;
- (void)presentControlAnimatedFromSourceRect:(struct CGRect)arg1;
- (struct CGAffineTransform)sourceViewTransformForPresentationProgress:(double)arg1;
- (void)_updateUserInteractionEnabledForActiveInteractionCoordinator;
- (void)_updateControlReachability;
- (void)_updateIconDescriptorAnimated:(_Bool)arg1;
- (void)_updateControlStatusText;
- (void)_presentDetailViewController;
- (void)viewDidLoad;
- (_Bool)isControlPresentedOrPresenting;
@property(readonly, nonatomic) HUQuickControlInteractionCoordinator *activeInteractionCoordinator;
@property(readonly, nonatomic) HUQuickControlController *activeControlController;
- (id)initWithItem:(id)arg1 controlItems:(id)arg2 home:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

