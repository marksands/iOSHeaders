//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKXPCShareDaemon.h"

@class BRFileObjectID, CKShare, CKShareMetadata, NSArray, NSData, NSDictionary, NSFileHandle, NSObject<BROperationClient>, NSSet, NSString, NSURL;

@protocol BRProtocol <CKXPCShareDaemon>
- (void)scheduleDeepScanForContainer:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_removePackageExtension:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_addPackageExtension:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)lookupMinFileSizeForThumbnailTransferWithReply:(void (^)(NSNumber *, NSError *))arg1;
- (void)lookupExcludedExtensionsForLogoutWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)lookupExcludedFilenamesForLogoutWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)_t_getPerfValuesWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)_t_isAutomaticallyEvictable:(NSURL *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)_t_copyItemIDFromItemAtURL:(NSURL *)arg1 toItemAtURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)_t_migrateAllZonesToClouddocsWithReset:(_Bool)arg1 onlyPrepare:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)_t_getPCSChainStateAtURL:(NSURL *)arg1 reply:(void (^)(unsigned int, NSError *))arg2;
- (void)_t_noopWithReply:(void (^)(NSError *))arg1;
- (void)_t_waitForLostScanToFinishWithReply:(void (^)(NSError *))arg1;
- (void)_t_copyGlobalProgressInfoWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)_t_resumeDownloadsForContainerID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_suspendDownloadsForContainerID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_resumeUploadsForContainerID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_suspendUploadsForContainerID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_resetAllZonesWithReply:(void (^)(NSError *))arg1;
- (void)_t_resetZoneForContainerID:(NSString *)arg1 waitUntilIdle:(_Bool)arg2 includingSharedZones:(_Bool)arg3 reply:(void (^)(NSError *))arg4;
- (void)_t_setFSEventProcessingState:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_resumeSyncUpOfContainer:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_pauseSyncUpOfContainer:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_resumeSyncDownOfContainer:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_pauseSyncDownOfContainer:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_removeAllSyncUpBlockingForContainerID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_blockSyncForContainerID:(NSString *)arg1 withPendingUpgradeToOSName:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)_t_blockSyncUpOfItemWithID:(NSString *)arg1 containerID:(NSString *)arg2 withPendingUpgradeToOSName:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)capabilityWhenTryingToReparentItemAtURL:(NSURL *)arg1 toNewParent:(NSURL *)arg2 reply:(void (^)(unsigned short, NSError *))arg3;
- (void)moveBRSecurityBookmarkAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)refreshSharingStateForItemIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)updatePrivilegesDescriptor;
- (void)currentSyncedRootURLsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)overwriteAccessTimeForItemAtURL:(NSURL *)arg1 atime:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)boostFilePresenterAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)trashItemAtURL:(NSURL *)arg1 reply:(void (^)(NSURL *, NSError *))arg2;
- (void)removeItemFromDisk:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)presentAcceptDialogsForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(NSError *))arg2;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyShareURLForShare:(CKShare *)arg2 appName:(NSString *)arg3 reply:(void (^)(CKShare *, NSURL *, NSError *))arg4;
- (void)copyBulkShareIDsAtURLs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyShareInfoAtURL:(NSURL *)arg2 reply:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyEtagAtURL:(NSURL *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyShortTokenAtURL:(NSURL *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyParticipantTokenAtURL:(NSURL *)arg2 reply:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toModifyRecordAccessAtURL:(NSURL *)arg2 allowAccess:(_Bool)arg3 reply:(void (^)(NSData *, NSString *, NSError *))arg4;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toLookupShareParticipants:(NSArray *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toUnshareShare:(CKShare *)arg2 forceDelete:(_Bool)arg3 reply:(void (^)(NSError *))arg4;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toSaveSharingInfo:(CKShare *)arg2 reply:(void (^)(CKShare *, NSError *))arg3;
- (void)createSharingInfoForURL:(NSURL *)arg1 reply:(void (^)(CKShare *, NSError *))arg2;
- (void)copyCurrentUserNameAndDisplayHandleWithReply:(void (^)(NSPersonNameComponents *, NSString *, NSError *))arg1;
- (void)copyCurrentUserNameAndEmailWithReply:(void (^)(NSPersonNameComponents *, NSString *, NSError *))arg1;
- (void)copyCurrentUserIdentifierWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toEvictItemAtURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCleanShareSubitemsAtURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toPrepFolderForSharingAt:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toUploadAllFilesInContainer:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyAvailableQuotaWithReply:(void (^)(NSNumber *, NSError *))arg2;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopySharingAccessToken:(NSURL *)arg2 reply:(void (^)(NSData *, NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopySharingWebAuthTokenForContainerID:(NSString *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopySharingInfoAtURL:(NSURL *)arg2 reply:(void (^)(CKShare *, NSURL *, NSError *))arg3;
- (void)getiWorkNeedsShareMigrateAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)getiWorkPublishingBadgingStatusAtURL:(NSURL *)arg1 reply:(void (^)(int, NSError *))arg2;
- (void)getiWorkPublishingInfoAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, _Bool, NSString *, NSError *))arg2;
- (void)setiWorkPublishingInfoAtURL:(NSURL *)arg1 publish:(_Bool)arg2 readonly:(_Bool)arg3 reply:(void (^)(NSError *))arg4;
- (void)enumerateWorkingSetChangesFromChangeToken:(NSData *)arg1 limit:(unsigned long long)arg2 completion:(void (^)(NSArray *, NSArray *, NSData *, NSError *))arg3;
- (void)enumerateAllFoldersWithSortOrder:(unsigned char)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(void (^)(NSArray *, unsigned long long, NSError *))arg4;
- (void)enumerateItemsInFolder:(BRFileObjectID *)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 completion:(void (^)(NSArray *, unsigned long long, NSError *))arg5;
- (void)currentNotifRankWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)getIsContainerWithIDOverQuota:(NSString *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)getContainerLastServerUpdateWithID:(NSString *)arg1 reply:(void (^)(NSDate *, NSError *))arg2;
- (void)getContainerStatusWithID:(NSString *)arg1 reply:(void (^)(unsigned int, NSError *))arg2;
- (void)getLocalizedLastSyncWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)getLastSyncDateWithReply:(void (^)(NSDate *, NSError *))arg1;
- (void)getApplicationStatusForProcess:(CDStruct_6ad76789)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)getApplicationStatus:(void (^)(BOOL, NSError *))arg1;
- (void)forceConflictForURL:(NSURL *)arg1 bookmarkData:(NSString *)arg2 forcedEtag:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)getPublishedURLForItemAtURL:(NSURL *)arg1 forStreaming:(_Bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(void (^)(NSURL *, NSDate *, NSError *))arg4;
- (void)getBackReferencingContainerIDsForURLs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)resolveFileObjectIDToURL:(BRFileObjectID *)arg1 reply:(void (^)(NSURL *, NSData *, NSURL *, NSData *, NSError *))arg2;
- (void)resolveFileObjectIDsToContentRecordIDs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)resolveBookmarkDataToURL:(NSString *)arg1 reply:(void (^)(NSURL *, NSData *, NSURL *, NSData *, NSError *))arg2;
- (void)getBookmarkDataForURL:(NSURL *)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 allowAccessByBundleID:(NSString *)arg3 reply:(void (^)(NSString *, NSString *, NSError *))arg4;
- (void)jetsamCloudDocsAppsWithReply:(void (^)(NSError *))arg1;
- (void)getMigrationStatusForPrimaryiCloudAccount:(void (^)(BOOL, NSError *))arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(NSString *)arg2 shouldUpdateAccount:(_Bool)arg3 reply:(void (^)(NSError *))arg4;
- (void)getContainersNeedingUpload:(void (^)(NSSet *, NSError *))arg1;
- (void)currentAccountLogoutWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)currentAccountCreateWithID:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)resolveConflictWithName:(NSString *)arg1 atURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)addExternalDocumentReferenceTo:(NSURL *)arg1 inContainer:(NSString *)arg2 underParent:(NSURL *)arg3 reply:(void (^)(NSURL *, NSURL *, NSData *, NSURL *, NSData *, NSError *))arg4;
- (void)getLoggedInUserPropertyValuesForKeys:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)didReceiveHandoffRequestForBundleID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)iCloudDesktopSettingsChangedWithAttributes:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)evictOldDocumentsWithReply:(void (^)(NSError *))arg1;
- (void)getEvictableSpaceWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)setStorageOpimizationEnabled:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)hasOptimizeStorageWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)getApplicationDocumentUsageInfoForBundleID:(NSString *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getTotalApplicationDocumentUsageWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getNonLocalVersionSenderWithReceiver:(id <BRNonLocalVersionReceiving>)arg1 documentURL:(NSURL *)arg2 includeCachedVersions:(_Bool)arg3 reply:(void (^)(id <BRNonLocalVersionSending>, NSURL *, NSError *))arg4;
- (void)getItemUpdateSenderWithReceiver:(id <BRItemNotificationReceiving>)arg1 reply:(void (^)(id <BRItemNotificationSending>, NSDictionary *, NSError *))arg2;
- (void)getAttributeValues:(NSArray *)arg1 forItemAtURL:(NSURL *)arg2 reply:(void (^)(NSMutableDictionary *, NSError *))arg3;
- (void)updateItemFromURL:(NSURL *)arg1 reply:(void (^)(BRQueryItem *, NSError *))arg2;
- (void)getQueryItemForURL:(NSURL *)arg1 reply:(void (^)(BRQueryItem *, NSError *))arg2;
- (void)thumbnailChangedForItemAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)evictItemAtURL:(NSURL *)arg1 options:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toDownloadItemAtURL:(NSURL *)arg2 readingOptions:(unsigned long long)arg3 wantsCurrentVersion:(_Bool)arg4 reply:(void (^)(NSError *))arg5;
- (void)startDownloadItemsAtURLs:(NSArray *)arg1 options:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)registerInitialSyncBarrierForID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)deleteAllContentsOfContainerID:(NSString *)arg1 onClient:(_Bool)arg2 onServer:(_Bool)arg3 wait:(_Bool)arg4 reply:(void (^)(NSError *))arg5;
- (oneway void)updateContainerMetadataForID:(NSString *)arg1;
- (void)getContainerURLForID:(NSString *)arg1 forProcess:(CDStruct_6ad76789)arg2 reply:(void (^)(NSURL *, NSData *, NSString *, NSError *))arg3;
- (void)getContainerURLForID:(NSString *)arg1 recreateDocumentsIfNeeded:(_Bool)arg2 reply:(void (^)(NSURL *, NSData *, NSString *, NSError *))arg3;
- (void)getContainerURLForID:(NSString *)arg1 reply:(void (^)(NSURL *, NSData *, NSString *, NSError *))arg2;
- (void)presyncContainerWithID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)checkinAskClientIfUsingUbiquity:(_Bool)arg1;
- (void)getContainerForURL:(NSURL *)arg1 reply:(void (^)(BRContainer *, NSError *))arg2;
- (void)getContainersByID:(void (^)(NSDictionary *, NSError *))arg1;
- (void)createContainerWithID:(NSString *)arg1 ownerName:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)waitForFileSystemChangeProcessingWithReply:(void (^)(void))arg1;
- (void)readerThrottleBackoffForDocumentAtPath:(NSString *)arg1 containerID:(NSString *)arg2 reply:(void (^)(double, NSError *))arg3;
- (void)dropSpotlightIndexWithReply:(void (^)(NSError *))arg1;
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(void (^)(long long))arg3;
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(void (^)(long long))arg3;
- (void)computePurgableSpaceWithUrgency:(int)arg1 reply:(void (^)(long long))arg2;
- (void)iWorkForceSyncContainerID:(NSString *)arg1 ownedByMe:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)forceSyncContainerID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_waitUntilIdle:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)forceSyncZoneHealthWithBarrierWithTimeout:(unsigned long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)forceSyncWithBarrierContainerID:(NSString *)arg1 timeout:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)zoneNameForContainer:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)healthStatusStringForContainer:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)simulateHealthIssueWithContainer:(NSString *)arg1 status:(NSString *)arg2 brokenStructure:(_Bool)arg3 reply:(void (^)(NSError *))arg4;
- (void)gatherInformationForPath:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)printStatus:(NSFileHandle *)arg1 containerID:(NSString *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)performSelfCheck:(NSFileHandle *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)dumpCoordinationInfoTo:(NSFileHandle *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)dumpDatabaseTo:(NSFileHandle *)arg1 containerID:(NSString *)arg2 includeAllItems:(_Bool)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)resetBudgets:(NSSet *)arg1 reply:(void (^)(NSError *))arg2;
- (void)setupInstanceWithDict:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end

