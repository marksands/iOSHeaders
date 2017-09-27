//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface PKPaymentSetupProduct : NSObject <NSSecureCoding>
{
    NSString *_displayName;
    unsigned long long _type;
    NSString *_region;
    NSString *_productIdentifier;
    NSArray *_requiredFields;
    NSArray *_supportedProtocols;
    NSDictionary *_readerModeMetadata;
    NSURL *_termsURL;
    NSArray *_associatedStoreIdentifiers;
    NSURL *_appLaunchURL;
    NSArray *_paymentOptions;
    NSDictionary *_rawDictionary;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)partnerProductsFromArrayOfPartners:(id)arg1 andProducts:(id)arg2;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSDictionary *rawDictionary; // @synthesize rawDictionary=_rawDictionary;
@property(readonly, copy, nonatomic) NSArray *paymentOptions; // @synthesize paymentOptions=_paymentOptions;
@property(copy, nonatomic) NSURL *appLaunchURL; // @synthesize appLaunchURL=_appLaunchURL;
@property(copy, nonatomic) NSArray *associatedStoreIdentifiers; // @synthesize associatedStoreIdentifiers=_associatedStoreIdentifiers;
@property(copy, nonatomic) NSURL *termsURL; // @synthesize termsURL=_termsURL;
@property(copy, nonatomic) NSDictionary *readerModeMetadata; // @synthesize readerModeMetadata=_readerModeMetadata;
@property(copy, nonatomic) NSArray *supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
@property(copy, nonatomic) NSArray *requiredFields; // @synthesize requiredFields=_requiredFields;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)allSupportedProtocols;
@property(readonly, copy, nonatomic) NSString *partnerName;
- (id)initWithProductDictionary:(id)arg1;
- (id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 requiredFields:(id)arg4;
- (id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 readerModeMetadata:(id)arg4 requiredFields:(id)arg5 paymentOptions:(id)arg6 termsURL:(id)arg7;

@end

