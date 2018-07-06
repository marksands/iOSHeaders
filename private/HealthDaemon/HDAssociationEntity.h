//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDAssociationEntity : HDHealthEntity
{
}

+ (_Bool)_enumerateAssociationsWithPredicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4 lastSyncAnchor:(long long *)arg5 healthDatabase:(id)arg6 error:(id *)arg7 block:(CDUnknownBlockType)arg8;
+ (id)deleteStatementForObjectAssociationsWithDatabase:(id)arg1;
+ (id)deleteStatementForAssociationWithDatabase:(id)arg1;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)realizePendingAssociationsWithDatabase:(id)arg1 error:(id *)arg2;
+ (_Bool)_insertPendingAssociationsForParentUUID:(id)arg1 childUUIDData:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (_Bool)_insertAssociationEntryWithAssociationID:(long long)arg1 objectID:(long long)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (_Bool)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(_Bool)arg4 permitPendingAssociations:(_Bool)arg5 profile:(id)arg6 error:(id *)arg7;
+ (_Bool)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 context:(id)arg4 error:(id *)arg5;
+ (id)journalEntryForAssociation:(id)arg1 objects:(id)arg2;
+ (_Bool)_insertPendingAssociationForParentUUID:(id)arg1 childUUIDBytes:(unsigned char [16])arg2 provenance:(long long)arg3 database:(id)arg4 error:(id *)arg5;
+ (_Bool)copyAssociationsFromObjectID:(id)arg1 toObjectID:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)copyAssociationsFromObject:(id)arg1 toObject:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(_Bool)arg3 profile:(id)arg4 database:(id)arg5 error:(id *)arg6;
+ (_Bool)associateSampleUUIDData:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)privateSubEntities;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)indices;
+ (id)uniquedColumns;
+ (id)columnsDefinition;
+ (id)tableAliases;
+ (id)databaseTable;

@end

