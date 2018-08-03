//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCSessionParticipant.h>

#import "VCSessionUplinkVideoStreamControllerDelegate.h"
#import "VCVideoCaptureClient.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, VCSessionUplinkBandwidthAllocator, VCSessionUplinkVideoStreamController, VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantLocal : VCSessionParticipant <VCVideoCaptureClient, VCSessionUplinkVideoStreamControllerDelegate>
{
    VCSessionUplinkBandwidthAllocator *_uplinkBandwidthAllocator;
    NSMutableDictionary *_activeUplinkAudioStreams;
    NSMutableDictionary *_pendingActiveUplinkVideoStreams;
    _Bool _encryptionInfoReceived;
    int _shouldUpdateActiveVideoStream;
    unsigned int _currentUplinkTargetBitrate;
    struct opaqueCMSimpleQueue *_audioStreamUpdateEventQueue;
    struct opaqueCMSimpleQueue *_audioRedundancyChangeEventQueue;
    struct opaqueCMSimpleQueue *_videoRedundancyChangeEventQueue;
    unsigned int _lastSentAudioSampleTime;
    double _lastSentAudioHostTime;
    struct _opaque_pthread_rwlock_t _audioTimestampRWLock;
    unsigned char _audioPriority;
    unsigned short _connectionStatsStreamID;
    VCSessionUplinkVideoStreamController *_uplinkVideoStreamController;
    struct tagVCMediaQueue *_mediaQueue;
    unsigned int _uplinkBitrateCapWifi;
    unsigned int _uplinkBitrateCapCell;
    struct tagVCMemoryPool *_redundancyPool;
    struct tagVCMemoryPool *_videoRedundancyPool;
    // Error parsing type: AC, name: _videoPriority
    _Bool _shouldResize;
    _Bool _enableRedundancy;
    _Bool _enableVADFiltering;
    NSMutableArray *_peerSubscribedStreams;
    float _averageSilenceAudioPower;
    unsigned char _audioPriorityRampUp;
    unsigned char _audioPriorityDecaySlow;
    unsigned char _audioPriorityDecayFast;
    float _audioVoiceDetectionSensitivity;
    float _audioSilencePowerAverageMultiplier;
    unsigned char _forcedAudioPriorityValue;
    double _forcedAudioPriorityLastUpdateTime;
    _Bool _forcedAudioPriorityEnabled;
    VCVideoRule *_videoRule;
    _Bool _speechDetected;
    struct opaqueVCVoiceDetector *_voiceDetector;
    double _fecRatio;
    NSMutableSet *_audioPayloadTypes;
    NSMutableSet *_videoPayloadTypes;
    unsigned int _currentUplinkTotalBitrateVideo;
    unsigned int _currentUplinkTotalBitrateAudio;
}

@property(readonly, nonatomic) unsigned int currentUplinkTotalBitrateAudio; // @synthesize currentUplinkTotalBitrateAudio=_currentUplinkTotalBitrateAudio;
@property(readonly, nonatomic) unsigned int currentUplinkTotalBitrateVideo; // @synthesize currentUplinkTotalBitrateVideo=_currentUplinkTotalBitrateVideo;
@property(readonly, nonatomic) NSSet *videoPayloadTypes; // @synthesize videoPayloadTypes=_videoPayloadTypes;
@property(readonly, nonatomic) NSSet *audioPayloadTypes; // @synthesize audioPayloadTypes=_audioPayloadTypes;
@property(copy, nonatomic) NSArray *peerSubscribedStreams; // @synthesize peerSubscribedStreams=_peerSubscribedStreams;
@property(nonatomic) _Bool enableVADFiltering; // @synthesize enableVADFiltering=_enableVADFiltering;
@property(nonatomic) unsigned int uplinkBitrateCapCell; // @synthesize uplinkBitrateCapCell=_uplinkBitrateCapCell;
@property(nonatomic) unsigned int uplinkBitrateCapWifi; // @synthesize uplinkBitrateCapWifi=_uplinkBitrateCapWifi;
@property(nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(readonly, nonatomic) unsigned short connectionStatsStreamID; // @synthesize connectionStatsStreamID=_connectionStatsStreamID;
@property(nonatomic) _Bool encryptionInfoReceived; // @synthesize encryptionInfoReceived=_encryptionInfoReceived;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)controller:(id)arg1 didChangeActiveVideoStreams:(id)arg2;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(_Bool)arg2 powerLevelDidChange:(_Bool)arg3;
- (void)thermalLevelDidChange:(int)arg1;
- (id)clientCaptureRule;
- (void)avConferencePreviewError:(id)arg1;
- (_Bool)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)generateKeyFrameForStreamsWithNewCompoundStreamIDsWithActiveVideoStreams:(id)arg1;
- (void)updateStreamIDsWithActiveVideoStreams:(id)arg1;
- (void)updateActiveAudioStreams:(id)arg1;
- (void)updateActiveAudioStreamWithTargetBitrate:(unsigned int)arg1;
- (void)updateActiveVideoStreamWithTargetBitrate:(unsigned int)arg1;
- (void)dispatchedUpdateUplinkMediaStreamsWithTargetBitrate:(unsigned int)arg1;
- (void)updateUplinkTargetBitrate:(unsigned int)arg1;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)flushVideoRedundancyEventQueue;
- (void)processVideoEventQueue;
- (void)enableRedundancy:(_Bool)arg1;
- (void)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;
- (void)generateKeyFrameWithStreamID:(unsigned short)arg1;
- (void)setupEncodingModeWithVideoStreamConfig:(id)arg1;
- (_Bool)setupVideoStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2;
- (void)setupVideoStreamConfig:(id)arg1 initialConfiguration:(id)arg2;
- (void)updateAudioPriorityWithSampleBuffer:(struct opaqueVCAudioBufferList *)arg1;
- (void)stopVoiceActivityDetection;
- (void)startVoiceActivityDetection;
- (_Bool)isHighPriorityAudioWithPower:(float)arg1 voiceActive:(_Bool)arg2;
- (void)flushAudioRedundancyEventQueue;
- (void)flushAudioEventQueue;
- (void)processEventQueues;
- (void)processAudioRedundancyChangeEvent;
- (void)processAudioStreamUpdateEvent;
- (void)setMuted:(_Bool)arg1;
- (void)createOpaqueData;
- (_Bool)createParticipantInfo;
- (void)addCallInfoBlobToParticipantInfo:(id)arg1;
- (_Bool)setupAudioStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2;
- (id)setupStreamRTP:(id)arg1;
- (id)audioRuleCollectionWithAudioStreamConfig:(id)arg1;
- (unsigned short)generateStreamID;
- (_Bool)containsStreamWithIDSStreamID:(unsigned short)arg1;
- (unsigned int)generateSSRC;
- (_Bool)containsStreamWithSSRC:(unsigned int)arg1;
- (void)updateSupportedAudioRules:(id)arg1;
- (id)supportedAudioRules;
- (void)updatePayloadTypesWithConfigProvider:(id)arg1;
- (_Bool)computeMediaBlob;
- (id)multiwayVideoStreamConfigs;
- (id)multiwayAudioStreamConfigs;
- (void)initializeUplinkVideoStreamController;
- (_Bool)setupVideoStreamWithConfiguration:(id)arg1;
- (_Bool)setupVideoStreamsWithConfigProvider:(id)arg1;
- (_Bool)setupAudioStreamWithConfiguration:(id)arg1;
- (_Bool)setupAudioStreamsWithConfigProvider:(id)arg1;
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg1;
- (void)collectAudioChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)collectVideoChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)stopAudioIOCompletion;
- (_Bool)setState:(unsigned int)arg1;
- (void)deregisterForVideoCapture;
- (void)registerForVideoCapture;
- (void)updateActiveVoiceOnly;
- (void)updateVideoPaused:(_Bool)arg1;
- (void)applyVideoEnabledSetting:(_Bool)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithIDSDestination:(id)arg1 delegate:(id)arg2 processId:(int)arg3 sessionUUID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

