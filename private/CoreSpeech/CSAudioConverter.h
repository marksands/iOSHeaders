//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol CSAudioConverterDelegate, OS_dispatch_queue;

@interface CSAudioConverter : NSObject
{
    struct OpaqueAudioConverter *_opusConverter;
    NSMutableData *_bufferedLPCM;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _recordBasePacketsPerSecond;
    struct AudioStreamBasicDescription _opusOutASBD;
    unsigned int _convertPacketCount;
    unsigned int _convertAudioCapacity;
    unsigned long long _lastTimestamp;
    id <CSAudioConverterDelegate> _delegate;
}

@property __weak id <CSAudioConverterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_configureAudioConverter:(struct OpaqueAudioConverter *)arg1;
- (void)reset;
- (void)_convertBufferedLPCM:(id)arg1 allowPartial:(_Bool)arg2 timestamp:(unsigned long long)arg3;
- (void)flush;
- (void)addSamples:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end

