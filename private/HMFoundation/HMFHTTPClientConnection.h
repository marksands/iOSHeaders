//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/_HMFCFHTTPServerConnectionDelegate-Protocol.h>

@class HMFNetAddress, NSMutableArray, NSObject, NSString, _HMFCFHTTPServerConnection;
@protocol HMFHTTPClientConnectionDelegate, OS_dispatch_queue;

@interface HMFHTTPClientConnection : HMFObject <_HMFCFHTTPServerConnectionDelegate>
{
    id <HMFHTTPClientConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_pendingRespones;
    _HMFCFHTTPServerConnection *_internal;
}

+ (id)shortDescription;
@property(readonly, nonatomic) _HMFCFHTTPServerConnection *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSMutableArray *pendingRespones; // @synthesize pendingRespones=_pendingRespones;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property __weak id <HMFHTTPClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)sendResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)close;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) HMFNetAddress *peerAddress;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

