//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDSampleEntity.h>

@interface HDQuantitySampleEntity : HDSampleEntity
{
}

+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (_Bool)enumerateOrderedQuantityValuesForPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;

@end

