//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_transaction>, SFDevice, SFService, SFSession;

@interface SFPINPairSession : NSObject
{
    _Bool _activateCalled;
    _Bool _clientStarted;
    NSData *_clientSessionUUID;
    _Bool _invalidateCalled;
    unsigned long long _heartbeatLastTicks;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    _Bool _heartbeatSending;
    _Bool _pairSetupDone;
    struct PairingSessionPrivate *_pairSetupSession;
    _Bool _pairSetupWaitingForUser;
    _Bool _pairVerifyDone;
    struct PairingSessionPrivate *_pairVerifySession;
    SFSession *_sfSession;
    _Bool _sfSessionActivated;
    unsigned long long _startTicks;
    NSObject<OS_os_transaction> *_transaction;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    SFService *_sfService;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _showPINHandler;
    CDUnknownBlockType _hidePINHandler;
}

@property(copy, nonatomic) CDUnknownBlockType hidePINHandler; // @synthesize hidePINHandler=_hidePINHandler;
@property(copy, nonatomic) CDUnknownBlockType showPINHandler; // @synthesize showPINHandler=_showPINHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(retain, nonatomic) SFService *sfService; // @synthesize sfService=_sfService;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)handleServerPairSetup:(id)arg1 reset:(_Bool)arg2;
- (void)handleServerPairVerify:(id)arg1 reset:(_Bool)arg2;
- (void)handleServerHeartbeat:(id)arg1;
- (void)_handleServerRequest:(id)arg1;
- (void)handleServerRequest:(id)arg1;
- (void)_clientTryPIN:(id)arg1;
- (void)clientTryPIN:(id)arg1;
- (void)_clientPairSetup:(id)arg1 start:(_Bool)arg2;
- (void)_clientPairVerify:(id)arg1 start:(_Bool)arg2;
- (void)_clientSFSessionStart;
- (void)_clientHeartbeatSend;
- (void)_clientRun;
- (void)_hearbeatTimer;
- (void)_completed:(int)arg1;
- (void)_cleanup;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)dealloc;
- (id)init;

@end

