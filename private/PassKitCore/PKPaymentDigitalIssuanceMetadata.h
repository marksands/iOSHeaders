//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface PKPaymentDigitalIssuanceMetadata : NSObject
{
    NSString *_serviceProviderIdentifier;
    NSArray *_serviceProviderSupportedNetworks;
    NSArray *_serviceProviderCapabilities;
    NSDictionary *_serviceProviderDict;
    NSString *_action;
    NSString *_merchantID;
}

@property(readonly, copy, nonatomic) NSString *merchantID; // @synthesize merchantID=_merchantID;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSDictionary *serviceProviderDict; // @synthesize serviceProviderDict=_serviceProviderDict;
@property(readonly, copy, nonatomic) NSArray *serviceProviderCapabilities; // @synthesize serviceProviderCapabilities=_serviceProviderCapabilities;
@property(readonly, copy, nonatomic) NSArray *serviceProviderSupportedNetworks; // @synthesize serviceProviderSupportedNetworks=_serviceProviderSupportedNetworks;
@property(readonly, copy, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

