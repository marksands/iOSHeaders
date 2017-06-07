//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSRecursiveLock, NSString, NSURL, PGGraph, PGMemoryController, PHPhotoLibrary, PIPipeline;
@protocol OS_dispatch_queue, OS_os_log;

@interface PGManager : NSObject
{
    NSRecursiveLock *_updatesLock;
    unsigned long long _updateCount;
    CDUnknownBlockType _updateCompletionHandler;
    CDUnknownBlockType _updateProgressHandler;
    NSMutableSet *_updateInserts;
    NSMutableSet *_updateDeletes;
    NSMutableSet *_updateDeleteIDs;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSMutableArray *_prefetchCuratedKeyAssetsBlocks;
    NSMutableArray *_prefetchCuratedAssetsBlocks;
    NSObject<OS_dispatch_queue> *_curationPrefetchQueue;
    NSURL *_cachedGraphPersistenceParentDirectoryURL;
    double _timestampOfLastCallToProgress;
    double _timestampOfLastRecordedCallToProgress;
    unsigned long long _numberOfCallsToProgressSinceLastRecordedCall;
    _Bool _wasStopped;
    NSObject<OS_dispatch_queue> *_graphAccessQueue;
    unsigned long long _graphAccessRead;
    unsigned long long _graphAccessWrite;
    NSRecursiveLock *_graphAccessLock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    PGGraph *_graph;
    NSString *_graphName;
    PIPipeline *_pipeline;
    NSObject<OS_os_log> *_loggingConnection;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _libraryAnalysisState;
    PGMemoryController *_memoryController;
    NSURL *_metadataSnapshotOutputPathURL;
    NSObject<OS_os_log> *_memoriesLoggingConnection;
    NSObject<OS_os_log> *_curationLoggingConnection;
    NSObject<OS_os_log> *_relatedLoggingConnection;
    NSObject<OS_os_log> *_ingestLoggingConnection;
    NSObject<OS_os_log> *_graphLoggingConnection;
}

+ (_Bool)clientIsPhotoAnalysis;
+ (id)stringFromPGRelatedType:(unsigned long long)arg1;
+ (id)stringFromPGDuration:(unsigned long long)arg1;
+ (id)stringFromPGPrecision:(unsigned long long)arg1;
+ (void)initialize;
+ (_Bool)memoriesAreWorthNotifying:(id)arg1;
+ (id)representativeAssetsForAssetCollection:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
+ (id)assetPropertySetsForCuration;
+ (id)_assetsBeautifierForPrecision:(unsigned long long)arg1;
+ (unsigned long long)_minimumNumberOfItemsForDuration:(unsigned long long)arg1 withMaximumNumberOfItems:(unsigned long long)arg2;
+ (unsigned long long)_maximumNumberOfItemsForDuration:(unsigned long long)arg1 withTotalNumberOfItems:(unsigned long long)arg2;
+ (id)_summaryClusteringForDuration:(unsigned long long)arg1 andPrecision:(unsigned long long)arg2;
+ (id)matchingWeightToDictionary;
@property(readonly, nonatomic) NSObject<OS_os_log> *graphLoggingConnection; // @synthesize graphLoggingConnection=_graphLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *ingestLoggingConnection; // @synthesize ingestLoggingConnection=_ingestLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *relatedLoggingConnection; // @synthesize relatedLoggingConnection=_relatedLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *curationLoggingConnection; // @synthesize curationLoggingConnection=_curationLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *memoriesLoggingConnection; // @synthesize memoriesLoggingConnection=_memoriesLoggingConnection;
@property(retain, nonatomic) NSURL *metadataSnapshotOutputPathURL; // @synthesize metadataSnapshotOutputPathURL=_metadataSnapshotOutputPathURL;
@property(readonly) PGMemoryController *memoryController; // @synthesize memoryController=_memoryController;
@property unsigned long long libraryAnalysisState; // @synthesize libraryAnalysisState=_libraryAnalysisState;
@property(readonly, retain) PIPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, copy) NSString *graphName; // @synthesize graphName=_graphName;
- (void).cxx_destruct;
- (_Bool)saveGraphToURL:(id)arg1;
- (void)matchWithVisualFormat:(id)arg1 elements:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)checkCallsToProgressForJob:(id)arg1 progress:(double)arg2 stop:(_Bool)arg3 loggingConnection:(id)arg4;
- (void)resetCheckCallsToProgress;
- (void)waitUntilFinishedUsingBlock:(CDUnknownBlockType)arg1;
- (void)_waitLibraryUpdateUntilFinishedUsingBlock:(CDUnknownBlockType)arg1;
- (void)_waitGraphUntilFinishedUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isBusy;
- (_Bool)isReady;
- (void)invalidatePersistentCaches;
- (void)invalidateTransientCaches;
- (void)_invalidatePersistentCaches;
- (void)_invalidateTransientCaches;
- (void)performAsynchronousNotification:(CDUnknownBlockType)arg1;
- (_Bool)hasPendingGraphAccess;
- (void)performSynchronousConcurrentGraphReadUsingBlock:(CDUnknownBlockType)arg1;
- (void)performAsynchronousBarrierGraphWriteUsingBlock:(CDUnknownBlockType)arg1;
@property(retain) PGGraph *graph; // @synthesize graph=_graph;
- (id)initWithGraphName:(id)arg1 photoLibrary:(id)arg2;
- (void)dealloc;
- (id)processSubdirectoryName;
- (id)graphPersistenceParentDirectoryCandidateURLs;
- (id)graphPersistenceParentDirectoryURL;
- (void)commonInit;
- (void)_precachePersonsInformation;
- (void)_loadGraph;
- (void)_reloadGraph;
- (_Bool)shouldInvalidatePersistentGraph;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (_Bool)_isMemoryCategoryTriggered:(long long)arg1;
- (_Bool)isPGMemoryTriggered:(id)arg1;
- (_Bool)isPHMemoryTriggered:(id)arg1;
- (id)createMemoriesWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
@property(readonly) unsigned long long numberOfExistingMemoriesToKeepForOverlapCheck;
@property(readonly) double durationForExistingMemoriesOverlapCheck;
- (id)_featuresFromOptions:(id)arg1;
- (id)_allFeatureVectorBasedMemoriesWithOptions:(id)arg1;
- (id)_memoriesWithOptions:(id)arg1 isFinalOne:(_Bool)arg2;
- (id)_memoryControllerWithOptions:(id)arg1;
- (id)_generateAllMemoriesWithKeyPeopleForHolidayMemoryGenerator:(id)arg1 options:(id)arg2;
- (id)_generateAllMemoriesWithSeasonMemoryGenerator:(id)arg1 options:(id)arg2;
- (id)_generateAllMemoriesWithBestOfPastMemoryGenerator:(id)arg1 options:(id)arg2;
- (id)_generateAllMemoriesWithFeatureVectorBasedMemoryGenerator:(id)arg1 options:(id)arg2;
- (id)_featuresOfType:(unsigned long long)arg1 inMemories:(id)arg2;
- (id)memoryWithOptions:(id)arg1;
- (id)memoriesWithOptions:(id)arg1;
- (id)_featureVectorGeneratorWithOptions:(id)arg1;
- (id)_memoryGeneratorWithOptions:(id)arg1 memoryController:(id)arg2;
- (id)memoryTreeWithOptions:(id)arg1;
- (id)celebrationOverTimeMemoriesForLocalDate:(id)arg1;
- (id)throwbackThursdayMemoriesForLocalDate:(id)arg1;
- (id)recurrentTripMemoriesWithLowRequirements:(_Bool)arg1;
- (id)peopleMemoriesForPeopleWithUUID:(id)arg1 year:(long long)arg2;
- (id)homeAggregationMemoriesForLocalDate:(id)arg1;
- (id)pastSupersetMemoriesWithLowRequirements:(_Bool)arg1;
- (id)babyMemoriesWithLowRequirements:(_Bool)arg1;
- (id)petMemoriesWithLowRequirements:(_Bool)arg1;
- (id)weekendMemoriesWithLowRequirements:(_Bool)arg1;
- (id)tripMemoriesWithLowRequirements:(_Bool)arg1;
- (id)socialGroupMemoriesForSocialGroupWithID:(long long)arg1 year:(long long)arg2;
- (id)upcomingFutureMemoriesForLocalDate:(id)arg1;
- (id)recentPastMemoriesForLocalDate:(id)arg1;
- (id)liveMemoriesForLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3;
- (id)nearbyTodayMemoriesForLocalDate:(id)arg1 location:(id)arg2;
- (id)nowMemoriesForLocalDate:(id)arg1;
- (id)featuredPeopleMemoriesWithLowRequirements:(_Bool)arg1;
- (id)sometimeInHistoryMemories;
- (id)feelingLuckyMemoriesWithLowRequirements:(_Bool)arg1;
- (id)dayInHistoryMemoriesForLocalDate:(id)arg1;
- (id)dayInHistoryMemoryForLocalDate:(id)arg1;
- (id)bestOfPastMemoryFromLocalDate:(id)arg1 toLocalDate:(id)arg2 duration:(unsigned long long)arg3;
- (id)memorySummaryOfYear:(long long)arg1 duration:(unsigned long long)arg2;
- (id)_socialGroupsIdentifiersFromSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(_Bool)arg2;
- (_Bool)_hasMomentsForPersonIdentifiers:(id)arg1;
- (id)assetIdentifiersForPersonIdentifiers:(id)arg1;
- (id)assetCollectionsForPersonIdentifiers:(id)arg1;
- (id)socialGroupsForPersonIdentifiers:(id)arg1;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1;
- (id)sortedArrayForPersonIdentifiers:(id)arg1;
- (_Bool)isCelebratingHolidayEventInGeneralForEventRule:(id)arg1;
- (_Bool)isCelebratingHolidayEventInYear:(long long)arg1 forEventRule:(id)arg2;
- (id)surveyInformationForMoment:(id)arg1;
- (id)meaningsForSurvey;
- (id)momentsAndGraphScoresAboveGraphScoreThreshold:(double)arg1;
- (id)surveySocialGroupsInfoDictionaries;
- (id)allCitiesSortedByFrequency;
- (id)_momentNodesForAssetCollection:(id)arg1 moodOptions:(id)arg2;
- (id)moodGraphContextIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2;
- (id)moodSceneIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2;
- (id)moodMeaningIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2;
- (id)moodGraphNodeIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2;
- (id)blacklistedFeatures;
- (id)defaultAssetSortDescriptors;
- (id)fetchAssetWithLocalIdentifier:(id)arg1;
- (id)fetchAssetsSortedByDateWithLocalIdentifiers:(id)arg1;
- (id)allYearsForPeopleWithName:(id)arg1;
- (id)allPeopleNames;
- (id)nameForSocialGroupWithID:(long long)arg1;
- (id)allYearsForSocialGroupWithID:(long long)arg1;
- (id)allSocialGroupIDs;
- (_Bool)locationIsInSupersets:(id)arg1;
- (id)allMomentIdentifiersWithMostRecentModificationDate:(out id *)arg1;
- (_Bool)isLocationNearHomeOrWork:(id)arg1;
- (id)allYears;
- (id)libraryStatisticsForCurrentPhotoLibrary;
- (id)_yearsStatisticsForCurrentPhotoLibrary;
- (id)_extractYearStatsFromOrderedCollectionFetchResults:(id)arg1 fetchOptions:(id)arg2 yearEntryKey:(id)arg3 numberOfYearsEntryKey:(id)arg4;
- (id)_collectionStatisticsForCurrentPhotoLibrary;
- (id)_momentsStatisticsForCurrentPhotoLibrary;
- (unsigned long long)medianValueFromUnsignedItegerArray:(id)arg1;
- (id)diagnosticsSummaryInfoOnExistingMemoriesForCurrentPhotoLibrary;
- (id)_diagnosticSummaryInfoForMemory:(id)arg1;
- (id)_extractDatesAndAssetCountsFromMemory:(id)arg1;
- (id)_sanitizeGraphDataDictionaryForArchiving:(id)arg1 referencedMemory:(id)arg2;
- (id)memoryDebugInformationWithMoments:(id)arg1 meaningLabels:(id)arg2 precision:(unsigned long long)arg3;
- (id)titleTupleForAlbum:(id)arg1 format:(long long)arg2 error:(id *)arg3;
- (id)titleTupleForMoment:(id)arg1 format:(long long)arg2 error:(id *)arg3;
- (id)titleTupleForAssetCollection:(id)arg1 format:(long long)arg2 error:(id *)arg3;
- (id)titleTupleForMomentList:(id)arg1 format:(long long)arg2 error:(id *)arg3;
- (id)titleTupleForPersonIdentifiers:(id)arg1 format:(long long)arg2 error:(id *)arg3;
- (id)titleTupleForMemory:(id)arg1 error:(id *)arg2;
- (id)_memoryFetchOptions;
- (_Bool)memoriesOfTheDayAreWorthNotifying;
- (id)lastTriggeredNotificationDate;
- (id)notificationSubtitleForMemory:(id)arg1;
- (id)notificationTitleForMemory:(id)arg1;
- (id)nextPossibleNotificationDate;
- (_Bool)needsLibraryAnalysis;
- (id)momentsForLibraryAnalysisWithFetchOptions:(id)arg1;
- (void)cancelLibraryAnalysis:(CDUnknownBlockType)arg1;
- (void)startLibraryAnalysis:(CDUnknownBlockType)arg1 keepExistingGraph:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateGraphWithMomentInsertions:(id)arg1 momentsDeletions:(id)arg2 momentDeletionIDs:(id)arg3 keepExistingGraph:(_Bool)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)_libraryAnalysisOperationWithMomentInsertions:(id)arg1 momentsDeletions:(id)arg2 momentDeletionIDs:(id)arg3;
- (_Bool)_shouldRebuildGraph:(id)arg1;
- (void)invalidateCurationCacheForCollectionWithIdentifier:(id)arg1;
- (void)invalidateCurationCacheForMoment:(id)arg1 precision:(unsigned long long)arg2;
- (void)invalidateCurationCacheForMoment:(id)arg1;
- (void)invalidateCurationCacheForMomentIdentifiers:(id)arg1;
- (_Bool)isSmartInterestingForMoment:(id)arg1;
- (double)neighborScoreForLocalDate:(id)arg1;
- (double)neighborScoreForMoment:(id)arg1;
- (void)snapshotMomentAssetCollection:(id)arg1 writeToURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)snapshotAssetCollectionWithGraphOptions:(id)arg1 assetCollection:(id)arg2 writeToURL:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)optimalDurationForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4;
- (_Bool)isAssetFeederInteresting:(id)arg1 precision:(unsigned long long)arg2;
- (_Bool)isAssetCollectionInteresting:(id)arg1 precision:(unsigned long long)arg2;
- (_Bool)areAssetsInteresting:(id)arg1 minimumNumberOfCuratedAssets:(unsigned long long)arg2 duration:(unsigned long long)arg3 precision:(unsigned long long)arg4;
- (double)graphScoreForMoment:(id)arg1;
- (double)contentScoreForAssets:(id)arg1 precision:(unsigned long long)arg2;
- (double)contentScoreForAssetFeeder:(id)arg1 precision:(unsigned long long)arg2;
- (double)contentScoreForAssetCollection:(id)arg1 precision:(unsigned long long)arg2;
- (void)completeCuratedAssets:(id)arg1 fromAssets:(id)arg2 forPeople:(id)arg3 duration:(unsigned long long)arg4 precision:(unsigned long long)arg5 nonRemovableAssets:(id)arg6 progressBlock:(CDUnknownBlockType)arg7;
- (id)_bestAssetsInAssets:(id)arg1 forReferencePeople:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)_bestAssetInSummarizedAssets:(id)arg1 forReferencePeople:(id)arg2;
- (id)_bestAssetInAssets:(id)arg1 forReferencePeople:(id)arg2 minimumNumberOfCommonPeople:(unsigned long long)arg3;
- (id)_bestAssetInAssets:(id)arg1 forReferencePeople:(id)arg2;
- (id)_filteredAssetsForAssets:(id)arg1 inMoments:(id)arg2 keepFavorites:(_Bool)arg3;
- (id)_libraryDateInterval;
- (id)_batchFetchFacesByAssetsForCluster:(id)arg1 indexOfItem:(unsigned long long)arg2 fetchOptions:(id)arg3;
- (id)_batchFetchFacesByAssetsForClusters:(id)arg1 indexOfCluster:(unsigned long long)arg2 fetchOptions:(id)arg3;
- (id)_firstBestFacedAssetInAssetCluster:(id)arg1 forPersonUUID:(id)arg2 faceFetchOptions:(id)arg3;
- (id)_timeBasedAssetClustersForAssets:(id)arg1 maximumClusterCount:(unsigned long long)arg2;
- (id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 personUUID:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 withContextualAssets:(id)arg4 minimumProportion:(double)arg5 progressBlock:(CDUnknownBlockType)arg6;
- (id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 referencePeople:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 includeAllFaces:(_Bool)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (id)bestAssetsForAssetFeeder:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 includeAllFaces:(_Bool)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (void)prefetchAreMomentsInteresting:(id)arg1 precision:(unsigned long long)arg2;
- (void)_removePrefetchBlock;
- (void)cancelAllCurationPrefetches;
- (void)prefetchCuratedAssetsForMoments:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3;
- (void)prefetchCuratedKeyAssetsForMoments:(id)arg1 options:(id)arg2;
- (id)curatedKeyAssetForAssetCollection:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3;
- (id)bestAssetForItems:(id)arg1 options:(id)arg2;
- (id)bestAssetForAssetFeeder:(id)arg1 options:(id)arg2;
- (id)_filteredAssetsWithFacesForAssets:(id)arg1;
- (id)_filteredAssetsFromAssetCollection:(id)arg1 throughTraitsForMeaningWithLabel:(id)arg2;
- (id)_filteredAssetCollection:(id)arg1 withContextualAssets:(id)arg2 approximateTimeDistance:(double)arg3;
- (id)_locationForAsset:(id)arg1 fromNearbyAssetsInAssets:(id)arg2;
- (id)_bestAssetForAssetFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3;
- (id)_curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 curatedKeyAsset:(id *)arg5;
- (id)curatedKeyAssetForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4;
- (id)curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4;
- (id)curatedAssetIdentifiersForCollectionWithIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3;
- (id)curatedAssetsFetchResultForCollectionWithIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3;
- (id)_momentNodesForMemory:(id)arg1;
- (id)_meaningLabelsForMomentNodes:(id)arg1 minimumRatio:(double)arg2;
- (id)_matchedAoisForMomentNodes:(id)arg1;
- (id)_poiLabelsForMomentNodes:(id)arg1;
- (id)_roiLabelsForMomentNodes:(id)arg1;
- (id)_gatheringAndFamilyKeywordsForMemory:(id)arg1 momentNodes:(id)arg2;
- (id)_locationTripKeywordsForMemory:(id)arg1 momentNodes:(id)arg2;
- (id)moodKeywordsForMemory:(id)arg1;
- (id)snapshotOuputFilePathURLForKey:(id)arg1;
- (id)_snapshotFilenameForLookupKey:(id)arg1;
- (id)defaultPeopleClustersExportIntermediatePath;
- (id)fastGraphExportFullPath;
- (id)defaultGraphExportFullPath;
- (id)defaultSnapshotRootPath;
- (id)_getDefaultOutputPathForMetadataSnapshot;
- (id)collectionsInfoFromMoments:(id)arg1 withMeaningLabels:(id)arg2;
- (id)memoryAssetCollectionDebugInformationForIdentifier:(id)arg1 precision:(unsigned long long)arg2;
- (id)curationDebugInformationForAsset:(id)arg1 precision:(unsigned long long)arg2;
- (id)_debugInformationForRelated:(id)arg1 referenceKeywords:(id)arg2 andRelatedMoment:(id)arg3 relatedType:(unsigned long long)arg4 precision:(unsigned long long)arg5;
- (id)relatedDebugInformationBetweenReferenceAssetCollection:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 precision:(unsigned long long)arg4;
- (id)relatedDebugInformationBetweenAsset:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 precision:(unsigned long long)arg4;
- (id)_mobilityStatistics;
- (id)_titleStatistics;
- (id)_stringDescriptionForDisambiguatedPOIsInMomentNodes:(id)arg1;
- (id)_stringDescriptionForDisambiguatedLocations;
- (id)_stringDescriptionForMeNode:(id)arg1 reportAggd:(_Bool)arg2;
- (id)_stringDescriptionForPeopleEvents;
- (id)_stringDescriptionForInterestingAreas:(id)arg1;
- (id)_stringDescriptionForInterestingCities:(id)arg1;
- (id)_stringDescriptionForUrbanCities:(id)arg1;
- (id)_dateFormatter;
- (id)_stringDescriptionForMeaningfulEventCollections:(id)arg1;
- (id)_stringDescriptionForSupersets:(id)arg1;
- (id)_stringDescriptionForSocialGroups:(id)arg1;
- (id)_partOfDayStatistics;
- (id)_interestingStatistics;
- (id)_moodStatistics;
- (id)_stringDescriptionForMemoriesNotification;
- (id)exportableDictionaryFromKeywords:(id)arg1;
- (id)_checkConsistencyOfGraph:(id)arg1;
- (id)_defaultStatistics;
- (id)statisticsWithTypeStrings:(id)arg1;
- (unsigned int)identifierForMoment:(id)arg1;
- (id)keywordsForAsset:(id)arg1 relatedType:(unsigned long long)arg2;
- (id)keywordsForMomentNodeName:(id)arg1 relatedType:(unsigned long long)arg2;
- (id)keywordsForMoment:(id)arg1 relatedType:(unsigned long long)arg2;
- (void)debugTitlesForAssetCollection:(id)arg1 result:(CDUnknownBlockType)arg2;
- (_Bool)hasPendingUpdates;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadMoments:(id)arg1;
- (void)deleteMomentsWithIdentifiers:(id)arg1;
- (void)deleteMoments:(id)arg1;
- (void)insertMoments:(id)arg1;
- (void)_performUpdates;
- (void)startGraphUpdate:(id)arg1;
- (void)_endUpdates;
- (void)_beginUpdates;
- (void)_generateTitleForRelatedResults:(id)arg1 withReferenceEvent:(id)arg2 referenceAsset:(id)arg3;
- (id)_referenceAssetWithLocalIdentifier:(id)arg1;
- (_Bool)exportMatchingResultsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id *)arg4;
- (_Bool)exportMatchingResultsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id *)arg4;
- (id)_fileURLForMomentNode:(id)arg1 relatedType:(unsigned long long)arg2 focusOnAsset:(id)arg3 toURL:(id)arg4;
- (id)_stringFromRelatedType:(unsigned long long)arg1;
- (id)_diverseResultsFromMatchingResults:(id)arg1 timeShuffleTimestamp:(double)arg2 relatedType:(unsigned long long)arg3 options:(id)arg4 needsDebugInfo:(_Bool)arg5;
- (id)_postProcessGraphMatchingResults:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 needsDebugInfo:(_Bool)arg4;
- (id)relatedCollectionBetweenAssetCollection:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(_Bool)arg4;
- (id)_relatedCollectionBetweenMoment:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(_Bool)arg4 needsDiversityInfo:(_Bool)arg5;
- (id)relatedCollectionBetweenAsset:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(_Bool)arg4;
- (id)relatedCollectionsForPersonIdentifiers:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 error:(id *)arg5;
- (id)relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 error:(id *)arg5;
- (id)relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)relatedCollectionsForAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 generateTitles:(_Bool)arg4 error:(id *)arg5;
- (id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)relatedCollectionsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (void)matchFeatureVector:(id)arg1 options:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

