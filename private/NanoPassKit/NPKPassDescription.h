//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSData, NSDate, NSDecimalNumber, NSNumber, NSSet, NSString, PKColor, PKImage, PKNFCPayload, PKPaymentApplication, PKTransitAppletState;

@interface NPKPassDescription : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _hasStoredValue;
    _Bool _privateLabel;
    _Bool _cobranded;
    _Bool _deletePending;
    _Bool _hasUserSelectableContactlessPaymentApplications;
    _Bool _hasAssociatedPeerPaymentAccount;
    _Bool _lazyLoadEncodedImages;
    PKImage *_logoImage;
    PKImage *_backgroundImage;
    unsigned long long _expressPassTypesMask;
    NSData *_backgroundImageEncoded;
    NSData *_logoImageEncoded;
    NSString *_uniqueID;
    NSNumber *_groupID;
    NSString *_passTypeIdentifier;
    NSData *_manifestHash;
    long long _style;
    NSDate *_relevantDate;
    NSDate *_ingestionDate;
    PKNFCPayload *_nfcPayload;
    NSData *_completeHash;
    unsigned long long _settings;
    NSString *_logoText;
    PKColor *_backgroundColor;
    PKColor *_foregroundColor;
    PKColor *_labelColor;
    NSString *_localizedDescription;
    NSSet *_devicePaymentApplications;
    PKPaymentApplication *_devicePrimaryPaymentApplication;
    PKPaymentApplication *_devicePrimaryContactlessPaymentApplication;
    PKPaymentApplication *_devicePrimaryInAppPaymentApplication;
    PKPaymentApplication *_preferredPaymentApplication;
    long long _effectivePaymentApplicationState;
    NSString *_issuerCountryCode;
    NSArray *_availableActions;
    NSString *_organizationName;
    PKTransitAppletState *_transitAppletState;
    NSArray *_frontFieldBuckets;
    NSArray *_backFieldBuckets;
    NSDecimalNumber *_lastAddValueAmount;
    NSDate *_pendingAddValueDate;
}

+ (void)setCachingEnabled:(_Bool)arg1;
+ (_Bool)isCachingEnabled;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool lazyLoadEncodedImages; // @synthesize lazyLoadEncodedImages=_lazyLoadEncodedImages;
@property(nonatomic) _Bool hasAssociatedPeerPaymentAccount; // @synthesize hasAssociatedPeerPaymentAccount=_hasAssociatedPeerPaymentAccount;
@property(retain, nonatomic) NSDate *pendingAddValueDate; // @synthesize pendingAddValueDate=_pendingAddValueDate;
@property(retain, nonatomic) NSDecimalNumber *lastAddValueAmount; // @synthesize lastAddValueAmount=_lastAddValueAmount;
@property(retain, nonatomic) NSArray *backFieldBuckets; // @synthesize backFieldBuckets=_backFieldBuckets;
@property(retain, nonatomic) NSArray *frontFieldBuckets; // @synthesize frontFieldBuckets=_frontFieldBuckets;
@property(retain, nonatomic) PKTransitAppletState *transitAppletState; // @synthesize transitAppletState=_transitAppletState;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSArray *availableActions; // @synthesize availableActions=_availableActions;
@property(retain, nonatomic) NSString *issuerCountryCode; // @synthesize issuerCountryCode=_issuerCountryCode;
@property(nonatomic) _Bool hasUserSelectableContactlessPaymentApplications; // @synthesize hasUserSelectableContactlessPaymentApplications=_hasUserSelectableContactlessPaymentApplications;
@property(nonatomic) _Bool deletePending; // @synthesize deletePending=_deletePending;
@property(nonatomic, getter=isCobranded) _Bool cobranded; // @synthesize cobranded=_cobranded;
@property(nonatomic, getter=isPrivateLabel) _Bool privateLabel; // @synthesize privateLabel=_privateLabel;
@property(nonatomic) long long effectivePaymentApplicationState; // @synthesize effectivePaymentApplicationState=_effectivePaymentApplicationState;
@property(retain, nonatomic) PKPaymentApplication *preferredPaymentApplication; // @synthesize preferredPaymentApplication=_preferredPaymentApplication;
@property(retain, nonatomic) PKPaymentApplication *devicePrimaryInAppPaymentApplication; // @synthesize devicePrimaryInAppPaymentApplication=_devicePrimaryInAppPaymentApplication;
@property(retain, nonatomic) PKPaymentApplication *devicePrimaryContactlessPaymentApplication; // @synthesize devicePrimaryContactlessPaymentApplication=_devicePrimaryContactlessPaymentApplication;
@property(retain, nonatomic) PKPaymentApplication *devicePrimaryPaymentApplication; // @synthesize devicePrimaryPaymentApplication=_devicePrimaryPaymentApplication;
@property(retain, nonatomic) NSSet *devicePaymentApplications; // @synthesize devicePaymentApplications=_devicePaymentApplications;
@property(retain, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(retain, nonatomic) PKColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) PKColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) PKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(nonatomic) unsigned long long settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSData *completeHash; // @synthesize completeHash=_completeHash;
@property(nonatomic) _Bool hasStoredValue; // @synthesize hasStoredValue=_hasStoredValue;
@property(retain, nonatomic) PKNFCPayload *nfcPayload; // @synthesize nfcPayload=_nfcPayload;
@property(retain, nonatomic) NSDate *ingestionDate; // @synthesize ingestionDate=_ingestionDate;
@property(retain, nonatomic) NSDate *relevantDate; // @synthesize relevantDate=_relevantDate;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(retain, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(retain, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) unsigned long long expressPassTypesMask; // @synthesize expressPassTypesMask=_expressPassTypesMask;
- (void).cxx_destruct;
- (_Bool)hasValidNFCPayload;
- (_Bool)supportsExpressPassType:(long long)arg1;
- (_Bool)isEnroute;
- (_Bool)isAddValuePending;
- (id)fieldForKey:(id)arg1;
- (id)transitProperties;
@property(readonly, nonatomic) long long effectiveContactlessPaymentApplicationState;
- (_Bool)supportsInAppPaymentOnNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 paymentApplicationStates:(id)arg4;
- (_Bool)supportsInAppPaymentOnNetworks:(id)arg1 issuerCountryCodes:(id)arg2;
@property(retain, nonatomic) PKImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) PKImage *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) NSData *backgroundImageEncoded; // @synthesize backgroundImageEncoded=_backgroundImageEncoded;
@property(retain, nonatomic) NSData *logoImageEncoded; // @synthesize logoImageEncoded=_logoImageEncoded;
- (void)encodeObject:(id)arg1 asDataInCoder:(id)arg2 withKey:(id)arg3;
- (id)encodeAsData:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPass:(id)arg1 lazyLoadEncodedImages:(_Bool)arg2;
- (id)initWithPass:(id)arg1;

@end

