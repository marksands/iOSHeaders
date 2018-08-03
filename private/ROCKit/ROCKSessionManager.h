//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMapTable, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, ROCKConnectionManager;

@interface ROCKSessionManager : NSObject
{
    _Bool _useMainThreadChecker;
    NSObject<OS_xpc_object> *_serviceConnection;
    NSObject<OS_dispatch_queue> *_eventQueue;
    CDUnknownBlockType _eventHandler;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_invocationQueue;
    NSObject<OS_dispatch_queue> *_instancesQueue;
    ROCKConnectionManager *_connectionManager;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSMapTable *_impersonatableProxies;
    NSMapTable *_impersonatedObjects;
    NSHashTable *_pendingForwardingProxies;
    NSMapTable *_checkedInForwardingProxies;
    NSMapTable *_serializers;
    NSMapTable *_classesToProtocols;
    NSMapTable *_protocolsToMethodSignatures;
    NSMapTable *_xpcProtocolsToClasses;
    NSMapTable *_objCTypesToMethodSignatures;
}

+ (id)remoteProxyWithMachServiceName:(id)arg1 options:(id)arg2 eventQueue:(id)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (id)remoteProxyWithServiceName:(id)arg1 options:(id)arg2 eventQueue:(id)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (id)remoteProxyWithXPCConnection:(id)arg1 options:(id)arg2 eventQueue:(id)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (id)forwardingProxyWithInstance:(id)arg1 machServiceName:(id)arg2 options:(id)arg3 eventQueue:(id)arg4 eventHandler:(CDUnknownBlockType)arg5;
+ (id)forwardingProxyWithBlock:(id)arg1 xpcAnonymousConnection:(id)arg2 options:(id)arg3 eventQueue:(id)arg4 eventHandler:(CDUnknownBlockType)arg5;
+ (id)forwardingProxyWithInstance:(id)arg1 xpcAnonymousConnection:(id)arg2 options:(id)arg3 eventQueue:(id)arg4 eventHandler:(CDUnknownBlockType)arg5;
+ (void)forwardingProxyWithInstance:(id)arg1 options:(id)arg2 eventQueue:(id)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (id)sessionManagerWithOptions:(id)arg1 eventQueue:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;
+ (id)remoteProxyWithMachServiceName:(id)arg1 eventQueue:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;
+ (id)remoteProxyWithServiceName:(id)arg1 eventQueue:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;
+ (id)remoteProxyWithXPCConnection:(id)arg1 eventQueue:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;
+ (id)forwardingProxyWithInstance:(id)arg1 machServiceName:(id)arg2 eventQueue:(id)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (id)forwardingProxyWithBlock:(id)arg1 xpcAnonymousConnection:(id)arg2 eventQueue:(id)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (id)forwardingProxyWithInstance:(id)arg1 xpcAnonymousConnection:(id)arg2 eventQueue:(id)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (void)forwardingProxyWithInstance:(id)arg1 eventQueue:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool useMainThreadChecker; // @synthesize useMainThreadChecker=_useMainThreadChecker;
@property(retain, nonatomic) NSMapTable *objCTypesToMethodSignatures; // @synthesize objCTypesToMethodSignatures=_objCTypesToMethodSignatures;
@property(retain, nonatomic) NSMapTable *xpcProtocolsToClasses; // @synthesize xpcProtocolsToClasses=_xpcProtocolsToClasses;
@property(retain, nonatomic) NSMapTable *protocolsToMethodSignatures; // @synthesize protocolsToMethodSignatures=_protocolsToMethodSignatures;
@property(retain, nonatomic) NSMapTable *classesToProtocols; // @synthesize classesToProtocols=_classesToProtocols;
@property(retain, nonatomic) NSMapTable *serializers; // @synthesize serializers=_serializers;
@property(retain, nonatomic) NSMapTable *checkedInForwardingProxies; // @synthesize checkedInForwardingProxies=_checkedInForwardingProxies;
@property(retain, nonatomic) NSHashTable *pendingForwardingProxies; // @synthesize pendingForwardingProxies=_pendingForwardingProxies;
@property(retain, nonatomic) NSMapTable *impersonatedObjects; // @synthesize impersonatedObjects=_impersonatedObjects;
@property(retain, nonatomic) NSMapTable *impersonatableProxies; // @synthesize impersonatableProxies=_impersonatableProxies;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) ROCKConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *instancesQueue; // @synthesize instancesQueue=_instancesQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *invocationQueue; // @synthesize invocationQueue=_invocationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 eventQueue:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

