//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCStatisticsCollector, NSMutableArray, VCAudioPayload, VCTransportSession;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitterConfig : NSObject
{
    struct tagHANDLE *_rtpHandle;
    struct tagHANDLE *_rtpVideo;
    struct tagHANDLE *_mediaQueue;
    struct tagHANDLE *_afrcHandle;
    void *_controlInfoGenerator;
    AVCStatisticsCollector *_statisticsCollector;
    NSMutableArray *_audioPayloads;
    VCAudioPayload *_chosenAudioPayload;
    VCAudioPayload *_chosenDTXPayload;
    int _chosenRedPayloadType;
    unsigned char _packetsPerBundle;
    _Bool _useAFRC;
    int _bundlingScheme;
    _Bool _isUseCaseWatchContinuity;
    _Bool _allowAudioSwitching;
    _Bool _supportsAdaptation;
    _Bool _redEnabled;
    _Bool _transmitROC;
    int _operatingMode;
    struct AudioStreamBasicDescription _inputFormat;
    struct opaqueRTCReporting *_reportingAgent;
    VCTransportSession *_transportSession;
    _Bool _ignoreSilence;
}

@property(nonatomic) _Bool ignoreSilence; // @synthesize ignoreSilence=_ignoreSilence;
@property(nonatomic) _Bool transmitROC; // @synthesize transmitROC=_transmitROC;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic, getter=isRedEnabled) _Bool redEnabled; // @synthesize redEnabled=_redEnabled;
@property(retain, nonatomic) VCTransportSession *transportSession; // @synthesize transportSession=_transportSession;
@property(nonatomic) struct opaqueRTCReporting *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(nonatomic) struct AudioStreamBasicDescription inputFormat; // @synthesize inputFormat=_inputFormat;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(nonatomic) _Bool supportsAdaptation; // @synthesize supportsAdaptation=_supportsAdaptation;
@property(nonatomic) _Bool allowAudioSwitching; // @synthesize allowAudioSwitching=_allowAudioSwitching;
@property(nonatomic) _Bool isUseCaseWatchContinuity; // @synthesize isUseCaseWatchContinuity=_isUseCaseWatchContinuity;
@property(nonatomic) int bundlingScheme; // @synthesize bundlingScheme=_bundlingScheme;
@property(nonatomic) _Bool useAFRC; // @synthesize useAFRC=_useAFRC;
@property(nonatomic) unsigned char packetsPerBundle; // @synthesize packetsPerBundle=_packetsPerBundle;
@property(nonatomic) int chosenRedPayloadType; // @synthesize chosenRedPayloadType=_chosenRedPayloadType;
@property(retain, nonatomic) VCAudioPayload *chosenDTXPayload; // @synthesize chosenDTXPayload=_chosenDTXPayload;
@property(retain, nonatomic) VCAudioPayload *chosenAudioPayload; // @synthesize chosenAudioPayload=_chosenAudioPayload;
@property(retain, nonatomic) NSMutableArray *audioPayloads; // @synthesize audioPayloads=_audioPayloads;
@property(nonatomic) struct tagHANDLE *afrcHandle; // @synthesize afrcHandle=_afrcHandle;
@property(nonatomic) struct tagHANDLE *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(nonatomic) void *controlInfoGenerator; // @synthesize controlInfoGenerator=_controlInfoGenerator;
@property(nonatomic) struct tagHANDLE *rtpVideo; // @synthesize rtpVideo=_rtpVideo;
@property(nonatomic) struct tagHANDLE *rtpHandle; // @synthesize rtpHandle=_rtpHandle;
- (id)description;
- (void)dealloc;

@end

