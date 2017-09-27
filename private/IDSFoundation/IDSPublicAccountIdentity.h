//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ENAccountPublicKey.h"

@class IDSMPPublicAccountIdentity, IDSMPPublicServiceIdentityAdmin, IDSMPPublicServiceIdentitySigning, NSString;

@interface IDSPublicAccountIdentity : NSObject <ENAccountPublicKey>
{
    IDSMPPublicAccountIdentity *_accountIdentity;
    IDSMPPublicServiceIdentityAdmin *_adminIdentity;
    IDSMPPublicServiceIdentitySigning *_signingIdentity;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) IDSMPPublicServiceIdentitySigning *signingIdentity; // @synthesize signingIdentity=_signingIdentity;
@property(readonly, nonatomic) IDSMPPublicServiceIdentityAdmin *adminIdentity; // @synthesize adminIdentity=_adminIdentity;
@property(readonly, nonatomic) IDSMPPublicAccountIdentity *accountIdentity; // @synthesize accountIdentity=_accountIdentity;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountIdentity:(id)arg1 adminIdentity:(id)arg2 signingIdentity:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

