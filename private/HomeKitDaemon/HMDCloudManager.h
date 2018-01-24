//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "APSConnectionDelegate.h"

@class APSConnection, CKContainer, CKDatabase, CKServerChangeToken, HMDCloudCache, HMDCloudDataSyncStateFilter, HMDCloudHomeManagerZone, HMDCloudLegacyZone, HMDCloudMetadataZone, HMDHomeManager, HMFMessageDispatcher, NSData, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID;

@interface HMDCloudManager : HMFObject <APSConnectionDelegate>
{
    _Bool _accountActive;
    _Bool _cloudHomeDataRecordExists;
    _Bool _keychainSyncEnabled;
    _Bool _firstV3Fetch;
    int _whaProxSetupNotificationToken;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CKContainer *_container;
    CKDatabase *_database;
    HMDCloudCache *_cloudCache;
    HMFMessageDispatcher *_configSyncDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _fetchCompletionHandler;
    NSObject<OS_dispatch_queue> *_clientCallbackQueue;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_source> *_pollTimer;
    NSObject<OS_dispatch_source> *_controllerKeyPollTimer;
    NSObject<OS_dispatch_source> *_watchdogControllerKeyPollTimer;
    CKServerChangeToken *_databaseServerChangeToken;
    APSConnection *_pushConnection;
    CDUnknownBlockType _cloudDataDeletedNotificationHandler;
    CDUnknownBlockType _cloudMetadataDeletedNotificationHandler;
    CDUnknownBlockType _controllerKeyAvailableNotificationHandler;
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;
    NSUUID *_uuid;
    HMFMessageDispatcher *_msgDispatcher;
    HMDHomeManager *_homeManager;
    NSMutableArray *_currentBackoffTimerValuesInMinutes;
    CDUnknownBlockType _dataDecryptionFailedHandler;
    CDUnknownBlockType _accountActiveUpdateHandler;
}

+ (_Bool)isControllerKeyAvailable;
@property(nonatomic, getter=isFirstV3Fetch) _Bool firstV3Fetch; // @synthesize firstV3Fetch=_firstV3Fetch;
@property(copy, nonatomic) CDUnknownBlockType accountActiveUpdateHandler; // @synthesize accountActiveUpdateHandler=_accountActiveUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType dataDecryptionFailedHandler; // @synthesize dataDecryptionFailedHandler=_dataDecryptionFailedHandler;
@property(nonatomic) int whaProxSetupNotificationToken; // @synthesize whaProxSetupNotificationToken=_whaProxSetupNotificationToken;
@property(retain, nonatomic) NSMutableArray *currentBackoffTimerValuesInMinutes; // @synthesize currentBackoffTimerValuesInMinutes=_currentBackoffTimerValuesInMinutes;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter; // @synthesize cloudDataSyncStateFilter=_cloudDataSyncStateFilter;
@property(copy, nonatomic) CDUnknownBlockType controllerKeyAvailableNotificationHandler; // @synthesize controllerKeyAvailableNotificationHandler=_controllerKeyAvailableNotificationHandler;
@property(copy, nonatomic) CDUnknownBlockType cloudMetadataDeletedNotificationHandler; // @synthesize cloudMetadataDeletedNotificationHandler=_cloudMetadataDeletedNotificationHandler;
@property(copy, nonatomic) CDUnknownBlockType cloudDataDeletedNotificationHandler; // @synthesize cloudDataDeletedNotificationHandler=_cloudDataDeletedNotificationHandler;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(retain, nonatomic) CKServerChangeToken *databaseServerChangeToken; // @synthesize databaseServerChangeToken=_databaseServerChangeToken;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *watchdogControllerKeyPollTimer; // @synthesize watchdogControllerKeyPollTimer=_watchdogControllerKeyPollTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *controllerKeyPollTimer; // @synthesize controllerKeyPollTimer=_controllerKeyPollTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pollTimer; // @synthesize pollTimer=_pollTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) _Bool keychainSyncEnabled; // @synthesize keychainSyncEnabled=_keychainSyncEnabled;
@property(nonatomic) _Bool cloudHomeDataRecordExists; // @synthesize cloudHomeDataRecordExists=_cloudHomeDataRecordExists;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue; // @synthesize clientCallbackQueue=_clientCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMFMessageDispatcher *configSyncDispatcher; // @synthesize configSyncDispatcher=_configSyncDispatcher;
@property(retain, nonatomic) HMDCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) _Bool accountActive; // @synthesize accountActive=_accountActive;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)_fetchDatabaseZoneChanges;
- (void)fetchDatabaseZoneChanges;
- (void)_scheduleZoneFetch:(id)arg1;
- (void)_registerForPushNotifications;
- (void)_setupSubscriptionForZone:(id)arg1;
- (void)_registerForWHAProxSetupNotifications;
- (void)_auditWHAProxSetupNotification;
- (_Bool)_isWHAProxSetupRunning;
- (void)_stopControllerKeyPollTimer;
- (void)_startControllerKeyPollTimerWithValue:(long long)arg1;
- (void)_startControllerKeyPollTimerWithBackoff;
- (void)_startControllerKeyPollTimer;
- (void)_stopWatchdogControllerKeyPollTimer;
- (void)_startWatchdogControllerKeyPollTimer;
- (void)_handleControllerKeyAvailable;
- (void)_handleKeychainSyncStateChanged:(_Bool)arg1;
- (void)handleKeychainStateChangedNotification:(id)arg1;
- (void)_stopFetchPollTimer;
- (void)_startFetchPollTimer;
- (void)_stopFetchRetryTimer;
- (void)_startFetchRetryTimer;
- (void)_updateServerTokenStatusOnCloudFilter;
- (void)updateServerTokenStatusOnCloudFilter;
- (void)initializeServerTokenStatusOnCloudFilter;
- (_Bool)_validFetchRetryCKErrorCode:(long long)arg1;
- (void)_forceCleanCloud:(_Bool)arg1 fetchTransaction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateCloudDataSyncFilterState:(_Bool)arg1;
- (void)_accountIsActive;
- (void)_createZoneAndFetchChanges:(CDUnknownBlockType)arg1;
- (void)_verifyZonesExist:(id)arg1 zoneIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resetHomeDataRecordState;
- (id)_changeTokenFromData:(id)arg1;
- (void)_handleAccountStatus:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)updateAccountStatusChanged:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_processFetchCompletedWithError:(id)arg1 serverToken:(id)arg2 fetchTransaction:(id)arg3 migrationOptions:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5 moreRecordsComing:(_Bool)arg6 emptyRecord:(_Bool)arg7;
- (_Bool)_processFetchedTransaction:(id)arg1;
- (void)_fetchLegacyTransaction:(id)arg1 forceFetch:(_Bool)arg2 accountCompletionHandler:(CDUnknownBlockType)arg3 dataCompletionHandler:(CDUnknownBlockType)arg4;
- (void)fetchLegacyTransaction:(id)arg1 forceFetch:(_Bool)arg2 accountCompletionHandler:(CDUnknownBlockType)arg3 dataCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setAccountActiveUpdateCallback:(CDUnknownBlockType)arg1;
- (void)setDataDecryptionFailedCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setControllerKeyAvailableNotificationBlock:(CDUnknownBlockType)arg1;
- (void)setCloudMetadataDeletedNotificationBlock:(CDUnknownBlockType)arg1;
- (void)setCloudDataDeletedNotificationBlock:(CDUnknownBlockType)arg1;
- (void)setDataAvailableFromCloudCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchCurrentAccountStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_serverTokenData;
@property(readonly, nonatomic) NSData *serverTokenData;
@property(readonly, nonatomic) _Bool decryptionFailed;
- (void)_resetCloudCache:(CDUnknownBlockType)arg1;
- (void)resetCloudCache:(CDUnknownBlockType)arg1;
- (void)_resetCloudServerTokenData;
- (void)resetCloudServerTokenData:(id)arg1;
- (void)_resetCloudDataAndDeleteMetadataForCurrentAccount:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resetCloudZonesIgnoreHomeManager:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeZones:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeAllHomeZonesCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetCloudDataAndDeleteMetadataForCurrentAccount:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchAndVerifyZoneRootRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_uploadLegacyTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadLegacyTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeZonesTransactions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeZonesTransactions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_uploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_checkZoneAndUploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_verifyZoneHasBeenDeletedTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createZoneAndUploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeHomeZoneName:(id)arg1;
- (void)removeHomeZoneName:(id)arg1;
- (void)_addHomeZoneName:(id)arg1 owner:(id)arg2;
- (void)addHomeZoneName:(id)arg1 owner:(id)arg2;
@property(readonly, nonatomic) HMDCloudHomeManagerZone *homeManagerZone;
@property(readonly, nonatomic) HMDCloudMetadataZone *metadataZone;
- (_Bool)legacyZoneHasRecordsAvaliable;
@property(readonly, nonatomic) HMDCloudLegacyZone *legacyZone;
- (void)dealloc;
- (id)initWithMessageDispatcher:(id)arg1 cloudDataSyncStateFilter:(id)arg2 cloudCache:(id)arg3 homeManager:(id)arg4 callbackQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

