//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDKeyValueSyncEntity.h>

@interface HDAchievementProgressLocalSyncEntity : HDKeyValueSyncEntity
{
}

+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)_mergedValuesForInsertionForPairs:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (long long)syncEntityType;
+ (long long)category;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

@end

