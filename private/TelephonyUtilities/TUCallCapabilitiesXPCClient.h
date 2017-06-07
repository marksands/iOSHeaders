//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallCapabilitiesXPCClient-Protocol.h>
#import <TelephonyUtilities/TUCallCapabilitiesXPCServerActions-Protocol.h>

@class NSString, NSXPCConnection, TUCallCapabilitiesState;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, TUCallCapabilitiesXPCServer;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions>
{
    int _token;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    id <TUCallCapabilitiesXPCServer> _server;
    TUCallCapabilitiesState *_state;
    NSObject<OS_dispatch_semaphore> *_stateSemaphore;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *stateSemaphore; // @synthesize stateSemaphore=_stateSemaphore;
@property(retain, nonatomic) TUCallCapabilitiesState *state; // @synthesize state=_state;
@property(nonatomic) id <TUCallCapabilitiesXPCServer> server; // @synthesize server=_server;
@property(nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_updateState:(id)arg1;
- (void)_retrieveStateForInitialUpdate:(_Bool)arg1;
- (oneway void)capabilityStateUpdated:(id)arg1;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)requestPinFromPrimaryDevice;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURL;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURL;
- (oneway void)endEmergencyCallbackMode;
- (oneway void)setRelayCallingEnabled:(_Bool)arg1 forDeviceWithID:(id)arg2;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(_Bool)arg1;
- (oneway void)setThumperCallingAllowed:(_Bool)arg1 onSecondaryDeviceWithID:(id)arg2;
- (oneway void)setRelayCallingEnabled:(_Bool)arg1;
- (oneway void)setThumperCallingEnabled:(_Bool)arg1;
- (oneway void)setVoLTECallingEnabled:(_Bool)arg1;
- (oneway void)setWiFiCallingRoamingEnabled:(_Bool)arg1;
- (oneway void)setWiFiCallingEnabled:(_Bool)arg1;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)invalidateXPCConnection;
- (void)dealloc;
- (id)initWithServer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

