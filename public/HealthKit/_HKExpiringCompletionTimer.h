//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface _HKExpiringCompletionTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;
    double _expirationTime;
    double _timeout;
    CDUnknownBlockType _timeoutHandler;
    _Bool _invalidated;
    CDUnknownBlockType _completion;
    NSDate *_startDate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)_invalidateAndInvokeCompletion:(_Bool)arg1 error:(id)arg2;
- (void)invalidateAndInvokeCompletionWithError:(id)arg1;
- (void)invalidate;
- (void)_start;
- (void)restart;
- (void)startWithTimeoutInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (void)_cancelTimer;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

