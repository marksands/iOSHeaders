//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUPairingManagerXPCInterface.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection, NSXPCListenerEndpoint;

@interface CUPairingManager : NSObject <CUPairingManagerXPCInterface>
{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    _Bool _monitoring;
    unsigned long long _monitorOptions;
    NSXPCConnection *_xpcCnx;
    _Bool _targetUserSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _identityCreatedHandler;
    CDUnknownBlockType _identityDeletedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _pairedPeerAddedHandler;
    CDUnknownBlockType _pairedPeerRemovedHandler;
    CDUnknownBlockType _pairedPeerChangedHandler;
    NSXPCListenerEndpoint *_testListenerEndpoint;
}

@property(retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;
@property(nonatomic) _Bool targetUserSession; // @synthesize targetUserSession=_targetUserSession;
@property(copy, nonatomic) CDUnknownBlockType pairedPeerChangedHandler; // @synthesize pairedPeerChangedHandler=_pairedPeerChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType pairedPeerRemovedHandler; // @synthesize pairedPeerRemovedHandler=_pairedPeerRemovedHandler;
@property(copy, nonatomic) CDUnknownBlockType pairedPeerAddedHandler; // @synthesize pairedPeerAddedHandler=_pairedPeerAddedHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType identityDeletedHandler; // @synthesize identityDeletedHandler=_identityDeletedHandler;
@property(copy, nonatomic) CDUnknownBlockType identityCreatedHandler; // @synthesize identityCreatedHandler=_identityCreatedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)pairedPeerChanged:(id)arg1 options:(unsigned long long)arg2;
- (void)pairedPeerRemoved:(id)arg1 options:(unsigned long long)arg2;
- (void)pairedPeerAdded:(id)arg1 options:(unsigned long long)arg2;
- (void)pairingIdentityDeletedWithOptions:(unsigned long long)arg1;
- (void)pairingIdentityCreated:(id)arg1 options:(unsigned long long)arg2;
- (void)_startMonitoringWithOptions:(unsigned long long)arg1;
- (void)startMonitoringWithOptions:(unsigned long long)arg1;
- (void)_showWithCompletion:(CDUnknownBlockType)arg1;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_getPairedPeersWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_interrupted;
- (int)_ensureXPCStarted;
- (void)dealloc;
- (id)init;

@end

