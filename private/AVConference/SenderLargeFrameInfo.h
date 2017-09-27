//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SenderLargeFrameInfo : NSObject
{
    double probingInterval;
    double startTime;
    double lastProbingSequenceTimeExpect;
    double lastProbingSequenceTimeActual;
    unsigned int largeFrameSizeRequested;
    unsigned int largeFrameSizeAtCurrentBandwidth;
    unsigned int probingSequencePacketSize;
    unsigned int probingSequencePacketCount;
    int probingSequenceCount;
    int totalLargeFrameWaste;
    _Bool isLastFrameProbingSequence;
    _Bool isLargeFrameRequestDisabled;
}

@property(nonatomic) _Bool isLargeFrameRequestDisabled; // @synthesize isLargeFrameRequestDisabled;
@property(nonatomic) _Bool isLastFrameProbingSequence; // @synthesize isLastFrameProbingSequence;
@property(nonatomic) int totalLargeFrameWaste; // @synthesize totalLargeFrameWaste;
@property(nonatomic) int probingSequenceCount; // @synthesize probingSequenceCount;
@property(nonatomic) unsigned int probingSequencePacketCount; // @synthesize probingSequencePacketCount;
@property(nonatomic) unsigned int probingSequencePacketSize; // @synthesize probingSequencePacketSize;
@property(nonatomic) unsigned int largeFrameSizeAtCurrentBandwidth; // @synthesize largeFrameSizeAtCurrentBandwidth;
@property(nonatomic) unsigned int largeFrameSizeRequested; // @synthesize largeFrameSizeRequested;
@property(nonatomic) double lastProbingSequenceTimeActual; // @synthesize lastProbingSequenceTimeActual;
@property(nonatomic) double lastProbingSequenceTimeExpect; // @synthesize lastProbingSequenceTimeExpect;
@property(nonatomic) double startTime; // @synthesize startTime;

@end

