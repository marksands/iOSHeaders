//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSAlarmMonitorDelegate.h"
#import "CSAssetManagerDelegate.h"
#import "CSAudioRecorderDelegate.h"
#import "CSLanguageCodeUpdateMonitorDelegate.h"
#import "CSSiriEnabledMonitorDelegate.h"
#import "CSStateMachineDelegate.h"
#import "CSTimerMonitorDelegate.h"
#import "CSVoiceTriggerDelegate.h"
#import "CSVolumeMonitorDelegate.h"

@class CSAsset, CSAudioCircularBuffer, CSAudioRecorder, CSContinuousVoiceTrigger, CSKeywordDetector, CSMyriadPHash, CSSelfTriggerDetector, CSSmartSiriVolume, CSStateMachine, CSVoiceTriggerEventNotifier, CSVoiceTriggerFidesClient, CSVoiceTriggerFileLogger, CSVoiceTriggerFirstPass, CSVoiceTriggerSecondPass, NSDictionary, NSHashTable, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID;

@interface CSSpeechManager : NSObject <CSAudioRecorderDelegate, CSStateMachineDelegate, CSVoiceTriggerDelegate, CSSiriEnabledMonitorDelegate, CSVolumeMonitorDelegate, CSAlarmMonitorDelegate, CSTimerMonitorDelegate, CSAssetManagerDelegate, CSLanguageCodeUpdateMonitorDelegate>
{
    _Bool _isSiriEnabled;
    CSAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_assetQueryQueue;
    CSStateMachine *_stateMachine;
    CSAudioCircularBuffer *_audioBuffer;
    CSAsset *_currentVoiceTriggerAsset;
    CSVoiceTriggerFirstPass *_voiceTriggerFirstPass;
    CSVoiceTriggerSecondPass *_voiceTriggerSecondPass;
    id <CSSpeechManagerDelegate> _clientController;
    CSVoiceTriggerEventNotifier *_voiceTriggerEventNotifier;
    CSVoiceTriggerFileLogger *_voiceTriggerFileLogger;
    CSSelfTriggerDetector *_selfTriggerDetector;
    CSContinuousVoiceTrigger *_continuousVoiceTrigger;
    CSKeywordDetector *_keywordDetector;
    CSSmartSiriVolume *_smartSiriVolume;
    CSMyriadPHash *_myriad;
    CSVoiceTriggerFidesClient *_voiceTriggerFidesClient;
    NSHashTable *_activeAudioProcessors;
    NSHashTable *_continuousAudioProcessors;
    unsigned long long _lastForwardedSampleCount;
    unsigned long long _secondPassStartSampleCount;
    unsigned long long _clientStartSampleCount;
    NSDictionary *_lastVoiceTriggerEventInfo;
    NSObject<OS_dispatch_source> *_listenPollingTimer;
    NSUUID *_pendingSetRecordModeToRecordingToken;
    CDUnknownBlockType _pendingSetRecordModeToRecordingCompletion;
}

@property(nonatomic) _Bool isSiriEnabled; // @synthesize isSiriEnabled=_isSiriEnabled;
@property(copy, nonatomic) CDUnknownBlockType pendingSetRecordModeToRecordingCompletion; // @synthesize pendingSetRecordModeToRecordingCompletion=_pendingSetRecordModeToRecordingCompletion;
@property(retain, nonatomic) NSUUID *pendingSetRecordModeToRecordingToken; // @synthesize pendingSetRecordModeToRecordingToken=_pendingSetRecordModeToRecordingToken;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *listenPollingTimer; // @synthesize listenPollingTimer=_listenPollingTimer;
@property(retain, nonatomic) NSDictionary *lastVoiceTriggerEventInfo; // @synthesize lastVoiceTriggerEventInfo=_lastVoiceTriggerEventInfo;
@property(nonatomic) unsigned long long clientStartSampleCount; // @synthesize clientStartSampleCount=_clientStartSampleCount;
@property(nonatomic) unsigned long long secondPassStartSampleCount; // @synthesize secondPassStartSampleCount=_secondPassStartSampleCount;
@property(nonatomic) unsigned long long lastForwardedSampleCount; // @synthesize lastForwardedSampleCount=_lastForwardedSampleCount;
@property(retain, nonatomic) NSHashTable *continuousAudioProcessors; // @synthesize continuousAudioProcessors=_continuousAudioProcessors;
@property(retain, nonatomic) NSHashTable *activeAudioProcessors; // @synthesize activeAudioProcessors=_activeAudioProcessors;
@property(retain, nonatomic) CSVoiceTriggerFidesClient *voiceTriggerFidesClient; // @synthesize voiceTriggerFidesClient=_voiceTriggerFidesClient;
@property(retain, nonatomic) CSMyriadPHash *myriad; // @synthesize myriad=_myriad;
@property(retain, nonatomic) CSSmartSiriVolume *smartSiriVolume; // @synthesize smartSiriVolume=_smartSiriVolume;
@property(retain, nonatomic) CSKeywordDetector *keywordDetector; // @synthesize keywordDetector=_keywordDetector;
@property(retain, nonatomic) CSContinuousVoiceTrigger *continuousVoiceTrigger; // @synthesize continuousVoiceTrigger=_continuousVoiceTrigger;
@property(retain, nonatomic) CSSelfTriggerDetector *selfTriggerDetector; // @synthesize selfTriggerDetector=_selfTriggerDetector;
@property(retain, nonatomic) CSVoiceTriggerFileLogger *voiceTriggerFileLogger; // @synthesize voiceTriggerFileLogger=_voiceTriggerFileLogger;
@property(retain, nonatomic) CSVoiceTriggerEventNotifier *voiceTriggerEventNotifier; // @synthesize voiceTriggerEventNotifier=_voiceTriggerEventNotifier;
@property(nonatomic) __weak id <CSSpeechManagerDelegate> clientController; // @synthesize clientController=_clientController;
@property(retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass; // @synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass;
@property(retain, nonatomic) CSVoiceTriggerFirstPass *voiceTriggerFirstPass; // @synthesize voiceTriggerFirstPass=_voiceTriggerFirstPass;
@property(retain, nonatomic) CSAsset *currentVoiceTriggerAsset; // @synthesize currentVoiceTriggerAsset=_currentVoiceTriggerAsset;
@property(retain, nonatomic) CSAudioCircularBuffer *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(retain, nonatomic) CSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue; // @synthesize assetQueryQueue=_assetQueryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
- (void).cxx_destruct;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;
- (float)getEstimatedTTSVolume;
- (id)_eventName:(unsigned long long)arg1;
- (id)_stateName:(long long)arg1;
- (void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1;
- (void)_reinitializeVoiceTriggerWithAsset:(id)arg1;
- (void)_reinitializeVoiceTriggerIfNeeded;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSAssetManagerDidDownloadNewAsset:(id)arg1;
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (void)voiceTriggerDetectedOnAOP:(id)arg1;
- (void)audioRecorderDisconnected:(id)arg1;
- (void)audioRecorderEndRecordInterruption:(id)arg1;
- (void)audioRecorderBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (void)audioRecorderBeginRecordInterruption:(id)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
- (void)audioRecorderDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)audioRecorderDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
- (id)_getClientRecordContext;
- (void)_startForwardingToSmartSiriVolume;
- (void)_stopForwardingToKeywordDetector;
- (void)_startForwardingToKeywordDetector;
- (void)_stopForwardingToContinuousVoiceTrigger;
- (void)_startForwardingToContinuousVoiceTrigger;
- (void)_stopForwardingToSelfTriggerDetector;
- (void)_startForwardingToSelfTriggerDetector;
- (void)_stopForwardingToSecondPassVoiceTrigger;
- (void)_startForwardingToSecondPassVoiceTrigger;
- (void)_stopForwardingToFirstPassVoiceTrigger;
- (void)_startForwardingToFirstPassVoiceTrigger;
- (void)_stopForwardingToClient;
- (void)_startForwardingToClient;
- (void)_destroyAudioRecorderIfNeeded;
- (void)_stopListenPolling;
- (void)_startListenPolling;
- (void)_createListenPollingTimer;
- (void)didIgnoreEvent:(long long)arg1 from:(long long)arg2;
- (void)didTransitFrom:(long long)arg1 to:(long long)arg2 by:(long long)arg3;
- (void)mediaserverdDidRestart;
- (void)audioRecorderLostMediaserverd:(id)arg1;
- (void)stopRecordingWithEvent:(unsigned long long)arg1;
- (void)_startRecordingForClient:(id)arg1 error:(id *)arg2;
- (_Bool)startRecordingWithSetting:(id)arg1 event:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_releaseAudioSessionForListening:(unsigned long long)arg1 error:(id *)arg2;
- (void)_releaseClientAudioSession:(unsigned long long)arg1;
- (void)releaseClientAudioSession:(unsigned long long)arg1;
- (void)releaseClientAudioSession;
- (_Bool)_setCurrentContext:(id)arg1 error:(id *)arg2;
- (void)_performPendingSetRecordModeToRecordingForReason:(id)arg1;
- (void)_cancelPendingSetRecordModeToRecordingForReason:(id)arg1;
- (void)_scheduleSetRecordModeToRecordingWithDelay:(double)arg1 forReason:(id)arg2 validator:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_setRecordMode:(long long)arg1 error:(id *)arg2;
- (_Bool)_startListening:(id *)arg1;
- (_Bool)_startRecordingWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)prepareRecordingForClient:(id)arg1 error:(id *)arg2;
- (_Bool)setClientContext:(id)arg1 error:(id *)arg2;
- (_Bool)isNarrowBand;
- (_Bool)isClientRecording;
- (id)recordSettings;
- (id)recordRoute;
- (void)prewarmAudioSession;
- (_Bool)_prepareListenWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)_prepareRecorderWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)_createRecorderWithContextIfNeeded:(id)arg1 error:(id *)arg2;
- (void)_notifyEvent:(unsigned long long)arg1;
- (void)notifyEvent:(unsigned long long)arg1;
- (long long)getCurrentState;
- (void)_setupStateMachine;
- (void)registerSpeechController:(id)arg1;
- (void)setupSmartSiriVolume;
- (void)_setupCircularBuffer;
- (void)_startVoiceTrigger;
- (void)_setupVoiceTrigger;
- (id)_getSmartSiriVolumeAsset;
- (id)_getVoiceTriggerAsset;
- (void)_reset;
- (void)reset;
- (void)startManager;
- (void)dealloc;
- (id)initWithVoiceTriggerFirstPass:(id)arg1 voicetriggerSecondPass:(id)arg2 voicetriggerEventNotifier:(id)arg3 audioRecorder:(id)arg4;
- (id)init;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(_Bool)arg1;
- (unsigned long long)alertStartTime;
- (_Bool)playRecordStartingAlertAndResetEndpointer;
- (_Bool)playAlertSoundForType:(long long)arg1;
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (id)metrics;
- (id)passThruVoiceTriggerInfo;
- (void)setDuckOthersOption:(_Bool)arg1;
- (_Bool)duckOthersOption;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

