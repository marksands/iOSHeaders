//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "HMFMessageReceiver.h"
#import "HMFTimerDelegate.h"

@class HMDAccountRegistry, HMDCentralMessageDispatcher, HMDHomeManager, HMDResidentMeshMeshStorage, HMFTimer, NSMutableArray, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDResidentMesh : HMFObject <HMFTimerDelegate, HMFMessageReceiver, HMFLogging>
{
    NSUUID *_uuid;
    unsigned long long _broadcastRate;
    HMDHomeManager *_homeManager;
    HMDAccountRegistry *_accountRegistry;
    HMDCentralMessageDispatcher *_remoteMessageDispatcher;
    NSMutableArray *_residents;
    HMDResidentMeshMeshStorage *_resident;
    NSMutableArray *_reachableAccessories;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFTimer *_startupTimer;
    long long _startupTickCount;
    HMFTimer *_devicesChangedTimer;
    NSSet *_primaryResidentForHomes;
}

+ (id)logCategory;
@property(retain, nonatomic) NSSet *primaryResidentForHomes; // @synthesize primaryResidentForHomes=_primaryResidentForHomes;
@property(readonly, nonatomic) HMFTimer *devicesChangedTimer; // @synthesize devicesChangedTimer=_devicesChangedTimer;
@property(nonatomic) long long startupTickCount; // @synthesize startupTickCount=_startupTickCount;
@property(readonly, nonatomic) HMFTimer *startupTimer; // @synthesize startupTimer=_startupTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableArray *reachableAccessories; // @synthesize reachableAccessories=_reachableAccessories;
@property(nonatomic) __weak HMDResidentMeshMeshStorage *resident; // @synthesize resident=_resident;
@property(retain, nonatomic) NSMutableArray *residents; // @synthesize residents=_residents;
@property(nonatomic) __weak HMDCentralMessageDispatcher *remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property(nonatomic) __weak HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property unsigned long long broadcastRate; // @synthesize broadcastRate=_broadcastRate;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)dumpDebug;
- (void)_dumpDebug;
- (id)dumpState;
- (id)_dumpState;
- (void)_flushWorkQueue;
- (id)deviceForAccessory:(id)arg1;
- (void)_handleMeshUpdateMessage:(id)arg1;
- (void)_handleMeshUpdateRequestMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 payload:(id)arg2 target:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_removeConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(_Bool)arg2;
- (void)_addConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(_Bool)arg2;
- (_Bool)_checkReachabilityWithTimerActivation:(_Bool)arg1;
- (id)_addDeviceInResidents:(id)arg1;
- (id)_findDeviceInResidents:(id)arg1;
- (id)_addDeviceInMesh:(id)arg1;
- (id)_findDeviceInMeshByUUID:(id)arg1;
- (id)_findDeviceInMesh:(id)arg1;
- (void)_buildResidentsWithElection:(id)arg1 device:(id)arg2;
- (void)_deviceIsNotReachable:(id)arg1;
- (void)_deviceIsReachable:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)__deviceResidentChanged:(id)arg1;
- (void)__rebuildResidents:(id)arg1;
- (void)__rebuildResidentsViaElection:(id)arg1;
- (void)__deviceIsNotReachable:(id)arg1;
- (void)__deviceIsReachable:(id)arg1;
- (void)__accessoryIsNotReachable:(id)arg1;
- (void)__accessoryIsReachable:(id)arg1;
- (void)dealloc;
- (id)initWithHomeManager:(id)arg1 residentEnabled:(_Bool)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)messageDestination;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

