//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "HMDeviceSetupSessionDelegate.h"
#import "HMFLogging.h"

@class HMAccessory, HMDeviceSetupSession, HMFUnfairLock, NSError, NSObject<OS_dispatch_queue>, NSString, TRSession;

@interface HMDeviceSetupOperation : NSOperation <HMDeviceSetupSessionDelegate, HMFLogging>
{
    HMFUnfairLock *_lock;
    _Bool _executing;
    _Bool _finished;
    NSError *_error;
    HMAccessory *_accessory;
    TRSession *_session;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMDeviceSetupSession *_setupSession;
}

+ (id)logCategory;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly, nonatomic) HMDeviceSetupSession *setupSession; // @synthesize setupSession=_setupSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) __weak TRSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupSession:(id)arg1 didCloseWithError:(id)arg2;
- (void)cancelWithError:(id)arg1;
- (void)cancel;
- (void)_reallyStart;
- (void)start;
- (void)setAccessory:(id)arg1;
@property(readonly) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void)setError:(id)arg1;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)finish;
@property(getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (_Bool)isAsynchronous;
- (id)initWithSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

