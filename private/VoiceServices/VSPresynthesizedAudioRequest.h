//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString;

@interface VSPresynthesizedAudioRequest : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _enqueue;
    unsigned int _audioSessionID;
    NSData *_audioData;
    unsigned long long _requestCreatedTimestamp;
    NSString *_clientBundleIdentifier;
    unsigned long long _pcmDataSize;
    CDUnknownBlockType _stopHandler;
    struct AudioStreamBasicDescription _decoderStreamDescription;
    struct AudioStreamBasicDescription _playerStreamDescription;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CDUnknownBlockType stopHandler; // @synthesize stopHandler=_stopHandler;
@property(nonatomic) unsigned long long pcmDataSize; // @synthesize pcmDataSize=_pcmDataSize;
@property(copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(nonatomic) unsigned long long requestCreatedTimestamp; // @synthesize requestCreatedTimestamp=_requestCreatedTimestamp;
@property(nonatomic) _Bool enqueue; // @synthesize enqueue=_enqueue;
@property(readonly, nonatomic) struct AudioStreamBasicDescription playerStreamDescription; // @synthesize playerStreamDescription=_playerStreamDescription;
@property(readonly, nonatomic) struct AudioStreamBasicDescription decoderStreamDescription; // @synthesize decoderStreamDescription=_decoderStreamDescription;
@property(readonly, copy, nonatomic) NSData *audioData; // @synthesize audioData=_audioData;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isValid;
- (id)initWithAudioData:(id)arg1 decoderStreamDescription:(struct AudioStreamBasicDescription)arg2 playerStreamDescription:(struct AudioStreamBasicDescription)arg3;
- (id)initWithAudioData:(id)arg1 playerStreamDescription:(struct AudioStreamBasicDescription)arg2;
- (id)init;

@end

