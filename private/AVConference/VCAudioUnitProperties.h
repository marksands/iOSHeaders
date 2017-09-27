//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCAudioUnitProperties : NSObject
{
    unsigned int _samplesPerFrame;
    struct AudioStreamBasicDescription _format;
    unsigned int _audioUnitType;
    _Bool _allowAudioRecording;
    int _operatingMode;
    unsigned int _vpOperatingMode;
    int _deviceRole;
    _Bool _isFarEndVersionInfoValid;
    struct VoiceIOFarEndVersionInfo _farEndVersionInfo;
    unsigned int _remoteCodecType;
    double _remoteCodecSampleRate;
}

@property(readonly, nonatomic) _Bool isFarEndVersionInfoValid; // @synthesize isFarEndVersionInfoValid=_isFarEndVersionInfoValid;
@property(nonatomic) struct AudioStreamBasicDescription format; // @synthesize format=_format;
@property(nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(nonatomic) unsigned int vpOperatingMode; // @synthesize vpOperatingMode=_vpOperatingMode;
@property(nonatomic) unsigned int remoteCodecType; // @synthesize remoteCodecType=_remoteCodecType;
@property(nonatomic) double remoteCodecSampleRate; // @synthesize remoteCodecSampleRate=_remoteCodecSampleRate;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(nonatomic) _Bool allowAudioRecording; // @synthesize allowAudioRecording=_allowAudioRecording;
@property(nonatomic) unsigned int audioUnitType; // @synthesize audioUnitType=_audioUnitType;
@property(nonatomic) unsigned int samplesPerFrame; // @synthesize samplesPerFrame=_samplesPerFrame;
@property(nonatomic) struct VoiceIOFarEndVersionInfo farEndVersionInfo;
- (id)description;

@end

