//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDataEntity.h>

@interface HDSampleEntity : HDDataEntity
{
}

+ (id)_predicateWithSampleType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3;
+ (id)_predicateWithSampleType:(id)arg1 predicate:(id)arg2;
+ (id)columnNamesForTimeOffset;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (CDUnknownBlockType)objectInsertionFilterForProfile:(id)arg1;
+ (long long)preferredEntityType;
+ (id)anySampleOfType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 error:(id *)arg5;
+ (id)sampleTypesForSamplesMatchingPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)populatedSampleTypes:(id)arg1 inDateInterval:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)timePeriodsForSampleTypes:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (long long)countOfSamplesWithType:(id)arg1 profile:(id)arg2 matchingPredicate:(id)arg3 withError:(id *)arg4;
+ (id)sourceIDsForSamplesWithType:(id)arg1 profile:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (id)entityEnumeratorWithType:(id)arg1 profile:(id)arg2;
+ (id)samplesWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 limit:(unsigned long long)arg5 anchor:(id *)arg6 error:(id *)arg7;
+ (_Bool)enumerateAssociatedObjectsForIdentifier:(long long)arg1 inDatabase:(id)arg2 error:(id *)arg3 associatedObjectHandler:(CDUnknownBlockType)arg4;
+ (void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 generateDeletedObjects:(_Bool)arg3 database:(id)arg4 profile:(id)arg5 recursiveDeleteAuthorizationBlock:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 generateDeletedObjects:(_Bool)arg3 profile:(id)arg4 recursiveDeleteAuthorizationBlock:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)deleteSamplesWithTypes:(id)arg1 sourceEntities:(id)arg2 profile:(id)arg3 recursiveDeleteAuthorizationBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)oldestSampleWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 error:(id *)arg5;
+ (id)mostRecentSampleWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 anchor:(id *)arg5 error:(id *)arg6;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (_Bool)requiresSampleTypePredicate;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (Class)_deletedEntityClass;
+ (id)indices;
+ (id)columnsDefinition;
+ (id)databaseTable;
- (id)_sampleTypeInDatabase:(id)arg1;

@end

