//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WBSDistributedNotificationObserver : NSObject
{
    NSString *_notificationName;
    long long _notificationType;
    _Bool _observing;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    CDUnknownBlockType _notificationHandler;
    CDUnknownBlockType _timeoutHandler;
}

- (void).cxx_destruct;
- (void)_didTimeOut;
- (void)_didReceiveNotification:(id)arg1;
- (void)_invalidateTimeoutTimer;
- (void)_scheduleTimeoutTimerWithTimeout:(double)arg1;
- (void)_stopObserving;
- (void)_startObserving;
- (void)stopWaiting;
- (void)waitWithTimeout:(double)arg1;
@property(copy) CDUnknownBlockType timeoutHandler;
@property(copy) CDUnknownBlockType notificationHandler;
- (id)initWithNotificationName:(id)arg1 type:(long long)arg2;
- (id)initWithNotificationName:(id)arg1;
- (id)init;

@end

