//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSet.h"

@interface NSSet (FCAdditions)
+ (id)fc_unionOfSetsInArray:(id)arg1;
+ (id)fc_set:(CDUnknownBlockType)arg1;
- (id)fc_setByRemovingObject:(id)arg1;
- (id)fc_setByUnioningSet:(id)arg1;
- (id)fc_setByMinusingSet:(id)arg1;
- (id)fc_setByIntersectingSet:(id)arg1;
- (id)fc_dictionaryOfSortedSetsWithKeyBlock:(CDUnknownBlockType)arg1;
- (_Bool)fc_containsAnyObjectInArray:(id)arg1;
- (id)fc_arrayByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_mutableSetByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_setByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)fc_countOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_arrayOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_setOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)fc_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_onlyObject;
- (id)fc_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_diffAgainstSet:(id)arg1;
@end

