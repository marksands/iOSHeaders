//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCSessionParticipant.h>

#import "VCSessionDownlinkBandwidthAllocatorClient.h"

@class NSArray, NSNumber, NSString, TimingCollection, VCSessionBandwidthAllocationTable, VCSessionParticipantMediaStreamInfo, VCVideoQualityInfo;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantRemote : VCSessionParticipant <VCSessionDownlinkBandwidthAllocatorClient>
{
    NSNumber *_optedInVideoStreamID;
    NSNumber *_optedInAudioStreamID;
    unsigned short _activeDownlinkVideoStreamID;
    unsigned short _activeDownlinkAudioStreamID;
    _Bool _firstFrameReceived;
    _Bool _remoteVideoEnabled;
    _Bool _remoteVideoPaused;
    unsigned char _videoQuality;
    unsigned int _visibilityIndex;
    unsigned int _prominenceIndex;
    VCSessionBandwidthAllocationTable *_mediaTable;
    VCSessionBandwidthAllocationTable *_repairMediaTable;
    VCVideoQualityInfo *_videoQualityInfo;
    double _lastVideoQualityNotificationUpdate;
    unsigned char _lastVideoPriority;
    _Bool _isProcessingVideoOptIn;
    _Bool _isVideoDegraded;
    _Bool _videoSuspended;
    _Bool _isRedundancyRequested;
    _Bool _isRemoteMediaStalled;
    struct _VCSessionParticipantProminenceInfo _prominenceInfo;
    TimingCollection *_perfTimers;
    _Bool _haveReportedPerfTimers;
}

+ (unsigned int)maxVideoNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;
+ (unsigned int)maxAudioNetworkBitrateForLocalInterfaceOnWiFi:(_Bool)arg1;
@property(nonatomic, getter=isRemoteVideoPaused) _Bool remoteVideoPaused; // @synthesize remoteVideoPaused=_remoteVideoPaused;
@property(nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic, getter=isRemoteVideoEnabled) _Bool remoteVideoEnabled; // @synthesize remoteVideoEnabled=_remoteVideoEnabled;
@property(readonly) unsigned short activeDownlinkAudioStreamID; // @synthesize activeDownlinkAudioStreamID=_activeDownlinkAudioStreamID;
@property(readonly) unsigned short activeDownlinkVideoStreamID; // @synthesize activeDownlinkVideoStreamID=_activeDownlinkVideoStreamID;
@property(retain, nonatomic) NSNumber *optedInAudioStreamID; // @synthesize optedInAudioStreamID=_optedInAudioStreamID;
@property(retain, nonatomic) NSNumber *optedInVideoStreamID; // @synthesize optedInVideoStreamID=_optedInVideoStreamID;
- (void)reportParticipantsPerfTimingsOnce;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)vcMediaStream:(id)arg1 remoteMediaStalled:(_Bool)arg2;
- (void)vcMediaStream:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcMediaStream:(id)arg1 didSwitchToAudioStreamWithID:(unsigned short)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveVideoFrameWithTime:(CDStruct_1b6d18a9)arg2;
- (void)vcMediaStream:(id)arg1 priorityDidChange:(unsigned char)arg2;
- (void)updateVideoPriority:(unsigned char)arg1;
- (void)updateAudioPriority:(unsigned char)arg1;
- (void)debounceAudioPriority:(unsigned char)arg1;
- (void)setShouldEnableFaceZoom:(_Bool)arg1;
- (void)updateShouldEnableFaceZoom;
- (void)notifyChangeInActiveMediaBitrate:(_Bool)arg1;
- (void)setActualBitrateForOptedInStreamID:(id)arg1 withActiveStreamID:(id)arg2 isVideo:(_Bool)arg3;
- (_Bool)setupVideoStreamFromMediaBlobWithIDSDestination:(id)arg1;
- (id)newVideoStreamConfigurationWithNegotiationVideoResult:(id)arg1;
- (_Bool)isVideoExpected;
@property(nonatomic, getter=isVideoSuspended) _Bool videoSuspended;
@property(readonly) _Bool isVisible;
@property(readonly) unsigned int optedInNetworkBitrateAudio;
@property(readonly) unsigned int optedInNetworkBitrateVideo;
@property(readonly) unsigned int actualNetworkBitrateAudio;
@property(readonly) unsigned int actualNetworkBitrateVideo;
@property(readonly) NSArray *mediaEntries;
- (void)setVideoDegraded:(_Bool)arg1;
- (void)updateVideoQualityNotification;
- (void)collectAudioChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)collectVideoChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)receivedMediaPacketAtTime:(double)arg1 isDecryptable:(_Bool)arg2;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *videoStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *audioStreamInfo;
- (_Bool)isVideoActive;
- (_Bool)isAudioActive;
- (void)negotiateAudioRules:(id)arg1;
- (id)recommendedStreamIDsForSelectedMediaEntries:(id)arg1 forceSeamlessTransition:(_Bool)arg2;
- (void)setActiveStreamIDs:(id)arg1;
- (void)setMuted:(_Bool)arg1;
- (id)entryForStreamID:(id)arg1;
- (_Bool)setupAudioStreamFromMediaBlobWithIDSDestination:(id)arg1;
- (_Bool)setupBandwidthAllocationTableForMediaStreamConfigs:(id)arg1 entryType:(unsigned char)arg2;
- (id)newAudioStreamConfigurationWithMultiwayAudioNegotiationResult:(id)arg1;
- (id)setupStreamRTP:(id)arg1;
- (_Bool)setupAudioStreamConfiguration:(id)arg1 audioRules:(id)arg2;
- (_Bool)processParticipantInfo;
- (void)updateDownlinkBandwithAllocatorClientConfigurations:(id)arg1;
- (void)setVideoPaused:(_Bool)arg1;
- (void)setAudioPaused:(_Bool)arg1;
- (void)updateProminenceDefaults;
- (void)dealloc;
- (id)initWithIDSDestination:(id)arg1 idsParticipantID:(unsigned long long)arg2 mediaNegotiator:(id)arg3 opaqueData:(id)arg4 delegate:(id)arg5 processId:(int)arg6 transportSessionID:(unsigned int)arg7 sessionUUID:(id)arg8 config:(id)arg9;

// Remaining properties
@property(readonly) NSString *uuid;

@end

