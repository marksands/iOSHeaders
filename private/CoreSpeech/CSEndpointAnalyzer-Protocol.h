//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@protocol CSEndpointAnalyzer <NSObject>
@property(readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property(readonly, nonatomic) double lastEndOfVoiceActivityTime;
@property(nonatomic) double minimumDurationForEndpointer;
@property(nonatomic) double automaticEndpointingSuspensionEndTime;
@property(nonatomic) double startWaitTime;
@property(nonatomic) double delay;
@property(nonatomic) long long endpointStyle;
- (void)preheat;
- (void)reset;

@optional
@property(nonatomic) _Bool saveSamplesSeenInReset;
@property(nonatomic) double endWaitTime;
@property(nonatomic) double interspeechWaitTime;
@property(nonatomic) long long endpointMode;
@property(nonatomic) double bypassSamples;
@end

