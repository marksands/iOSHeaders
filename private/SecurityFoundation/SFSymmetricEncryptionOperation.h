//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_SFEncryptionOperation.h"

@class NSString, _SFSymmetricKeySpecifier;

@interface SFSymmetricEncryptionOperation : NSObject <_SFEncryptionOperation>
{
    id _symmetricEncryptionOperationInternal;
}

+ (_Bool)supportsSecureCoding;
+ (id)_defaultEncryptionOperation;
+ (long long)_defaultEncryptionMode;
- (void).cxx_destruct;
@property(copy, nonatomic) _SFSymmetricKeySpecifier *encryptionKeySpecifier;
@property(nonatomic) long long mode;
- (id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id *)arg4;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2;
- (id)initWithKeySpecifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

