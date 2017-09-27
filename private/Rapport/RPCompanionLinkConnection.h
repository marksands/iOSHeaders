//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUBonjourDevice, CUPairingSession, CUPairingStream, CUTCPConnection, NSError, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, RPCompanionLinkDevice;

@interface RPCompanionLinkConnection : NSObject
{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    _Bool _isClient;
    _Bool _retryFired;
    NSObject<OS_dispatch_source> *_retryTimer;
    int _internalState;
    _Bool _stepDone;
    NSError *_stepError;
    CDStruct_798ebea5 _frameHeader;
    CUPairingStream *_mainStream;
    CUPairingSession *_pairVerifySession;
    _Bool _receivingHeader;
    struct NSMutableDictionary *_requests;
    unsigned int _xidLast;
    _Bool _present;
    unsigned int _state;
    CUBonjourDevice *_bonjourPeerDevice;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    RPCompanionLinkDevice *_peerDeviceInfo;
    NSString *_peerIdentifier;
    CDUnknownBlockType _receivedEventHandler;
    CDUnknownBlockType _receivedRequestHandler;
    NSString *_selfIdentifier;
    CDUnknownBlockType _stateChangedHandler;
    CUTCPConnection *_tcpConnection;
}

@property(retain, nonatomic) CUTCPConnection *tcpConnection; // @synthesize tcpConnection=_tcpConnection;
@property(copy, nonatomic) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *selfIdentifier; // @synthesize selfIdentifier=_selfIdentifier;
@property(copy, nonatomic) CDUnknownBlockType receivedRequestHandler; // @synthesize receivedRequestHandler=_receivedRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedEventHandler; // @synthesize receivedEventHandler=_receivedEventHandler;
@property(nonatomic) _Bool present; // @synthesize present=_present;
@property(copy, nonatomic) NSString *peerIdentifier; // @synthesize peerIdentifier=_peerIdentifier;
@property(readonly, nonatomic) RPCompanionLinkDevice *peerDeviceInfo; // @synthesize peerDeviceInfo=_peerDeviceInfo;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) CUBonjourDevice *bonjourPeerDevice; // @synthesize bonjourPeerDevice=_bonjourPeerDevice;
- (void).cxx_destruct;
- (id)_systeminfo;
- (void)_receivedSystemInfo:(id)arg1 xid:(id)arg2;
- (void)_receivedResponse:(id)arg1;
- (void)_receivedRequest:(id)arg1;
- (void)_receivedEvent:(id)arg1;
- (void)_receivedObject:(id)arg1;
- (void)_receivedHeader:(const CDStruct_798ebea5 *)arg1 encryptedObjectData:(id)arg2;
- (void)_receivedHeader:(const CDStruct_798ebea5 *)arg1 body:(id)arg2;
- (void)_receiveCompletion:(id)arg1;
- (void)_receiveStart:(id)arg1;
- (void)_sendFrameType:(unsigned char)arg1 unencryptedObject:(id)arg2;
- (void)_sendFrameType:(unsigned char)arg1 body:(id)arg2;
- (void)_sendEncryptedResponse:(id)arg1 error:(id)arg2 xid:(id)arg3;
- (_Bool)sendEncryptedRequestID:(id)arg1 request:(id)arg2 xpcID:(unsigned int)arg3 error:(id *)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (_Bool)sendEncryptedData:(id)arg1 error:(id *)arg2;
- (void)_serverPairVerifyCompleted:(id)arg1;
- (void)_serverPairVerifyWithData:(id)arg1 start:(_Bool)arg2;
- (void)_serverAccept;
- (void)_serverRun;
- (void)_clientRetryFired;
- (void)_clientRetryStart;
- (void)_clientStartSession;
- (void)_clientPairVerifyCompleted:(id)arg1;
- (void)_clientPairVerifyWithData:(id)arg1;
- (void)_clientPairVerifyStart;
- (_Bool)_clientError:(id)arg1;
- (void)_clientConnectCompleted:(id)arg1;
- (void)_clientConnectStart;
- (void)_clientRun;
- (void)_updateExternalState;
- (void)_run;
- (void)_pairVerifyInvalidate;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
- (id)description;
- (id)init;

@end

