//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

#import "NSSecureCoding.h"

@interface IDSMPPublicLegacyIdentity : IDSMPIdentity <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)identityWithData:(id)arg1 error:(id *)arg2;
- (id)dataRepresentationWithError:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)signAndProtectData:(id)arg1 withSigner:(id)arg2 error:(id *)arg3;

@end

