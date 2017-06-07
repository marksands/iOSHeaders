//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface PKSecureElementCertificateSet : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _supportsLegacyFormats;
    NSDictionary *_dictionary;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool supportsLegacyFormats; // @synthesize supportsLegacyFormats=_supportsLegacyFormats;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)certificateOfType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRSACertificate:(id)arg1 ECDSACertificate:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

