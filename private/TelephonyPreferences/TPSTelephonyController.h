//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreTelephonyClientDelegate.h"

@class CoreTelephonyClient, NSDictionary, NSMapTable, NSObject<OS_dispatch_queue>, NSOrderedSet, NSString;

@interface TPSTelephonyController : NSObject <CoreTelephonyClientDelegate>
{
    struct os_unfair_lock_s _accessorLock;
    struct os_unfair_lock_s _delegateLock;
    NSOrderedSet *_subscriptions;
    NSDictionary *_systemCapabilities;
    CoreTelephonyClient *_telephonyClient;
    NSMapTable *_delegateToQueue;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(nonatomic) struct os_unfair_lock_s delegateLock; // @synthesize delegateLock=_delegateLock;
@property(nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(readonly, nonatomic) CoreTelephonyClient *telephonyClient; // @synthesize telephonyClient=_telephonyClient;
- (void).cxx_destruct;
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;
- (void)subscriptionInfoDidChange;
- (id)systemCapabilitiesForSubscriptionContext:(id)arg1 error:(id *)arg2;
- (id)systemCapabilitiesForSubscriptionContext:(id)arg1;
- (_Bool)supportsSystemCapabilityCallWaitingForSubscriptionContext:(id)arg1;
- (_Bool)supportsSystemCapabilityCallForwardingForSubscriptionContext:(id)arg1;
- (_Bool)supportsSystemCapabilityCallerIDForSubscriptionContext:(id)arg1;
- (_Bool)supportsSystemCapabilityWithName:(id)arg1 subscriptionContext:(id)arg2;
- (id)fetchSystemCapabilitiesForSubscriptions:(id)arg1;
- (id)fetchSubscriptions;
- (_Bool)supportsCellularNetworkSelectionForSubscriptionContext:(id)arg1;
- (void)performAtomicDelegateBlock:(CDUnknownBlockType)arg1;
- (void)performAtomicAccessorBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
@property(copy, nonatomic) NSDictionary *systemCapabilities; // @synthesize systemCapabilities=_systemCapabilities;
@property(copy, nonatomic) NSOrderedSet *subscriptions; // @synthesize subscriptions=_subscriptions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

