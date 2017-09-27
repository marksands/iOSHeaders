//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSceneClientProvider.h"
#import "FBWorkspaceServerDelegate.h"

@class BSAuditToken, BSZeroingWeakReference, FBProcess, FBSceneClientProviderInvalidationAction, FBWorkspaceServer, NSMapTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface FBWorkspace : NSObject <FBWorkspaceServerDelegate, FBSceneClientProvider>
{
    BSZeroingWeakReference *_zeroingWeakDelegate;
    BSZeroingWeakReference *_zeroingWeakProcess;
    FBWorkspaceServer *_server;
    NSMapTable *_hostToClientMap;
    NSMutableSet *_invalidatingScenes;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    _Bool _willInvalidate;
    _Bool _invalidated;
}

- (void)server:(id)arg1 handleDestroySceneRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)server:(id)arg1 handleCreateSceneRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)server:(id)arg1 handleConnectEvent:(id)arg2;
- (void)endTransaction;
- (void)beginTransaction;
- (void)unregisterHost:(id)arg1;
- (id)registerHost:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (void)_queue_sceneDidInvalidate:(id)arg1;
- (void)_invalidateSceneClientWithIdentifier:(id)arg1;
- (id)_createSceneClientWithIdentifier:(id)arg1 specification:(id)arg2;
- (Class)_sceneClassForSpecification:(id)arg1;
- (Class)_serverClass;
- (id)_server;
- (id)_queue;
- (void)_queue_enumerateScenes:(CDUnknownBlockType)arg1;
- (void)_queue_invalidateAllScenes;
- (void)_queue_willInvalidateAllScenes;
- (void)_queue_fireInvalidationAction;
- (void)sendActions:(id)arg1;
@property(readonly, retain, nonatomic) BSAuditToken *auditToken;
@property(readonly, nonatomic) FBProcess *process;
@property(nonatomic) id <FBWorkspaceDelegate> delegate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithParentProcess:(id)arg1 queue:(id)arg2 callOutQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

