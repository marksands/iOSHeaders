//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXAccessQueueTimer.h"

@class AXAccessQueue, NSObject<OS_dispatch_source>, NSString;

@interface AXAccessQueueTimer : NSObject <AXAccessQueueTimer>
{
    _Bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    _Bool _active;
    _Bool _accessQueueIsExternal;
    int _state;
    NSString *_label;
    AXAccessQueue *_accessQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
}

+ (id)timerTargettingMainAccessQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer; // @synthesize dispatchTimer=_dispatchTimer;
@property(nonatomic) _Bool accessQueueIsExternal; // @synthesize accessQueueIsExternal=_accessQueueIsExternal;
@property(retain, nonatomic) AXAccessQueue *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property(copy) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_warnAboutAsynchronousCancelling;
- (void)_reallyCancel;
- (void)cancel;
- (void)_warnAboutAsynchronousScheduling;
- (void)_didFinishProcessingBlock;
- (void)_afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2 shouldTreatAsWritingBlock:(_Bool)arg3;
- (void)afterDelay:(double)arg1 processWritingBlock:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 processReadingBlock:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;
- (void)_performEnqueuedWritingBlock:(CDUnknownBlockType)arg1 asynchronousExecutionWarningHandler:(SEL)arg2;
@property(readonly, nonatomic, getter=isPending) _Bool pending;
- (void)dealloc;
- (id)initWithTargetAccessQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

