//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPDCircleStateObserver;
@protocol CDPDCircleDelegate, CDPDCircleProxy, CDPStateUIProviderInternal, OS_dispatch_queue;

@interface CDPDCircleController : NSObject
{
    CDPDCircleStateObserver *_circleJoinObserver;
    NSObject<OS_dispatch_queue> *_requestSynchronizationQueue;
    id <CDPStateUIProviderInternal> _uiProvider;
    NSObject<CDPDCircleDelegate> *_delegate;
    id <CDPDCircleProxy> _circleProxy;
}

@property(retain, nonatomic) id <CDPDCircleProxy> circleProxy; // @synthesize circleProxy=_circleProxy;
@property(nonatomic) __weak NSObject<CDPDCircleDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;
- (void).cxx_destruct;
- (void)cancelApplicationToJoinCircle;
- (void)_requestCircleJoinWithObserver:(id)arg1 requestBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestToJoinWithRequestBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(CDUnknownBlockType)arg1;
- (void)_requestToJoinAndWaitForSuccessWithHandler:(CDUnknownBlockType)arg1;
- (void)_requestToJoinWithObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyToJoinCircleWithJoinHandler:(CDUnknownBlockType)arg1;
- (id)_peerDeviceNamesByPeerID;
- (void)useCircleInfoToUpdateNameForDevices:(id)arg1;
- (void)resetCicleToResolvePendingAfterRecoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)joinCircleAfterRecoveryWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)_peerCount;
- (void)promptForCredentials:(CDUnknownBlockType)arg1;
- (void)_joinCircleIgnoringBackups:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)joinCircleIgnoringBackups:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)joinCircleWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareCircleStateForRecovery;
- (_Bool)synchronizeCircleViews;
- (id)peerID;
- (int)circleStatus;
- (void)dealloc;
- (id)initWithUiProvider:(id)arg1 delegate:(id)arg2 circleProxy:(id)arg3;

@end

