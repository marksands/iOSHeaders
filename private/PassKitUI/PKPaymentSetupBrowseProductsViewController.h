//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import "PKLinkedApplicationObserver.h"
#import "PKPaymentSetupActivitySpinnerProtocol.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, PKLinkedApplication, PKPaymentProvisioningController, PKPaymentSetupBrowseProductsModel, PKPaymentSetupProduct, PKSearchableTableHeaderView;

@interface PKPaymentSetupBrowseProductsViewController : PKPaymentSetupTableViewController <UITableViewDelegate, UITextFieldDelegate, PKLinkedApplicationObserver, PKPaymentSetupActivitySpinnerProtocol>
{
    PKPaymentSetupBrowseProductsModel *_model;
    PKLinkedApplication *_loadingLinkedApplication;
    PKSearchableTableHeaderView *_headerView;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentProvisioningController *_provisioningController;
    _Bool _isBridgeContext;
    double _previousHeaderHeight;
    _Bool _showScanCardButton;
    id <PKPaymentSetupBrowseProductsViewControllerDelegate> _delegate;
    PKPaymentSetupProduct *_selectedProduct;
}

@property(readonly, nonatomic) PKPaymentSetupProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
@property(nonatomic) __weak id <PKPaymentSetupBrowseProductsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentSetupBrowseProductsModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool showScanCardButton; // @synthesize showScanCardButton=_showScanCardButton;
- (void).cxx_destruct;
- (void)_setNavigationBarEnabled:(_Bool)arg1;
- (void)hideActivitySpinner;
- (void)showActivitySpinner;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (void)_pushAppRequiredViewControllerForProduct:(id)arg1 linkedApplication:(id)arg2;
- (void)_updateFilterString:(id)arg1 userInteraction:(_Bool)arg2;
- (void)_nextStepInSetupFlowWithProduct:(id)arg1;
- (void)_notifyDelegateDidSelectProduct:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_nextTapped:(id)arg1;
- (void)_cameraCaptureTapped;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)clearSelectedProduct;
- (void)clearSearchField;
- (_Bool)_searchUIEnabled;
- (void)_updateSelectedProduct:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_productAtIndexPath:(id)arg1;
- (_Bool)_isUnlikelySection:(long long)arg1;
- (_Bool)_isLikelySection:(long long)arg1;
- (_Bool)_showLikelySection;
- (id)defaultSearchPrompt;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 context:(long long)arg2;
- (id)initWithProducts:(id)arg1 context:(long long)arg2 provisioningController:(id)arg3 setupDelegate:(id)arg4;
- (id)initWithProducts:(id)arg1 likelyProductIdentifiers:(id)arg2 context:(long long)arg3;
- (id)initWithProducts:(id)arg1 context:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

