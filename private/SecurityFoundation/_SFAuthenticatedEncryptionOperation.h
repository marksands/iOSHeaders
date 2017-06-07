//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/_SFEncryptionOperation-Protocol.h>

@class NSString, _SFAESKeySpecifier;

@interface _SFAuthenticatedEncryptionOperation : NSObject <_SFEncryptionOperation>
{
    id _authenticatedEncryptionOperationInternal;
}

+ (_Bool)supportsSecureCoding;
+ (id)_defaultEncryptionOperation;
+ (long long)_defaultAuthenticationMode;
- (void).cxx_destruct;
@property(nonatomic) long long authenticationCodeLength;
@property(nonatomic) long long authenticationMode;
@property(copy, nonatomic) _SFAESKeySpecifier *encryptionKeySpecifier;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id *)arg4;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 authenticationMode:(long long)arg2;
- (id)initWithKeySpecifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

