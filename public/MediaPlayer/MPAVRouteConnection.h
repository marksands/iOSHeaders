//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface MPAVRouteConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _invalidated;
    NSMutableArray *_pendingConnectionHandlers;
    CDUnknownBlockType _receivedCustomDataHandler;
    CDUnknownBlockType _invalidationHandler;
    void *_externalDevice;
}

@property(readonly, nonatomic) void *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedCustomDataHandler; // @synthesize receivedCustomDataHandler=_receivedCustomDataHandler;
- (void).cxx_destruct;
- (void)_connectionStateDidChange:(unsigned int)arg1 error:(id)arg2;
- (void)_connectionDidReceiveCustomData:(id)arg1;
- (void)resignActiveOriginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)becomeActiveOriginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendCustomData:(id)arg1;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
- (void)invalidate;
- (void)connectWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (void)dealloc;
- (id)initWithExternalDevice:(void *)arg1;

@end

