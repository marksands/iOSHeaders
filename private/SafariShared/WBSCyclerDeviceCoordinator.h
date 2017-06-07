//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCyclerPrimaryDeviceCoordinatorDelegate-Protocol.h>
#import <SafariShared/WBSCyclerSecondaryDeviceCoordinatorDelegate-Protocol.h>

@class NSNumber, NSString, WBSCyclerPrimaryDeviceCoordinator, WBSCyclerSecondaryDeviceCoordinator;
@protocol OS_dispatch_queue, WBSCyclerDeviceCoordinatorDelegate;

@interface WBSCyclerDeviceCoordinator : NSObject <WBSCyclerPrimaryDeviceCoordinatorDelegate, WBSCyclerSecondaryDeviceCoordinatorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _primaryDevicePort;
    NSString *_primaryDeviceHost;
    WBSCyclerPrimaryDeviceCoordinator *_primaryDeviceCoordinator;
    WBSCyclerSecondaryDeviceCoordinator *_secondaryDeviceCoordinator;
    _Bool _coordinating;
    id <WBSCyclerDeviceCoordinatorDelegate> _delegate;
    NSNumber *_numberOfSecondaryDevices;
}

@property(readonly, nonatomic) NSNumber *numberOfSecondaryDevices; // @synthesize numberOfSecondaryDevices=_numberOfSecondaryDevices;
@property(getter=isCoordinating) _Bool coordinating; // @synthesize coordinating=_coordinating;
@property __weak id <WBSCyclerDeviceCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (id)_ipAddress;
- (_Bool)_parseAddress:(id)arg1 intoHost:(id *)arg2 port:(unsigned long long *)arg3;
- (_Bool)_setSecondaryCyclerCountOnInternalQueue:(id)arg1 error:(id *)arg2;
- (_Bool)_setPrimaryCyclerAddressOnInternalQueue:(id)arg1 error:(id *)arg2;
- (id)_primaryDeviceAddressOnInternalQueue;
- (void)_didReceiveData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_didStartListeningAsPrimaryDeviceOnPort:(unsigned long long)arg1;
- (void)_didEncounterError:(id)arg1;
- (void)_didFinishConnectingToDevices;
- (void)secondaryDeviceCoordinator:(id)arg1 didReceiveDataFromPrimaryDevice:(id)arg2;
- (void)secondaryDeviceCoordinator:(id)arg1 didEncounterError:(id)arg2;
- (void)secondaryDeviceCoordinatorDidConnectToPrimaryDevice:(id)arg1;
- (void)primaryDeviceCoordinator:(id)arg1 didReceiveData:(id)arg2 fromSecondaryDevice:(unsigned long long)arg3;
- (void)primaryDeviceCoordinator:(id)arg1 didStartListeningForSecondaryDevicesOnPort:(unsigned long long)arg2;
- (void)primaryDeviceCoordinator:(id)arg1 didEncounterError:(id)arg2;
- (void)primaryDeviceCoordinatorDidConnectToAllSecondaryDevices:(id)arg1;
- (void)sendData:(id)arg1;
- (void)startCoordinatingWithTimeout:(double)arg1;
- (_Bool)setValue:(id)arg1 forConfigurationKey:(id)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) NSString *primaryDeviceAddress;
@property(readonly, nonatomic, getter=isPrimaryDevice) _Bool primaryDevice;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

