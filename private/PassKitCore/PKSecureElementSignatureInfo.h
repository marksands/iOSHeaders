//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, PKSecureElementCertificateSet;

@interface PKSecureElementSignatureInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_sequenceCounter;
    NSString *_platformIdentifier;
    PKSecureElementCertificateSet *_certificates;
    unsigned long long _certificateVersion;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long certificateVersion; // @synthesize certificateVersion=_certificateVersion;
@property(readonly, copy, nonatomic) PKSecureElementCertificateSet *certificates; // @synthesize certificates=_certificates;
@property(readonly, copy, nonatomic) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(readonly, copy, nonatomic) NSString *sequenceCounter; // @synthesize sequenceCounter=_sequenceCounter;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecureElementCertificateSet:(id)arg1 sequenceCounter:(id)arg2 platformIdentifier:(id)arg3 certificateVersion:(unsigned long long)arg4;

@end

