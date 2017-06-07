//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NTPBWidgetEngagement;

@interface NTPBAppSessionStart : PBCodable <NSCopying>
{
    long long _lastAppSessionTimestamp;
    NSMutableArray *_autoSubscribedFeedIds;
    NSString *_campaignId;
    NSString *_campaignType;
    int _channelSubscriptionCount;
    NSString *_creativeId;
    NSMutableArray *_groupableFeedIds;
    NSString *_notificationArticleId;
    NSMutableArray *_notificationChannelIds;
    int _notificationEnabledChannelsCount;
    NSString *_notificationId;
    NSString *_notificationSenderChannelId;
    NSString *_notificationSourceChannelId;
    int _notitificationsEnabledChannelsCount;
    NSMutableArray *_paidSubscriptionChannelIds;
    NSString *_referringSourceApplication;
    NSString *_referringUrl;
    int _sessionStartMethod;
    NSMutableArray *_subscribedFeedIds;
    int _topicSubscriptionCount;
    NSString *_userActivityType;
    NSMutableArray *_visibleViews;
    int _widgetArticleRank;
    NTPBWidgetEngagement *_widgetEngagement;
    int _widgetSection;
    int _widgetSectionArticleRank;
    _Bool _startedFromNotification;
    struct {
        unsigned int lastAppSessionTimestamp:1;
        unsigned int channelSubscriptionCount:1;
        unsigned int notificationEnabledChannelsCount:1;
        unsigned int notitificationsEnabledChannelsCount:1;
        unsigned int sessionStartMethod:1;
        unsigned int topicSubscriptionCount:1;
        unsigned int widgetArticleRank:1;
        unsigned int widgetSection:1;
        unsigned int widgetSectionArticleRank:1;
        unsigned int startedFromNotification:1;
    } _has;
}

+ (Class)groupableFeedIdsType;
+ (Class)autoSubscribedFeedIdsType;
+ (Class)subscribedFeedIdsType;
+ (Class)notificationChannelIdsType;
+ (Class)paidSubscriptionChannelIdsType;
+ (Class)visibleViewsType;
@property(retain, nonatomic) NSMutableArray *groupableFeedIds; // @synthesize groupableFeedIds=_groupableFeedIds;
@property(retain, nonatomic) NSMutableArray *autoSubscribedFeedIds; // @synthesize autoSubscribedFeedIds=_autoSubscribedFeedIds;
@property(retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(nonatomic) int widgetArticleRank; // @synthesize widgetArticleRank=_widgetArticleRank;
@property(nonatomic) int widgetSectionArticleRank; // @synthesize widgetSectionArticleRank=_widgetSectionArticleRank;
@property(retain, nonatomic) NSMutableArray *subscribedFeedIds; // @synthesize subscribedFeedIds=_subscribedFeedIds;
@property(nonatomic) int notificationEnabledChannelsCount; // @synthesize notificationEnabledChannelsCount=_notificationEnabledChannelsCount;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *notificationArticleId; // @synthesize notificationArticleId=_notificationArticleId;
@property(retain, nonatomic) NSMutableArray *notificationChannelIds; // @synthesize notificationChannelIds=_notificationChannelIds;
@property(nonatomic) int notitificationsEnabledChannelsCount; // @synthesize notitificationsEnabledChannelsCount=_notitificationsEnabledChannelsCount;
@property(retain, nonatomic) NSString *notificationSourceChannelId; // @synthesize notificationSourceChannelId=_notificationSourceChannelId;
@property(retain, nonatomic) NSString *notificationSenderChannelId; // @synthesize notificationSenderChannelId=_notificationSenderChannelId;
@property(retain, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
@property(nonatomic) _Bool startedFromNotification; // @synthesize startedFromNotification=_startedFromNotification;
@property(retain, nonatomic) NSMutableArray *paidSubscriptionChannelIds; // @synthesize paidSubscriptionChannelIds=_paidSubscriptionChannelIds;
@property(retain, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
@property(retain, nonatomic) NSString *referringUrl; // @synthesize referringUrl=_referringUrl;
@property(retain, nonatomic) NSString *referringSourceApplication; // @synthesize referringSourceApplication=_referringSourceApplication;
@property(nonatomic) int topicSubscriptionCount; // @synthesize topicSubscriptionCount=_topicSubscriptionCount;
@property(nonatomic) int channelSubscriptionCount; // @synthesize channelSubscriptionCount=_channelSubscriptionCount;
@property(retain, nonatomic) NSMutableArray *visibleViews; // @synthesize visibleViews=_visibleViews;
@property(nonatomic) long long lastAppSessionTimestamp; // @synthesize lastAppSessionTimestamp=_lastAppSessionTimestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)groupableFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupableFeedIdsCount;
- (void)addGroupableFeedIds:(id)arg1;
- (void)clearGroupableFeedIds;
- (id)autoSubscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)autoSubscribedFeedIdsCount;
- (void)addAutoSubscribedFeedIds:(id)arg1;
- (void)clearAutoSubscribedFeedIds;
@property(readonly, nonatomic) _Bool hasWidgetEngagement;
@property(nonatomic) _Bool hasWidgetArticleRank;
@property(nonatomic) _Bool hasWidgetSectionArticleRank;
- (int)StringAsWidgetSection:(id)arg1;
- (id)widgetSectionAsString:(int)arg1;
@property(nonatomic) _Bool hasWidgetSection;
@property(nonatomic) int widgetSection; // @synthesize widgetSection=_widgetSection;
@property(nonatomic) _Bool hasSessionStartMethod;
@property(nonatomic) int sessionStartMethod; // @synthesize sessionStartMethod=_sessionStartMethod;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subscribedFeedIdsCount;
- (void)addSubscribedFeedIds:(id)arg1;
- (void)clearSubscribedFeedIds;
@property(nonatomic) _Bool hasNotificationEnabledChannelsCount;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(readonly, nonatomic) _Bool hasNotificationArticleId;
- (id)notificationChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)notificationChannelIdsCount;
- (void)addNotificationChannelIds:(id)arg1;
- (void)clearNotificationChannelIds;
@property(nonatomic) _Bool hasNotitificationsEnabledChannelsCount;
@property(readonly, nonatomic) _Bool hasNotificationSourceChannelId;
@property(readonly, nonatomic) _Bool hasNotificationSenderChannelId;
@property(readonly, nonatomic) _Bool hasNotificationId;
@property(nonatomic) _Bool hasStartedFromNotification;
- (id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paidSubscriptionChannelIdsCount;
- (void)addPaidSubscriptionChannelIds:(id)arg1;
- (void)clearPaidSubscriptionChannelIds;
@property(readonly, nonatomic) _Bool hasUserActivityType;
@property(readonly, nonatomic) _Bool hasReferringUrl;
@property(readonly, nonatomic) _Bool hasReferringSourceApplication;
@property(nonatomic) _Bool hasTopicSubscriptionCount;
@property(nonatomic) _Bool hasChannelSubscriptionCount;
- (id)visibleViewsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleViewsCount;
- (void)addVisibleViews:(id)arg1;
- (void)clearVisibleViews;
@property(nonatomic) _Bool hasLastAppSessionTimestamp;

@end

