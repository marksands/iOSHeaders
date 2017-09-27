//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface CSAudioChunk : NSObject
{
    NSData *_data;
    unsigned long long _numChannels;
    unsigned long long _numSamples;
    unsigned long long _sampleByteDepth;
    unsigned long long _startSampleCount;
    unsigned long long _hostTime;
}

@property(readonly, nonatomic) unsigned long long hostTime; // @synthesize hostTime=_hostTime;
@property(readonly, nonatomic) unsigned long long startSampleCount; // @synthesize startSampleCount=_startSampleCount;
@property(readonly, nonatomic) unsigned long long sampleByteDepth; // @synthesize sampleByteDepth=_sampleByteDepth;
@property(readonly, nonatomic) unsigned long long numSamples; // @synthesize numSamples=_numSamples;
@property(readonly, nonatomic) unsigned long long numChannels; // @synthesize numChannels=_numChannels;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 forChannel:(unsigned long long)arg3;
- (id)dataForChannel:(unsigned long long)arg1;
- (id)initWithData:(id)arg1 numChannels:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 sampleByteDepth:(unsigned long long)arg4 startSampleCount:(unsigned long long)arg5 hostTime:(unsigned long long)arg6;
- (id)_fidesRecordInfo;

@end

