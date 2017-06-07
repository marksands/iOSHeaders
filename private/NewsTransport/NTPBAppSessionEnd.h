//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBAppSessionEnd : PBCodable <NSCopying>
{
    long long _appSessionDuration;
    NSMutableArray *_autoSubscribedFeedIds;
    int _channelSubscriptionCount;
    NSMutableArray *_groupableFeedIds;
    NSMutableArray *_lastVisibleViews;
    NSMutableArray *_notificationChannelIds;
    int _notificationEnabledChannelsCount;
    int _notitificationsEnabledChannelsCount;
    NSMutableArray *_paidSubscriptionChannelIds;
    int _sessionEndReason;
    NSMutableArray *_subscribedFeedIds;
    int _topicSubscriptionCount;
    _Bool _breakingNewsAvailableDuringSession;
    _Bool _breakingNewsDismissedDuringSession;
    struct {
        unsigned int appSessionDuration:1;
        unsigned int channelSubscriptionCount:1;
        unsigned int notificationEnabledChannelsCount:1;
        unsigned int notitificationsEnabledChannelsCount:1;
        unsigned int sessionEndReason:1;
        unsigned int topicSubscriptionCount:1;
        unsigned int breakingNewsAvailableDuringSession:1;
        unsigned int breakingNewsDismissedDuringSession:1;
    } _has;
}

+ (Class)groupableFeedIdsType;
+ (Class)autoSubscribedFeedIdsType;
+ (Class)subscribedFeedIdsType;
+ (Class)notificationChannelIdsType;
+ (Class)paidSubscriptionChannelIdsType;
+ (Class)lastVisibleViewsType;
@property(retain, nonatomic) NSMutableArray *groupableFeedIds; // @synthesize groupableFeedIds=_groupableFeedIds;
@property(retain, nonatomic) NSMutableArray *autoSubscribedFeedIds; // @synthesize autoSubscribedFeedIds=_autoSubscribedFeedIds;
@property(nonatomic) _Bool breakingNewsDismissedDuringSession; // @synthesize breakingNewsDismissedDuringSession=_breakingNewsDismissedDuringSession;
@property(nonatomic) _Bool breakingNewsAvailableDuringSession; // @synthesize breakingNewsAvailableDuringSession=_breakingNewsAvailableDuringSession;
@property(retain, nonatomic) NSMutableArray *subscribedFeedIds; // @synthesize subscribedFeedIds=_subscribedFeedIds;
@property(nonatomic) int notificationEnabledChannelsCount; // @synthesize notificationEnabledChannelsCount=_notificationEnabledChannelsCount;
@property(retain, nonatomic) NSMutableArray *notificationChannelIds; // @synthesize notificationChannelIds=_notificationChannelIds;
@property(nonatomic) int notitificationsEnabledChannelsCount; // @synthesize notitificationsEnabledChannelsCount=_notitificationsEnabledChannelsCount;
@property(retain, nonatomic) NSMutableArray *paidSubscriptionChannelIds; // @synthesize paidSubscriptionChannelIds=_paidSubscriptionChannelIds;
@property(nonatomic) long long appSessionDuration; // @synthesize appSessionDuration=_appSessionDuration;
@property(nonatomic) int topicSubscriptionCount; // @synthesize topicSubscriptionCount=_topicSubscriptionCount;
@property(nonatomic) int channelSubscriptionCount; // @synthesize channelSubscriptionCount=_channelSubscriptionCount;
@property(retain, nonatomic) NSMutableArray *lastVisibleViews; // @synthesize lastVisibleViews=_lastVisibleViews;
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
@property(nonatomic) _Bool hasBreakingNewsDismissedDuringSession;
@property(nonatomic) _Bool hasBreakingNewsAvailableDuringSession;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subscribedFeedIdsCount;
- (void)addSubscribedFeedIds:(id)arg1;
- (void)clearSubscribedFeedIds;
@property(nonatomic) _Bool hasNotificationEnabledChannelsCount;
- (id)notificationChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)notificationChannelIdsCount;
- (void)addNotificationChannelIds:(id)arg1;
- (void)clearNotificationChannelIds;
@property(nonatomic) _Bool hasNotitificationsEnabledChannelsCount;
- (id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paidSubscriptionChannelIdsCount;
- (void)addPaidSubscriptionChannelIds:(id)arg1;
- (void)clearPaidSubscriptionChannelIds;
@property(nonatomic) _Bool hasAppSessionDuration;
@property(nonatomic) _Bool hasTopicSubscriptionCount;
@property(nonatomic) _Bool hasChannelSubscriptionCount;
- (id)lastVisibleViewsAtIndex:(unsigned long long)arg1;
- (unsigned long long)lastVisibleViewsCount;
- (void)addLastVisibleViews:(id)arg1;
- (void)clearLastVisibleViews;
@property(nonatomic) _Bool hasSessionEndReason;
@property(nonatomic) int sessionEndReason; // @synthesize sessionEndReason=_sessionEndReason;

@end

