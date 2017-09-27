//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface HMCameraAudioCodec : NSObject <NSSecureCoding>
{
    unsigned long long _audioCodec;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isValid:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long audioCodec; // @synthesize audioCodec=_audioCodec;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAudioCodecType:(unsigned long long)arg1;

@end

