//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICDelegateAccountStoreServiceClient.h"
#import "ICDelegateAccountStoreWriter.h"

@class ICDelegateAccountStoreOptions, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface ICDelegateAccountStoreXPCWriter : NSObject <ICDelegateAccountStoreServiceClient, ICDelegateAccountStoreWriter>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICDelegateAccountStoreOptions *_accountStoreOptions;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    CDUnknownBlockType _externalChangeHandler;
    _Bool _hasReceivedConnectionInvalidation;
}

- (void).cxx_destruct;
- (void)_getXPCConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (id)_onceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recreateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
@property(copy, nonatomic) CDUnknownBlockType externalChangeHandler; // @synthesize externalChangeHandler=_externalChangeHandler;
- (void)delegateAccountStoreDidChange;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithAccountStoreOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

