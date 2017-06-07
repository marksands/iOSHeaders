//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PRRequestDelegate;

@interface PRRequestQueue : NSObject
{
    id <PRRequestDelegate> _delegate;
    NSString *_identifier;
}

+ (id)defaultRequestQueue;
+ (id)_requestQueueForIdentifier:(id)arg1;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <PRRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_deleteTestValueFromTouchIDKeychain;
- (void)_writeTestValueToTouchIDKeychain;
- (void)_readTestValueFromTouchIDKeychain;
- (id)_pushToken;
- (void)_registerPushToken;
- (void)_clearCachedRequests;
- (void)_userDidDenyRequestWithRequestID:(id)arg1;
- (void)_userDidApproveRequestWithRequestID:(id)arg1;
- (void)_requestToBePresentedWithReply:(CDUnknownBlockType)arg1;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithAdamID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_pendingStorePurchaseRequestForItemIdentifier:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)_didReceiveStorePushNotificationWithPayload:(id)arg1;
- (void)_didStartNewPurchaseRequestWithInfo:(id)arg1;
- (void)pendingRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)attemptLocalApprovalForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)askPermissionTo:(id)arg1 withRequestInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)agentRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_agentRemoteObjectInterface;
- (id)_agentXPCConnection;
- (id)initWithIdentifier:(id)arg1;

@end

