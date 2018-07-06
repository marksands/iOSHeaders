//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSMescalBagContract.h"
#import "AMSMetricsBagContract.h"

@class AMSBag, AMSBagValue, NSString;

__attribute__((visibility("hidden")))
@interface AMSInternalBag : NSObject <AMSMetricsBagContract, AMSMescalBagContract>
{
    AMSBag *_bag;
}

+ (id)_keySet;
@property(retain, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
@property(readonly, nonatomic) AMSBagValue *trustedDomains;
@property(readonly, nonatomic) id <AMSMetricsBagContract> metricsContract;
@property(readonly, nonatomic) id <AMSMescalBagContract> mescalContract;
@property(readonly, nonatomic) AMSBagValue *mescalSignSapResponses;
@property(readonly, nonatomic) AMSBagValue *mescalSignSapRequests;
@property(readonly, nonatomic) AMSBagValue *mescalSignedActions;
@property(readonly, nonatomic) AMSBagValue *mescalSetupURL;
@property(readonly, nonatomic) AMSBagValue *mescalCertificateURL;
@property(readonly, nonatomic) AMSBagValue *metricsURL;
@property(readonly, nonatomic) AMSBagValue *metricsDictionary;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property(readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property(readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) AMSBagValue *guidRegexes;
@property(readonly, nonatomic) AMSBagValue *guidSchemes;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) AMSBagValue *mescalPrimingURL;
@property(readonly, nonatomic) AMSBagValue *metricsUrl;
@property(readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property(readonly) Class superclass;

@end

