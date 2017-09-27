//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BLTBBObserverDelegateDelegate.h"

@class BBObserver, BLTBBObserverDelegate, NSLock, NSObject<OS_dispatch_queue>, NSString;

@interface BLTBBObserver : NSObject <BLTBBObserverDelegateDelegate>
{
    BBObserver *_actualObserver;
    NSLock *_actualObserverLock;
    BLTBBObserverDelegate *_delegateSurrogate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_name;
    unsigned long long _priority;
    _Bool _isGateway;
    unsigned long long _observerFeed;
    _Bool _hasFeed;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)surrogateGatewayWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4;
+ (id)surrogateWithQueue:(id)arg1 calloutQueue:(id)arg2;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (void)setObserverFeed:(unsigned long long)arg1;
- (void)noteServerConnectionStateChanged:(_Bool)arg1;
- (void)_reconnectObserver;
- (void)setDelegate:(id)arg1;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4 isGateway:(_Bool)arg5;

@end

