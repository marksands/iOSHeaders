//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPPublicAccountIdentity : IDSMPIdentity
{
}

+ (id)publicAccountIdentitywithDataRepresentation:(id)arg1 error:(id *)arg2;
- (id)dataRepresentationWithError:(id *)arg1;
- (_Bool)verifySignature:(id)arg1 ofData:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSData *publicName;

@end

