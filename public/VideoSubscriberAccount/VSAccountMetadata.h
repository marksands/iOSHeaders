//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDate, NSString, VSAccountProviderResponse;

@interface VSAccountMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_accountProviderIdentifier;
    NSDate *_authenticationExpirationDate;
    NSData *_verificationData;
    VSAccountProviderResponse *_accountProviderResponse;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) VSAccountProviderResponse *accountProviderResponse; // @synthesize accountProviderResponse=_accountProviderResponse;
@property(copy, nonatomic) NSData *verificationData; // @synthesize verificationData=_verificationData;
@property(copy, nonatomic) NSDate *authenticationExpirationDate; // @synthesize authenticationExpirationDate=_authenticationExpirationDate;
@property(copy, nonatomic) NSString *accountProviderIdentifier; // @synthesize accountProviderIdentifier=_accountProviderIdentifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *SAMLAttributeQueryResponse;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

