//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFContentProtectionObserver.h"
#import "MFDiagnosticsGenerator.h"

@class NSConditionLock, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator, MFContentProtectionObserver>
{
    NSConditionLock *_lock;
    NSMutableArray *_items;
    unsigned long long _numThreads;
    unsigned long long _maxThreads;
    int _threadPriorityTrigger;
    double _threadRecycleTimeout;
    NSMutableSet *_threadOverrides;
    _Bool _isForeground;
    NSObject<OS_dispatch_queue> *_keybagQueue;
}

+ (void)flushAllInvocationQueues;
+ (unsigned long long)totalInvocationCount;
+ (id)sharedInvocationQueue;
@property(nonatomic) double threadRecycleTimeout; // @synthesize threadRecycleTimeout=_threadRecycleTimeout;
@property(nonatomic) int threadPriorityTrigger; // @synthesize threadPriorityTrigger=_threadPriorityTrigger;
@property(readonly, nonatomic) unsigned long long threadCount; // @synthesize threadCount=_numThreads;
- (id)copyDiagnosticInformation;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (void)didCancel:(id)arg1;
- (void)_drainQueue:(id)arg1;
- (void)_processInvocation:(id)arg1;
- (void)_adjustThreadPrioritiesIsForeground:(_Bool)arg1;
- (void)removeAllItems;
- (void)addInvocation:(id)arg1;
@property(readonly, nonatomic) unsigned long long invocationCount;
@property(nonatomic) unsigned long long maxThreadCount;
- (void)dealloc;
- (id)init;
- (id)initWithMaxThreadCount:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

