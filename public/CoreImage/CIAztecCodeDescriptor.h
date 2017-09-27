//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIAztecCodeDescriptor : CIBarcodeDescriptor
{
    NSData *errorCorrectedPayload;
    _Bool isCompact;
    long long layerCount;
    long long dataCodewordCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)arg1 isCompact:(_Bool)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4;
@property(readonly) long long dataCodewordCount; // @synthesize dataCodewordCount;
@property(readonly) long long layerCount; // @synthesize layerCount;
@property(readonly) _Bool isCompact; // @synthesize isCompact;
@property(readonly) NSData *errorCorrectedPayload; // @synthesize errorCorrectedPayload;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPayload:(id)arg1 isCompact:(_Bool)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4;
- (_Bool)isValid;

@end

