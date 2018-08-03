//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FTSelectedPNRSubscription : NSObject
{
}

+ (id)sharedInstance;
+ (_Bool)isPhoneNumber:(id)arg1 equivalentToExistingPhoneNumber:(id)arg2;
- (_Bool)_legacy_isPhoneNumberEmergencyNumber:(id)arg1;
- (_Bool)isPhoneNumberEmergencyNumber:(id)arg1;
- (id)_legacy_carrierBundleValueForKey:(id)arg1 ofType:(Class)arg2;
- (id)selectedPhoneNumberRegistrationRegistrationCarrierBundleValueForKey:(id)arg1 ofType:(Class)arg2 withFallbackValue:(id)arg3;
- (id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)arg1 error:(id *)arg2;
- (id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)arg1 activeContexts:(id)arg2 fallbackProhibited:(_Bool)arg3 persistUpdate:(_Bool)arg4 error:(id *)arg5;
- (id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)arg1;
- (id)_subscriptionFromAvailableSubscriptions:(id)arg1 matchingSelectedLabel:(id)arg2;
- (id)_reevaluateCachedActiveSubscriptionWithError:(id *)arg1;
- (id)_reevaluateCachedSubscriptionWithError:(id *)arg1;
- (id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)arg1;
- (id)selectedRegistrationPhoneNumberWithError:(id *)arg1;
- (_Bool)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)arg1;
- (void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
- (id)selectedPhoneNumberRegistrationSubscriptionWithError:(id *)arg1;
- (void)invalidateCache;
- (void)_protected_invalidateCache;
- (void)_distributed_invalidateCache;
- (id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(_Bool)arg1;
- (void)activeSubscriptionsDidChange;
- (void)phoneNumberAvailable:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (void)subscriptionInfoDidChange;
- (void)dealloc;
- (id)init;

@end

