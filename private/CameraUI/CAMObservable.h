//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CAMObservable : NSObject
{
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    unsigned long long _currentChange;
    _Bool _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    _Bool _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
}

- (void).cxx_destruct;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_applyPendingChanges;
- (void)_publishChanges;
- (void)_didChange;
- (void)_willChange;
- (void)enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)signalChange:(unsigned long long)arg1;
- (void)didPublishChanges;
- (void)didPerformChanges;
- (void)willPerformChanges;
- (id)mutableChangeObject;
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)init;

@end

