//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, REDependencyGraph;

@interface REOrderingArray : NSObject
{
    NSArray *_orderedObjects;
    REDependencyGraph *_dependencyGraph;
    _Bool _needsUpdate;
    unsigned long long _batchCount;
    NSArray *_comparators;
}

@property(readonly, nonatomic) NSArray *comparators; // @synthesize comparators=_comparators;
- (void).cxx_destruct;
- (void)_updateContentOrder;
- (void)_performOrMarkUpdate;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)sortAllObjects;
- (void)updateObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)_createDependenciesForObject:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithComparators:(id)arg1;

@end

