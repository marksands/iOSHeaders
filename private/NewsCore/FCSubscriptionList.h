//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCPrivateZoneController.h>

@class FCMutexLock, NSDictionary, NSMutableDictionary, NSSet;

@interface FCSubscriptionList : FCPrivateZoneController
{
    NSDictionary *_pendingSubscriptionsBySubscriptionID;
    NSSet *_subscribedTagIDs;
    NSSet *_mutedTagIDs;
    NSDictionary *_subscriptionsBySubscriptionID;
    NSMutableDictionary *_mutableSubscriptionsBySubscriptionID;
    FCMutexLock *_itemsLock;
}

+ (id)mutedSubscriptionIDForTagID:(id)arg1;
+ (id)subscriptionIDForUrl:(id)arg1;
+ (id)subscriptionIDForTagID:(id)arg1;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (_Bool)requiresHighPriorityFirstSync;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresPushNotificationSupport;
+ (id)desiredKeys;
@property(retain, nonatomic) FCMutexLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property(retain, nonatomic) NSMutableDictionary *mutableSubscriptionsBySubscriptionID; // @synthesize mutableSubscriptionsBySubscriptionID=_mutableSubscriptionsBySubscriptionID;
@property(copy, nonatomic) NSDictionary *subscriptionsBySubscriptionID; // @synthesize subscriptionsBySubscriptionID=_subscriptionsBySubscriptionID;
@property(copy, nonatomic) NSSet *mutedTagIDs; // @synthesize mutedTagIDs=_mutedTagIDs;
@property(copy, nonatomic) NSSet *subscribedTagIDs; // @synthesize subscribedTagIDs=_subscribedTagIDs;
@property(copy, nonatomic) NSDictionary *pendingSubscriptionsBySubscriptionID; // @synthesize pendingSubscriptionsBySubscriptionID=_pendingSubscriptionsBySubscriptionID;
- (void).cxx_destruct;
- (void)_regenerateSortedSubscriptions;
- (void)_localAddSubscriptions:(id)arg1 changeSubscriptions:(id)arg2 removeSubscriptions:(id)arg3 eventInitiationLevel:(long long)arg4;
- (id)_subscriptionFromRecord:(id)arg1;
- (void)_removeRemoteSubscription:(id)arg1;
- (void)_modifyRemoteSubscriptions:(id)arg1;
- (void)_addRemoteSubscriptions:(id)arg1;
- (void)removeMutedSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)addMutedSubscriptionForTagID:(id)arg1 groupID:(id)arg2 eventInitiationLevel:(long long)arg3;
- (_Bool)addMutedSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)hasMutedSubscriptionForTagID:(id)arg1;
- (void)modifyPendingSubscription:(id)arg1;
- (void)removePendingSubscription:(id)arg1;
- (void)addPendingSubscription:(id)arg1;
- (id)pendingSubscriptionForPollingURL:(id)arg1;
- (id)addSubscriptionForTagID:(id)arg1 replacingPendingSubscriptionWithPollingURL:(id)arg2 eventInitiationLevel:(long long)arg3;
- (_Bool)setNotificationsEnabled:(_Bool)arg1 forTagID:(id)arg2;
- (_Bool)hasNotificationsEnabledForTagID:(id)arg1;
- (id)addSubscriptionForTagID:(id)arg1 notificationsEnabled:(_Bool)arg2 eventInitiationLevel:(long long)arg3;
- (id)subscriptionForTagID:(id)arg1;
- (void)removeSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2;
- (id)addSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)hasSubscriptionForTagID:(id)arg1;
- (_Bool)canAddSubscription;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)loadLocalCachesFromStore;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4;

@end
