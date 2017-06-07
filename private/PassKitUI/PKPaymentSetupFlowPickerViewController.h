//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKPaymentSetupActivitySpinnerViewControllerProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSString, PKPaymentSetupFooterView, PKPaymentWebService, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupFlowPickerViewController : PKPaymentSetupTableViewController <PKPaymentSetupActivitySpinnerViewControllerProtocol>
{
    PKTableHeaderView *_headerView;
    PKPaymentSetupFooterView *_footerView;
    NSMutableArray *_pickerItems;
    PKPaymentWebService *_webService;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
}

@property(readonly, nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addPickerItem:(id)arg1;
- (void)_setNavigationBarEnabled:(_Bool)arg1;
- (void)hideActivitySpinner;
- (void)showActivitySpinner;
@property(readonly, nonatomic) NSArray *pickerItems;
@property(readonly, nonatomic) PKTableHeaderView *headerView;
- (void)_setupLater:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)footerView;
- (id)initWithWebService:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

