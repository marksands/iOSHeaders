//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDate, NSDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID, TUCallCenter, TUCallDisplayContext, TUCallModel, TUCallNotificationManager, TUCallProvider, TUCallServicesInterface, TUDialRequest, TUHandle, TUProxyCall, TUSenderIdentity, TUVideoCallAttributes;

@interface TUCall : NSObject <NSSecureCoding>
{
    _Bool _endpointOnCurrentDevice;
    _Bool _shouldSuppressRingtone;
    _Bool _wantsHoldMusic;
    _Bool _wasDialAssisted;
    _Bool _hasUpdatedAudio;
    _Bool _video;
    _Bool _expectedEndpointOnPairedClientDevice;
    _Bool _ringtoneSuppressedRemotely;
    _Bool _wasPulledToCurrentDevice;
    int _disconnectedReason;
    int _faceTimeIDStatus;
    int _transitionStatus;
    int _hardPauseDigitsState;
    NSDate *_dateCreated;
    NSDate *_dateAnsweredOrDialed;
    NSDate *_dateSentInvitation;
    NSDate *_dateStartedConnecting;
    NSDate *_dateConnected;
    NSDate *_dateEnded;
    NSString *_uniqueProxyIdentifier;
    NSString *_sourceIdentifier;
    TUCallModel *_model;
    TUCallNotificationManager *_callNotificationManager;
    TUProxyCall *_comparativeCall;
    NSObject<OS_dispatch_queue> *_queue;
    TUCallServicesInterface *_callServicesInterface;
    TUVideoCallAttributes *_videoCallAttributes;
    long long _provisionalHoldStatus;
    NSString *_isoCountryCode;
    long long _soundRegion;
    NSDictionary *_providerContext;
    double _hostCreationTime;
    double _hostMessageSendTime;
    double _clientMessageReceiveTime;
    NSString *_hardPauseDigits;
    struct CGSize _remoteScreenAspectRatio;
}

+ (_Bool)supportsSecureCoding;
+ (id)faceTimeSupplementalDialTelephonyCallStringIncludingFTA:(_Bool)arg1;
+ (id)supplementalDialTelephonyCallString;
+ (id)supplementalDialTelephonyCallStringForDestination:(id)arg1 isPhoneNumber:(_Bool)arg2;
+ (id)_supplementalDialTelephonyCallStringForLocString:(id)arg1 destination:(id)arg2 isPhoneNumber:(_Bool)arg3 includeFaceTimeAudio:(_Bool)arg4;
@property(copy, nonatomic) NSString *hardPauseDigits; // @synthesize hardPauseDigits=_hardPauseDigits;
@property(nonatomic) int hardPauseDigitsState; // @synthesize hardPauseDigitsState=_hardPauseDigitsState;
@property(nonatomic) _Bool wasPulledToCurrentDevice; // @synthesize wasPulledToCurrentDevice=_wasPulledToCurrentDevice;
@property(nonatomic) double clientMessageReceiveTime; // @synthesize clientMessageReceiveTime=_clientMessageReceiveTime;
@property(nonatomic) double hostMessageSendTime; // @synthesize hostMessageSendTime=_hostMessageSendTime;
@property(nonatomic) double hostCreationTime; // @synthesize hostCreationTime=_hostCreationTime;
@property(readonly, nonatomic) struct CGSize remoteScreenAspectRatio; // @synthesize remoteScreenAspectRatio=_remoteScreenAspectRatio;
@property(readonly, nonatomic) NSDictionary *providerContext; // @synthesize providerContext=_providerContext;
@property(nonatomic) _Bool ringtoneSuppressedRemotely; // @synthesize ringtoneSuppressedRemotely=_ringtoneSuppressedRemotely;
@property(nonatomic, getter=isExpectedEndpointOnPairedClientDevice) _Bool expectedEndpointOnPairedClientDevice; // @synthesize expectedEndpointOnPairedClientDevice=_expectedEndpointOnPairedClientDevice;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(nonatomic) long long soundRegion; // @synthesize soundRegion=_soundRegion;
@property(nonatomic) _Bool hasUpdatedAudio; // @synthesize hasUpdatedAudio=_hasUpdatedAudio;
@property(nonatomic) int transitionStatus; // @synthesize transitionStatus=_transitionStatus;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(nonatomic) long long provisionalHoldStatus; // @synthesize provisionalHoldStatus=_provisionalHoldStatus;
@property(retain, nonatomic) TUVideoCallAttributes *videoCallAttributes; // @synthesize videoCallAttributes=_videoCallAttributes;
@property(nonatomic) __weak TUCallServicesInterface *callServicesInterface; // @synthesize callServicesInterface=_callServicesInterface;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) TUProxyCall *comparativeCall; // @synthesize comparativeCall=_comparativeCall;
@property(readonly, nonatomic) TUCallNotificationManager *callNotificationManager; // @synthesize callNotificationManager=_callNotificationManager;
@property(copy, nonatomic) TUCallModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool wasDialAssisted; // @synthesize wasDialAssisted=_wasDialAssisted;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(copy, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
@property(retain, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
@property(retain, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property(retain, nonatomic) NSDate *dateStartedConnecting; // @synthesize dateStartedConnecting=_dateStartedConnecting;
@property(retain, nonatomic) NSDate *dateSentInvitation; // @synthesize dateSentInvitation=_dateSentInvitation;
@property(retain, nonatomic) NSDate *dateAnsweredOrDialed; // @synthesize dateAnsweredOrDialed=_dateAnsweredOrDialed;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(nonatomic) _Bool wantsHoldMusic; // @synthesize wantsHoldMusic=_wantsHoldMusic;
@property(nonatomic) _Bool shouldSuppressRingtone; // @synthesize shouldSuppressRingtone=_shouldSuppressRingtone;
@property(nonatomic, getter=isEndpointOnCurrentDevice) _Bool endpointOnCurrentDevice; // @synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice;
@property(nonatomic) int faceTimeIDStatus; // @synthesize faceTimeIDStatus=_faceTimeIDStatus;
@property(nonatomic) int disconnectedReason; // @synthesize disconnectedReason=_disconnectedReason;
- (void).cxx_destruct;
- (_Bool)isDialRequestVideoUpgrade:(id)arg1;
- (_Bool)isVideoUpgradeFromCall:(id)arg1;
- (void)setRemoteVideoPresentationState:(int)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;
- (struct CGSize)localAspectRatioForOrientation:(long long)arg1;
@property(readonly, nonatomic) struct CGRect remoteVideoContentRect;
@property(readonly, nonatomic) struct CGSize remoteAspectRatio;
@property(readonly, nonatomic) long long remoteScreenOrientation;
@property(readonly, nonatomic) long long remoteCameraOrientation;
@property(readonly, nonatomic) long long cameraType;
@property(nonatomic) _Bool requiresRemoteVideo;
- (void)setRemoteVideoLayer:(id)arg1 forMode:(long long)arg2;
- (void)setLocalVideoLayer:(id)arg1 forMode:(long long)arg2;
@property(readonly, nonatomic) NSString *endedReasonString;
@property(readonly, nonatomic) NSString *endedErrorString;
@property(readonly, nonatomic) NSDictionary *callStats;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithCall:(id)arg1;
- (id)errorAlertMessage;
- (id)errorAlertTitle;
- (id)supplementalInCallString;
- (id)serviceDisplayString;
@property(readonly, copy, nonatomic) NSDictionary *endedReasonUserInfo;
- (_Bool)hasRelaySupport:(int)arg1;
@property(readonly, nonatomic) int callRelaySupport;
@property(readonly, nonatomic) int abUID;
@property(readonly, copy, nonatomic) NSString *companyName;
@property(readonly, copy, nonatomic) NSString *localizedLabel;
@property(readonly, copy, nonatomic) NSString *suggestedDisplayName;
@property(readonly, copy, nonatomic) NSString *displayFirstName;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *contactIdentifier;
@property(readonly, copy, nonatomic) TUCallDisplayContext *displayContext;
@property(readonly, nonatomic) NSData *remoteFrequency;
@property(readonly, nonatomic) NSData *localFrequency;
@property(nonatomic, getter=isDownlinkMuted) _Bool downlinkMuted;
@property(nonatomic, getter=isUplinkMuted) _Bool uplinkMuted;
- (_Bool)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
@property(readonly, copy, nonatomic) NSString *audioMode;
@property(readonly, copy, nonatomic) NSString *audioCategory;
@property(readonly, nonatomic) _Bool supportsDTMFTones;
@property(readonly, nonatomic) _Bool shouldPlayDTMFTone;
@property(readonly, nonatomic, getter=isEmergencyCall) _Bool emergencyCall;
@property(readonly, nonatomic) _Bool statusIsProvisional;
@property(readonly, nonatomic) int callStatus;
- (id)statusDisplayStringWithLabel:(id)arg1;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) NSString *reminderString;
@property(readonly, copy, nonatomic) NSString *callDurationString;
@property(readonly, nonatomic) double callDuration;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCall:(id)arg1;
@property(readonly, copy, nonatomic) NSUUID *localSenderIdentityUUID;
@property(readonly, copy, nonatomic) TUSenderIdentity *localSenderIdentity;
@property(readonly, copy, nonatomic) NSUUID *callGroupUUID;
@property(readonly, copy, nonatomic) NSString *callHistoryIdentifier;
@property(readonly, copy, nonatomic) NSString *callUUID;
@property(readonly, nonatomic, getter=isHostedOnCurrentDevice) _Bool hostedOnCurrentDevice;
@property(readonly, nonatomic) _Bool shouldDisplayLocationIfAvailable;
@property(readonly, nonatomic) TUHandle *handle;
@property(readonly, copy, nonatomic) NSString *callerNameFromNetwork;
@property(readonly, copy, nonatomic) NSString *destinationID;
- (void)ungroup;
- (void)groupWithOtherCall:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *remoteParticipantHandles;
@property(readonly, nonatomic, getter=isConversation) _Bool conversation;
@property(readonly, copy, nonatomic) TUDialRequest *dialRequestForRedial;
@property(readonly, nonatomic) int ttyType;
@property(readonly, nonatomic) long long faceTimeTransportType;
@property(readonly, nonatomic, getter=isTTY) _Bool tty;
@property(readonly, nonatomic, getter=isRTT) _Bool rtt;
@property(readonly, nonatomic, getter=isVoIPCall) _Bool voipCall;
@property(readonly, nonatomic, getter=isWiFiCall) _Bool wiFiCall;
@property(readonly, nonatomic) _Bool needsManualInCallSounds;
- (void)suppressRingtoneDueToRemoteSuppression;
- (void)suppressRingtone;
- (void)resetWantsHoldMusic;
@property(readonly, nonatomic, getter=isConferenced) _Bool conferenced;
@property(readonly, nonatomic, getter=isIncoming) _Bool incoming;
@property(readonly, nonatomic) _Bool isActive;
@property(nonatomic) _Bool isSendingVideo;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic, getter=isConnecting) _Bool connecting;
@property(readonly, nonatomic) _Bool hasSentInvitation;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) _Bool wasDeclined;
@property(readonly, nonatomic) int service;
@property(readonly, nonatomic) TUCallProvider *displayProvider;
@property(readonly, nonatomic) TUCallProvider *backingProvider;
@property(readonly, nonatomic) TUCallProvider *provider;
@property(readonly, copy, nonatomic) NSUUID *uniqueProxyIdentifierUUID;
@property(readonly, nonatomic) NSString *hardPauseDigitsDisplayString;
- (void)sendHardPauseDigits;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (void)resetProvisionalState;
- (void)disconnectWithReason:(int)arg1;
- (void)unhold;
- (void)hold;
- (void)setIsOnHold:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isOnHold;
- (void)answerWithRequest:(id)arg1;
- (void)_handleStatusChange;
@property(readonly, nonatomic) long long outputAudioPowerSpectrumToken;
@property(readonly, nonatomic) long long inputAudioPowerSpectrumToken;
@property(readonly, nonatomic) long long videoStreamToken;
@property(readonly, nonatomic) float localMeterLevel;
@property(readonly, nonatomic) float remoteMeterLevel;
@property(readonly, nonatomic) _Bool wantsStagingArea;
@property(readonly, nonatomic) _Bool shouldSuppressInCallUI;
@property(readonly, nonatomic, getter=isRemoteUplinkMuted) _Bool remoteUplinkMuted;
@property(readonly, nonatomic) _Bool supportsTTYWithVoice;
@property(readonly, nonatomic, getter=isVideoPaused) _Bool videoPaused;
@property(readonly, nonatomic, getter=isVideoDegraded) _Bool videoDegraded;
@property(readonly, nonatomic, getter=isMediaStalled) _Bool mediaStalled;
@property(readonly, nonatomic) _Bool isSendingAudio;
@property(readonly, nonatomic, getter=isBlocked) _Bool blocked;
@property(readonly, nonatomic, getter=isOutgoing) _Bool outgoing;
@property(readonly, nonatomic, getter=isThirdPartyVideo) _Bool thirdPartyVideo;
@property(readonly, nonatomic) _Bool prefersExclusiveAccessToCellularNetwork;
@property(readonly, nonatomic, getter=isUsingBaseband) _Bool usingBaseband;
@property(readonly, nonatomic, getter=isVoicemail) _Bool voicemail;
@property(readonly, nonatomic, getter=isSOS) _Bool sos;
@property(readonly, nonatomic, getter=isEmergency) _Bool emergency;
@property(readonly, nonatomic) __weak TUCallCenter *callCenter;
- (void)updateComparativeCall;
- (id)description;
- (void)dealloc;
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(_Bool)arg2;
- (id)initWithCall:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1;
- (id)init;

@end

