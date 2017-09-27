//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexSet, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSPredicate, NSSet, NSString, NSTimer, NSValueTransformer;

@interface CATCollectionController : NSObject
{
    NSMutableArray *mPendingArrangedObjects;
    NSMutableArray *mPendingInsertedObjects;
    NSMutableArray *mPendingDeletedObjects;
    NSMutableSet *mContent;
    id mTarget;
    NSString *mKeyPath;
    NSMutableIndexSet *mChangingSelection;
    _Bool mDelegateKnowsContentIsChanging;
    NSSet *mKeysAffectingArrangement;
    NSMutableSet *mObjectsToRearrange;
    NSTimer *mRearrangeTimer;
    NSValueTransformer *mTransformer;
    id mOriginalObjects;
    _Bool _automaticallyRearrangesObjects;
    id <CATCollectionControllerDelegate> _delegate;
    NSArray *_sortDescriptors;
    NSPredicate *_filterPredicate;
    NSIndexSet *_selectionIndexes;
    NSArray *_arrangedObjects;
}

@property(retain) NSArray *arrangedObjects; // @synthesize arrangedObjects=_arrangedObjects;
- (void).cxx_destruct;
- (void)changeObject:(id)arg1 atIndex:(unsigned long long)arg2 forChangeType:(unsigned long long)arg3 newIndex:(unsigned long long)arg4;
- (void)notifyArrangedObjectsDidChangeWithPreviousArrangedObjects:(id)arg1;
- (void)notifyArrangedObjectsWillChange;
- (void)changeContent:(CDUnknownBlockType)arg1;
- (void)updateKeysAffectingArrangementForceUpdate:(_Bool)arg1 includeAllContent:(_Bool)arg2;
- (void)scheduleRearrangeTimerIfNeed;
- (void)rearrangeTimerDidFire:(id)arg1;
- (unsigned long long)newIndexForObject:(id)arg1 inArrangedObjects:(id)arg2;
- (void)arrangeObject:(id)arg1;
- (void)updateObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)removeObserversFromObject:(id)arg1 forKeyPaths:(id)arg2;
- (void)addObserversToObject:(id)arg1 forKeyPaths:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)rearrangeObjects;
- (void)unbindContent;
- (void)bindContentToObject:(id)arg1 withKeyPath:(id)arg2 usingTransformer:(id)arg3;
- (void)bindContentToObject:(id)arg1 withKeyPath:(id)arg2;
- (unsigned long long)arrangedIndexOfObject:(id)arg1;
- (void)resolveArrangedObjectsAtIndexes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)arrangedObjectsAtIndexes:(id)arg1;
- (id)arrangedObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfArrangedObjects;
- (void)dealloc;
- (id)initWithObjects:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSSet *content;
@property(readonly) NSArray *selectedObjects;
@property(copy) NSIndexSet *selectionIndexes; // @synthesize selectionIndexes=_selectionIndexes;
@property(retain) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property _Bool automaticallyRearrangesObjects; // @synthesize automaticallyRearrangesObjects=_automaticallyRearrangesObjects;
@property __weak id <CATCollectionControllerDelegate> delegate; // @synthesize delegate=_delegate;

@end

