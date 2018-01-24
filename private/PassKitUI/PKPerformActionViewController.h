//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKPaymentAuthorizationCoordinatorDelegate.h"
#import "PKPaymentAuthorizationCoordinatorPrivateDelegate.h"
#import "PKPerformActionViewDelegate.h"

@class NSString, PKPaymentPass, PKPaymentPassAction, PKPaymentWebService, PKPerformActionLoadingView, PKPerformActionPassView, PKServiceProviderPurchase, UIView<PKPerformActionView>;

@interface PKPerformActionViewController : UIViewController <PKPerformActionViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>
{
    PKPerformActionPassView *_passView;
    PKPerformActionLoadingView *_loadingView;
    id <PKPaymentDataProvider> _paymentDataProvider;
    _Bool _remoteContentFetched;
    _Bool _fieldsVerified;
    PKServiceProviderPurchase *_completedPurchase;
    PKPaymentPass *_pass;
    PKPaymentPassAction *_action;
    UIView<PKPerformActionView> *_actionView;
    PKPaymentWebService *_webService;
    id <PKPerformActionViewControllerDelegate> _delegate;
}

+ (id)navigationBarBackgroundColor;
+ (id)alertControllerForUnableReason:(unsigned long long)arg1 displayableError:(id)arg2 addCardActionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak id <PKPerformActionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(readonly, nonatomic) UIView<PKPerformActionView> *actionView; // @synthesize actionView=_actionView;
@property(readonly, nonatomic) PKPaymentPassAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_showGenericErrorAlert:(CDUnknownBlockType)arg1;
- (void)_canPerformPaymentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_rightBarButtonPressed:(id)arg1;
- (void)_reloadActionView;
- (void)_showLoadingView:(_Bool)arg1;
- (void)_fetchRemoteContentIfNeeded;
- (void)setRightBarButtonEnabled:(_Bool)arg1;
- (void)shakeCard;
- (_Bool)pkui_prefersNavigationBarShadowHidden;
- (void)viewWillLayoutSubviews;
- (void)updateFirstResponder;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_actionViewForPass:(id)arg1 action:(id)arg2;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (id)initWithPass:(id)arg1 action:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

