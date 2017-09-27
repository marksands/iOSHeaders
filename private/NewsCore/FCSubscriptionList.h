//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCPrivateDataController.h>

@class FCMTWriterMutexLock, NSDictionary, NSMutableDictionary, NSSet;

@interface FCSubscriptionList : FCPrivateDataController
{
    NSSet *_subscribedTagIDs;
    NSSet *_mutedTagIDs;
    NSSet *_autoFavoriteTagIDs;
    NSSet *_groupableTagIDs;
    NSSet *_ignoredTagIDs;
    NSSet *_allSubscribedTagIDs;
    NSDictionary *_subscriptionsBySubscriptionID;
    NSMutableDictionary *_mutableSubscriptionsBySubscriptionID;
    FCMTWriterMutexLock *_itemsLock;
}

+ (id)subscriptionIDForTagID:(id)arg1 type:(unsigned long long)arg2;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (_Bool)requiresHighPriorityFirstSync;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresPushNotificationSupport;
+ (id)desiredKeys;
@property(retain, nonatomic) FCMTWriterMutexLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property(retain, nonatomic) NSMutableDictionary *mutableSubscriptionsBySubscriptionID; // @synthesize mutableSubscriptionsBySubscriptionID=_mutableSubscriptionsBySubscriptionID;
@property(copy, nonatomic) NSDictionary *subscriptionsBySubscriptionID; // @synthesize subscriptionsBySubscriptionID=_subscriptionsBySubscriptionID;
@property(copy, nonatomic) NSSet *allSubscribedTagIDs; // @synthesize allSubscribedTagIDs=_allSubscribedTagIDs;
@property(copy, nonatomic) NSSet *ignoredTagIDs; // @synthesize ignoredTagIDs=_ignoredTagIDs;
@property(copy, nonatomic) NSSet *groupableTagIDs; // @synthesize groupableTagIDs=_groupableTagIDs;
@property(copy, nonatomic) NSSet *autoFavoriteTagIDs; // @synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs;
@property(copy, nonatomic) NSSet *mutedTagIDs; // @synthesize mutedTagIDs=_mutedTagIDs;
@property(copy, nonatomic) NSSet *subscribedTagIDs; // @synthesize subscribedTagIDs=_subscribedTagIDs;
- (void).cxx_destruct;
- (unsigned long long)_preferredZoneForSubscriptionType:(unsigned long long)arg1;
- (id)t_reconcileSubscriptions:(id)arg1;
- (id)_reconcileSubscriptions:(id)arg1;
- (void)_regenerateSortedSubscriptions;
- (void)_localAddSubscriptions:(id)arg1 changeSubscriptions:(id)arg2 removeSubscriptions:(id)arg3 eventInitiationLevel:(long long)arg4;
- (id)_subscriptionFromRecord:(id)arg1;
- (void)_removeRemoteSubscription:(id)arg1;
- (void)_removeRemoteSubscriptions:(id)arg1;
- (void)_modifyRemoteSubscriptions:(id)arg1;
- (void)_addRemoteSubscriptions:(id)arg1;
- (_Bool)hasIgnoredSubscriptionForTagID:(id)arg1;
- (_Bool)hasMutedSubscriptionForTagID:(id)arg1;
- (_Bool)setNotificationsEnabled:(_Bool)arg1 forTagID:(id)arg2;
- (_Bool)hasNotificationsEnabledForTagID:(id)arg1;
- (id)subscriptionForTagID:(id)arg1;
- (id)subscriptionForTagIDOfAnyType:(id)arg1;
- (id)subscriptionForTagID:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)hasSubscriptionForTagID:(id)arg1;
- (_Bool)canAddSubscription;
- (id)subscriptionsForType:(unsigned long long)arg1;
- (void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (void)removeSubscriptionsForTagIDs:(id)arg1 typeProvider:(CDUnknownBlockType)arg2 eventInitiationLevel:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (_Bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 eventInitiationLevel:(long long)arg4;
- (void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(CDUnknownBlockType)arg2 originProvider:(CDUnknownBlockType)arg3 eventInitiationLevelProvider:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 eventInitiationLevel:(long long)arg5;
- (_Bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 notificationsEnabled:(_Bool)arg5 eventInitiationLevel:(long long)arg6;
- (void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(CDUnknownBlockType)arg2 originProvider:(CDUnknownBlockType)arg3 groupID:(id)arg4 notificationsEnabled:(_Bool)arg5 eventInitiationLevelProvider:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (id)subscriptionsForTagID:(id)arg1 type:(unsigned long long)arg2 originProvider:(CDUnknownBlockType)arg3 groupID:(id)arg4 notificationsEnabled:(_Bool)arg5;
- (id)recordsForRestoringZoneName:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)loadLocalCachesFromStore;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;

@end

