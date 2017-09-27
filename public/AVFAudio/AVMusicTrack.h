//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioUnit;

@interface AVMusicTrack : NSObject
{
    void *_impl;
}

@property(readonly, nonatomic) unsigned long long timeResolution;
@property(nonatomic) double lengthInSeconds;
@property(nonatomic) double lengthInBeats;
- (void)setUsesAutomatedParameters:(_Bool)arg1;
- (_Bool)usesAutomatedParameters;
@property(nonatomic, getter=isSoloed) _Bool soloed;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) double offsetTime;
@property(nonatomic) long long numberOfLoops;
@property(nonatomic, getter=isLoopingEnabled) _Bool loopingEnabled;
@property(nonatomic) struct _AVBeatRange loopRange;
@property(nonatomic) unsigned int destinationMIDIEndpoint;
@property(retain, nonatomic) AVAudioUnit *destinationAudioUnit;
- (struct OpaqueMusicTrack *)track;
- (unsigned long long)index;
- (void)dealloc;
- (id)initWithImpl:(struct MusicTrackImpl *)arg1;

@end

