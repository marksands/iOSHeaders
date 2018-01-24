//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDataAggregator : NSObject
{
    CDUnknownBlockType _updateBlock;
    NSCountedSet *_delayedKeys;
    NSMutableDictionary *_pendingUpdates;
    NSMutableDictionary *_coalescedKeys;
    NSMutableDictionary *_coalescedTimers;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *coalescedTimers; // @synthesize coalescedTimers=_coalescedTimers;
@property(retain, nonatomic) NSMutableDictionary *coalescedKeys; // @synthesize coalescedKeys=_coalescedKeys;
@property(retain, nonatomic) NSMutableDictionary *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property(retain, nonatomic) NSCountedSet *delayedKeys; // @synthesize delayedKeys=_delayedKeys;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *coalescedEntryKeys;
- (void)endCoalescingUpdatesForEntryKeys:(id)arg1;
- (void)beginCoalescingUpdatesForEntryKeys:(id)arg1 delay:(double)arg2;
- (void)_coalescedUpdateForEntryKeys:(id)arg1;
- (void)_updateForCoalescedKeysWithData:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *delayedEntryKeys;
- (void)endDelayingUpdatesForEntryKeys:(id)arg1;
- (void)beginDelayingUpdatesForEntryKeys:(id)arg1;
- (void)_updateForDelayedKeysWithData:(id)arg1;
- (void)_updateFromPendingUpdatesForKeys:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_updatedDataFromData:(id)arg1 delayedKeys:(id)arg2;
- (void)updateWithData:(id)arg1;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;

@end

