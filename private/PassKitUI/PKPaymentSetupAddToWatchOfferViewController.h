//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PKPaymentPass, PKPaymentSetupAddToWatchOfferView, UIView;

@interface PKPaymentSetupAddToWatchOfferViewController : UIViewController
{
    UIView *_interactionDisabledView;
    PKPaymentPass *_pass;
    long long _context;
    CDUnknownBlockType _dismissalHandler;
    PKPaymentSetupAddToWatchOfferView *_offerView;
}

+ (void)shouldShowAddToWatchOfferForPass:(id)arg1 inContext:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
@property(readonly, retain, nonatomic) PKPaymentSetupAddToWatchOfferView *offerView; // @synthesize offerView=_offerView;
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(readonly, retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)_setIdleTimerDisabled:(_Bool)arg1;
- (void)_clearInteractionDisabledView;
- (void)_hideSpinner;
- (void)_showSpinner;
- (void)_handleDismissal:(_Bool)arg1;
- (void)_handleBridgeProvisioningError:(id)arg1;
- (void)_addLaterTapped:(id)arg1;
- (void)_openAppTapped:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (unsigned long long)edgesForExtendedLayout;
- (void)_configureNavigationItem;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 context:(long long)arg2 dismissalHandler:(CDUnknownBlockType)arg3;

@end

