//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate.h"

@class ISURLBag, NSNumber, NSString, SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate>
{
    SSURLBagContext *_context;
    ISURLBag *_outputBag;
    NSNumber *_accountDSID;
}

+ (id)_networkSynchronyQueue;
+ (id)_networkCounters;
+ (id)_executedNetworkRequests;
+ (void)_addStoreFrontHeaderSuffix:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)storeFrontHeaderSuffixForBundleIdentifier:(id)arg1;
+ (id)storeFrontHeaderSuffix;
+ (void)incrementNetworkCounterForBagContext:(id)arg1;
+ (void)decrementNetworkCounterForBagContext:(id)arg1;
@property(retain, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
@property(readonly) SSURLBagContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (_Bool)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (void)_setOutputURLBag:(id)arg1;
- (void)_sendPingsForURLBag:(id)arg1;
- (void)_postBagDidLoadNotificationWithURLBag:(id)arg1;
- (void)_analyzeBagForActiveSystemApps:(id)arg1;
- (void)_addHeadersToRequestProperties:(id)arg1;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (_Bool)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2;
- (id)uniqueKey;
- (void)run;
@property(readonly) ISURLBag *URLBag;
- (id)initWithBagContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

