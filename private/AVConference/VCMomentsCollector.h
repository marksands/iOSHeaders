//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCMomentsCollectorDelegate-Protocol.h>

@class NSString, VCMoments;

__attribute__((visibility("hidden")))
@interface VCMomentsCollector : NSObject <VCMomentsCollectorDelegate>
{
    long long _streamToken;
    VCMoments *_moments;
}

- (void)stream:(id)arg1 addAudioSampleBuffer:(struct opaqueVCAudioBufferList *)arg2 timestamp:(unsigned int)arg3;
- (void)stream:(id)arg1 addVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

