//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class IDSAccountKeyHistory, IDSEndpointCapabilities, IDSMPPublicLegacyIdentity, IDSPublicDeviceIdentity, IDSURI, NSData, NSDate, NSDictionary, NSString;

@interface IDSEndpoint : NSObject <NSSecureCoding>
{
    IDSURI *_URI;
    NSDictionary *_clientData;
    NSData *_pushToken;
    NSData *_sessionToken;
    NSDate *_expireDate;
    NSDate *_refreshDate;
    IDSAccountKeyHistory *_accountKeyHistory;
    NSString *_anonymizedSenderID;
    _Bool _verifiedBusiness;
    IDSMPPublicLegacyIdentity *_publicMessageProtectionIdentity;
    IDSPublicDeviceIdentity *_devicePublicIdentity;
    IDSEndpointCapabilities *_capabilities;
}

+ (_Bool)supportsSecureCoding;
+ (id)publicDeviceIdentityFromClientData:(id)arg1 accountPublicIdentity:(id)arg2;
+ (id)publicAccountIdentityFromKeyHistory:(id)arg1;
@property(readonly, retain, nonatomic) IDSEndpointCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, retain, nonatomic) IDSPublicDeviceIdentity *devicePublicIdentity; // @synthesize devicePublicIdentity=_devicePublicIdentity;
@property(readonly, retain, nonatomic) IDSMPPublicLegacyIdentity *publicMessageProtectionIdentity; // @synthesize publicMessageProtectionIdentity=_publicMessageProtectionIdentity;
@property(readonly, nonatomic) _Bool verifiedBusiness; // @synthesize verifiedBusiness=_verifiedBusiness;
@property(readonly, nonatomic) NSString *anonymizedSenderID; // @synthesize anonymizedSenderID=_anonymizedSenderID;
@property(readonly, nonatomic) IDSAccountKeyHistory *accountKeyHistory; // @synthesize accountKeyHistory=_accountKeyHistory;
@property(readonly, nonatomic) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(readonly, nonatomic) NSDate *expireDate; // @synthesize expireDate=_expireDate;
@property(readonly, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(readonly, retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(readonly, nonatomic) NSDictionary *clientData; // @synthesize clientData=_clientData;
@property(readonly, retain, nonatomic) IDSURI *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6 accountKeyHistory:(id)arg7 anonymizedSenderID:(id)arg8 verifiedBusiness:(_Bool)arg9 serializedPublicMessageProtectionIdentity:(id)arg10;
- (id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6 accountKeyHistory:(id)arg7 anonymizedSenderID:(id)arg8 verifiedBusiness:(_Bool)arg9;
- (id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6 accountKeyHistory:(id)arg7;

@end

