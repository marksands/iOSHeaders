//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SFDeviceDiscovery;

@interface HMDSymptomDiscoveryManager : HMFObject <HMFLogging>
{
    SFDeviceDiscovery *_sfDiscovery;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMapTable *_registeredAccessories;
    NSMapTable *_activeSFDevices;
    NSMutableDictionary *_activeRepairSessions;
}

+ (id)logCategory;
+ (id)sharedDiscoveryManager;
@property(retain, nonatomic) NSMutableDictionary *activeRepairSessions; // @synthesize activeRepairSessions=_activeRepairSessions;
@property(retain, nonatomic) NSMapTable *activeSFDevices; // @synthesize activeSFDevices=_activeSFDevices;
@property(retain, nonatomic) NSMapTable *registeredAccessories; // @synthesize registeredAccessories=_registeredAccessories;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) SFDeviceDiscovery *sfDiscovery; // @synthesize sfDiscovery=_sfDiscovery;
- (void).cxx_destruct;
- (void)_deviceLostHandler:(id)arg1;
- (void)_deviceChangedHandler:(id)arg1;
- (void)_deviceFoundHandler:(id)arg1;
- (void)deregisterProblemFlagsChangedForDevice:(id)arg1;
- (void)_initiateFixWithRepairSessionForAccessory:(id)arg1 device:(id)arg2 idsIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_initiateFixForAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initiateFixForAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerForDeviceProblemFlagsChanged:(id)arg1;
- (void)handleRemovedAccessory:(id)arg1;
- (void)_stop;
- (void)_start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

