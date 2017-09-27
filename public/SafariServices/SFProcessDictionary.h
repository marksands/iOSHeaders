//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSApplicationStateMonitor, NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFProcessDictionary : NSObject
{
    NSMutableSet *_pidsPendingTermination;
    NSMutableArray *_recentlyReferencedPIDs;
    NSCountedSet *_references;
    BKSApplicationStateMonitor *_stateMonitor;
    NSMutableDictionary *_values;
    unsigned long long _cacheCapacity;
}

@property(readonly, nonatomic) unsigned long long cacheCapacity; // @synthesize cacheCapacity=_cacheCapacity;
- (void).cxx_destruct;
- (id)incrementReferenceForPID:(int)arg1 valueCreationBlock:(CDUnknownBlockType)arg2;
- (void)_removeUnreferencedObjectsIfNeeded;
- (void)decrementReferenceForPID:(int)arg1;
- (void)_removeValueForPID:(id)arg1;
- (void)_handleProcessTermination:(int)arg1;
- (void)_handleApplicationStateUpdate:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCacheCapacity:(unsigned long long)arg1;

@end

