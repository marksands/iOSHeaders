//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSMutableDictionary, PKContact, PKPaymentToken, PKShippingMethod;

@interface PKPayment : NSObject <NSSecureCoding>
{
    PKPaymentToken *_token;
    PKContact *_billingContact;
    PKContact *_shippingContact;
    PKShippingMethod *_shippingMethod;
    NSData *_credential;
    NSMutableDictionary *_authKitAuthenticationResults;
    long long _biometricAuthorizationAttempts;
}

+ (_Bool)supportsSecureCoding;
+ (long long)version;
+ (id)paymentWithProtobuf:(id)arg1;
@property(nonatomic) long long biometricAuthorizationAttempts; // @synthesize biometricAuthorizationAttempts=_biometricAuthorizationAttempts;
@property(retain, nonatomic) NSMutableDictionary *authKitAuthenticationResults; // @synthesize authKitAuthenticationResults=_authKitAuthenticationResults;
@property(retain, nonatomic) NSData *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) PKShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property(retain, nonatomic) PKContact *shippingContact; // @synthesize shippingContact=_shippingContact;
@property(retain, nonatomic) PKContact *billingContact; // @synthesize billingContact=_billingContact;
@property(retain, nonatomic) PKPaymentToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) const void *billingAddress;
@property(readonly, nonatomic) const void *shippingAddress;
- (id)initWithToken:(id)arg1;
- (id)protobuf;

@end

