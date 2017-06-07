//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSourceEntity : HDHealthEntity
{
}

+ (id)predicateForAppleWatchSources;
+ (id)defaultOrderedSourceEntitiesWithProfile:(id)arg1 error:(id *)arg2;
+ (id)_allSourcesWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_allSourcesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)sourceEntitiesWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)sourceForLocalDeviceWithDatabase:(id)arg1 error:(id *)arg2;
+ (id)sourceWithUUID:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)sourceWithUUID:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)localSourceForBundleIdentifier:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)localSourceForBundleIdentifier:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)allSourcesWithBundleIdentifier:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)allSourcesWithBundleIdentifier:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)_insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(_Bool)arg5 productType:(id)arg6 deleted:(_Bool)arg7 modificationDate:(id)arg8 provenance:(long long)arg9 database:(id)arg10 error:(id *)arg11;
+ (id)insertCodableSource:(id)arg1 provenance:(long long)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (id)insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(_Bool)arg5 productType:(id)arg6 modificationDate:(id)arg7 provenance:(long long)arg8 healthDatabase:(id)arg9 error:(id *)arg10;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (long long)protectionClass;
+ (id)indices;
+ (id)columnsDefinition;
+ (id)databaseTable;
- (_Bool)deleteSourceWithDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)setBundleIdentifier:(id)arg1 UUID:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
- (_Bool)setName:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
- (id)sourceUUIDWithHealthDatabase:(id)arg1 error:(id *)arg2;
- (id)sourceBundleIdentifierInHealthDatabase:(id)arg1 error:(id *)arg2;
- (id)codableSourceWithEncoder:(id)arg1 error:(id *)arg2;
- (id)sourceWithProfile:(id)arg1 error:(id *)arg2;

@end

