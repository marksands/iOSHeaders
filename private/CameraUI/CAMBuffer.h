//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CAMBuffer : NSObject
{
    _Bool _bufferQueueEnabled;
    NSObject<OS_dispatch_queue> *__bufferQueue;
    id <NSCopying> _bufferQueueCurrentValue;
    NSMutableArray *__bufferQueueBufferedValues;
    NSMutableDictionary *__bufferQueueObservers;
    NSMutableArray *__bufferQueueObservances;
}

+ (id)keyPathsForValuesAffectingCurrentValue;
+ (id)keyPathsForValuesAffectingEnabled;
@property(readonly, nonatomic) NSMutableArray *_bufferQueueObservances; // @synthesize _bufferQueueObservances=__bufferQueueObservances;
@property(readonly, nonatomic) NSMutableDictionary *_bufferQueueObservers; // @synthesize _bufferQueueObservers=__bufferQueueObservers;
@property(readonly, nonatomic) NSMutableArray *_bufferQueueBufferedValues; // @synthesize _bufferQueueBufferedValues=__bufferQueueBufferedValues;
@property(retain, nonatomic) id <NSCopying> bufferQueueCurrentValue; // @synthesize bufferQueueCurrentValue=_bufferQueueCurrentValue;
@property(nonatomic, getter=isBufferQueueEnabled) _Bool bufferQueueEnabled; // @synthesize bufferQueueEnabled=_bufferQueueEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_bufferQueue; // @synthesize _bufferQueue=__bufferQueue;
- (void).cxx_destruct;
- (void)handleObservedNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserverForKey:(id)arg1;
- (id)addMainQueueObserver:(CDUnknownBlockType)arg1;
- (id)addObserver:(CDUnknownBlockType)arg1;
- (id)_addObserver:(CDUnknownBlockType)arg1 onMainQueue:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *bufferedValues;
@property(readonly, nonatomic) id lastBufferedValue;
@property(readonly, nonatomic) id firstBufferedValue;
@property(readonly, nonatomic) _Bool isBufferEmpty;
@property(readonly, nonatomic) id currentValue;
- (_Bool)_isBufferQueue;
- (void)replaceWith:(id)arg1;
- (void)push:(id)arg1;
- (void)_emitBufferedValues;
- (void)disableUntilNotification:(id)arg1 fromObject:(id)arg2 usingNotificationCenter:(id)arg3;
- (void)disableUntilKeyPath:(id)arg1 ofObject:(id)arg2 evaluates:(CDUnknownBlockType)arg3;
- (void)disableUntil:(CDUnknownBlockType)arg1;
- (void)disableWhileNotification:(id)arg1 fromObject:(id)arg2 usingNotificationCenter:(id)arg3;
- (void)disableWhileKeyPath:(id)arg1 ofObject:(id)arg2 evaluates:(CDUnknownBlockType)arg3;
- (void)disableWhile:(CDUnknownBlockType)arg1;
- (void)_bufferQueueTeardownObservances:(id)arg1;
- (void)_bufferQueueTeardownObservance:(id)arg1;
- (void)_bufferQueueSetupObservance:(id)arg1;
- (void)reevaluate;
- (void)_bufferQueueFulfillAndEvaluateWithChange:(id)arg1;
- (void)_bufferQueueEvaluateObservances;
- (void)_bufferQueueFulfillObservancesWithChange:(id)arg1;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;
- (id)init;

@end

