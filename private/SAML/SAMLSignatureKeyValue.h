//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class SAMLDSAKeyValue, SAMLRSAKeyValue;

__attribute__((visibility("hidden")))
@interface SAMLSignatureKeyValue : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
@property(readonly, nonatomic) SAMLRSAKeyValue *rsaKeyValue;
@property(readonly, nonatomic) SAMLDSAKeyValue *dsaKeyValue;

@end

