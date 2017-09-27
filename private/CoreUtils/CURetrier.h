//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CURetrier : NSObject
{
    _Bool _invalidateCalled;
    NSObject<OS_dispatch_source> *_retryTimer;
    double _startTime;
    CDUnknownBlockType _action;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _interval;
    double _leeway;
    CDUnknownBlockType _invalidationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) double leeway; // @synthesize leeway=_leeway;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)succeededDirect;
- (void)succeeded;
- (void)failedDirect;
- (void)failed;
- (void)startDirect;
- (void)start;
- (void)invalidateDirect;
- (void)invalidate;
- (id)init;

@end

