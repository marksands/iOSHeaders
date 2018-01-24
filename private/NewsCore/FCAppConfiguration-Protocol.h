//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFCopying.h"

@class FCCoverArticlesConfiguration, FCForYouGroupsConfiguration, FCIAdConfiguration, FCNotificationsConfiguration, FCPersonalizationTreatment, FCPrefetchConfiguration, FCTopStoriesConfiguration, NSArray, NSDictionary, NSNumber, NSString, NTPBTodayConfig, NTPBVideoGroupsConfig;

@protocol FCAppConfiguration <NFCopying>
@property(readonly, nonatomic) long long expirePinnedArticlesAfter;
@property(readonly, nonatomic) long long optionalTopStoriesRefreshRate;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property(readonly, copy, nonatomic) NTPBVideoGroupsConfig *forYouVideoGroupsConfig;
@property(readonly, nonatomic) _Bool diversifyOptionalTopStories;
@property(readonly, nonatomic) unsigned long long trendingStyle;
@property(readonly, nonatomic) long long minimumDurationBetweenTrendingGroupsWeekend;
@property(readonly, nonatomic) long long minimumDurationBetweenTrendingGroupsWeekday;
@property(readonly, nonatomic) long long minimumDurationBetweenForYouGroupsWeekend;
@property(readonly, nonatomic) long long minimumDurationBetweenForYouGroupsWeekday;
@property(readonly, nonatomic) double minimumTrendingUnseenRatio;
@property(readonly, copy, nonatomic) NSArray *topStoriesPublishDates;
@property(readonly, nonatomic) _Bool terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property(readonly, nonatomic) long long autoRefreshMinimumInterval;
@property(readonly, nonatomic) long long stateRestorationAllowedTimeWindow;
@property(readonly, nonatomic) _Bool usAndUKUseAUWhatsNewFeatures;
@property(readonly, nonatomic) _Bool useSecureConnectionForAssets;
@property(readonly, nonatomic) NSArray *mediaSharingBlacklistedChannelIDs;
@property(readonly, nonatomic) NSArray *externalAnalyticsConfigurations;
@property(readonly, nonatomic) NSString *exploreArticleID;
@property(readonly, nonatomic) _Bool corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(readonly, nonatomic) long long corryBarMaxArticleCountForSingleArticle;
@property(readonly, nonatomic) long long corryBarMaxArticleCountForArticleList;
@property(readonly, nonatomic) _Bool privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
@property(readonly, nonatomic, getter=isPrivateDataEncryptionMigrationDesired) _Bool privateDataEncryptionMigrationDesired;
@property(readonly, nonatomic, getter=isPrivateDataEncryptionAllowed) _Bool privateDataEncryptionAllowed;
@property(readonly, nonatomic) NSString *personalizationFavorabilityResourceId;
@property(readonly, nonatomic) NSString *personalizationWhitelistResourceId;
@property(readonly, nonatomic) NSString *personalizationUrlMappingResourceId;
@property(readonly, nonatomic) NSString *personalizationBundleIdMappingResourceId;
@property(readonly, nonatomic, getter=isOrderFeedEndpointEnabled) _Bool orderFeedEndpointEnabled;
@property(readonly, nonatomic) long long analyticsEndpointMaxPayloadSize;
@property(readonly, nonatomic) long long minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou;
@property(readonly, nonatomic) long long maximumNumberOfExpiredPaidSubscriptionGroups;
@property(readonly, nonatomic) long long expiredPaidSubscriptionGroupCutoffTime;
@property(readonly, nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;
@property(readonly, nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property(readonly, nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property(readonly, nonatomic) double articleDiversificationSimilarityExpectationStart;
@property(readonly, nonatomic) long long maximumTimesHeadlineInPaidSubscriptionGroup;
@property(readonly, nonatomic) long long maximumPaidSubscriptionGroupSizeiPhone;
@property(readonly, nonatomic) long long maximumPaidSubscriptionGroupSizeiPad;
@property(readonly, nonatomic) double parsecPopulationCeiling;
@property(readonly, nonatomic) double parsecPopulationFloor;
@property(readonly, nonatomic) FCForYouGroupsConfiguration *forYouGroupsConfiguration;
@property(readonly, nonatomic) _Bool universalLinksEnabled;
@property(readonly, nonatomic) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen;
@property(readonly, nonatomic) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
@property(readonly, nonatomic) NSString *widgetConfigID;
@property(readonly, nonatomic) NSString *embedConfigurationAssetID;
@property(readonly, nonatomic) NSString *forYouRecordConfigID;
@property(readonly, nonatomic) FCCoverArticlesConfiguration *coverArticlesConfig;
@property(readonly, nonatomic) long long savedArticlesOpenedCutoffTime;
@property(readonly, nonatomic) long long savedArticlesCutoffTime;
@property(readonly, nonatomic) long long savedArticlesMaximumCountCellular;
@property(readonly, nonatomic) long long savedArticlesMaximumCountWiFi;
@property(readonly, nonatomic) long long notificationEnabledChannelsRefreshFrequency;
@property(readonly, nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout;
@property(readonly, nonatomic) long long notificationArticleCacheTimeout;
@property(readonly, nonatomic) FCNotificationsConfiguration *notificationsConfig;
@property(readonly, nonatomic) long long endOfArticleMaxInaccessiblePaidArticleCount;
@property(readonly, nonatomic) double endOfArticleMinPaidHeadlineRatio;
@property(readonly, nonatomic) long long newFavoriteNotificationAlertsFrequency;
@property(readonly, nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds;
@property(readonly, nonatomic) long long subscriptionsPlacardGlobalMaximumPerDay;
@property(readonly, nonatomic) long long subscriptionsPlacardPublisherFrequencyInSeconds;
@property(readonly, nonatomic) long long subscriptionsGlobalMeteredCount;
@property(readonly, nonatomic) long long articleRapidUpdatesTimeout;
@property(readonly, nonatomic) long long trendingTopicsRefreshRate;
@property(readonly, nonatomic) long long appConfigRefreshRate;
@property(readonly, nonatomic) NSString *breakingNewsChannelID;
@property(readonly, nonatomic) NSString *savedStoriesTagID;
@property(readonly, nonatomic) NSString *featuredStoriesTagID;
@property(readonly, nonatomic) NSString *trendingTagID;
@property(readonly, nonatomic) NSString *briefingsTagID;
@property(readonly, nonatomic) NSString *editorialGemsSectionID;
@property(readonly, nonatomic) NSString *editorialChannelID;
@property(readonly, nonatomic) FCTopStoriesConfiguration *topStoriesConfig;
@property(readonly, nonatomic) FCPrefetchConfiguration *prefetchConfig;
@property(readonly, nonatomic) FCIAdConfiguration *iAdConfig;
@property(readonly, nonatomic) long long minimumDistanceBetweenImageOnTopTiles;
@property(readonly, nonatomic) double tileProminenceScoreBalanceValue;
@property(readonly, nonatomic) NSDictionary *endpointConfigsByEnvironment;
@property(readonly, nonatomic) double prerollLoadingTimeout;
@property(readonly, nonatomic) double interstitialAdLoadDelay;
@property(readonly, nonatomic) long long autoScrollToTopFeedTimeout;
@property(readonly, nonatomic) NSArray *recommendedCategories;
@property(readonly, nonatomic) NSArray *topLevelRecommendedChannelTagIDs;
@property(readonly, nonatomic) NSArray *topLevelRecommendedTopicTagIDs;
@property(readonly, nonatomic) NSArray *topLevelCuratedTagIDs;
@property(readonly, nonatomic) NSArray *presubscribedFeedIDs;
@property(readonly, nonatomic) NSArray *onboardingFeedIDs;
@property(readonly, nonatomic) NSArray *hiddenFeedIDs;
@property(readonly, nonatomic) NSNumber *currentTreatment;
@property(readonly, nonatomic) NSString *experimentalizableFieldPostfix;
- (FCPersonalizationTreatment *)personalizationTreatmentForFeldsparID:(NSString *)arg1;
- (NTPBTodayConfig *)todayConfigWithQueueConfigs:(NSArray *)arg1 maxSlotCount:(unsigned long long)arg2;
- (NSDictionary *)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;
@end

