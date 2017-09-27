//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TSKChangeNotifier : NSObject
{
    struct __CFDictionary *mChangeSourceObservers;
    struct __CFDictionary *mChangeSourceOfClassObservers;
    struct __CFArray *mQueuedObserverListChanges;
    unsigned long long mProcessingChanges;
    id mQueuedObserverLock;
}

- (void)asyncProcessChanges:(id)arg1;
- (void)syncProcessChanges:(id)arg1;
- (void)p_updateObserverList;
- (void)removeObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2;
- (void)addObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2;
- (void)removeObserver:(id)arg1 forChangeSource:(id)arg2;
- (void)p_removeObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(_Bool)arg3;
- (void)addObserver:(id)arg1 forChangeSource:(id)arg2;
- (void)p_addObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(_Bool)arg3;
- (void)p_queueObserverListChange:(id)arg1;
- (_Bool)p_pendingAddOrRemoveOfObserver:(id)arg1 forChangeSource:(id)arg2;
- (id)p_findCountedObserverForObserver:(id)arg1 inArray:(id)arg2;
- (void)dealloc;
- (id)init;

@end

