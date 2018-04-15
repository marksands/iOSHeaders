//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMDCKSyncStateDelegate.h"

@class FTDeviceSupport, IDSServerBag, IMDCKSyncState, IMDefaults, IMLockdownManager, NSString;

@interface IMDCKUtilities : NSObject <IMDCKSyncStateDelegate>
{
    _Bool _didKeyRollPendingCheck;
    _Bool _useDeprecatedApi;
    IMDCKSyncState *_syncState;
    IMLockdownManager *_lockdownManager;
    IDSServerBag *_serverBag;
    FTDeviceSupport *_deviceSupport;
    IMDefaults *_imDefaults;
}

+ (id)im_AKSecurityLevelKey;
+ (id)sharedInstance;
+ (id)logHandle;
@property(nonatomic) _Bool useDeprecatedApi; // @synthesize useDeprecatedApi=_useDeprecatedApi;
@property(retain, nonatomic) IMDefaults *imDefaults; // @synthesize imDefaults=_imDefaults;
@property(retain, nonatomic) FTDeviceSupport *deviceSupport; // @synthesize deviceSupport=_deviceSupport;
@property(retain, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(retain, nonatomic) IMLockdownManager *lockdownManager; // @synthesize lockdownManager=_lockdownManager;
@property(nonatomic) _Bool didKeyRollPendingCheck; // @synthesize didKeyRollPendingCheck=_didKeyRollPendingCheck;
- (void).cxx_destruct;
- (void)fetchSecurityLevelForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)accountWithDSID:(id)arg1;
- (id)accountDSID:(id)arg1;
- (void)disableAllDevicesWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isInCloudKitDemoMode;
- (void)eligibleForTruthZoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)downgradingFromHSA2AndDisablingMOC;
- (void)enableMOCIfNeeded;
- (_Bool)iCloudAccountMatchesiMessageAccount;
- (unsigned long long)_primaryiCloudAccountSecurityLevel;
- (void)fetchSecurityLevelAndUpdateMiCSwitchEligibilityIfNeededOnImagentLaunch;
- (void)fetchSecurityLevelAndUpdateMiCSwitchEligibility;
- (_Bool)_allowDestructiveMOCFeatureForDSID:(id)arg1;
- (_Bool)_allowDestructiveMOCFeaturesBasedOnDSID;
- (id)dsid;
- (id)_primaryiCloudAccountAltDSID;
- (id)_primaryiCloudAccount;
- (id)_accountManager;
- (void)submitPCSReportManateeStatuMetricWithPrefix:(id)arg1 andReason:(id)arg2;
- (id)metricForPCSReportManateeStatusWithReason:(id)arg1;
- (_Bool)logDumpIsNecessaryAfterSync;
- (void)noteAllSyncedItemsPriorToSync;
- (id)_ckStatisticCaluclations;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 isInitialSync:(_Bool)arg4;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3;
- (void)_showCKLogNotificationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)errorIndicateDeviceDoesNotHaveKeysToSync:(id)arg1;
- (_Bool)errorIndicatesIdentityWasLost:(id)arg1;
- (_Bool)_deviceActive;
- (id)deviceActiveString;
- (id)lastDeviceBackUpDate;
- (id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg1;
- (id)newfilteredArrayRemovingCKRecordDupes:(id)arg1;
- (_Bool)deviceConditionsAllowPeriodicSync;
- (id)deviceConditions;
@property(readonly, nonatomic, getter=isKeyRollPending) _Bool keyRollPending;
@property(readonly, nonatomic) _Bool isSyncingPaused;
@property(readonly, nonatomic, getter=isDeviceOnWifi) _Bool deviceOnWifi;
@property(readonly, nonatomic, getter=isDeviceCharging) _Bool deviceCharging;
- (_Bool)_isSyncingPausedOverride;
- (void)primaryAccountHasiCloudBackupEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (id)_personIdFromAccount:(id)arg1;
- (void)fetchiCloudAccountPersonID:(CDUnknownBlockType)arg1;
- (void)_fetchPrimaryAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setiCloudSettingsSwitchEnabled:(_Bool)arg1;
- (void)evalToggleiCloudSettingsSwitch;
- (void)checkCloudkitEnabledStatusAndToggleiCloudSwitchIfNeeded;
- (id)_accountStore;
- (_Bool)errorIndicatesQuotaExceeded:(id)arg1;
- (_Bool)errorIndicatesChatZoneCreationFailed:(id)arg1;
- (void)resetLastSyncDate;
- (_Bool)errorIndicatesUserDeletedZone:(id)arg1;
- (_Bool)errorIndicatesZoneNotCreated:(id)arg1;
- (id)extractRecordIDsDeletedFromCKPartialError:(id)arg1;
- (_Bool)acceptableErrorCodeWhileDeleting:(id)arg1;
- (_Bool)isRecoverableCloudKitError:(id)arg1 withRetryInterval:(id *)arg2;
- (_Bool)errorIndicatesDeviceConditionsDontAllowSync:(id)arg1;
- (_Bool)CKPartialError:(id)arg1 onlyHasErrorCodes:(id)arg2;
- (_Bool)CKPartialErrorOnlyHasQuotaExceededError:(id)arg1;
- (_Bool)CKPartialError:(id)arg1 hasErrorCode:(id)arg2;
- (id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg1;
- (id)_errorsFromPartialError:(id)arg1;
- (_Bool)_isCKErrorPartialFailure:(id)arg1;
- (unsigned long long)_mocEnabledStateFromAccountStatus:(long long)arg1;
- (void)fetchMOCEnabledStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)syncFailureMetricString:(id)arg1 error:(id)arg2;
- (id)recordNameForMessageWithGUID:(id)arg1 usingSalt:(id)arg2;
- (void)_askToTapToRadarWithString:(id)arg1 internalOnly:(_Bool)arg2;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(_Bool)arg2 initialSync:(_Bool)arg3 sendToHandle:(id)arg4 reasonString:(id)arg5;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(_Bool)arg2 initialSync:(_Bool)arg3 sendToHandle:(id)arg4;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(_Bool)arg2 initialSync:(_Bool)arg3;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(_Bool)arg2;
- (id)logCollectorAddress;
- (_Bool)shouldCollectDailyLogDumpForRestoreFailures;
- (_Bool)shouldCollectDailyLogDump;
- (_Bool)shouldLogDumpOnCloudKitError;
- (_Bool)shouldPresentTTROnCloudKitError;
- (_Bool)_checkIfEnabledByServerBagOrDefault:(id)arg1;
- (void)fetchCloudKitAccountStatusAndCheckForAccountNeedsRepairWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldRepairAccountWithDeviceAccountSecurityLevel:(unsigned long long)arg1 serverAccountStatus:(long long)arg2;
- (void)fetchLocalAccountSecurityLevel:(CDUnknownBlockType)arg1;
- (_Bool)_accountNeedsRepairOverride;
- (void)fetchCloudKitAccountStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)_createAccountError:(id)arg1;
- (void)_checkEligibilityWithLoggedInAccountWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_accountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_checkEligibilityWithAccountInfo:(id)arg1;
- (id)_authenticationController;
- (_Bool)accountIsVerifiedForMOCAndSafeForCacheDelete;
- (_Bool)removeFromBackUpAllowed;
- (_Bool)_serverAllowsRemovalFromBackUp;
- (_Bool)cacheDeleteEnabled;
- (_Bool)enableAttachmentMetricCollection;
- (_Bool)_serverAllowsCacheDelete;
- (void)_resetKeepMessagesSettingandBroadcastToAllDevices;
- (_Bool)_shouldDisplayPopUpForResettingKeepMessages;
- (id)_getKeepMessagesValue;
- (void)setCloudKitSyncingEnabled:(_Bool)arg1;
- (_Bool)cloudKitSyncDownloadAssetsOnly;
- (_Bool)cloudKitSyncingEnabled;
- (long long)_mininimumServerBagClientValue;
- (_Bool)_shouldiCloudSwitchBeEnabled;
- (_Bool)_mocFeatureEnabled;
- (_Bool)_isInExitState;
- (_Bool)_serverAllowsSync;
- (void)checkiCloudQuota:(CDUnknownBlockType)arg1;
- (unsigned long long)messageDatabaseSize;
- (void)isFirstSyncWithCompletion:(CDUnknownBlockType)arg1;
- (long long)overrideNumberOfChatsToWrite;
- (long long)overrideNumberOfChatsToFetch;
- (_Bool)shouldSyncToSRContainer;
- (_Bool)shouldForceArchivedMessagesSync;
- (_Bool)shouldUseDevContainer;
- (void)keyRollPendingStateDidChange;
- (void)broadcastCloudKitStateAfterClearingErrors;
- (void)broadcastCloudKitState;
- (void)syncStateWillUpdate:(id)arg1;
@property(readonly, nonatomic) IMDCKSyncState *syncState; // @synthesize syncState=_syncState;
- (id)init;
- (id)initWithServerBag:(id)arg1 lockDownmanager:(id)arg2 deviceSupport:(id)arg3 imDefaults:(id)arg4;
- (id)_truthDatabase;
- (id)_truthContainer;
- (id)logHandle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

