//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASDServiceBroker;

@interface ASDSubscriptionEntitlements : NSObject
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)getSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 forActiveAccountWithResultHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(CDUnknownBlockType)arg1;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;
- (id)_initWithServiceBroker:(id)arg1;
- (id)init;

@end

