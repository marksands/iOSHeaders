//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICDelegateAccountStoreService-Protocol.h>
#import <iTunesCloud/NSXPCListenerDelegate-Protocol.h>

@class ICUserIdentityStore, NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface ICDelegateAccountStoreServiceListener : NSObject <NSXPCListenerDelegate, ICDelegateAccountStoreService>
{
    _Bool _ignoresEntitlements;
    NSXPCListener *_listener;
    ICUserIdentityStore *_testingIdentityStore;
}

+ (id)testingListenerWithIdentityStore:(id)arg1;
+ (id)machServiceListener;
- (void).cxx_destruct;
- (id)_identityStore;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recreateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSXPCListenerEndpoint *XPCEndpoint;
- (void)suspend;
- (void)resume;
- (void)invalidate;
- (id)_initWithXPCListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

