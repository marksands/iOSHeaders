//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSAction;
@protocol OS_dispatch_queue;

@interface BSBlockSentinel : NSObject
{
    BSAction *_sentinelAction;
    CDUnknownBlockType _handler;
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_explicitQueue;
}

+ (id)sentinelWithSignalCount:(unsigned long long)arg1 exceptionReason:(id)arg2;
+ (id)sentinelWithExceptionReason:(id)arg1;
+ (id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 signalHandler:(CDUnknownBlockType)arg3;
+ (id)sentinelWithQueue:(id)arg1 signalHandler:(CDUnknownBlockType)arg2;
+ (id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)sentinelWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performSynchronously:(CDUnknownBlockType)arg1;
- (_Bool)signalWithContext:(id)arg1;
- (_Bool)signal;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

