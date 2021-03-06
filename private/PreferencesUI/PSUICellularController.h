//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "CoreTelephonyClientSubscriberDelegate.h"

@class CHManager, CoreTelephonyClient, NSString, PSSpecifier, PSUIAppCellularUsageExtensionGroup, PSUICarrierItemGroup, PSUICellularDataOptionsController, PSUICellularDataPlanDetailGroup, PSUICellularDataPlanListGroup, PSUICellularDataPlanSetupGroup, PSUISubscriptionContextMenusGroup;

@interface PSUICellularController : PSListController <CoreTelephonyClientSubscriberDelegate>
{
    PSSpecifier *_viewAccount;
    PSSpecifier *_viewAccountGroup;
    PSSpecifier *_facetimeSetupButton;
    PSSpecifier *_facetimeSetupGroup;
    _Bool _disabled;
    PSSpecifier *_currentSpecifier;
    PSSpecifier *_lifetimeSpecifier;
    PSSpecifier *_lastResetSpecifier;
    _Bool _ignoreNextEntitlementStatusChange;
    PSSpecifier *_personalHotspotSpecifier;
    PSUICellularDataOptionsController *_cellularDataOptionsController;
    PSUICellularDataPlanSetupGroup *_cellularDataPlanSetupGroup;
    PSUICellularDataPlanListGroup *_cellularDataPlanListGroup;
    PSUICellularDataPlanDetailGroup *_cellularDataPlanDetailGroup;
    PSUICarrierItemGroup *_cellularNewNetworkGroup;
    PSUISubscriptionContextMenusGroup *_subscriptionContextMenus;
    PSUIAppCellularUsageExtensionGroup *_appUsageGroup;
    CHManager *_callHistoryManager;
    CoreTelephonyClient *_coreTelephonyClient;
}

@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) CHManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
@property(retain, nonatomic) PSUIAppCellularUsageExtensionGroup *appUsageGroup; // @synthesize appUsageGroup=_appUsageGroup;
@property(retain, nonatomic) PSUISubscriptionContextMenusGroup *subscriptionContextMenus; // @synthesize subscriptionContextMenus=_subscriptionContextMenus;
@property(retain, nonatomic) PSUICarrierItemGroup *cellularNewNetworkGroup; // @synthesize cellularNewNetworkGroup=_cellularNewNetworkGroup;
@property(retain, nonatomic) PSUICellularDataPlanDetailGroup *cellularDataPlanDetailGroup; // @synthesize cellularDataPlanDetailGroup=_cellularDataPlanDetailGroup;
@property(retain, nonatomic) PSUICellularDataPlanListGroup *cellularDataPlanListGroup; // @synthesize cellularDataPlanListGroup=_cellularDataPlanListGroup;
@property(retain, nonatomic) PSUICellularDataPlanSetupGroup *cellularDataPlanSetupGroup; // @synthesize cellularDataPlanSetupGroup=_cellularDataPlanSetupGroup;
@property(retain, nonatomic) PSUICellularDataOptionsController *cellularDataOptionsController; // @synthesize cellularDataOptionsController=_cellularDataOptionsController;
- (void).cxx_destruct;
- (void)clearStats:(id)arg1;
- (void)_updateLastResetText;
- (id)_lastUpdateDate;
- (id)callTime:(id)arg1;
- (id)lifetimeCallTime:(id)arg1;
- (id)callTimeDurationRestrictedToCurrentPeriod:(_Bool)arg1;
- (id)totalRoamingDataUsageForSpecifier:(id)arg1;
- (id)totalDataUsageForSpecifier:(id)arg1;
- (void)carrierItemsChanged;
- (void)wirelessDataUsageChangedNotification;
- (void)cellularPlanChanged:(id)arg1;
- (void)airplaneModeChanged;
- (void)airplaneModeOrSIMStatusChanged;
- (void)dataRegistrationChangedWithUserInfo:(id)arg1;
- (void)handleCallTimersChanged;
- (void)newCarrierNotification;
- (void)totalBytesUsedChangedNotification;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)setupCellularFaceTime:(id)arg1;
- (_Bool)shouldShowFaceTimeSetup;
- (void)viewAccountPressed:(id)arg1;
- (_Bool)shouldShowViewAccount;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)removePlanConfirmationTitle:(id)arg1;
- (id)removePlanConfirmationMessage:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)NETRBStateChangedNotification:(id)arg1;
- (id)getTetheringStatus:(id)arg1;
- (id)cellularDataOptionsDetailText:(id)arg1;
- (_Bool)showDataPlanOnly;
- (void)updateAppUsageGroupEnabledState;
- (void)updatePaneWithCellularDataState:(_Bool)arg1;
- (_Bool)isCellularDisabled;
- (void)entitlementStatusChanged;
- (void)handleURL:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)prefetchResourcesFor:(id)arg1;
- (id)specifiers;
- (id)_deadTelephonySpecifiers;
- (void)learnMoreLinkTapped;
- (void)reloadSpecifiers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

