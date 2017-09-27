//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface CSAudioConverter : NSObject
{
    struct OpaqueAudioConverter *_opusConverter;
    NSMutableData *_bufferedLPCM;
    unsigned int _recordBasePacketsPerSecond;
    struct AudioStreamBasicDescription _opusOutASBD;
    unsigned int _convertPacketCount;
    unsigned int _convertAudioCapacity;
    unsigned long long _lastTimestamp;
    id <CSAudioConverterDelegate> _delegate;
}

+ (id)narrowBandOpusConverter;
+ (id)opusConverter;
@property __weak id <CSAudioConverterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_configureAudioConverter:(struct OpaqueAudioConverter *)arg1;
- (void)reset;
- (void)_convertBufferedLPCM:(id)arg1 allowPartial:(_Bool)arg2 timestamp:(unsigned long long)arg3;
- (void)flush;
- (void)addSamples:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;

@end

