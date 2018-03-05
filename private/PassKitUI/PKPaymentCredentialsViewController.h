//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import "PKPaymentProvisioningControllerDelegate.h"
#import "PKPaymentSetupHideSetupLaterButtonProtocol.h"

@class NSMutableArray, NSString, PKPaymentCredentialTableViewCell, PKPaymentProvisioningController, PKPaymentSetupFooterView, PKPaymentSetupProduct, PKTableHeaderView, UIImage;

@interface PKPaymentCredentialsViewController : PKPaymentSetupTableViewController <PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentProvisioningControllerDelegate>
{
    PKPaymentProvisioningController *_provisioningController;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    NSMutableArray *_credentialCaches;
    NSMutableArray *_refundedCredentialCaches;
    PKTableHeaderView *_tableHeader;
    PKPaymentSetupFooterView *_tableFooter;
    _Bool _allowsManualEntry;
    UIImage *_placeHolder;
    PKPaymentCredentialTableViewCell *_sizingCell;
    unsigned long long _maximumNumberOfSelectableCredentials;
    double _cachedHeaderViewWidth;
    _Bool _hideSetupLaterButton;
    PKPaymentSetupProduct *_product;
}

@property(nonatomic) _Bool hideSetupLaterButton; // @synthesize hideSetupLaterButton=_hideSetupLaterButton;
@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)paymentPassUpdatedOnCredential:(id)arg1;
- (void)_presentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_terminateSetupFlow;
- (void)_startProvisioningForCredentials:(id)arg1;
- (void)_startProvisioningForSelectedCards;
- (void)_presentManualAddController;
- (void)_setUserInteractionEnabled:(_Bool)arg1;
- (void)_updateForSelectionCount;
- (unsigned long long)_numberOfSelectedCredentials;
- (void)_updateMaximumSelectableCredentials;
- (void)_updateRemoteCredentialCache;
- (void)_updateTableHeaderViewSubtitle;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)_showRefund:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)_setPassSnapshotOnCell:(id)arg1 cell:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 credentials:(id)arg4 allowsManualEntry:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

