//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (IC)
- (_Bool)ic_indexIsValid:(long long)arg1;
- (unsigned long long)ic_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long *)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (id)arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;
- (id)objectsOfClass:(Class)arg1;
- (id)objectsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)objectPassingTest:(CDUnknownBlockType)arg1;
@end

