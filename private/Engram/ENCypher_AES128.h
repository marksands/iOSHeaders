//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ENCypher.h"

@class NSData, NSString;

@interface ENCypher_AES128 : NSObject <ENCypher>
{
    NSData *_key;
}

+ (id)_decryptData:(id)arg1 withKey:(id)arg2;
+ (id)_encryptData:(id)arg1 withKey:(id)arg2;
+ (id)_randomDataWithLength:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id *)arg5;
- (id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id *)arg3 error:(id *)arg4;
@property(readonly, nonatomic) NSString *identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)initWithRandomKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

