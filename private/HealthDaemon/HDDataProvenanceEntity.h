//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataProvenanceEntity : HDHealthEntity
{
}

+ (id)originProvenanceForPersistentID:(long long)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)insertOrLookupDataProvenanceForSyncProvenance:(long long)arg1 originProductType:(id)arg2 originSystemBuild:(id)arg3 originOSVersion:(CDStruct_f6aba300)arg4 localProductType:(id)arg5 localSystemBuild:(id)arg6 sourceVersion:(id)arg7 timeZoneName:(id)arg8 sourceID:(id)arg9 deviceID:(id)arg10 database:(id)arg11 error:(id *)arg12;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)columnsDefinition;
+ (id)databaseTable;

@end

