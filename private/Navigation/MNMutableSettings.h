//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/MNSettings.h>

@class NSString;

@interface MNMutableSettings : MNSettings
{
}

+ (id)settingsWithSettings:(id)arg1;
@property(nonatomic) _Bool shouldUseGuidanceEventManager; // @dynamic shouldUseGuidanceEventManager;
@property(nonatomic) _Bool isTracePlaybackCameraTestMode; // @dynamic isTracePlaybackCameraTestMode;
@property(nonatomic) _Bool shouldLoadETAUpdatesFromTrace; // @dynamic shouldLoadETAUpdatesFromTrace;
@property(nonatomic) _Bool shouldLoadReroutesFromTrace; // @dynamic shouldLoadReroutesFromTrace;
@property(nonatomic) _Bool shouldLoadInitialRouteFromTrace; // @dynamic shouldLoadInitialRouteFromTrace;
@property(nonatomic) double initialTraceSpeedMultiplier; // @dynamic initialTraceSpeedMultiplier;
@property(nonatomic) double alightSignalTimeBuffer; // @dynamic alightSignalTimeBuffer;
@property(nonatomic) long long fakeTrafficIncidentAlert; // @dynamic fakeTrafficIncidentAlert;
@property(nonatomic) double backgroundTimeWindow; // @dynamic backgroundTimeWindow;
@property(nonatomic) double initialRequestDelay; // @dynamic initialRequestDelay;
@property(nonatomic) double etaRequestInterval; // @dynamic etaRequestInterval;
@property(retain, nonatomic) NSString *voiceLanguage; // @dynamic voiceLanguage;
@property(nonatomic) _Bool beepBeforeInstruction; // @dynamic beepBeforeInstruction;
@property(nonatomic) _Bool walkingVoiceGuidance; // @dynamic walkingVoiceGuidance;
@property(nonatomic) _Bool drivingVoiceGuidance; // @dynamic drivingVoiceGuidance;
@property(nonatomic) unsigned long long maxAlternateRoutesCount; // @dynamic maxAlternateRoutesCount;
@property(nonatomic) _Bool speechEnabled; // @dynamic speechEnabled;
@property(nonatomic) _Bool muteSpeechOverride; // @dynamic muteSpeechOverride;
@property(nonatomic) _Bool pauseSpokenAudio; // @dynamic pauseSpokenAudio;
@property(nonatomic) unsigned long long distanceUnits; // @dynamic distanceUnits;
@property(nonatomic) unsigned long long voiceVolume; // @dynamic voiceVolume;

@end

