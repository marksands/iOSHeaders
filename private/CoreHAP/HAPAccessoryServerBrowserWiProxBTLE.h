//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@interface HAPAccessoryServerBrowserWiProxBTLE : HMFObject
{
}

- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
- (void)retrieveStateForTrackedAccessoryWithIdentifier:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)resetLastSeenForTrackedAccessories:(id)arg1;
- (void)probeReachabilityForTrackedAccessories;
- (void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (void)stopBrowsingForHAPBLEAccessories;
- (void)startBrowsingForHAPBLEAccessories;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end

