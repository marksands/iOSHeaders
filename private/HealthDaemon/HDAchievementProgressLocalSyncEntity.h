//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDKeyValueSyncEntity.h>

@interface HDAchievementProgressLocalSyncEntity : HDKeyValueSyncEntity
{
}

+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)_mergedValuesForInsertionForPairs:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)syncEntityIdentifier;
+ (long long)category;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

@end

