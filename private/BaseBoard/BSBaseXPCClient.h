//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSAtomicSignal, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface BSBaseXPCClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BSAtomicSignal *_invalidationSignal;
    NSObject<OS_xpc_object> *_serverEndpoint;
    NSString *_serviceName;
    _Bool _clientInvalidated;
    int _notifyToken;
    NSObject<OS_xpc_object> *_connection;
    _Bool _suspended;
}

- (void)queue_invalidate;
- (void)queue_reconnectToResumedServerIfNecessary;
- (void)queue_reregister;
- (_Bool)queue_isSuspended;
- (id)queue_connection;
- (void)queue_registerWithServerIfNecessary;
- (id)_connectionInstanceUUID;
- (void)queue_suspendConnection;
- (void)queue_resumeConnection;
- (void)queue_clientWasInvalidated;
- (void)queue_connectionWasInvalidated;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasDestroyed;
- (void)queue_connectionWasSuspended;
- (void)queue_connectionWasResumed;
- (void)queue_connectionWasCreated;
- (void)queue_handleError:(id)arg1;
- (void)queue_handleMessage:(id)arg1;
- (void)_setEndpoint:(id)arg1;
- (id)_connection;
- (id)_notifyTokenName;
- (void)_sendMessage:(CDUnknownBlockType)arg1 withReplyHandler:(CDUnknownBlockType)arg2 waitForReply:(_Bool)arg3 waitDuration:(unsigned long long)arg4;
- (void)_sendMessage:(CDUnknownBlockType)arg1;
- (void)_sendReplyForMessage:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (void)_sendMessageReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (void)_sendReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;
- (id)_errorFromMessageIfAny:(id)arg1;
- (void)invalidate;
- (void)resumeConnection;
- (void)suspendConnection;
- (void)reconnectIfNecessary;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (id)initWithServiceName:(id)arg1;
- (id)init;

@end

