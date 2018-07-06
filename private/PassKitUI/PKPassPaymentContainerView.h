//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPassFooterContentView.h>

#import "PKAuthenticatorDelegate.h"
#import "PKContactlessInterfaceSessionDelegate.h"
#import "PKForegroundActiveArbiterObserver.h"
#import "PKPassPaymentApplicationViewDelegate.h"
#import "PKPassPaymentPayStateViewDelegate.h"
#import "PKPassPaymentSummaryViewDelegate.h"
#import "PKPaymentServiceDelegate.h"
#import "PKUIForegroundActiveArbiterDeactivationObserver.h"

@class LAUIPhysicalButtonView, NSMutableArray, NSNumber, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, PKAuthenticator, PKContactlessInterfaceSession, PKFooterTransactionView, PKPassLibrary, PKPassPaymentApplicationView, PKPassPaymentPayStateView, PKPassPaymentSummaryView, PKPassPeerPaymentAccountResolutionView, PKPassValueAddedServiceInfoView, PKPaymentService, PKPeerPaymentAccountResolutionController, PKPeerPaymentContactResolver, PKPeerPaymentService, UIButton, UIView, UIViewController;

@interface PKPassPaymentContainerView : PKPassFooterContentView <PKPaymentServiceDelegate, PKAuthenticatorDelegate, PKPassPaymentSummaryViewDelegate, PKPassPaymentPayStateViewDelegate, PKPassPaymentApplicationViewDelegate, PKContactlessInterfaceSessionDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver>
{
    PKPaymentService *_paymentService;
    PKAuthenticator *_authenticator;
    PKContactlessInterfaceSession *_contactlessInterfaceSession;
    PKPassPaymentPayStateView *_payStateView;
    NSObject<OS_dispatch_queue> *_authorizationQueue;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentContactResolver *_transactionFooterContactResolver;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    _Bool _fieldDetectShouldEmulateExpress;
    id <UICoordinateSpace> _fixedScreenCoordinateSpace;
    LAUIPhysicalButtonView *_physicalButtonView;
    PKFooterTransactionView *_transactionView;
    UIView *_summaryView;
    unsigned long long _transactionUpdateCounter;
    NSString *_ignoringUpdatesFromTransactionIdentifier;
    PKPassLibrary *_passLibrary;
    PKPassPaymentSummaryView *_paymentSummaryView;
    PKPassPeerPaymentAccountResolutionView *_peerPaymentAccountResolutionView;
    PKPassPaymentApplicationView *_applicationsView;
    PKPassValueAddedServiceInfoView *_valueAddedServiceInfoView;
    UIButton *_actionButton;
    NSString *_pendingPayStateTextOverride;
    unsigned long long _payStateTransitionCounter;
    long long _pendingPayState;
    _Bool _pendingPayStateAnimated;
    long long _pendingPayStateGlyphState;
    _Bool _pendingPayStateGlyphStateAnimated;
    _Bool _pendingPayStateGlyphStateQueued;
    long long _currentPayState;
    unsigned long long _authenticatorState;
    _Bool _authenticating;
    _Bool _recognizing;
    _Bool _returnToSummaryOnFingerOff;
    long long _pearlState;
    _Bool _transitioning;
    NSMutableArray *_transitionCompletionHandlers;
    NSMutableArray *_pendingGlyphStateCompletionHandlers;
    _Bool _glyphStateDirty;
    _Bool _waitingForGlyphView;
    long long _transactionSubstate;
    _Bool _holdingTerminalSubstate;
    NSObject<OS_dispatch_source> *_transactionResolutionTimer;
    NSObject<OS_dispatch_source> *_transactionTerminalResponseTimer;
    _Bool _presentingPasscode;
    _Bool _requiresPasscodeDismissal;
    UIViewController *_passcodePresenterVC;
    CDStruct_973bafd3 _foregroundActiveState;
    unsigned int _deactivationReasons;
    _Bool _isVisible;
    _Bool _valueAddedServiceInfoViewHidden;
    _Bool _waitingForPasses;
    double _lastFieldExitTime;
    _Bool _pendingAutomaticAuthorization;
    _Bool _pendingPerformAuthorization;
    NSNumber *_pendingPresentationContextState;
    double _lastFingerOnTime;
    double _lastTransactionTime;
    NSObject<OS_dispatch_source> *_summaryAuthenticationTimer;
    _Bool _encounteredTerminalFailure;
    NSMutableArray *_valueAddedPasses;
    _Bool _didBecomeHiddenWhileAuthorized;
}

+ (_Bool)shouldAutomaticallyAuthorizeForPassType:(unsigned long long)arg1 withContext:(id)arg2;
+ (_Bool)initialUserIntentAssumptionForPass:(id)arg1 context:(id)arg2 paymentService:(id)arg3;
- (void).cxx_destruct;
- (void)_processValueAddedServiceTransactionsForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_processPaymentTransactionForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_hasValueAddedServicePasses;
- (void)_setValueAddedServicePasses:(id)arg1;
- (double)_valueAddedServiceInfoViewTopMargin;
- (void)_setValueAddedServiceInfoViewHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setValueAddedServiceInfoViewHidden:(_Bool)arg1;
- (void)_showTerminalIsRequestingPaymentError;
- (void)_showTerminalIsNotRequestingPaymentError;
- (_Bool)_shouldShowTerminalIsNotRequestingPaymentError;
- (void)_presentPassWithUniqueIdentifier:(id)arg1 additionalPassUniqueIdentifiers:(id)arg2 payState:(long long)arg3;
- (void)_presentPassWithUniqueIdentifier:(id)arg1 additionalPassUniqueIdentifiers:(id)arg2;
- (id)_paymentApplicationForAutomaticAuthorizationFromPaymentApplications:(id)arg1;
- (id)_paymentApplicationForAutomaticAuthorization;
- (_Bool)_passContainsPaymentApplication:(id)arg1;
- (_Bool)_authenticationAllowed;
- (_Bool)_isDemoMode;
- (_Bool)_isSummaryViewVisible;
- (_Bool)_isTransactionViewVisible;
- (_Bool)_showTransactionViewDuringPayment;
- (_Bool)_shouldDisplayTransactionView;
- (_Bool)_showPeerPaymentAccountResolutionView;
- (_Bool)_maintainAuthorizationAfterTransaction;
- (_Bool)_showSummaryState;
- (void)_stopBiometricRecognitionAnimationWithSuccess:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startBiometricRecognitionAnimation;
- (id)_filledButtonWithTitle:(id)arg1 alignment:(long long)arg2 action:(SEL)arg3;
- (id)_buttonWithTitle:(id)arg1 alignment:(long long)arg2 action:(SEL)arg3;
- (id)_passcodeButtonTitle;
- (id)_preArmButtonTitle;
- (id)_emphasisButtonForState:(long long)arg1;
- (id)_buttonForState:(long long)arg1;
- (_Bool)_canAuthenticateWithPasscode;
- (_Bool)_canAuthenticateWithBiometrics;
- (void)_updateAuthenticatorState;
- (void)_executePendingGlyphStateCompletionHandlers:(_Bool)arg1;
- (void)_setGlyphState:(long long)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_setGlyphState:(long long)arg1 animated:(_Bool)arg2;
- (void)_executeTransitionCompletionHandlers:(_Bool)arg1;
- (void)_addTransitionCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_endTransition:(_Bool)arg1;
- (void)_transitionViewsAnimated:(_Bool)arg1;
- (void)_commitPendingPayStateAnimated:(_Bool)arg1;
- (void)_transitionToState:(long long)arg1 withTextOverride:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_dismissPile;
- (void)_emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2 playSystemSound:(_Bool)arg3;
- (void)_emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2;
- (void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2;
- (void)_applyPayState:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_cancelTerminalResponseTimeout;
- (void)_beginTerminalResponseTimeout;
- (void)_cancelHoldingTerminalTransactionSubstateIfNecessary;
- (void)_finishHoldingTerminalTransactionSubstateAfterDelay:(double)arg1;
- (void)_applyTerminalTransactionSubstateWithSuccess:(_Bool)arg1 reset:(_Bool)arg2;
- (void)_applyPaymentIndefiniteSuccessState;
- (void)_applyPresentationPayState:(long long)arg1;
- (void)_configureForValueAddedServiceWithPass:(id)arg1 context:(id)arg2;
- (void)_configureForPaymentWithPaymentPass:(id)arg1 context:(id)arg2;
- (void)_configureForStyle:(long long)arg1 context:(id)arg2;
- (_Bool)_isBackgroundedForReasons:(unsigned long long)arg1;
- (_Bool)_isDeactivatedForReasons:(unsigned long long)arg1;
- (_Bool)_isForegroundActive;
- (_Bool)_isBackgrounded;
- (_Bool)_isDeactivated;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateDeactivationReasons:(unsigned int)arg2;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;
- (void)_performActivationStateUpdate:(CDUnknownBlockType)arg1;
- (void)_updateApplicationsView;
- (void)_updateContentViewsWithMessage:(id)arg1 appLaunchToken:(id)arg2;
- (void)_updateContentViewsWithTransaction:(id)arg1 transitProperties:(id)arg2;
- (void)_updateContentViewsWithTransitProperties:(id)arg1;
- (void)_updateContentViewsWithTransaction:(id)arg1;
- (void)_applyLatestTransactionContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_applyLatestContentToViews;
- (void)_resetCardEmulationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resetActiveApplicationForPaymentPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_authorizeForTransactionWithCredential:(id)arg1 authenticationIdentifier:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_didAuthorizePaymentApplicationWithAuthenticationIdentifier:(unsigned long long)arg1;
- (void)_promoteToAuthorizedStateIfPossible;
- (void)_resetToIdleStateAfterDelay:(double)arg1 whileIgnoreField:(_Bool)arg2;
- (void)_resetToIdleStateAfterDelay:(double)arg1;
- (void)_resetToIdleStateWhileIgnoringField:(_Bool)arg1;
- (void)_resetToIdleState;
- (void)_prearmButtonPressed:(id)arg1;
- (void)_passcodeFallbackButtonPressed:(id)arg1;
- (void)_passcodeAuthenticationButtonPressed:(id)arg1;
- (void)_beginPasscodeOnlyAuthentication;
- (void)_activateForPaymentWithApplication:(id)arg1;
- (void)_activateForPayment;
- (void)_endContactlessPaymentSession;
- (void)_performAuthentication;
- (void)_cancelSummaryAuthenticationTimer;
- (void)_beginSummaryAuthenticationIfNecessary;
- (_Bool)_restartPaymentAuthorization;
- (void)_endPaymentAuthorization;
- (void)_beginPaymentAuthorizationWithImmediatePasscode:(_Bool)arg1;
- (void)_beginPaymentAuthorization;
- (void)payStateView:(id)arg1 revealingCheckmark:(_Bool)arg2;
- (void)summaryView:(id)arg1 didArchiveMessage:(id)arg2;
- (void)contactlessInterfaceSession:(id)arg1 didReceiveExpressState:(unsigned long long)arg2;
- (void)contactlessInterfaceSession:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)contactlessInterfaceSessionDidSelectPayment:(id)arg1;
- (void)contactlessInterfaceSessionDidExitField:(id)arg1;
- (void)_handleContactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2;
- (void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2;
- (void)contactlessInterfaceSessionDidTerminate:(id)arg1;
- (void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
- (void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3;
- (void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)arg1;
- (void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2;
- (void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2;
- (void)contactlessInterfaceSessionDidReceiveActivityTimeout:(id)arg1;
- (void)contactlessInterfaceSessionDidStartTransaction:(id)arg1;
- (void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
- (void)contactlessInterfaceSessionHasPendingServerRequest:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (_Bool)_shouldDisplayTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentServiceReceivedInterruption;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)dismissPasscodeViewController;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_cancelBiometricRecognitionAndPromptUserAction:(long long)arg1;
- (void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)authenticator:(id)arg1 didTransitionToPearlState:(long long)arg2;
- (void)authenticatorWillRestartEvaluation:(id)arg1;
- (_Bool)_recognizingBiometrics;
- (void)paymentApplicationView:(id)arg1 didSelectApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)didBecomeHiddenAnimated:(_Bool)arg1;
- (void)willBecomeHiddenAnimated:(_Bool)arg1;
- (void)didBecomeVisibleAnimated:(_Bool)arg1;
- (void)willBecomeVisibleAnimated:(_Bool)arg1;
- (_Bool)isPassAuthorized;
- (double)_topMargin;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithPass:(id)arg1 context:(id)arg2 paymentSession:(id)arg3 paymentService:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

