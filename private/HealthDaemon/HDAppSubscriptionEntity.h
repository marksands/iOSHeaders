//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionEntity : HDHealthEntity
{
}

+ (id)uniquedColumns;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)tableAliases;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)_predicateForBundleIdentifier:(id)arg1;
+ (id)_predicateForDataCode:(long long)arg1;
+ (id)_predicateForBundleID:(id)arg1 dataCode:(long long)arg2;
+ (id)_subscriptionsWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)setLaunchTimeHysteresis:(id)arg1 forBundleID:(id)arg2 dataCode:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)setLastAnchor:(id)arg1 lastAckTime:(id)arg2 forBundleID:(id)arg3 dataCode:(long long)arg4 profile:(id)arg5 error:(id *)arg6;
+ (id)subscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)allSubscriptionsForBundleID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)allSubscriptionsForType:(long long)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)removeSubscriptionsWithBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)addSubscriptionWithBundleID:(id)arg1 dataCode:(long long)arg2 updateFrequency:(unsigned long long)arg3 profile:(id)arg4 error:(id *)arg5;

@end

