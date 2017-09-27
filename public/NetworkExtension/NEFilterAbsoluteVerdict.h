//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEFilterVerdict.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface NEFilterAbsoluteVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>
{
    unsigned long long _inboundPassOffset;
    unsigned long long _inboundPeekOffset;
    unsigned long long _outboundPassOffset;
    unsigned long long _outboundPeekOffset;
}

+ (_Bool)supportsSecureCoding;
@property unsigned long long outboundPeekOffset; // @synthesize outboundPeekOffset=_outboundPeekOffset;
@property unsigned long long outboundPassOffset; // @synthesize outboundPassOffset=_outboundPassOffset;
@property unsigned long long inboundPeekOffset; // @synthesize inboundPeekOffset=_inboundPeekOffset;
@property unsigned long long inboundPassOffset; // @synthesize inboundPassOffset=_inboundPassOffset;
- (id)description;
- (id)initWithDrop:(_Bool)arg1 inboundPassOffset:(unsigned long long)arg2 inboundPeekOffset:(unsigned long long)arg3 outboundPassOffset:(unsigned long long)arg4 outboundPeekOffset:(unsigned long long)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

