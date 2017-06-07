//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegListController.h>

#import <CommunicationsSetupUI/AKAppleIDAuthenticationDelegate-Protocol.h>
#import <CommunicationsSetupUI/CNFRegWizardControllerDelegate-Protocol.h>

@class CKFilteringListController, CKNSExtension, NSString, UIProgressHUD;

@interface CKSettingsMessagesController : CNFRegListController <CNFRegWizardControllerDelegate, AKAppleIDAuthenticationDelegate>
{
    _Bool _showingChildViewController;
    int _profileToken;
    CKFilteringListController *_filteringController;
    id _beginMappingID;
    CKNSExtension *_ckExtension;
    UIProgressHUD *_cloudKitProgressView;
}

+ (id)currentKeepMessages;
+ (int)currentMessageAutoKeepOptionForType:(int)arg1;
+ (_Bool)currentMessageAutoKeepForType:(int)arg1;
@property(retain, nonatomic) UIProgressHUD *cloudKitProgressView; // @synthesize cloudKitProgressView=_cloudKitProgressView;
@property(retain, nonatomic) CKNSExtension *ckExtension; // @synthesize ckExtension=_ckExtension;
@property(retain) id beginMappingID; // @synthesize beginMappingID=_beginMappingID;
@property(retain, nonatomic) CKFilteringListController *filteringController; // @synthesize filteringController=_filteringController;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)controllerForSpecifier:(id)arg1;
- (id)_smsRelayDevicesController;
- (id)_madridSettingsController;
- (void)hideSpinner;
- (void)showSpinnerMessage:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_startListeningForNotifications;
- (void)_clearMessagesAppExtensionSalt;
- (void)_setupAccountHandlersForDisabling;
- (_Bool)_allAccountsAreDeactivated;
- (void)_setupAccountHandlers;
- (void)_updateUIWithError:(id)arg1;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(_Bool)arg2;
- (void)_showMadridSetupIfNecessary;
- (void)_showMadridSetupIfNecessary:(_Bool)arg1;
- (void)_showSignInController;
- (_Bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (void)_showAuthKitSignInIfNecessary;
- (void)setKeepMessages:(id)arg1 specifier:(id)arg2;
- (id)getKeepMessages:(id)arg1;
- (id)getSMSRelayDevicesSummary:(id)arg1;
- (void)setPreviewTranscodingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getPreviewTranscodingEnabled:(id)arg1;
- (id)madridSigninButtonTextForSpecifier:(id)arg1;
- (void)madridSigninTappedWithSpecifier:(id)arg1;
- (id)madridSigninSpecifiers;
- (_Bool)shouldShowMadridSignin;
- (id)getAccountSummaryForSpecifier:(id)arg1;
- (id)madridAccountsSpecifierIdentifiers;
- (_Bool)shouldShowMadridAccounts;
- (id)sendAsSMSIdentifiers;
- (_Bool)shouldShowSendAsSMS;
- (void)setReadReceiptsEnabled:(id)arg1 specifier:(id)arg2;
- (id)areReadReceiptsEnabled:(id)arg1;
- (id)readReceiptSpecifierIdentifiers;
- (_Bool)shouldShowReadReceipts;
- (void)_displayICloudErrorMessage;
- (void)tryToDisableAllDevicesDidReturn:(id)arg1;
- (void)setEnabledDidReturned:(id)arg1;
- (void)cloudKitSettingsChnaged;
- (id)_lastSyncDateLabel;
- (id)_lastSyncLabel;
- (id)syncToiCloudEnabled:(id)arg1;
- (_Bool)eligibleForTruthZone;
- (void)syncToiCloudNow:(id)arg1;
- (void)_warnAboutDisablingICloud:(id)arg1;
- (void)setiMessageOniCloudEnabled:(id)arg1 specifier:(id)arg2;
- (id)iMessageOniCloudEnabled:(id)arg1;
- (_Bool)enableiCloudSwitch;
- (id)iCloudSettingsSpecificerIdentifiers;
- (_Bool)shouldShowiCloudSettings;
- (id)smsRelaySettingsSpecifierIdentifiers;
- (_Bool)shouldShowSMSRelaySettings;
- (id)contactPhotoSettingsSpecifierIdentifiers;
- (_Bool)shouldShowContactPhotoSettings;
- (id)audioMessageSettingsSpecifierIdentifiers;
- (_Bool)shouldShowAudioMessageSettings;
- (void)setConversationListFilteringEnabled:(id)arg1 specifier:(id)arg2;
- (id)isConversationListFilteringEnabled:(id)arg1;
- (id)spamFilteringSpecifierIdentifiers;
- (id)iMessageFilteringSpecifierIdentifiers;
- (_Bool)shouldShowiMessageFilteringSettings:(id)arg1;
- (void)messageFilteringTapped:(id)arg1;
- (void)findSpamExtensions;
- (void)endMatchingExtensions;
- (void)notifyThatConversationFilteringChanged;
- (id)raiseToListenSpecifierIdentifiers;
- (_Bool)shouldShowRaiseToListenSwitch;
- (_Bool)_isRaiseGestureSupported;
- (id)blacklistSettingsSpecifierIdentifiers;
- (_Bool)shouldShowBlacklistSettings;
- (id)characterCountSpecifierIdentifiers;
- (_Bool)shouldShowCharacterCount;
- (id)genericSettingsSpecifierIdentifiers;
- (_Bool)shouldShowGenericSettings;
- (void)_updateSwitchDelayed;
- (void)_updateSwitch;
- (id)_switchFooterText:(_Bool *)arg1;
- (void)setMadridEnabled:(id)arg1 specifier:(id)arg2;
- (id)isMadridEnabled:(id)arg1;
- (id)madridSwitchSpecifierIdentifiers;
- (_Bool)shouldShowMadridSwitch;
- (_Bool)_isMadridSwitchOn;
- (_Bool)_isMadridAccountOperational;
- (_Bool)_isSMSDevice;
- (id)_syncManager;
- (void)setAudioMessageAutoKeep:(id)arg1 specifier:(id)arg2;
- (id)getAudioMessageAutoKeep:(id)arg1;
- (void)setRaiseToListenEnabled:(id)arg1 specifier:(id)arg2;
- (id)getRaiseToListenEnabled:(id)arg1;
- (void)setWillSendGroupMMS:(id)arg1 specifier:(id)arg2;
- (id)willSendGroupMMS:(id)arg1;
- (void)setMMSEnabled:(id)arg1 specifier:(id)arg2;
- (id)isMMSEnabled:(id)arg1;
- (void)setDeliveryReportsEnabled:(id)arg1 specifier:(id)arg2;
- (id)isDeliveryReportsEnabled:(id)arg1;
- (id)deliveryReceiptSpecifierIdentifiers;
- (_Bool)shouldShowDeliveryReceipts;
- (void)setSpecifierLoading:(id)arg1 loading:(_Bool)arg2 animated:(_Bool)arg3;
- (id)specifiers;
- (void)newCarrierNotification;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)wantsWiFiChooser;
- (void)_stopListeningForProfileChanges;
- (void)_startListeningForProfileChanges;
- (id)logName;
- (void)dealloc;
- (id)bundle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

