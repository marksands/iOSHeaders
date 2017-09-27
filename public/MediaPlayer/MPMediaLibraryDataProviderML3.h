//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPMediaLibraryDataProviderPrivate.h"

@class ML3MusicLibrary, MPMediaEntityCache, NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue, NSSet, NSString;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate>
{
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    unsigned long long _backgroundTask;
    unsigned long long _backgroundTaskCount;
    _Bool _hasScheduledEventPosting;
    int _refreshState;
    NSString *_uniqueIdentifier;
    NSOperationQueue *_setValuesWidthLimitedQueue;
    NSObject<OS_dispatch_queue> *_entitiesAddedOrRemovedNotificationQueue;
    NSObject<OS_dispatch_source> *_entitiesAddedOrRemovedCoalescingTimer;
    ML3MusicLibrary *_library;
    MPMediaEntityCache *_entityCache;
    id <MPArtworkDataSource> _artworkDataSource;
}

+ (id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2;
+ (id)_unadjustedValueForItemDateWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemTimeWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyRatingWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyVolumeAdjustmentWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyVolumeNormalizationWithDefaultValue:(id)arg1;
@property(readonly, nonatomic) id <MPArtworkDataSource> artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
@property(readonly, nonatomic) MPMediaEntityCache *entityCache; // @synthesize entityCache=_entityCache;
@property(retain, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (_Bool)_removeEntitiesWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 entityClass:(Class)arg3;
- (void)_loadValueForAggregateFunction:(id)arg1 entityClass:(Class)arg2 property:(id)arg3 query:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_libraryCloudLibraryAvailabilityDidChange:(id)arg1;
- (void)_libraryUIDDidChange:(id)arg1;
- (void)_syncGenerationDidChange:(id)arg1;
- (void)_displayValuesDidChange:(id)arg1;
- (void)_invisiblePropertiesDidChange:(id)arg1;
- (void)_dynamicPropertiesDidChange:(id)arg1;
- (void)_libraryEntitiesAddedOrRemoved:(id)arg1;
- (void)_libraryContentsDidChange:(id)arg1;
- (_Bool)_dataProviderSupportsEntityChangeTracking;
- (void)_postEvents;
- (void)_coalesceEvents;
- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
- (id)_adjustedItemPropertyVerifiedIntegrityOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyAssetURLOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyEQPresetOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyContentRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyChaptersOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertySeasonNameOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertySeasonNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyChapterArtworkTimesOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyEpisodeNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyMovieInfoOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyFilePathOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemDateOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVolumeAdjustmentOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVolumeNormalizationOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemTimeOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedPropertyMediaTypeOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedPlaylistPropertySeedItemsOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (void)performBackgroundTaskWithBlock:(CDUnknownBlockType)arg1;
- (id)ML3SystemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 subscriptionFilteringOptions:(long long)arg3 additionalFilterPredicates:(id)arg4;
- (id)systemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 subscriptionFilteringOptions:(long long)arg3;
- (void)setLibraryPublicContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)setLibraryPublicEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)clearLocationPropertiesOfItemWithIdentifier:(long long)arg1;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3;
- (id)itemResultSetForQueryCriteria:(id)arg1;
- (id)collectionResultSetForQueryCriteria:(id)arg1;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 inUsersLibrary:(_Bool)arg3 itemBlock:(CDUnknownBlockType)arg4 collectionBlock:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) NSString *syncValidity;
@property(readonly, nonatomic) NSArray *preferredSubtitleLanguages;
@property(readonly, nonatomic) NSArray *preferredAudioLanguages;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsAtIndexes:(id)arg1 inPlaylistWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sdk_addItemWithOpaqueIdentifier:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addItemsWithIdentifiers:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setItemsWithIdentifiers:(id)arg1 forPlaylistWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)removeItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2;
- (_Bool)deleteItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2;
- (_Bool)removePlaylistWithIdentifier:(long long)arg1;
- (long long)sdk_addPlaylistWithValuesForProperties:(id)arg1;
- (long long)addPlaylistWithValuesForProperties:(id)arg1;
@property(readonly, nonatomic) long long playbackHistoryPlaylistPersistentID;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setValues:(id)arg1 forProperties:(id)arg2 forItemPersistentIDs:(id)arg3;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)isCurrentThreadInTransaction;
- (void)performReadTransactionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)recordPlayEventForPlaylistPersistentID:(long long)arg1;
- (_Bool)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (void)_addGlobalPlaylistsToLibraryDatabase:(id)arg1 asLibraryOwned:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (void)_importStoreItemElements:(id)arg1 andAddTracksToCloudLibrary:(_Bool)arg2 usingCloudAdamID:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)addPlaylistStoreItemsForLookupItems:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performStoreItemLibraryImport:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_storePlatformRequestContext;
- (void)sdk_addItemWithOpaqueID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addTracksToMyLibrary:(id)arg1;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (_Bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)collectionExistsContainedWithinSyncIDs:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (_Bool)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (_Bool)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (_Bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long *)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long *)arg4;
- (_Bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (_Bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (_Bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (_Bool)hasUbiquitousBookmarkableItems;
- (_Bool)hasGeniusMixes;
- (_Bool)hasMediaOfType:(unsigned long long)arg1;
- (_Bool)writable;
- (long long)playlistGeneration;
- (unsigned long long)syncGenerationID;
- (unsigned long long)currentEntityRevision;
- (id)lastModifiedDate;
@property(readonly, nonatomic) NSString *databasePath;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <MPArtworkDataSource> completeMyCollectionArtworkDataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isGeniusEnabled;
@property(readonly, nonatomic) NSSet *propertiesToCache;
@property(readonly, nonatomic) _Bool requiresAuthentication;
@property(readonly) Class superclass;

@end

