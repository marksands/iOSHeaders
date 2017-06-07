//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSString, PKPaymentApplication;

@interface PKRemotePaymentInstrument : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _supportsAutomaticSelection;
    NSString *_passIdentifier;
    NSData *_manifestHash;
    NSString *_displayName;
    NSString *_primaryAccountNumberSuffix;
    NSString *_primaryAccountIdentifier;
    NSString *_issuerCountryCode;
    NSArray *_paymentApplications;
    PKPaymentApplication *_primaryPaymentApplication;
    NSDate *_ingestedDate;
    NSArray *_associatedWebDomains;
}

+ (_Bool)supportsSecureCoding;
+ (id)sortDescriptorForDefaultPaymentInstrument:(id)arg1 supportedNetworks:(id)arg2 merchantCapabilities:(unsigned long long)arg3 webService:(id)arg4;
+ (id)remotePaymentInstrumentWithProtobuf:(id)arg1;
+ (id)thumbnailCachePathForManifestHash:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) NSArray *associatedWebDomains; // @synthesize associatedWebDomains=_associatedWebDomains;
@property(nonatomic) _Bool supportsAutomaticSelection; // @synthesize supportsAutomaticSelection=_supportsAutomaticSelection;
@property(retain, nonatomic) NSDate *ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property(retain, nonatomic) PKPaymentApplication *primaryPaymentApplication; // @synthesize primaryPaymentApplication=_primaryPaymentApplication;
@property(retain, nonatomic) NSArray *paymentApplications; // @synthesize paymentApplications=_paymentApplications;
@property(copy, nonatomic) NSString *issuerCountryCode; // @synthesize issuerCountryCode=_issuerCountryCode;
@property(copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
@property(copy, nonatomic) NSString *primaryAccountNumberSuffix; // @synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(copy, nonatomic) NSString *passIdentifier; // @synthesize passIdentifier=_passIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqualToRemotePaymentInstrument:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentPass:(id)arg1;
- (id)protobuf;

@end

