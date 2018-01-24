//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, NTPBCategory, NTPBCoverArticlesConfig, NTPBTopStoriesConfig;

@interface NTPBLanguageConfig : PBCodable <NSCopying>
{
    NSString *_appleEditorialChannelId;
    NSString *_breakingNewsChannelId;
    NSString *_briefingsTagId;
    NTPBCoverArticlesConfig *_coverArticlesConfig;
    NSString *_editorialGemsSectionId;
    NSString *_exploreArticleId;
    NSString *_featuredStoriesTagId;
    NSString *_forYouConfigId;
    NSString *_hiddenFeedId;
    NSString *_languageTag;
    NSMutableArray *_mediaSharingBlacklistedChannelIds;
    NSMutableArray *_onboardingTagIds;
    NSMutableArray *_preSubscribedFeedIds;
    NSMutableArray *_preSubscribedNotificationsChannelIds;
    NSMutableArray *_recommendedNotificationChannels;
    NTPBCategory *_rootCategory;
    NSString *_savedStoriesTagId;
    NSString *_specialEventsChannelId;
    NTPBTopStoriesConfig *_topStoriesConfig;
    NSString *_trendingTagId;
    NSString *_widgetSectionConfigId;
}

+ (Class)mediaSharingBlacklistedChannelIdsType;
+ (Class)recommendedNotificationChannelsType;
+ (Class)preSubscribedNotificationsChannelIdsType;
+ (Class)onboardingTagIdsType;
+ (Class)preSubscribedFeedIdsType;
@property(retain, nonatomic) NSString *specialEventsChannelId; // @synthesize specialEventsChannelId=_specialEventsChannelId;
@property(retain, nonatomic) NSMutableArray *mediaSharingBlacklistedChannelIds; // @synthesize mediaSharingBlacklistedChannelIds=_mediaSharingBlacklistedChannelIds;
@property(retain, nonatomic) NSString *breakingNewsChannelId; // @synthesize breakingNewsChannelId=_breakingNewsChannelId;
@property(retain, nonatomic) NSString *exploreArticleId; // @synthesize exploreArticleId=_exploreArticleId;
@property(retain, nonatomic) NSString *editorialGemsSectionId; // @synthesize editorialGemsSectionId=_editorialGemsSectionId;
@property(retain, nonatomic) NSString *widgetSectionConfigId; // @synthesize widgetSectionConfigId=_widgetSectionConfigId;
@property(retain, nonatomic) NSString *savedStoriesTagId; // @synthesize savedStoriesTagId=_savedStoriesTagId;
@property(retain, nonatomic) NSString *featuredStoriesTagId; // @synthesize featuredStoriesTagId=_featuredStoriesTagId;
@property(retain, nonatomic) NSString *trendingTagId; // @synthesize trendingTagId=_trendingTagId;
@property(retain, nonatomic) NSString *briefingsTagId; // @synthesize briefingsTagId=_briefingsTagId;
@property(retain, nonatomic) NSString *forYouConfigId; // @synthesize forYouConfigId=_forYouConfigId;
@property(retain, nonatomic) NSString *appleEditorialChannelId; // @synthesize appleEditorialChannelId=_appleEditorialChannelId;
@property(retain, nonatomic) NTPBCoverArticlesConfig *coverArticlesConfig; // @synthesize coverArticlesConfig=_coverArticlesConfig;
@property(retain, nonatomic) NSMutableArray *recommendedNotificationChannels; // @synthesize recommendedNotificationChannels=_recommendedNotificationChannels;
@property(retain, nonatomic) NSMutableArray *preSubscribedNotificationsChannelIds; // @synthesize preSubscribedNotificationsChannelIds=_preSubscribedNotificationsChannelIds;
@property(retain, nonatomic) NTPBTopStoriesConfig *topStoriesConfig; // @synthesize topStoriesConfig=_topStoriesConfig;
@property(retain, nonatomic) NSMutableArray *onboardingTagIds; // @synthesize onboardingTagIds=_onboardingTagIds;
@property(retain, nonatomic) NSMutableArray *preSubscribedFeedIds; // @synthesize preSubscribedFeedIds=_preSubscribedFeedIds;
@property(retain, nonatomic) NTPBCategory *rootCategory; // @synthesize rootCategory=_rootCategory;
@property(retain, nonatomic) NSString *hiddenFeedId; // @synthesize hiddenFeedId=_hiddenFeedId;
@property(retain, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSpecialEventsChannelId;
- (id)mediaSharingBlacklistedChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaSharingBlacklistedChannelIdsCount;
- (void)addMediaSharingBlacklistedChannelIds:(id)arg1;
- (void)clearMediaSharingBlacklistedChannelIds;
@property(readonly, nonatomic) _Bool hasBreakingNewsChannelId;
@property(readonly, nonatomic) _Bool hasExploreArticleId;
@property(readonly, nonatomic) _Bool hasEditorialGemsSectionId;
@property(readonly, nonatomic) _Bool hasWidgetSectionConfigId;
@property(readonly, nonatomic) _Bool hasSavedStoriesTagId;
@property(readonly, nonatomic) _Bool hasFeaturedStoriesTagId;
@property(readonly, nonatomic) _Bool hasTrendingTagId;
@property(readonly, nonatomic) _Bool hasBriefingsTagId;
@property(readonly, nonatomic) _Bool hasForYouConfigId;
@property(readonly, nonatomic) _Bool hasAppleEditorialChannelId;
@property(readonly, nonatomic) _Bool hasCoverArticlesConfig;
- (id)recommendedNotificationChannelsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedNotificationChannelsCount;
- (void)addRecommendedNotificationChannels:(id)arg1;
- (void)clearRecommendedNotificationChannels;
- (id)preSubscribedNotificationsChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)preSubscribedNotificationsChannelIdsCount;
- (void)addPreSubscribedNotificationsChannelIds:(id)arg1;
- (void)clearPreSubscribedNotificationsChannelIds;
@property(readonly, nonatomic) _Bool hasTopStoriesConfig;
- (id)onboardingTagIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)onboardingTagIdsCount;
- (void)addOnboardingTagIds:(id)arg1;
- (void)clearOnboardingTagIds;
- (id)preSubscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)preSubscribedFeedIdsCount;
- (void)addPreSubscribedFeedIds:(id)arg1;
- (void)clearPreSubscribedFeedIds;
@property(readonly, nonatomic) _Bool hasRootCategory;
@property(readonly, nonatomic) _Bool hasHiddenFeedId;
@property(readonly, nonatomic) _Bool hasLanguageTag;

@end

