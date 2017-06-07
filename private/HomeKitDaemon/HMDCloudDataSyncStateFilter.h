//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDMessageFilter.h>

#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDHomeManager, HMFMessageDispatcher, HMFTimer, NSDate, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDCloudDataSyncStateFilter : HMDMessageFilter <HMFMessageReceiver, HMFTimerDelegate>
{
    _Bool _decryptionFailed;
    _Bool _keychainSyncEnabled;
    _Bool _keychainSyncRequiredPopShown;
    _Bool _iCloudSwitchRequiredPopShown;
    _Bool _iCloudAccountActive;
    _Bool _cloudDataSyncCompleted;
    _Bool _serverTokenAvailable;
    _Bool _iCloudSwitchStateEnabled;
    _Bool _localDataDecryptionFailed;
    _Bool _networkConnectivityAvailable;
    _Bool _resetConfigDisplayTimeHasElapsed;
    _Bool _keychainSyncPeerAvailable;
    _Bool _cloudDataSyncPeerAvailable;
    NSUUID *_uuid;
    HMFMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_source> *_popupTimer;
    NSObject<OS_dispatch_source> *_iCloudSwitchPopupTimer;
    long long _totalHomes;
    HMFTimer *_cloudDataSyncInProgressTimer;
    double _remainingDataSyncPeriod;
    NSDate *_dataSyncTimerStartTimestamp;
    HMFTimer *_resetConfigDisplayTimer;
    double _remainingResetConfigDisplayPeriod;
    NSDate *_resetConfigDisplayTimerStartTimestamp;
    HMDHomeManager *_homeManager;
}

+ (_Bool)isWhitelistedRemoteTransportMessage:(id)arg1;
@property(nonatomic, getter=isCloudDataSyncPeerAvailable) _Bool cloudDataSyncPeerAvailable; // @synthesize cloudDataSyncPeerAvailable=_cloudDataSyncPeerAvailable;
@property(nonatomic, getter=isKeychainSyncPeerAvailable) _Bool keychainSyncPeerAvailable; // @synthesize keychainSyncPeerAvailable=_keychainSyncPeerAvailable;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) _Bool resetConfigDisplayTimeHasElapsed; // @synthesize resetConfigDisplayTimeHasElapsed=_resetConfigDisplayTimeHasElapsed;
@property(retain, nonatomic) NSDate *resetConfigDisplayTimerStartTimestamp; // @synthesize resetConfigDisplayTimerStartTimestamp=_resetConfigDisplayTimerStartTimestamp;
@property(nonatomic) double remainingResetConfigDisplayPeriod; // @synthesize remainingResetConfigDisplayPeriod=_remainingResetConfigDisplayPeriod;
@property(retain, nonatomic) HMFTimer *resetConfigDisplayTimer; // @synthesize resetConfigDisplayTimer=_resetConfigDisplayTimer;
@property(retain, nonatomic) NSDate *dataSyncTimerStartTimestamp; // @synthesize dataSyncTimerStartTimestamp=_dataSyncTimerStartTimestamp;
@property(nonatomic) double remainingDataSyncPeriod; // @synthesize remainingDataSyncPeriod=_remainingDataSyncPeriod;
@property(retain, nonatomic) HMFTimer *cloudDataSyncInProgressTimer; // @synthesize cloudDataSyncInProgressTimer=_cloudDataSyncInProgressTimer;
@property(nonatomic) _Bool networkConnectivityAvailable; // @synthesize networkConnectivityAvailable=_networkConnectivityAvailable;
@property(nonatomic) long long totalHomes; // @synthesize totalHomes=_totalHomes;
@property(nonatomic) _Bool localDataDecryptionFailed; // @synthesize localDataDecryptionFailed=_localDataDecryptionFailed;
@property(nonatomic) _Bool iCloudSwitchStateEnabled; // @synthesize iCloudSwitchStateEnabled=_iCloudSwitchStateEnabled;
@property(nonatomic) _Bool serverTokenAvailable; // @synthesize serverTokenAvailable=_serverTokenAvailable;
@property(nonatomic) _Bool cloudDataSyncCompleted; // @synthesize cloudDataSyncCompleted=_cloudDataSyncCompleted;
@property(nonatomic) _Bool iCloudAccountActive; // @synthesize iCloudAccountActive=_iCloudAccountActive;
@property(nonatomic) _Bool iCloudSwitchRequiredPopShown; // @synthesize iCloudSwitchRequiredPopShown=_iCloudSwitchRequiredPopShown;
@property(nonatomic) _Bool keychainSyncRequiredPopShown; // @synthesize keychainSyncRequiredPopShown=_keychainSyncRequiredPopShown;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *iCloudSwitchPopupTimer; // @synthesize iCloudSwitchPopupTimer=_iCloudSwitchPopupTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *popupTimer; // @synthesize popupTimer=_popupTimer;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) _Bool keychainSyncEnabled; // @synthesize keychainSyncEnabled=_keychainSyncEnabled;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (_Bool)shouldCloudSyncData;
- (void)resetConfiguration;
- (_Bool)isLocalDataDecryptionFailed;
- (void)updateLocalDataDecryptionFailed:(_Bool)arg1;
- (_Bool)isiCloudSwitchEnabled;
- (void)updateiCloudSwitchState:(_Bool)arg1;
- (void)updateServerTokenAvailable:(_Bool)arg1;
- (void)updateWithoutDataSynCheckServerTokenAvailable:(_Bool)arg1;
- (void)_updateCloudDataSyncState:(_Bool)arg1;
- (void)updateCloudDataSyncState:(_Bool)arg1;
- (_Bool)_cloudSyncinProgressCheck:(id)arg1 supressPopup:(_Bool)arg2 sendCanceledError:(_Bool *)arg3 dataSyncState:(unsigned long long *)arg4;
- (_Bool)dataSyncInProgressWithState:(unsigned long long *)arg1;
- (_Bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;
- (void)_updateCurrentAccount:(id)arg1;
- (void)updateCurrentAccount:(id)arg1;
- (void)updateTotalHomes:(long long)arg1;
- (void)_stopiCloudSwitchPopupTimer;
- (void)_startiCloudSwitchPopupTimer;
- (void)_stopPopupTimer;
- (void)_startPopupTimer;
- (void)_handleAccountStatusChanged:(id)arg1;
- (void)_stallResetConfigDisplayTimer;
- (void)_clearResetConfigDisplayTimer;
- (void)_stopResetConfigDisplayTimer;
- (void)_startResetConfigDisplayTimer;
- (void)_stallCloudDataSyncTimer;
- (void)_resetCloudDataSyncTimer;
- (void)_stopCloudDataSyncTimer;
- (void)_startCloudDataSyncTimer;
- (void)timerDidFire:(id)arg1;
- (void)updateNetworkConnectivity:(_Bool)arg1;
- (void)_stopDataConfigResetTimers;
- (void)_startDataConfigResetTimers;
@property(nonatomic) _Bool decryptionFailed; // @synthesize decryptionFailed=_decryptionFailed;
- (void)_postNotificationForDataSyncInProgress:(_Bool)arg1 dataSyncState:(unsigned long long)arg2;
- (void)handleKeychainSyncStateChangedNotification:(id)arg1;
- (void)_updateKeychainSyncEnabled:(_Bool)arg1;
- (void)dealloc;
- (void)_registerForMessages;
- (id)initWithName:(id)arg1 homeManager:(id)arg2 messageDispatcher:(id)arg3 localDataDecryptionFailed:(_Bool)arg4 totalHomes:(long long)arg5 currentAccount:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

