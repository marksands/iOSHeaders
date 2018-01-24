//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCTResult.h>

@class NSObject<OS_dispatch_queue>, XCTPromise, XCTWaiter;

@interface XCTFutureResult : XCTResult
{
    _Bool _hasWaited;
    _Bool _hasFinished;
    double _deadline;
    XCTPromise *_promise;
    XCTWaiter *_waiter;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool hasFinished; // @synthesize hasFinished=_hasFinished;
@property _Bool hasWaited; // @synthesize hasWaited=_hasWaited;
@property(readonly) XCTWaiter *waiter; // @synthesize waiter=_waiter;
@property(readonly) XCTPromise *promise; // @synthesize promise=_promise;
@property(readonly) double deadline; // @synthesize deadline=_deadline;
- (void)setValue:(id)arg1;
- (id)value;
- (void)setError:(id)arg1;
- (id)error;
- (void)_waitForFulfillment;
- (id)initWithTimeout:(double)arg1 description:(id)arg2;
- (void)dealloc;

@end

