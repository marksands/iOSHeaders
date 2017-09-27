//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCAppConfiguration.h"

@class FCAppConfigurationResource, FCAsyncSerialQueue, FCCKContentDatabase, FCCoverArticlesConfiguration, FCForYouGroupsConfiguration, FCIAdConfiguration, FCKeyValueStore, FCNotificationsConfiguration, FCPrefetchConfiguration, FCRecommendedCategory, FCTopStoriesConfiguration, NSArray, NSDictionary, NSHashTable, NSMutableArray, NSNumber, NSObject<OS_dispatch_queue>, NSSet, NSString, NSURL, NTPBPersonalizationConfig, NTPBPersonalizationTreatment, NTPBWidgetConfig;

@interface FCAppConfigurationManager : NSObject <FCAppConfiguration>
{
    _Bool _universalLinksEnabled;
    _Bool _orderFeedEndpointEnabled;
    _Bool _privateDataEncryptionAllowed;
    _Bool _privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
    _Bool _corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
    _Bool _useSecureConnectionForAssets;
    _Bool _usAndUKUseAUWhatsNewFeatures;
    _Bool _terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
    _Bool _articleSearchEnabled;
    _Bool _attemptedAppConfigFetch;
    _Bool _privateDataEncryptionMigrationDesired;
    unsigned int _widgetMinimumNumberOfTimesPreseenToBeSeen;
    NSArray *_availableExperiments;
    NSString *_experimentalizableFieldPostfix;
    NSNumber *_currentModdedBucketID;
    NSNumber *_currentTreatment;
    NSArray *_hiddenFeedIDs;
    NSArray *_onboardingFeedIDs;
    NSArray *_presubscribedFeedIDs;
    NSArray *_topLevelCuratedTagIDs;
    NSArray *_topLevelRecommendedTopicTagIDs;
    NSArray *_topLevelRecommendedChannelTagIDs;
    NSArray *_recommendedCategories;
    long long _autoScrollToTopFeedTimeout;
    long long _timeBetweenWidgetInsertions;
    long long _timeBetweenSameWidgetReinsertion;
    long long _numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
    double _interstitialAdLoadDelay;
    double _prerollLoadingTimeout;
    NSDictionary *_endpointConfigsByEnvironment;
    double _tileProminenceScoreBalanceValue;
    long long _minimumDistanceBetweenImageOnTopTiles;
    FCIAdConfiguration *_iAdConfig;
    FCPrefetchConfiguration *_prefetchConfig;
    FCTopStoriesConfiguration *_topStoriesConfig;
    NSString *_editorialChannelID;
    NSString *_editorialGemsSectionID;
    NSString *_briefingsTagID;
    NSString *_trendingTagID;
    NSString *_featuredStoriesTagID;
    NSString *_savedStoriesTagID;
    NSString *_breakingNewsChannelID;
    long long _appConfigRefreshRate;
    long long _trendingTopicsRefreshRate;
    NSArray *_trendingTopics;
    long long _articleRapidUpdatesTimeout;
    long long _subscriptionsGlobalMeteredCount;
    long long _subscriptionsPlacardPublisherFrequencyInSeconds;
    long long _subscriptionsPlacardGlobalMaximumPerDay;
    long long _subscriptionsGracePeriodForTokenVerificationSeconds;
    long long _newFavoriteNotificationAlertsFrequency;
    double _endOfArticleMinPaidHeadlineRatio;
    long long _endOfArticleMaxInaccessiblePaidArticleCount;
    FCNotificationsConfiguration *_notificationsConfig;
    long long _notificationArticleCacheTimeout;
    long long _notificationArticleWithRapidUpdatesCacheTimeout;
    long long _notificationEnabledChannelsRefreshFrequency;
    long long _savedArticlesMaximumCountWiFi;
    long long _savedArticlesMaximumCountCellular;
    long long _savedArticlesCutoffTime;
    long long _savedArticlesOpenedCutoffTime;
    FCCoverArticlesConfiguration *_coverArticlesConfig;
    NSString *_forYouRecordConfigID;
    NSString *_embedConfigurationAssetID;
    NSString *_widgetConfigID;
    long long _widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
    FCForYouGroupsConfiguration *_forYouGroupsConfiguration;
    double _parsecPopulationFloor;
    double _parsecPopulationCeiling;
    long long _maximumPaidSubscriptionGroupSizeiPad;
    long long _maximumPaidSubscriptionGroupSizeiPhone;
    long long _maximumTimesHeadlineInPaidSubscriptionGroup;
    double _articleDiversificationSimilarityExpectationStart;
    double _articleDiversificationSimilarityExpectationEnd;
    double _articleDiversificationUniquePublisherExpectationSlope;
    double _articleDiversificationUniquePublisherExpectationYIntercept;
    long long _expiredPaidSubscriptionGroupCutoffTime;
    long long _maximumNumberOfExpiredPaidSubscriptionGroups;
    long long _minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou;
    long long _analyticsEndpointMaxPayloadSize;
    NSString *_personalizationBundleIdMappingResourceId;
    NSString *_personalizationUrlMappingResourceId;
    NSString *_personalizationWhitelistResourceId;
    NSString *_personalizationPortraitConfigResourceId;
    NSString *_personalizationFavorabilityResourceId;
    long long _corryBarMaxArticleCountForArticleList;
    long long _corryBarMaxArticleCountForSingleArticle;
    NSString *_exploreArticleID;
    NSArray *_externalAnalyticsConfigurations;
    NSArray *_mediaSharingBlacklistedChannelIDs;
    long long _stateRestorationAllowedTimeWindow;
    long long _autoRefreshMinimumInterval;
    NSArray *_topStoriesPublishDates;
    NSURL *_contentDirectoryFileURL;
    FCCKContentDatabase *_contentDatabase;
    NSNumber *_currentUserBucket;
    FCAsyncSerialQueue *_configRequestSerialQueue;
    FCAsyncSerialQueue *_configRefreshSerialQueue;
    FCAsyncSerialQueue *_trendingSerialQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCRecommendedCategory *_topLevelCategory;
    NTPBPersonalizationConfig *_personalizationConfig;
    NSDictionary *_personalizationTreatments;
    NTPBPersonalizationTreatment *_personalizationTreatment;
    NSDictionary *_analyticsContentTypeConfigsByContentTypeByEnvironment;
    NSHashTable *_observers;
    NSMutableArray *_observationBlocks;
    NSString *_configurationResourceID;
    NSString *_trendingSearchesResourceID;
    FCKeyValueStore *_resourceCache;
    FCAppConfigurationResource *_configurationResource;
    FCAppConfigurationResource *_trendingSearchesResource;
    NSSet *_preferredLanguages;
    NTPBWidgetConfig *_widgetConfiguration;
}

+ (id)overrideWidgetSectionConfigID;
+ (id)overrideForYouConfigID;
+ (id)overrideAppConfigID;
+ (void)initialize;
@property(copy, nonatomic) NTPBWidgetConfig *widgetConfiguration; // @synthesize widgetConfiguration=_widgetConfiguration;
@property(nonatomic, getter=isPrivateDataEncryptionMigrationDesired) _Bool privateDataEncryptionMigrationDesired; // @synthesize privateDataEncryptionMigrationDesired=_privateDataEncryptionMigrationDesired;
@property(retain, nonatomic) NSSet *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(retain, nonatomic) FCAppConfigurationResource *trendingSearchesResource; // @synthesize trendingSearchesResource=_trendingSearchesResource;
@property(retain, nonatomic) FCAppConfigurationResource *configurationResource; // @synthesize configurationResource=_configurationResource;
@property(retain, nonatomic) FCKeyValueStore *resourceCache; // @synthesize resourceCache=_resourceCache;
@property(retain, nonatomic) NSString *trendingSearchesResourceID; // @synthesize trendingSearchesResourceID=_trendingSearchesResourceID;
@property(retain, nonatomic) NSString *configurationResourceID; // @synthesize configurationResourceID=_configurationResourceID;
@property(retain, nonatomic) NSMutableArray *observationBlocks; // @synthesize observationBlocks=_observationBlocks;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSDictionary *analyticsContentTypeConfigsByContentTypeByEnvironment; // @synthesize analyticsContentTypeConfigsByContentTypeByEnvironment=_analyticsContentTypeConfigsByContentTypeByEnvironment;
@property(retain, nonatomic) NTPBPersonalizationTreatment *personalizationTreatment; // @synthesize personalizationTreatment=_personalizationTreatment;
@property(retain, nonatomic) NSDictionary *personalizationTreatments; // @synthesize personalizationTreatments=_personalizationTreatments;
@property(retain, nonatomic) NTPBPersonalizationConfig *personalizationConfig; // @synthesize personalizationConfig=_personalizationConfig;
@property(retain, nonatomic) FCRecommendedCategory *topLevelCategory; // @synthesize topLevelCategory=_topLevelCategory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) FCAsyncSerialQueue *trendingSerialQueue; // @synthesize trendingSerialQueue=_trendingSerialQueue;
@property(retain, nonatomic) FCAsyncSerialQueue *configRefreshSerialQueue; // @synthesize configRefreshSerialQueue=_configRefreshSerialQueue;
@property(retain, nonatomic) FCAsyncSerialQueue *configRequestSerialQueue; // @synthesize configRequestSerialQueue=_configRequestSerialQueue;
@property(copy, nonatomic) NSNumber *currentUserBucket; // @synthesize currentUserBucket=_currentUserBucket;
@property(nonatomic) _Bool attemptedAppConfigFetch; // @synthesize attemptedAppConfigFetch=_attemptedAppConfigFetch;
@property(retain, nonatomic) FCCKContentDatabase *contentDatabase; // @synthesize contentDatabase=_contentDatabase;
@property(copy, nonatomic) NSURL *contentDirectoryFileURL; // @synthesize contentDirectoryFileURL=_contentDirectoryFileURL;
@property(nonatomic, getter=isArticleSearchEnabled) _Bool articleSearchEnabled; // @synthesize articleSearchEnabled=_articleSearchEnabled;
@property(copy, nonatomic) NSArray *topStoriesPublishDates; // @synthesize topStoriesPublishDates=_topStoriesPublishDates;
@property(nonatomic) _Bool terminateAppOnBackgroundAfterJoiningOrLeavingExperiment; // @synthesize terminateAppOnBackgroundAfterJoiningOrLeavingExperiment=_terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property(nonatomic) long long autoRefreshMinimumInterval; // @synthesize autoRefreshMinimumInterval=_autoRefreshMinimumInterval;
@property(nonatomic) long long stateRestorationAllowedTimeWindow; // @synthesize stateRestorationAllowedTimeWindow=_stateRestorationAllowedTimeWindow;
@property(nonatomic) _Bool usAndUKUseAUWhatsNewFeatures; // @synthesize usAndUKUseAUWhatsNewFeatures=_usAndUKUseAUWhatsNewFeatures;
@property(nonatomic) _Bool useSecureConnectionForAssets; // @synthesize useSecureConnectionForAssets=_useSecureConnectionForAssets;
@property(retain, nonatomic) NSArray *mediaSharingBlacklistedChannelIDs; // @synthesize mediaSharingBlacklistedChannelIDs=_mediaSharingBlacklistedChannelIDs;
@property(retain, nonatomic) NSArray *externalAnalyticsConfigurations; // @synthesize externalAnalyticsConfigurations=_externalAnalyticsConfigurations;
@property(retain, nonatomic) NSString *exploreArticleID; // @synthesize exploreArticleID=_exploreArticleID;
@property(nonatomic) _Bool corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers; // @synthesize corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers=_corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(nonatomic) long long corryBarMaxArticleCountForSingleArticle; // @synthesize corryBarMaxArticleCountForSingleArticle=_corryBarMaxArticleCountForSingleArticle;
@property(nonatomic) long long corryBarMaxArticleCountForArticleList; // @synthesize corryBarMaxArticleCountForArticleList=_corryBarMaxArticleCountForArticleList;
@property(nonatomic) _Bool privateDataEncryptionMigrationRequiresAllDevicesRunningTigris; // @synthesize privateDataEncryptionMigrationRequiresAllDevicesRunningTigris=_privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
@property(nonatomic, getter=isPrivateDataEncryptionAllowed) _Bool privateDataEncryptionAllowed; // @synthesize privateDataEncryptionAllowed=_privateDataEncryptionAllowed;
@property(retain, nonatomic) NSString *personalizationFavorabilityResourceId; // @synthesize personalizationFavorabilityResourceId=_personalizationFavorabilityResourceId;
@property(readonly, nonatomic) NSString *personalizationPortraitConfigResourceId; // @synthesize personalizationPortraitConfigResourceId=_personalizationPortraitConfigResourceId;
@property(retain, nonatomic) NSString *personalizationWhitelistResourceId; // @synthesize personalizationWhitelistResourceId=_personalizationWhitelistResourceId;
@property(retain, nonatomic) NSString *personalizationUrlMappingResourceId; // @synthesize personalizationUrlMappingResourceId=_personalizationUrlMappingResourceId;
@property(retain, nonatomic) NSString *personalizationBundleIdMappingResourceId; // @synthesize personalizationBundleIdMappingResourceId=_personalizationBundleIdMappingResourceId;
@property(nonatomic, getter=isOrderFeedEndpointEnabled) _Bool orderFeedEndpointEnabled; // @synthesize orderFeedEndpointEnabled=_orderFeedEndpointEnabled;
@property(nonatomic) long long analyticsEndpointMaxPayloadSize; // @synthesize analyticsEndpointMaxPayloadSize=_analyticsEndpointMaxPayloadSize;
@property(nonatomic) long long minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou; // @synthesize minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou=_minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou;
@property(nonatomic) long long maximumNumberOfExpiredPaidSubscriptionGroups; // @synthesize maximumNumberOfExpiredPaidSubscriptionGroups=_maximumNumberOfExpiredPaidSubscriptionGroups;
@property(nonatomic) long long expiredPaidSubscriptionGroupCutoffTime; // @synthesize expiredPaidSubscriptionGroupCutoffTime=_expiredPaidSubscriptionGroupCutoffTime;
@property(nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept; // @synthesize articleDiversificationUniquePublisherExpectationYIntercept=_articleDiversificationUniquePublisherExpectationYIntercept;
@property(nonatomic) double articleDiversificationUniquePublisherExpectationSlope; // @synthesize articleDiversificationUniquePublisherExpectationSlope=_articleDiversificationUniquePublisherExpectationSlope;
@property(nonatomic) double articleDiversificationSimilarityExpectationEnd; // @synthesize articleDiversificationSimilarityExpectationEnd=_articleDiversificationSimilarityExpectationEnd;
@property(nonatomic) double articleDiversificationSimilarityExpectationStart; // @synthesize articleDiversificationSimilarityExpectationStart=_articleDiversificationSimilarityExpectationStart;
@property(nonatomic) long long maximumTimesHeadlineInPaidSubscriptionGroup; // @synthesize maximumTimesHeadlineInPaidSubscriptionGroup=_maximumTimesHeadlineInPaidSubscriptionGroup;
@property(nonatomic) long long maximumPaidSubscriptionGroupSizeiPhone; // @synthesize maximumPaidSubscriptionGroupSizeiPhone=_maximumPaidSubscriptionGroupSizeiPhone;
@property(nonatomic) long long maximumPaidSubscriptionGroupSizeiPad; // @synthesize maximumPaidSubscriptionGroupSizeiPad=_maximumPaidSubscriptionGroupSizeiPad;
@property(retain, nonatomic) FCForYouGroupsConfiguration *forYouGroupsConfiguration; // @synthesize forYouGroupsConfiguration=_forYouGroupsConfiguration;
@property(nonatomic) _Bool universalLinksEnabled; // @synthesize universalLinksEnabled=_universalLinksEnabled;
@property(readonly, nonatomic) NSString *widgetConfigID; // @synthesize widgetConfigID=_widgetConfigID;
@property(retain, nonatomic) NSString *embedConfigurationAssetID; // @synthesize embedConfigurationAssetID=_embedConfigurationAssetID;
@property(readonly, nonatomic) NSString *forYouRecordConfigID; // @synthesize forYouRecordConfigID=_forYouRecordConfigID;
@property(readonly, nonatomic) FCCoverArticlesConfiguration *coverArticlesConfig; // @synthesize coverArticlesConfig=_coverArticlesConfig;
@property(nonatomic) long long savedArticlesOpenedCutoffTime; // @synthesize savedArticlesOpenedCutoffTime=_savedArticlesOpenedCutoffTime;
@property(nonatomic) long long savedArticlesCutoffTime; // @synthesize savedArticlesCutoffTime=_savedArticlesCutoffTime;
@property(nonatomic) long long savedArticlesMaximumCountCellular; // @synthesize savedArticlesMaximumCountCellular=_savedArticlesMaximumCountCellular;
@property(nonatomic) long long savedArticlesMaximumCountWiFi; // @synthesize savedArticlesMaximumCountWiFi=_savedArticlesMaximumCountWiFi;
@property(nonatomic) long long notificationEnabledChannelsRefreshFrequency; // @synthesize notificationEnabledChannelsRefreshFrequency=_notificationEnabledChannelsRefreshFrequency;
@property(nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout; // @synthesize notificationArticleWithRapidUpdatesCacheTimeout=_notificationArticleWithRapidUpdatesCacheTimeout;
@property(nonatomic) long long notificationArticleCacheTimeout; // @synthesize notificationArticleCacheTimeout=_notificationArticleCacheTimeout;
@property(retain, nonatomic) FCNotificationsConfiguration *notificationsConfig; // @synthesize notificationsConfig=_notificationsConfig;
@property(nonatomic) long long endOfArticleMaxInaccessiblePaidArticleCount; // @synthesize endOfArticleMaxInaccessiblePaidArticleCount=_endOfArticleMaxInaccessiblePaidArticleCount;
@property(nonatomic) double endOfArticleMinPaidHeadlineRatio; // @synthesize endOfArticleMinPaidHeadlineRatio=_endOfArticleMinPaidHeadlineRatio;
@property(nonatomic) long long newFavoriteNotificationAlertsFrequency; // @synthesize newFavoriteNotificationAlertsFrequency=_newFavoriteNotificationAlertsFrequency;
@property(nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds; // @synthesize subscriptionsGracePeriodForTokenVerificationSeconds=_subscriptionsGracePeriodForTokenVerificationSeconds;
@property(nonatomic) long long subscriptionsPlacardGlobalMaximumPerDay; // @synthesize subscriptionsPlacardGlobalMaximumPerDay=_subscriptionsPlacardGlobalMaximumPerDay;
@property(nonatomic) long long subscriptionsPlacardPublisherFrequencyInSeconds; // @synthesize subscriptionsPlacardPublisherFrequencyInSeconds=_subscriptionsPlacardPublisherFrequencyInSeconds;
@property(nonatomic) long long subscriptionsGlobalMeteredCount; // @synthesize subscriptionsGlobalMeteredCount=_subscriptionsGlobalMeteredCount;
@property(nonatomic) long long articleRapidUpdatesTimeout; // @synthesize articleRapidUpdatesTimeout=_articleRapidUpdatesTimeout;
@property(readonly, nonatomic) NSArray *trendingTopics; // @synthesize trendingTopics=_trendingTopics;
@property(nonatomic) long long trendingTopicsRefreshRate; // @synthesize trendingTopicsRefreshRate=_trendingTopicsRefreshRate;
@property(nonatomic) long long appConfigRefreshRate; // @synthesize appConfigRefreshRate=_appConfigRefreshRate;
@property(retain, nonatomic) NSString *breakingNewsChannelID; // @synthesize breakingNewsChannelID=_breakingNewsChannelID;
@property(retain, nonatomic) NSString *savedStoriesTagID; // @synthesize savedStoriesTagID=_savedStoriesTagID;
@property(retain, nonatomic) NSString *featuredStoriesTagID; // @synthesize featuredStoriesTagID=_featuredStoriesTagID;
@property(retain, nonatomic) NSString *trendingTagID; // @synthesize trendingTagID=_trendingTagID;
@property(retain, nonatomic) NSString *briefingsTagID; // @synthesize briefingsTagID=_briefingsTagID;
@property(retain, nonatomic) NSString *editorialGemsSectionID; // @synthesize editorialGemsSectionID=_editorialGemsSectionID;
@property(retain, nonatomic) NSString *editorialChannelID; // @synthesize editorialChannelID=_editorialChannelID;
@property(retain, nonatomic) FCTopStoriesConfiguration *topStoriesConfig; // @synthesize topStoriesConfig=_topStoriesConfig;
@property(retain, nonatomic) FCPrefetchConfiguration *prefetchConfig; // @synthesize prefetchConfig=_prefetchConfig;
@property(retain, nonatomic) FCIAdConfiguration *iAdConfig; // @synthesize iAdConfig=_iAdConfig;
@property(nonatomic) long long minimumDistanceBetweenImageOnTopTiles; // @synthesize minimumDistanceBetweenImageOnTopTiles=_minimumDistanceBetweenImageOnTopTiles;
@property(nonatomic) double tileProminenceScoreBalanceValue; // @synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue;
@property(retain, nonatomic) NSDictionary *endpointConfigsByEnvironment; // @synthesize endpointConfigsByEnvironment=_endpointConfigsByEnvironment;
@property(nonatomic) double prerollLoadingTimeout; // @synthesize prerollLoadingTimeout=_prerollLoadingTimeout;
@property(nonatomic) double interstitialAdLoadDelay; // @synthesize interstitialAdLoadDelay=_interstitialAdLoadDelay;
@property(nonatomic) long long numberOfScreenfulsScrolledToBypassWidgetTimeLimit; // @synthesize numberOfScreenfulsScrolledToBypassWidgetTimeLimit=_numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
@property(nonatomic) long long timeBetweenSameWidgetReinsertion; // @synthesize timeBetweenSameWidgetReinsertion=_timeBetweenSameWidgetReinsertion;
@property(nonatomic) long long timeBetweenWidgetInsertions; // @synthesize timeBetweenWidgetInsertions=_timeBetweenWidgetInsertions;
@property(nonatomic) long long autoScrollToTopFeedTimeout; // @synthesize autoScrollToTopFeedTimeout=_autoScrollToTopFeedTimeout;
@property(retain, nonatomic) NSArray *presubscribedFeedIDs; // @synthesize presubscribedFeedIDs=_presubscribedFeedIDs;
@property(retain, nonatomic) NSArray *onboardingFeedIDs; // @synthesize onboardingFeedIDs=_onboardingFeedIDs;
@property(retain, nonatomic) NSArray *hiddenFeedIDs; // @synthesize hiddenFeedIDs=_hiddenFeedIDs;
@property(retain, nonatomic) NSNumber *currentTreatment; // @synthesize currentTreatment=_currentTreatment;
@property(retain, nonatomic) NSNumber *currentModdedBucketID; // @synthesize currentModdedBucketID=_currentModdedBucketID;
@property(retain, nonatomic) NSString *experimentalizableFieldPostfix; // @synthesize experimentalizableFieldPostfix=_experimentalizableFieldPostfix;
- (void).cxx_destruct;
- (void)_didChangeTrendingTopics;
- (void)_extractTrendingTopicsFromLanguageConfiguration:(id)arg1;
- (id)_languageConfigurationsInProtobufTrendingConfiguration:(id)arg1;
- (_Bool)_processTrendingSearchesData:(id)arg1;
- (id)_adoptTrendingSearchesResource:(id)arg1;
- (id)_loadTrendingSearchesResourceFromCache;
- (void)fetchTrendingSearchesIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_extractMediaSharingBlacklistFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractExploreArticleIDFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractWidgetSectionConfigRecordIDFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractForYouRecordConfigIDFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractCoverArticlesFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractNotificationsConfigFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractBreakingNewsChannelFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractSavedStoriesTagIDFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractFeaturedStoriesTagIDFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractTrendingTagIDFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractBriefingsTagIDFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractEditorialGemsSectionFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractEditorialChannelFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (void)_extractTopStoriesFromLanguageConfiguration:(id)arg1 didChange:(_Bool *)arg2;
- (id)_categoryFromProtobufCategory:(id)arg1;
- (void)_extractTopLevelCategoryFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 didChange:(_Bool *)arg4;
- (void)_extractFeedIDsFromLanguageConfigurations:(id)arg1 didChange:(_Bool *)arg2;
- (id)_languageConfigurationsFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractTopStoriesIntervals:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractWidgetValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 didChange:(_Bool *)arg4;
- (void)_extractPrefetchValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 didChange:(_Bool *)arg4;
- (void)_extractPersonalizationValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 didChange:(_Bool *)arg4;
- (void)_extractiAdValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 didChange:(_Bool *)arg4;
- (void)_extractEndpointConfigValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 didChange:(_Bool *)arg4;
- (void)_extractCommonValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_didChange;
- (_Bool)_processTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (_Bool)_selectConfigurationForTreatment:(id)arg1 configurationData:(id)arg2;
- (_Bool)_selectConfigurationForBucket:(id)arg1 configurationData:(id)arg2;
- (id)_userBucket;
- (id)_adoptConfigurationResource:(id)arg1 force:(_Bool)arg2;
- (id)_adoptConfigurationResource:(id)arg1;
- (id)_loadConfigurationResourceFromCache;
- (id)_loadResourceCache;
@property(readonly, nonatomic) double parsecPopulationCeiling; // @synthesize parsecPopulationCeiling=_parsecPopulationCeiling;
@property(readonly, nonatomic) double parsecPopulationFloor; // @synthesize parsecPopulationFloor=_parsecPopulationFloor;
- (id)personalizationTreatmentForFeldsparID:(id)arg1;
- (id)ANFEmbedConfigurationAssetID;
- (id)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *recommendedCategories; // @synthesize recommendedCategories=_recommendedCategories;
@property(readonly, nonatomic) NSArray *topLevelRecommendedChannelTagIDs; // @synthesize topLevelRecommendedChannelTagIDs=_topLevelRecommendedChannelTagIDs;
@property(readonly, nonatomic) NSArray *topLevelRecommendedTopicTagIDs; // @synthesize topLevelRecommendedTopicTagIDs=_topLevelRecommendedTopicTagIDs;
@property(readonly, nonatomic) NSArray *topLevelCuratedTagIDs; // @synthesize topLevelCuratedTagIDs=_topLevelCuratedTagIDs;
- (id)todayConfigWithQueueConfigs:(id)arg1 maxSlotCount:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen; // @synthesize widgetMinimumNumberOfTimesPreseenToBeSeen=_widgetMinimumNumberOfTimesPreseenToBeSeen;
@property(readonly, nonatomic) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds; // @synthesize widgetMinimumArticleExposureDurationToBePreseenInMilliseconds=_widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
- (void)overrideConfigWithTreatment:(id)arg1;
@property(readonly, nonatomic) NSArray *availableExperiments; // @synthesize availableExperiments=_availableExperiments;
- (void)addChangeObservationBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 force:(_Bool)arg2 refreshCompletion:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshAppConfigIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAppConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSURL *remoteURL;
@property(readonly, nonatomic) id <FCAppConfiguration> fetchedAppConfig;
@property(readonly, nonatomic) id <FCAppConfiguration> possiblyUnfetchedAppConfig;
- (id)initWithContentDatabase:(id)arg1 contentDirectoryFileURL:(id)arg2;
- (id)initWithContentHostDirectoryFileURL:(id)arg1 networkBehaviorMonitor:(id)arg2;
- (id)init;

@end

