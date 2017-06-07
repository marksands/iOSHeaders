//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/ML3DatabaseConnectionDelegate-Protocol.h>
#import <MusicLibrary/ML3DatabaseConnectionPoolDelegate-Protocol.h>

@class ML3AccountCacheDatabase, ML3Container, ML3DatabaseConnectionPool, ML3DatabaseMetadata, ML3LibraryNotificationManager, NSArray, NSMutableDictionary, NSString;
@protocol ML3MusicLibraryDelegate, OS_dispatch_queue;

@interface ML3MusicLibrary : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_libraryUID;
    NSString *_syncLibraryUID;
    ML3AccountCacheDatabase *_accountCacheDatabase;
    ML3LibraryNotificationManager *_notificationManager;
    struct iPhoneSortKeyBuilder *_sortKeyBuilder;
    NSMutableDictionary *_optimizedLibraryEntityFilterPredicatesByEntityClass;
    NSMutableDictionary *_optimizedLibraryContainerFilterPredicatesByContainerClass;
    NSMutableDictionary *_optimizedLibraryPublicEntityFilterPredicatesByEntityClass;
    NSMutableDictionary *_optimizedLibraryPublicContainerFilterPredicatesByContainerClass;
    _Bool _isHomeSharingLibraryLoaded;
    _Bool _isHomeSharingLibrary;
    id <ML3MusicLibraryDelegate> _delegate;
    ML3DatabaseConnectionPool *_connectionPool;
    NSString *_databasePath;
    NSArray *_libraryEntityFilterPredicates;
    NSArray *_libraryContainerFilterPredicates;
    NSArray *_libraryPublicEntityFilterPredicates;
    NSArray *_libraryPublicContainerFilterPredicates;
}

+ (id)assistantSyncDataChangedNotificationName;
+ (id)widthLimitedSetValuesQueue;
+ (_Bool)updateTrackIntegrityOnConnection:(id)arg1;
+ (void)enumerateSortMapTablesUsingBlock:(CDUnknownBlockType)arg1;
+ (id)sectionIndexTitleForSectionHeader:(id)arg1;
+ (id)sectionIndexTitles;
+ (id)localizedSectionIndexTitleForSectionHeader:(id)arg1;
+ (id)localizedSectionHeaderForSectionHeader:(id)arg1;
+ (void)setCompanionDeviceActiveStoreAccountSubscriber:(_Bool)arg1;
+ (_Bool)companionDeviceActiveStoreAccountIsSubscriber;
+ (_Bool)deviceSupportsMultipleLibraries;
+ (void)enableAutomaticDatabaseValidation;
+ (void)disableAutomaticDatabaseValidation;
+ (void)disableSharedLibrary;
+ (id)sharedLibraryDatabasePath;
+ (id)sharedLibrary;
+ (_Bool)dropIndexesUsingConnection:(id)arg1 tableNames:(const char *)arg2;
+ (_Bool)orderingLanguageMatchesSystemUsingConnection:(id)arg1;
+ (_Bool)userVersionMatchesSystemUsingConnection:(id)arg1;
+ (int)userVersionUsingConnection:(id)arg1;
+ (id)itemIndexSchemaSQL;
+ (id)indexSchemaSQL;
+ (id)allTables;
+ (id)allTriggersSQL;
+ (id)allPragmaSQL;
+ (id)allSchemaSQL;
+ (id)itemNewSchemaSQL;
+ (id)itemSchemaSQL;
+ (id)sortMapNewSchemaSQL;
+ (id)sortMapSchemaSQL;
+ (id)storeLinkSchemaSQL;
+ (id)pathForBaseLocationPath:(long long)arg1;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(_Bool)arg3 createParentFolderIfNecessary:(_Bool)arg4;
+ (id)pathForResourceFileOrFolder:(int)arg1;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(_Bool)arg3 isFolder:(_Bool *)arg4;
+ (id)controlDirectoryPathWithBasePath:(id)arg1;
+ (id)mediaFolderRelativePath:(id)arg1;
+ (id)mediaFolderPathByAppendingPathComponent:(id)arg1;
+ (id)mediaFolderPath;
+ (id)unitTestableLibraryForTest:(id)arg1 basePath:(id)arg2 setupSQLFilenames:(id)arg3;
+ (id)databasePathForUnitTest:(id)arg1 withBasePath:(id)arg2;
@property(retain, nonatomic) NSArray *libraryPublicContainerFilterPredicates; // @synthesize libraryPublicContainerFilterPredicates=_libraryPublicContainerFilterPredicates;
@property(retain, nonatomic) NSArray *libraryPublicEntityFilterPredicates; // @synthesize libraryPublicEntityFilterPredicates=_libraryPublicEntityFilterPredicates;
@property(retain, nonatomic) NSArray *libraryContainerFilterPredicates; // @synthesize libraryContainerFilterPredicates=_libraryContainerFilterPredicates;
@property(retain, nonatomic) NSArray *libraryEntityFilterPredicates; // @synthesize libraryEntityFilterPredicates=_libraryEntityFilterPredicates;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) ML3DatabaseConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
@property(nonatomic) __weak id <ML3MusicLibraryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateDatabaseConnectionsProfilingLevel;
- (void)_postClientNotificationWithDistributedName:(id)arg1 localName:(id)arg2;
- (void)_loggingSettingsDidChangeNotification:(id)arg1;
- (void)_effectiveSettingsDidChangeNotification:(id)arg1;
- (_Bool)_clearAllRowsFromTables:(id)arg1;
- (void)_teardownMediaLibraryDatabaseConnection:(id)arg1;
- (void)_configureMediaLibraryDatabaseConnection:(id)arg1;
- (_Bool)_canConfigureMediaLibraryDatabaseConnection:(id)arg1;
- (id)_newGeniusDBConnectionAtPath:(id)arg1;
- (void)_autogenerateArtworkForRelativePath:(id)arg1 artworkType:(long long)arg2 mediaType:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_convertOriginalArtworkToDevicePreferredFormatFromSourceURL:(id)arg1 toDestinationURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_removeInvalidAvailableArtworkTokensUsingConnection:(id)arg1;
- (_Bool)_removeOrphanedArtworkAssetsUsingConnection:(id)arg1;
- (_Bool)_removeOrphanedArtworkMetadataUsingConnection:(id)arg1;
- (_Bool)_removeOrphanedArtworkTokensUsingConnection:(id)arg1;
- (void)_deleteAllArtworkVariantsAtRelativePaths:(id)arg1;
- (id)_allArtworkVariantDirectories;
- (_Bool)_determineAndUpdateBestArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 preserveExistingAvailableToken:(_Bool)arg5 usingConnection:(id)arg6;
- (_Bool)_updateBestArtworkTokensForArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 preserveExistingAvailableToken:(_Bool)arg4 usingConnection:(id)arg5;
- (_Bool)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 relativePath:(id)arg4 usingConnection:(id)arg5;
- (_Bool)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 relativePath:(id)arg4;
- (void)updateTrackIntegrity;
- (void)deletePresignedValidity;
- (_Bool)verifyPresignedValidity;
- (_Bool)hasPresignedValidity;
- (void)migratePresignedValidity;
- (_Bool)deleteDatabaseProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (void)removeItemsWithFamilyAccountID:(unsigned long long)arg1 purchaserAccountID:(unsigned long long)arg2 downloaderAccountID:(unsigned long long)arg3;
- (void)removeOrphanedTracksOnlyInCaches:(_Bool)arg1;
- (void)removeOrphanedTracks;
- (void)removeTombstonesForDeletedItems;
- (_Bool)cleanupArtworkWithOptions:(unsigned long long)arg1 usingConnection:(id)arg2;
- (_Bool)cleanupArtworkWithOptions:(unsigned long long)arg1;
- (_Bool)recordPlayEventForContainerPersistentID:(long long)arg1;
- (_Bool)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (void)enumerateArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)retrieveBestArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)isArtworkTokenAvailable:(id)arg1;
- (void)updateBestArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 preserveExistingAvailableToken:(_Bool)arg5 usingConnection:(id)arg6;
- (void)updateBestArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 usingConnection:(id)arg5;
- (void)removeArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 usingConnection:(id)arg5;
- (void)removeArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4;
- (void)importArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5 usingConnection:(id)arg6;
- (void)importArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (void)migrateExistingArtworkToken:(id)arg1 newArtworkToken:(id)arg2 newSourceType:(long long)arg3;
- (_Bool)deleteArtworkToken:(id)arg1;
- (_Bool)removeArtworkAssetWithToken:(id)arg1;
- (_Bool)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned int)arg5;
- (_Bool)importOriginalArtworkFromFileURL:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned int)arg5;
- (_Bool)importExistingOriginalArtworkWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 mediaType:(unsigned int)arg4;
- (void)autogenerateSupportedSizesForAllOriginalArtworkWithConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned long long)arg2;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned long long)arg2 respectSongMattress:(_Bool)arg3;
- (long long)autoFilledTracksTotalSizeWithUrgency:(unsigned long long)arg1;
@property(readonly, nonatomic) long long autoFilledTracksTotalSize;
- (void)removePlaylistsWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingConnection:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingConnection:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)removeSource:(int)arg1 usingConnection:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)removeSource:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)countOfChangedPersistentIdsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3;
- (_Bool)persistentID:(long long)arg1 changedAfterRevision:(long long)arg2 revisionTrackingCode:(long long)arg3;
- (void)getChangedPersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(long long)arg2 maximumRevisionType:(int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3 forMediaTypes:(id)arg4 inUsersLibrary:(_Bool)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (_Bool)updateSortMap;
- (_Bool)requiresNonSchemaUpdatesOnConnection:(id)arg1;
- (_Bool)requiresSchemaOnlyUpdatesOnConnection:(id)arg1;
- (void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)savePlaylists;
- (void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)saveTrackMetadata;
- (void)notifyKeepLocalStateDidChange;
- (void)notifyLibraryImportDidFinish;
- (void)notifyCloudLibraryAvailabilityDidChange;
- (void)notifySectionsDidChange;
- (void)notifyDisplayValuesPropertyDidChange;
- (void)notifyInvisiblePropertyDidChange;
- (void)notifyNonContentsPropertyDidChange;
- (void)notifyEntitiesAddedOrRemoved;
- (void)notifyContentsDidChange;
- (unsigned long long)unknownSectionIndex;
- (unsigned long long)sectionIndexTitleIndexForSectionIndex:(unsigned long long)arg1;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)groupingKeysForStrings:(id)arg1;
- (id)groupingKeyForString:(id)arg1;
- (void)accessSortKeyBuilder:(CDUnknownBlockType)arg1;
- (id)accountCacheDatabase;
- (_Bool)clearAllCloudKVSData;
- (_Bool)clearAllGeniusData;
- (_Bool)emptyAllTables;
- (_Bool)createIndexes;
- (int)currentDatabaseVersion;
- (_Bool)validateDatabase;
- (_Bool)automaticDatabaseValidationDisabled;
- (_Bool)isCurrentThreadInTransaction;
- (void)performAsyncDatabaseWriteTransactionWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performReadOnlyDatabaseTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)performDatabaseTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)databaseConnectionAllowingWrites:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)reconnectToDatabase;
- (void)checkInDatabaseConnection:(id)arg1;
- (id)checkoutWriterConnection;
- (id)checkoutReaderConnection;
- (void)connectionPool:(id)arg1 createdNewConnection:(id)arg2;
- (void)connection:(id)arg1 didEndDatabaseTransactionAndCommit:(_Bool)arg2;
- (void)connectionDidBeginDatabaseTransaction:(id)arg1;
- (void)connectionWillCloseDatabase:(id)arg1;
- (void)connectionDidOpenDatabase:(id)arg1;
- (void)connectionWillOpenDatabase:(id)arg1;
- (id)libraryEntityFilterPredicatesForContainerClass:(Class)arg1;
- (id)libraryEntityFilterPredicatesForEntityClass:(Class)arg1;
@property(readonly, nonatomic) _Bool mediaRestrictionEnabled;
@property(readonly, nonatomic) NSArray *preferredSubtitleTracks;
@property(readonly, nonatomic) NSArray *preferredAudioTracks;
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property(readonly, nonatomic) ML3DatabaseMetadata *databaseInfo;
@property(readonly, nonatomic) ML3Container *currentDevicePlaybackHistoryPlaylist;
@property(readonly, nonatomic) ML3Container *currentDevicePurchasesPlaylist;
@property(readonly, nonatomic, getter=isLibraryEmpty) _Bool libraryEmpty;
- (void)setLibraryUID:(id)arg1;
@property(readonly, nonatomic) NSString *libraryUID;
@property(nonatomic) NSString *syncLibraryID;
@property(nonatomic) long long syncGenerationID;
@property(readonly, nonatomic) long long currentContentRevision;
@property(readonly, nonatomic) long long currentRevision;
@property(nonatomic) _Bool downloadOnAddToLibrary;
@property(nonatomic) _Bool isHomeSharingLibrary;
- (void)dealloc;
- (id)initWithPath:(id)arg1 readOnly:(_Bool)arg2 populateUnitTestTablesBlock:(CDUnknownBlockType)arg3;
- (id)initWithPath:(id)arg1;
- (id)artistForArtistName:(id)arg1 seriesName:(id)arg2;
- (id)artistGroupingKeyForArtistName:(id)arg1 seriesName:(id)arg2;
- (_Bool)repairAlbumArtistRelationshipsWithConnection:(id)arg1;
- (id)albumForAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(id)arg4 compilation:(_Bool)arg5;
- (_Bool)_validateDatabaseUsingConnection:(id)arg1 error:(id *)arg2;
- (_Bool)coerceValidDatabaseWithError:(id *)arg1;
- (_Bool)_coalesceMismatchedCollectionClass:(Class)arg1 usingConnection:(id)arg2;
- (_Bool)coalesceMismatchedCollectionsUsingConnection:(id)arg1;
- (id)_systemUnicodeVersionData;
- (long long)insertStringIntoSortMapNoTransaction:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1 didReSortMap:(_Bool *)arg2;
- (CDStruct_912cb5d2)nameOrderForString:(id)arg1;
- (_Bool)validateSortMapUnicodeVersionOnConnection:(id)arg1;
- (_Bool)inTransactionUpdateSearchMapOnConnection:(id)arg1;
- (_Bool)inTransactionUpdateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(_Bool)arg2;
- (_Bool)updateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(_Bool)arg2;
- (_Bool)updateSortMapOnConnection:(id)arg1;
- (id)genreForGenre:(id)arg1;
- (id)composerForComposerName:(id)arg1;
- (id)albumArtistForEffectiveAlbumArtistName:(id)arg1;
- (void)updateOrderingLanguagesForCurrentLanguage;
- (_Bool)updateSystemPlaylistNamesForCurrentLanguage;
- (_Bool)createMissingBuiltInSmartPlaylists;
- (long long)_clearPurgeableTracksOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 includeCloudAssets:(_Bool)arg3 includeAutoFilledTracks:(_Bool)arg4;
- (long long)_clearPurgeableTracksOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 includeAutoFilledTracks:(_Bool)arg3;
- (long long)_clearOrphanedAssetsOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2;
- (long long)_clearAllCloudAssets;
- (long long)_clearDatabaseFileFreeSpace;
- (id)_notInKeepLocalCollectionPredicate;
- (id)_allKeepLocalPlaylistTracks;
- (id)_purgeableTrackPredicateWithUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(_Bool)arg2 includeCloudAssets:(_Bool)arg3;
- (void)_enumeratePurgeableTracksForUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(_Bool)arg2 includeCloudAssets:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (long long)_purgeableTracksTotalSizeWithUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(_Bool)arg2;
- (void)_enumeratePurgeableAlbumTracksForUrgency:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumeratePurgeableStreamedTracksForUrgency:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_totalSizeForAllNonCacheTracks;
- (id)_purgeableAlbumsQuerySQLWithUrgency:(unsigned long long)arg1;
- (id)_nonPurgeableAlbumsQuerySQLWithUrgency:(unsigned long long)arg1;
- (id)_purgeableItemsPredicateSQLWithUrgency:(unsigned long long)arg1;
- (unsigned long long)_managedClearPurgeableTracksOfAmount:(unsigned long long)arg1 urgency:(unsigned long long)arg2;
- (unsigned long long)_managedPurgeableTracksTotalSizeWithUrgency:(unsigned long long)arg1;
- (long long)_clearPurgeableDatabaseFilesOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2;
- (long long)_clearPurgeableArtworkOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2;
- (long long)_purgeableDatabaseFileSizeWithUrgency:(unsigned long long)arg1;
- (long long)_purgeableArtworkTotalSizeWithUrgency:(unsigned long long)arg1;
- (long long)_artworkTotalSize;
- (long long)_cloudAssetsTotalSize;
- (long long)_databaseFileFreeSpace;
- (_Bool)_shouldPurgeKeepLocalTracksForUrgency:(unsigned long long)arg1;
- (long long)minimumPurgeableStorage;
- (void)setMinimumPurgeableStorage:(long long)arg1;
- (_Bool)shouldOptimizeStorage;
- (void)setShouldOptimizeStorage:(_Bool)arg1;
- (_Bool)autoFilledTracksArePurgeable;
- (void)setAutoFilledTracksArePurgeable:(_Bool)arg1;
- (long long)clearAllRemovedTracks;
- (long long)clearPurgeableStorageAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 includeAutoFilledTracks:(_Bool)arg3;
- (long long)clearPurgeableStorageAmount:(long long)arg1 withUrgency:(unsigned long long)arg2;
- (long long)purgeableStorageSizeWithUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(_Bool)arg2;
- (long long)purgeableStorageSizeWithUrgency:(unsigned long long)arg1;
- (void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1;
- (void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1;
- (id)uppService;
@property(readonly, nonatomic) _Bool supportsUbiquitousPlaybackPositions;
- (long long)syncIdFromMultiverseId:(id)arg1;
- (_Bool)prepareUnitTestDatabaseWithSQLFromContentsOfFile:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

