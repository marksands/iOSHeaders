//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/_SFEncryptionOperation-Protocol.h>

@class NSString, SFRSAEncryptionOperation, SFSymmetricEncryptionOperation, _SFKeySpecifier;

@interface SFRSA_WrappedKeyEncryptionOperation : NSObject <_SFEncryptionOperation, NSCopying>
{
    id _wrappedKeyEncryptionOperationInternal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) SFSymmetricEncryptionOperation *sessionEncryptionOperation;
@property(copy, nonatomic) SFRSAEncryptionOperation *keyWrappingOperation;
@property(readonly, copy, nonatomic) _SFKeySpecifier *encryptionKeySpecifier;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyWrappingOperation:(id)arg1 sessionEncryptionOperation:(id)arg2;
- (id)initWithKeyWrappingOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

