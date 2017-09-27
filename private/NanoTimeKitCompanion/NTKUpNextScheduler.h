//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSObject<OS_dispatch_queue>;

@interface NTKUpNextScheduler : NSObject
{
    _Bool _updateScheduled;
    NSLock *_scheduledLock;
    NSObject<OS_dispatch_queue> *_queue;
    double _delay;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _updateCompletionBlock;
}

+ (id)schedulerWithQueue:(id)arg1 delay:(double)arg2 updateCompletionBlock:(CDUnknownBlockType)arg3;
+ (id)schedulerWithQueue:(id)arg1 delay:(double)arg2 updateBlock:(CDUnknownBlockType)arg3;
+ (id)schedulerWithQueue:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateCompletionBlock; // @synthesize updateCompletionBlock=_updateCompletionBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_queue_performUpdate;
- (void)schedule;
- (void)performImmediately;
@property(readonly, nonatomic) _Bool isScheduled;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 updateBlock:(CDUnknownBlockType)arg3 updateCompletionBlock:(CDUnknownBlockType)arg4;

@end

