//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BYBuddyDaemonProximityTargetProtocol.h"
#import "BYDaemonProximityTargetProtocol.h"

@class NSString, NSXPCConnection;

@interface BYBuddyDaemonProximityTargetClient : NSObject <BYDaemonProximityTargetProtocol, BYBuddyDaemonProximityTargetProtocol>
{
    id <BYBuddyDaemonProximityTargetProtocol> _delegate;
    NSXPCConnection *_connection;
}

+ (id)proximityTargetClientInterface;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property __weak id <BYBuddyDaemonProximityTargetProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)receivedLanguage:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4;
- (void)proximityConnectionTerminated;
- (void)proximityConnectionInitiated;
- (void)proximityConnectionPreparing:(id)arg1;
- (void)dismissProximityPinCode;
- (void)displayProximityPinCode:(id)arg1 visual:(_Bool)arg2;
- (void)proximititySetupCompleted:(id)arg1;
- (void)storeHandshake:(id)arg1;
- (void)storeInformation:(id)arg1;
- (void)resumeProximitySetup:(CDUnknownBlockType)arg1;
- (void)hasConnection:(CDUnknownBlockType)arg1;
- (void)sendData:(id)arg1;
- (void)endPairing;
- (void)endAdvertisingProximitySetup;
- (void)beginAdvertisingProximitySetup;
- (void)connectToDaemon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

