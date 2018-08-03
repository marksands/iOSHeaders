//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUtilities/TUCall.h>

#import "AVCRemoteVideoClientDelegate.h"
#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSMutableDictionary, NSSet, NSString, NSUUID, TUCallDisplayContext, TUCallProvider, TUHandle;

@interface TUProxyCall : TUCall <AVCRemoteVideoClientDelegate, NSSecureCoding>
{
    _Bool _hostedOnCurrentDevice;
    _Bool _outgoing;
    _Bool _voicemail;
    _Bool _isVideo;
    _Bool _thirdPartyVideo;
    _Bool _isSendingAudio;
    _Bool _isSendingVideo;
    _Bool _mediaStalled;
    _Bool _videoDegraded;
    _Bool _videoPaused;
    _Bool _blocked;
    _Bool _emergency;
    _Bool _sos;
    _Bool _usingBaseband;
    _Bool _supportsTTYWithVoice;
    _Bool _needsManualInCallSounds;
    _Bool _uplinkMuted;
    _Bool _downlinkMuted;
    _Bool _requiresRemoteVideo;
    _Bool _prefersExclusiveAccessToCellularNetwork;
    _Bool _remoteUplinkMuted;
    _Bool _shouldSuppressInCallUI;
    _Bool _wantsStagingArea;
    int _callStatus;
    int _ttyType;
    int _callRelaySupport;
    float _localMeterLevel;
    float _remoteMeterLevel;
    NSString *_callUUID;
    TUHandle *_handle;
    TUCallProvider *_backingProvider;
    TUCallProvider *_displayProvider;
    NSString *_callerNameFromNetwork;
    long long _cameraType;
    long long _remoteCameraOrientation;
    NSString *_audioCategory;
    NSString *_audioMode;
    NSDictionary *_endedReasonUserInfo;
    NSString *_endedReasonString;
    NSString *_endedErrorString;
    NSData *_localFrequency;
    NSData *_remoteFrequency;
    long long _videoStreamToken;
    long long _inputAudioPowerSpectrumToken;
    long long _outputAudioPowerSpectrumToken;
    long long _remoteScreenOrientation;
    NSUUID *_callGroupUUID;
    NSDictionary *_providerContext;
    TUCallDisplayContext *_displayContext;
    NSSet *_remoteParticipantHandles;
    NSUUID *_localSenderIdentityUUID;
    id <TUCallServicesProxyCallActions> _proxyCallActionsDelegate;
    id <TURemoteVideoClient> _localVideo;
    id <TURemoteVideoClient> _remoteVideo;
    NSMutableDictionary *_remoteVideoModeToLayer;
    NSMutableDictionary *_localVideoModeToLayer;
    struct CGSize _remoteAspectRatio;
    struct CGSize _remoteScreenPortraitAspectRatio;
    struct CGSize _remoteScreenLandscapeAspectRatio;
    struct CGRect _remoteVideoContentRect;
}

+ (_Bool)supportsSecureCoding;
+ (id)proxyCallWithCall:(id)arg1;
@property(nonatomic) struct CGSize remoteScreenLandscapeAspectRatio; // @synthesize remoteScreenLandscapeAspectRatio=_remoteScreenLandscapeAspectRatio;
@property(nonatomic) struct CGSize remoteScreenPortraitAspectRatio; // @synthesize remoteScreenPortraitAspectRatio=_remoteScreenPortraitAspectRatio;
@property(retain, nonatomic) NSMutableDictionary *localVideoModeToLayer; // @synthesize localVideoModeToLayer=_localVideoModeToLayer;
@property(retain, nonatomic) NSMutableDictionary *remoteVideoModeToLayer; // @synthesize remoteVideoModeToLayer=_remoteVideoModeToLayer;
@property(retain, nonatomic) id <TURemoteVideoClient> remoteVideo; // @synthesize remoteVideo=_remoteVideo;
@property(retain, nonatomic) id <TURemoteVideoClient> localVideo; // @synthesize localVideo=_localVideo;
@property(nonatomic) __weak id <TUCallServicesProxyCallActions> proxyCallActionsDelegate; // @synthesize proxyCallActionsDelegate=_proxyCallActionsDelegate;
@property(nonatomic) _Bool wantsStagingArea; // @synthesize wantsStagingArea=_wantsStagingArea;
@property(nonatomic) _Bool shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(copy, nonatomic) NSUUID *localSenderIdentityUUID; // @synthesize localSenderIdentityUUID=_localSenderIdentityUUID;
@property(nonatomic, getter=isRemoteUplinkMuted) _Bool remoteUplinkMuted; // @synthesize remoteUplinkMuted=_remoteUplinkMuted;
@property(nonatomic) _Bool prefersExclusiveAccessToCellularNetwork; // @synthesize prefersExclusiveAccessToCellularNetwork=_prefersExclusiveAccessToCellularNetwork;
@property(copy, nonatomic) NSSet *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property(copy, nonatomic) TUCallDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
@property(retain, nonatomic) NSDictionary *providerContext; // @synthesize providerContext=_providerContext;
@property(copy, nonatomic) NSUUID *callGroupUUID; // @synthesize callGroupUUID=_callGroupUUID;
@property(nonatomic) long long remoteScreenOrientation; // @synthesize remoteScreenOrientation=_remoteScreenOrientation;
- (_Bool)requiresRemoteVideo;
@property(nonatomic) long long outputAudioPowerSpectrumToken; // @synthesize outputAudioPowerSpectrumToken=_outputAudioPowerSpectrumToken;
@property(nonatomic) long long inputAudioPowerSpectrumToken; // @synthesize inputAudioPowerSpectrumToken=_inputAudioPowerSpectrumToken;
@property(nonatomic) long long videoStreamToken; // @synthesize videoStreamToken=_videoStreamToken;
@property(nonatomic) float remoteMeterLevel; // @synthesize remoteMeterLevel=_remoteMeterLevel;
@property(nonatomic) float localMeterLevel; // @synthesize localMeterLevel=_localMeterLevel;
@property(retain, nonatomic) NSData *remoteFrequency; // @synthesize remoteFrequency=_remoteFrequency;
@property(retain, nonatomic) NSData *localFrequency; // @synthesize localFrequency=_localFrequency;
@property(nonatomic) int callRelaySupport; // @synthesize callRelaySupport=_callRelaySupport;
- (_Bool)isDownlinkMuted;
- (_Bool)isUplinkMuted;
@property(copy, nonatomic) NSString *endedErrorString; // @synthesize endedErrorString=_endedErrorString;
@property(copy, nonatomic) NSString *endedReasonString; // @synthesize endedReasonString=_endedReasonString;
@property(copy, nonatomic) NSDictionary *endedReasonUserInfo; // @synthesize endedReasonUserInfo=_endedReasonUserInfo;
@property(nonatomic) _Bool needsManualInCallSounds; // @synthesize needsManualInCallSounds=_needsManualInCallSounds;
@property(copy, nonatomic) NSString *audioMode; // @synthesize audioMode=_audioMode;
@property(copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(nonatomic) _Bool supportsTTYWithVoice; // @synthesize supportsTTYWithVoice=_supportsTTYWithVoice;
@property(nonatomic) int ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic, getter=isUsingBaseband) _Bool usingBaseband; // @synthesize usingBaseband=_usingBaseband;
@property(nonatomic, getter=isSOS, setter=setSOS:) _Bool sos; // @synthesize sos=_sos;
@property(nonatomic, getter=isEmergency) _Bool emergency; // @synthesize emergency=_emergency;
@property(nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_blocked;
@property(nonatomic) long long remoteCameraOrientation; // @synthesize remoteCameraOrientation=_remoteCameraOrientation;
@property(nonatomic) long long cameraType; // @synthesize cameraType=_cameraType;
@property(nonatomic) struct CGRect remoteVideoContentRect; // @synthesize remoteVideoContentRect=_remoteVideoContentRect;
@property(nonatomic) struct CGSize remoteAspectRatio; // @synthesize remoteAspectRatio=_remoteAspectRatio;
@property(nonatomic, getter=isVideoPaused) _Bool videoPaused; // @synthesize videoPaused=_videoPaused;
@property(nonatomic, getter=isVideoDegraded) _Bool videoDegraded; // @synthesize videoDegraded=_videoDegraded;
@property(nonatomic, getter=isMediaStalled) _Bool mediaStalled; // @synthesize mediaStalled=_mediaStalled;
- (_Bool)isSendingVideo;
@property(nonatomic) _Bool isSendingAudio; // @synthesize isSendingAudio=_isSendingAudio;
@property(nonatomic, getter=isThirdPartyVideo) _Bool thirdPartyVideo; // @synthesize thirdPartyVideo=_thirdPartyVideo;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(copy, nonatomic) NSString *callerNameFromNetwork; // @synthesize callerNameFromNetwork=_callerNameFromNetwork;
@property(nonatomic, getter=isVoicemail) _Bool voicemail; // @synthesize voicemail=_voicemail;
@property(nonatomic, getter=isOutgoing) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(retain, nonatomic) TUCallProvider *displayProvider; // @synthesize displayProvider=_displayProvider;
@property(retain, nonatomic) TUCallProvider *backingProvider; // @synthesize backingProvider=_backingProvider;
@property(retain, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
@property(nonatomic, getter=isHostedOnCurrentDevice) _Bool hostedOnCurrentDevice; // @synthesize hostedOnCurrentDevice=_hostedOnCurrentDevice;
@property(nonatomic) int callStatus; // @synthesize callStatus=_callStatus;
@property(copy, nonatomic) NSString *callUUID; // @synthesize callUUID=_callUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)_orientationForVideoAttributesOrientation:(int)arg1;
- (long long)_cameraTypeForVideoAttributeCamera:(int)arg1;
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 remoteScreenAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 videoDidDegrade:(_Bool)arg2;
- (void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(_Bool)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(_Bool)arg2;
- (void)setRemoteVideoPresentationState:(int)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;
- (struct CGSize)localAspectRatioForOrientation:(long long)arg1;
- (struct CGSize)remoteScreenAspectRatio;
- (void)_createRemoteVideoIfNecessary;
- (void)_createLocalVideoIfNecessary;
- (void)_synchronizeRemoteVideo;
- (void)_synchronizeLocalVideo;
- (void)_updateVideoStreamToken:(long long)arg1;
- (void)_updateVideoCallAttributes:(id)arg1;
- (void)setRequiresRemoteVideo:(_Bool)arg1;
- (void)setLocalVideoLayer:(id)arg1 forMode:(long long)arg2;
- (void)setRemoteVideoLayer:(id)arg1 forMode:(long long)arg2;
- (int)avcRemoteVideoModeForMode:(long long)arg1;
- (void)sendHardPauseDigits;
- (void)setCallDisconnectedDueToComponentCrash;
- (void)updateProxyCallWithDaemon;
- (void)setDownlinkMuted:(_Bool)arg1;
- (void)setUplinkMuted:(_Bool)arg1;
- (void)setIsSendingVideo:(_Bool)arg1;
- (void)setTransitionStatus:(int)arg1;
- (void)setEndpointOnCurrentDevice:(_Bool)arg1;
- (void)setWantsHoldMusic:(_Bool)arg1;
- (void)setShouldSuppressRingtone:(_Bool)arg1;
- (void)setDisconnectedReason:(int)arg1;
- (void)answerWithRequest:(id)arg1;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (void)disconnectWithReason:(int)arg1;
- (void)updateWithCall:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

