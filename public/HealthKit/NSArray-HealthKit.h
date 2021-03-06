//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface NSArray (HealthKit)
+ (_Bool)_permutationHelperForArray:(id)arg1 number:(long long)arg2 permutationHandler:(CDUnknownBlockType)arg3;
- (void)hk_enumeratePermutationsWithBlock:(CDUnknownBlockType)arg1;
- (id)hk_mapToSet:(CDUnknownBlockType)arg1;
- (id)hk_mapToDictionary:(CDUnknownBlockType)arg1;
- (id)hk_orPredicateWithPredicateBlock:(CDUnknownBlockType)arg1;
- (void)hk_partitionArrayWithPartitionSetupBlock:(CDUnknownBlockType)arg1 partitionMembershipCheckBlock:(CDUnknownBlockType)arg2 partitionExtendBlock:(CDUnknownBlockType)arg3 partitionFinalizeBlock:(CDUnknownBlockType)arg4;
- (_Bool)hk_allElementsUnique;
- (_Bool)hk_containsObjectsInArray:(id)arg1;
- (id)hk_firstSortedObjectWithComparison:(CDUnknownBlockType)arg1;
- (id)hk_firstObjectWithMinimumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;
- (id)hk_firstObjectWithMaximumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;
- (double)hk_sumUsingEvaulationBlock:(CDUnknownBlockType)arg1;
- (id)hk_averageUsingEvaluationBlock:(CDUnknownBlockType)arg1;
- (id)hk_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)hk_foldRightFrom:(id)arg1 with:(CDUnknownBlockType)arg2;
- (id)hk_filter:(CDUnknownBlockType)arg1;
- (id)hk_map:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)hk_map:(CDUnknownBlockType)arg1;
@end

