//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface _SYMultiSuspendableQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    unsigned long long _stateHandle;
    // Error parsing type: Ai, name: _resumeCount
    NSMutableArray *_latestSuspendBacktraces;
    NSMutableArray *_latestResumeBacktraces;
}

- (void).cxx_destruct;
- (void)barrierAsync:(CDUnknownBlockType)arg1;
- (void)barrierSync:(CDUnknownBlockType)arg1;
- (void)async:(CDUnknownBlockType)arg1;
- (void)sync:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)suspend;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
@property(readonly, nonatomic) unsigned int qosClass;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithName:(id)arg1 qosClass:(unsigned int)arg2 serial:(_Bool)arg3 target:(id)arg4;
- (id)initWithName:(id)arg1 qosClass:(unsigned int)arg2 serial:(_Bool)arg3;
- (id)init;

@end
