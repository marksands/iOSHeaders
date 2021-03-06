//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface ICMusicSubscriptionStatusController : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedStatusController;
- (void).cxx_destruct;
- (void)_subscriptionStatusCacheDidChangeNotification:(id)arg1;
- (void)enablePeriodicSubscriptionRefresh;
- (void)invalidateCachedSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateCachedSubscriptionStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshSubscriptionUsingRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshSubscriptionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)disableSubscriptionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)enableSubscriptionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performSubscriptionStatusRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 bypassingCache:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

