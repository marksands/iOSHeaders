//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

@class CKFetchRecordZonesOperation, IMTimer, NSDate, NSTimer;

@interface IMDCKSyncController : IMDCKAbstractSyncController
{
    NSDate *_syncStartDate;
    NSTimer *_longRunningSyncTimer;
    IMTimer *_nightlySyncTimer;
    long long _initialSyncAttempts;
    CKFetchRecordZonesOperation *_cloudKitMetricsFetchOp;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CKFetchRecordZonesOperation *cloudKitMetricsFetchOp; // @synthesize cloudKitMetricsFetchOp=_cloudKitMetricsFetchOp;
@property(nonatomic) long long initialSyncAttempts; // @synthesize initialSyncAttempts=_initialSyncAttempts;
@property(retain, nonatomic) IMTimer *nightlySyncTimer; // @synthesize nightlySyncTimer=_nightlySyncTimer;
@property(retain, nonatomic) NSTimer *longRunningSyncTimer; // @synthesize longRunningSyncTimer=_longRunningSyncTimer;
@property(retain, nonatomic) NSDate *syncStartDate; // @synthesize syncStartDate=_syncStartDate;
- (void).cxx_destruct;
- (id)syncStateDebuggingInfo:(id)arg1;
- (_Bool)isSyncing;
- (void)updateAllCachedSyncStateFlags;
- (void)_setSyncStateFlagsWithAccountStatus:(long long)arg1;
- (void)updateSyncStateFlags;
- (void)_noteMeticsForSyncEndedWithSuccces:(_Bool)arg1;
- (void)syncChatsWithMessageContext:(id)arg1;
- (void)_writeDownSyncDate;
- (long long)_manualSyncAttemptCount;
- (long long)_periodicSyncAttemptCount;
- (void)_noteSyncEnded;
- (void)_noteMetricsForSyncStartFrom:(id)arg1 fullSync:(_Bool)arg2;
- (void)_noteDownSyncStartedWithIsPeriodicSync:(_Bool)arg1;
- (void)_autoBugCaptureWithSubType:(id)arg1 debugDescription:(id)arg2;
- (void)_beginExitStateCleanupIfNeededWithActivity:(id)arg1;
- (void)_ifCloudKitAbleToSyncCallBlock:(CDUnknownBlockType)arg1 activity:(id)arg2;
- (void)_syncChatsWithActivity:(id)arg1;
- (void)syncDeletesToCloudKit;
- (void)_beginPeriodicSyncWithActivity:(id)arg1 shouldCheckDeviceConditions:(_Bool)arg2 attemptCount:(unsigned long long)arg3;
- (void)_nukeCKData;
- (void)_dealWithEncryptionKeyLostErrorIfApplicable:(id)arg1;
- (_Bool)_errorIndicatesDeviceNotGoodForSync:(id)arg1;
- (void)beginInitialSyncAttemptCount:(unsigned long long)arg1;
- (void)recordMetricIsCloudKitEnabled;
- (void)performMetricForSuccessfulSync;
- (void)clearLocalCloudKitSyncState;
- (void)clearCKRelatedDefaults;
- (void)kickOffCloudKitSyncIfNeededOnImagentLaunch;
- (void)beginComingBackOnlineSync;
- (_Bool)_accountHasMultipleDevices;
- (_Bool)_serverDoesNotSingleDeviceLimitation;
- (_Bool)_chatSyncedRecently;
- (double)_minimumChatComingOnlineSyncInterval;
- (_Bool)_serverDoesNotAllowComingBackOnlineChatSync;
- (void)beginFullSyncPeriodic:(_Bool)arg1 shouldCheckDeviceConditions:(_Bool)arg2 activity:(id)arg3;
- (void)beginChatSyncPeriodic:(_Bool)arg1 activity:(id)arg2;
- (void)beginInitialSync;
- (void)_postSyncStateChanged;
- (void)dealloc;
- (id)init;
- (void)_nightlySyncTimerFired;
- (void)_kickOffNightlyPeriodicSyncIfApplicable;
- (void)_logIMAutomaticHistorySyncDidNotOccurMetricsUnderFirstUnlock:(_Bool)arg1 isSyncing:(_Bool)arg2 deviceConditionsAllowSync:(_Bool)arg3 syncNotCompletedRecently:(_Bool)arg4;
- (_Bool)_syncNotCompletedRecently;
- (double)_IMAHDAgentFallbackIntervalInSeconds;
- (void)_dispatchNotification:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)registerForAccountNotifications;
- (void)_accountDidChange:(id)arg1;
- (void)registerForSyncStateChanges;
- (void)_didUpdatePersistentValueNotification:(id)arg1;
- (void)_didRecieveSyncStateChangeNotification:(id)arg1;
- (void)_instantStateChange:(id)arg1;
- (void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;
- (unsigned long long)_maxTimeToDeferInSeconds;
- (void)updateCloudKitSyncingState;
- (void)setCloudKitSyncState:(_Bool)arg1;
- (void)updateStartingFlags;
- (_Bool)_anyStartingFlagIsEnabled;
- (void)setStartingInitialSync:(_Bool)arg1;
- (void)setStartingPeriodicSync:(_Bool)arg1;
- (void)resetAllSyncStates;
- (id)rampManager;
- (id)attachmentSyncController;
- (id)exitManager;
- (id)chatSyncController;
- (id)messageSyncController;

@end

