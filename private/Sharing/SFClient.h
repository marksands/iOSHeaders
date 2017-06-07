//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFClient : NSObject
{
    NSMutableSet *_assertions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_invalidated;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupDevice:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;
- (void)retriggerProximityPairing:(CDUnknownBlockType)arg1;
- (void)preventExitForLocaleReason:(id)arg1;
- (void)openSetupURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateAssertionWithIdentifier:(id)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

