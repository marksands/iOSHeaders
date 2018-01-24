//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDecimalNumber, NSDictionary, NSString, PKPaymentDigitalIssuanceMetadata;

@interface PKPaymentProvisioningMethodMetadata : NSObject
{
    NSString *_productIdentifier;
    NSString *_currency;
    NSDecimalNumber *_depositAmount;
    NSDecimalNumber *_minLoadedBalance;
    NSDecimalNumber *_maxLoadedBalance;
    NSArray *_requiredFields;
    NSDictionary *_readerModeMetadata;
    PKPaymentDigitalIssuanceMetadata *_digitalIssuanceMetadata;
    NSDictionary *_readerModeResources;
}

@property(readonly, copy, nonatomic) NSDictionary *readerModeResources; // @synthesize readerModeResources=_readerModeResources;
@property(readonly, nonatomic) PKPaymentDigitalIssuanceMetadata *digitalIssuanceMetadata; // @synthesize digitalIssuanceMetadata=_digitalIssuanceMetadata;
@property(readonly, copy, nonatomic) NSDictionary *readerModeMetadata; // @synthesize readerModeMetadata=_readerModeMetadata;
@property(readonly, copy, nonatomic) NSArray *requiredFields; // @synthesize requiredFields=_requiredFields;
@property(readonly, copy, nonatomic) NSDecimalNumber *maxLoadedBalance; // @synthesize maxLoadedBalance=_maxLoadedBalance;
@property(readonly, copy, nonatomic) NSDecimalNumber *minLoadedBalance; // @synthesize minLoadedBalance=_minLoadedBalance;
@property(readonly, copy, nonatomic) NSDecimalNumber *depositAmount; // @synthesize depositAmount=_depositAmount;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

