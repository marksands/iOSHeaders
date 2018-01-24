//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import "CNAvatarViewDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "PKCommutePlanRenewalReminderSetupViewControllerDelegate.h"
#import "PKLowBalanceReminderSetupViewControllerDelegate.h"
#import "PKPassHeaderViewDelegate.h"
#import "PKPaymentDataProviderDelegate.h"
#import "PKPaymentSetupDelegate.h"
#import "PKPaymentVerificationControllerDelegate.h"
#import "PKPeerPaymentAccountResolutionControllerDelegate.h"
#import "PKPeerPaymentContactResolverDelegate.h"
#import "PKPeerPaymentPerformActionViewControllerDelegate.h"
#import "PKPerformActionViewControllerDelegate.h"
#import "PSStateRestoration.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"

@class NSArray, NSDateComponentsFormatter, NSDateFormatter, NSIndexPath, NSMutableDictionary, NSNumber, NSNumberFormatter, NSObject<OS_dispatch_source>, NSString, PKExpressPassInformation, PKLinkedApplication, PKPassHeaderView, PKPaymentApplication, PKPaymentPass, PKPaymentPassDetailActivationFooterView, PKPaymentTransactionCellController, PKPaymentVerificationController, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentAccountResolutionController, PKPeerPaymentContactResolver, PKPeerPaymentController, PKPeerPaymentPerformActionViewController, PKPeerPaymentPreferences, PKPeerPaymentWebService, PKSettingTableCell, PKSpinnerHeaderView, PKTransitPassProperties, UIColor, UISegmentedControl, UIView, UIVisualEffectView;

@interface PKPaymentPassDetailViewController : PKSectionTableViewController <MFMailComposeViewControllerDelegate, PKPerformActionViewControllerDelegate, PKLowBalanceReminderSetupViewControllerDelegate, PKCommutePlanRenewalReminderSetupViewControllerDelegate, PKPeerPaymentContactResolverDelegate, PKPeerPaymentPerformActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, CNAvatarViewDelegate, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPassHeaderViewDelegate, UIViewControllerPreviewingDelegate, UITableViewDataSource, UITableViewDelegate, PSStateRestoration, PKPaymentSetupDelegate>
{
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;
    id <PKPaymentDataProvider> _paymentServiceDataProvider;
    long long _detailViewStyle;
    NSObject<OS_dispatch_source> *_transactionTimer;
    _Bool _deepLinkingEnabled;
    PKPaymentPass *_pass;
    PKLinkedApplication *_linkedApplication;
    PKPaymentApplication *_defaultPaymentApplication;
    PKPaymentWebService *_webService;
    PKPaymentVerificationController *_verificationController;
    PKPaymentPassDetailActivationFooterView *_activationFooter;
    PKSettingTableCell *_messagesSwitch;
    PKSettingTableCell *_transactionsSwitch;
    PKSettingTableCell *_automaticPresentationSwitch;
    PKSettingTableCell *_expressAccessSwitch;
    NSNumber *_paymentTransactionCellHeightCache;
    PKPaymentTransactionCellController *_transactionCellController;
    NSArray *_transactions;
    NSArray *_transactionCountAndYear;
    NSDateFormatter *_transactionYearFormatter;
    NSNumberFormatter *_transactionCountFormatter;
    NSArray *_devicePaymentApplications;
    NSArray *_contactlessPaymentApplications;
    PKExpressPassInformation *_expressAccessPassInformation;
    _Bool _expressAccessEnabled;
    _Bool _performingCardTransfer;
    PKTransitPassProperties *_transitProperties;
    NSArray *_commuterFields;
    NSDateComponentsFormatter *_commutePlanRenewalReminderTimeIntervalFormatter;
    NSArray *_tabBarSegments;
    double _headerHeight;
    struct UIEdgeInsets _headerContentInset;
    double _tabBarHeight;
    _Bool _changingDefaultPaymentApplication;
    double _previousLayoutTableViewWidth;
    struct CGSize _previousLayoutContentSize;
    NSMutableDictionary *_contextualActionHandlers;
    _Bool _navigationControllerHidesShadow;
    UIView *_headerView;
    PKPassHeaderView *_passHeaderView;
    UIVisualEffectView *_blurView;
    UISegmentedControl *_tabBar;
    UIView *_keyLine;
    _Bool _viewIsDisappearing;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentController *_peerPaymentController;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPeerPaymentPreferences *_peerPaymentPreferences;
    _Bool _loadingPeerPaymentPreferences;
    PKSpinnerHeaderView *_peerPaymentPreferencesHeaderView;
    PKPeerPaymentPerformActionViewController *_peerPaymentActionViewController;
    NSIndexPath *_loadingPeerPaymentAccountActionIndexPath;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    unsigned long long _peerPaymentAccountResolution;
    _Bool _requestingStatement;
    id <PKPassDeleteHandler> _deleteOverrider;
    UIColor *_primaryTextColor;
    UIColor *_detailTextColor;
    UIColor *_linkTextColor;
    UIColor *_warningTextColor;
    UIColor *_highlightColor;
}

@property(nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) UIColor *warningTextColor; // @synthesize warningTextColor=_warningTextColor;
@property(nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property(nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(nonatomic) id <PKPassDeleteHandler> deleteOverrider; // @synthesize deleteOverrider=_deleteOverrider;
- (void).cxx_destruct;
- (_Bool)canBeShownFromSuspendedState;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)commutePlanRenewalReminderValueDidChange:(id)arg1;
- (void)lowBalanceReminderValueDidChange:(id)arg1;
- (void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2;
- (void)presentVerificationViewController:(id)arg1 animated:(_Bool)arg2;
- (void)didChangeVerificationPresentation;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)contactsDidChangeForContactResolver:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_passSettingsChanged:(id)arg1;
- (void)_done:(id)arg1;
- (void)_activationFooterPressed:(id)arg1;
- (void)_transactionsSwitchChanged:(id)arg1;
- (void)_messagesSwitchChanged:(id)arg1;
- (void)_setExpressAccessEnabled:(_Bool)arg1 paymentSetupContext:(long long)arg2 authenticationCredential:(id)arg3;
- (void)_expressAccessSwitchChanged:(id)arg1;
- (void)_automaticPresentationSwitchChanged:(id)arg1;
- (void)_tabBarSegmentChanged:(id)arg1;
- (void)_setTransitProperties:(id)arg1;
- (double)_paymentTransactionCellHeight;
- (double)_heightForPassStateSectionWithTableView:(id)arg1;
- (id)_footerTextForPassStateSection;
- (id)_footerViewForPassStateSection;
- (double)_footerViewHeightForPassStateSectionWithTableView:(id)arg1;
- (void)_didSelectPassStateSection;
- (id)_headerTitleForPassStateSection;
- (unsigned long long)_passStateSectionGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_didSelectDeleteCard;
- (_Bool)_isJapaneseRegion;
- (void)_handleProvisioningError:(id)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (void)_didSelectTransferCardAtIndexPath:(id)arg1;
- (void)_preflightWatchForTransferWithCompletion:(CDUnknownBlockType)arg1;
- (void)_openIssuerWebsite;
- (void)_callIssuer;
- (void)_emailIssuer;
- (void)_presentContactBankViewController;
- (void)_didSelectContactBankSectionAtIndexPath:(long long)arg1;
- (void)_didSelectTransactionAtRow:(long long)arg1;
- (void)_openPaymentSetup;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)arg1 paymentSetupMode:(long long)arg2;
- (void)_didSelectReminderConfigurationRowAtIndex:(long long)arg1;
- (void)_didSelectAvailableActionAtRow:(long long)arg1;
- (_Bool)_hasActionOfType:(unsigned long long)arg1;
- (id)_availableActions;
- (_Bool)_transactionDeepLinkingEnabled;
- (void)updateActivationFooterViewContents;
- (id)_activationFooterView;
- (_Bool)_shouldShowServiceMode;
- (_Bool)_shouldShowEmployeeInformation;
- (_Bool)_shouldShowContactCell;
- (_Bool)_shouldShowPrivacyPolicyCell;
- (_Bool)_shouldShowTermsCell;
- (_Bool)_shouldShowBillingAddressCell;
- (_Bool)_shouldShowAutomaticPresentation;
- (unsigned long long)_rowIndexForPeerPaymentBalanceActionRow:(unsigned long long)arg1;
- (unsigned long long)_peerPaymentBalanceActionForRowIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfPeerPaymentBalanceActionsEnabled;
- (_Bool)_peerPaymentBalanceActionEnabled:(unsigned long long)arg1;
- (_Bool)_shouldShowAccountActions;
- (_Bool)_canDoManualIdentityVerification;
- (_Bool)_shouldShowDeleteCell;
- (_Bool)_shouldShowTransferCell;
- (void)_updatePeerPaymentPreferencesSectionVisibilityAndReloadIfNecessary;
- (id)_createTabBarWithSelectedIndex:(long long)arg1;
- (double)_offscreenHeaderHeight;
- (_Bool)_updateHeaderHeightDeterminingLayout:(_Bool)arg1;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_updateTabBar;
- (void)_cancelPendingTransactionTimer;
- (void)_startPendingTransactionTimer;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_updatePeerPaymentPreferences;
- (void)_updatePeerPaymentAccount;
- (void)_presentNotImplementedAlertWithRadarNumber:(long long)arg1;
- (void)peerPaymentPerformActionViewControllerDidPerformAction:(id)arg1;
- (void)peerPaymentPerformActionViewControllerDidCancel:(id)arg1;
- (void)_showPeerPaymentActionViewControllerForAction:(unsigned long long)arg1;
- (void)_didSelectTransferToBank;
- (void)_didSelectAddMoney;
- (void)_doneLoadingPeerPaymentAccountAction;
- (void)_didSelectPeerPaymentStatementAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentAccountActionAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentManualIdentityVerificationAtIndexPath:(id)arg1;
- (void)_didSelectAutomaticallyAcceptPaymentsPreferenceAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentMoneyActionAtRow:(long long)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_updatePeerPaymentPreferencesWithNewPreferences:(id)arg1;
- (void)_peerPaymentPaymentRequestPreferenceChanged:(id)arg1;
- (void)_didSelectTransactionCountByYearAtIndexPath:(id)arg1;
- (id)_transactionCountByYearCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionCountFormatter;
- (id)_transactionYearFormatter;
- (id)_peerPaymentStatementCellForTableView:(id)arg1;
- (id)_peerPaymentAutomaticallyAcceptPaymentsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentAccountActionCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentManualIdentityVerificationCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentCardInfoCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentMoneyActionCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_deleteCardCellForTableView:(id)arg1;
- (id)_transferCardCellForTableView:(id)arg1;
- (id)_deviceAccountNumberCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_refreshPaymentApplicationsSelection;
- (void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1;
- (id)_paymentApplicationsCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)commutePlanRenewalReminderTimeIntervalFormatter;
- (id)_remindersConfigurationCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_availableActionCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_commuterRouteCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_didSelectTransitTicketAtRow:(long long)arg1;
- (long long)_transitCellGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (_Bool)_transactionCellEditActionsGenerateWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_contactKeysToFetch;
- (id)_transactionCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionsSwitchCellForTableView:(id)arg1;
- (id)_messagesSwitchCellForTableView:(id)arg1;
- (id)_expressAccessCellForTableView:(id)arg1;
- (id)_automaticPresentationCellForTableView:(id)arg1;
- (unsigned long long)_contactBankCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (unsigned long long)_passOperationsCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (unsigned long long)_employeeInfoSectionGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (unsigned long long)_cardInfoSectionGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_didSelectPassOperationsSectionAtIndexPath:(id)arg1;
- (void)presentTermsAndConditions;
- (void)_didSelectPrivacySectionAtRow:(long long)arg1;
- (unsigned long long)_privacyTermsSectionGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_didSelectBillingAddress;
- (id)_billingAddressCellForTableView:(id)arg1;
- (id)_moreTransactionsCellForTableView:(id)arg1;
- (id)_linkedApplicationCellForTableView:(id)arg1;
- (id)_linkedAppCellForTableView:(id)arg1;
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;
- (id)_infoCellWithDescription:(id)arg1 forTableView:(id)arg2;
- (id)_disclosureCellWithTitle:(id)arg1 forTableView:(id)arg2;
- (id)_checkmarkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_linkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_disabledCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_switchCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_imageViewCellForImage:(id)arg1 contentMode:(long long)arg2 forTableView:(id)arg3;
- (id)_spinnerCellForTableView:(id)arg1;
- (id)_subtitleCellForTableView:(id)arg1;
- (id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2;
- (void)_applyDefaultDynamicStylingToCell:(id)arg1;
- (void)_applyDefaultStaticStylingToCell:(id)arg1;
- (_Bool)_transactionSectionsDataIsChangedForNewTransactions:(id)arg1 oldTransactions:(id)arg2 newTransactionCountByYear:(id)arg3 oldTransactionCountByYear:(id)arg4;
- (void)_reloadTransactionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (struct CGPoint)_normalizedContentOffsetForTargetOffset:(struct CGPoint)arg1;
- (void)_normalizeContentOffset;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)rowAnimationForDeletingSection:(unsigned long long)arg1;
- (long long)rowAnimationForInsertingSection:(unsigned long long)arg1;
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (void)_updateTransitProperties;
- (void)_updateAccessExpressPassInformation;
- (void)_updatePassProperties;
- (void)_reloadTransactionSectionsAnimated:(_Bool)arg1;
- (void)_reloadView;
- (void)_reloadPassAndView;
- (void)presentTransactionDetailsForTransaction:(id)arg1 animated:(_Bool)arg2;
- (id)_transactionDetailViewControllerForTransaction:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)pkui_prefersNavigationBarShadowHidden;
- (void)dealloc;
- (id)initWithPass:(id)arg1 webService:(id)arg2 peerPaymentWebService:(id)arg3 style:(long long)arg4 passLibraryDataProvider:(id)arg5 paymentServiceDataProvider:(id)arg6;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 dataProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

