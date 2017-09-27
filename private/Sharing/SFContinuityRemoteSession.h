//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, SFDevice, SFSession;

@interface SFContinuityRemoteSession : NSObject
{
    _Bool _activateCalled;
    CDUnknownBlockType _activateHandler;
    _Bool _invalidateCalled;
    NSMutableArray *_messageQueue;
    _Bool _pairVerifyDone;
    _Bool _pairVerifyRunning;
    SFSession *_sfSession;
    _Bool _sfSessionActivated;
    _Bool _started;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    SFDevice *_peerDevice;
}

@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_sendQueuedMesssages;
- (void)_sendCommand:(int)arg1 options:(id)arg2;
- (void)sendCommand:(int)arg1 options:(id)arg2;
- (void)sendCommand:(int)arg1;
- (void)_sfSessionStart;
- (void)_run;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

