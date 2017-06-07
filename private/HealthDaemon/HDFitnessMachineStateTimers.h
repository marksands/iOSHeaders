//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HDFitnessMachineStateTimersDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HDFitnessMachineStateTimers : NSObject
{
    id <HDFitnessMachineStateTimersDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _pauseTimeoutHandler;
    NSObject<OS_dispatch_source> *_pauseTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *pauseTimer; // @synthesize pauseTimer=_pauseTimer;
@property(copy, nonatomic) CDUnknownBlockType pauseTimeoutHandler; // @synthesize pauseTimeoutHandler=_pauseTimeoutHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <HDFitnessMachineStateTimersDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)timerWithDuration:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)cancelMachinePauseTimeout;
- (void)beginMachinePauseTimeout;
- (void)cancelAllTimers;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;

@end

