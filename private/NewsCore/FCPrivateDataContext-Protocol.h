//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCKeyValueStore, FCNetworkBehaviorMonitor, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCTagSettings, FCUserInfo, NSString;
@protocol FCPrivateDataContextInternal, FCPushNotificationHandling;

@protocol FCPrivateDataContext <NSObject>
@property(readonly, nonatomic) id <FCPrivateDataContextInternal> internalPrivateDataContext;
@property(readonly, copy, nonatomic) NSString *privateDataDirectory;
@property(readonly, nonatomic, getter=isABTestingEnabled) _Bool abTestingEnabled;
@property(readonly, nonatomic, getter=isPersonalizationEnabled) _Bool personalizationEnabled;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
@property(readonly, nonatomic) id <FCPushNotificationHandling> privatePushNotificationHandler;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property(readonly, nonatomic) FCTagSettings *tagSettings;
@property(readonly, nonatomic) FCUserInfo *userInfo;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList;
@property(readonly, nonatomic) FCReadingList *readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory;
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property(readonly, nonatomic) FCPersonalizationData *personalizationData;
- (FCKeyValueStore *)privateStoreWithName:(NSString *)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
@end

