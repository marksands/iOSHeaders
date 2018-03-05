//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKContactlessCardIngesterDelegate.h"

@class NSMutableDictionary, NSString, NSTimer, PKContactlessCardIngester, PKPaymentContactlessProductCredential, PKPaymentPass, PKPaymentProvisioningController, PKPaymentSetupFieldsModel, PKPaymentSetupProduct, PKPaymentWebService, PKReaderModeProvisioningView, UILabel, UIScrollView;

@interface PKPaymentReaderModeProvisioningViewController : UIViewController <PKContactlessCardIngesterDelegate>
{
    PKReaderModeProvisioningView *_provisioningView;
    UIScrollView *_scrollView;
    unsigned long long _state;
    unsigned long long _stateOnRetry;
    PKContactlessCardIngester *_cardIngester;
    PKPaymentContactlessProductCredential *_paymentCredential;
    PKPaymentPass *_paymentPass;
    NSString *_cardSessionToken;
    NSMutableDictionary *_durations;
    unsigned long long _startTime;
    id _currentNextActionBlock;
    NSTimer *_cardNotFoundTimer;
    UILabel *_debugStateLabel;
    NSString *_lastProvisioningStateName;
    _Bool _isGoodState;
    _Bool _idleTimerDisabled;
    PKPaymentProvisioningController *_provisioningController;
    long long _context;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentSetupFieldsModel *_fieldsModel;
    PKPaymentSetupProduct *_product;
    PKPaymentWebService *_webService;
}

@property(readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(readonly, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
@property(readonly, nonatomic) PKPaymentSetupFieldsModel *fieldsModel; // @synthesize fieldsModel=_fieldsModel;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
- (void).cxx_destruct;
- (id)newPaymentProvisioningRequest;
- (id)newPaymentEligibilityRequest;
- (void)_showError:(id)arg1 retry:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showReaderModeError:(id)arg1 isRecoverable:(_Bool)arg2;
- (void)showProvisioningError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showEligibilityIssueWithReason:(long long)arg1 learnMoreURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performFinishWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performProvisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)acceptTerms;
- (void)handleNextActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_triggerNextActionLoop;
- (void)_removePassIfNecessary;
- (void)_resetProvisioningState;
- (void)_startTransferringCard;
- (void)_startAppletProvisioning;
- (void)_startReadingCard;
- (void)_startIngestion;
- (void)_invalidateCardNotFoundTimer;
- (void)_startCardNotFoundTimer;
- (void)cardNotFoundTimerFired:(id)arg1;
- (void)contactlessCardIngester:(id)arg1 didUpdateCardIngestionStatus:(unsigned long long)arg2;
- (void)contactlessCardIngester:(id)arg1 didFailToIngestCardWithError:(id)arg2 resetProvisioning:(_Bool)arg3 isRecoverable:(_Bool)arg4;
- (void)_tearDownCardIngester;
- (void)_setupCardIngester;
- (void)_done:(id)arg1;
- (void)_updateToUIState:(unsigned long long)arg1;
- (void)_hideBackButton:(_Bool)arg1;
- (void)_updateDebugStateLabel:(id)arg1 isGoodState:(_Bool)arg2 showTiming:(_Bool)arg3;
- (void)_updateDebugStateLabel:(id)arg1 isGoodState:(_Bool)arg2;
- (void)_logAndAggDDurations;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)_setIdleTimerDisabled:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 fieldsModel:(id)arg4 product:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

