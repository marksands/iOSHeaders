//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSharingSetupEntity : HDHealthEntity
{
}

+ (_Bool)enumerateSharesWithProfile:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)_sampleTypesForSetupWithPersistentID:(long long)arg1 database:(id)arg2 error:(id *)arg3;
+ (_Bool)createShareWithProfile:(id)arg1 identifier:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (id)privateSubEntities;
+ (long long)protectionClass;
+ (id)columnsDefinition;
+ (id)databaseTable;

@end

