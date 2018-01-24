//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import "PKExplanationViewDelegate.h"

@class ACAccountStore, NSString, PKPaymentHeroImageController, PKPaymentProvisioningController, PKPaymentSetupHeroView, PKPaymentWebService;

@interface PKPaymentSetupHeroViewController : PKExplanationViewController <PKExplanationViewDelegate>
{
    ACAccountStore *_accountStore;
    _Bool _nextButtonPushed;
    PKPaymentSetupHeroView *_splashView;
    _Bool _hideSetupLater;
    _Bool _hasFelicaSecureElement;
    _Bool _preflightComplete;
    _Bool _allowsManualEntry;
    PKPaymentProvisioningController *_provisioningController;
    id <PKPaymentSetupViewControllerDelegate> _delegate;
    PKPaymentHeroImageController *_heroImageController;
    long long _paymentSetupMode;
}

@property(nonatomic) long long paymentSetupMode; // @synthesize paymentSetupMode=_paymentSetupMode;
@property(nonatomic) _Bool allowsManualEntry; // @synthesize allowsManualEntry=_allowsManualEntry;
@property(readonly, nonatomic) PKPaymentHeroImageController *heroImageController; // @synthesize heroImageController=_heroImageController;
@property(nonatomic) id <PKPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
- (void).cxx_destruct;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)_terminateSetupFlow;
- (id)_bodyText;
- (void)_next:(id)arg1;
@property(readonly, nonatomic) PKPaymentWebService *webService;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (unsigned long long)edgesForExtendedLayout;
- (void)_credentialRenewalRequired:(id)arg1;
- (void)_preflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

