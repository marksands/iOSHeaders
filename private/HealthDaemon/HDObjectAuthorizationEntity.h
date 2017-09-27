//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDObjectAuthorizationEntity : HDHealthEntity
{
}

+ (id)authorizationRecordsBySourceForSampleWithUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)authorizationRecordsForSamples:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)authorizationStatusForSamplesOfType:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)_insertCodableObjectAuthorizations:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)resetAuthorizationForObjects:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)resetAllObjectAuthorizationRecordsForProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)resetObjectAuthorizationRecordsForSource:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)_setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 skipErrors:(_Bool)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)propertyForSyncProvenance;
+ (id)uniquedColumns;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (long long)protectionClass;

@end

