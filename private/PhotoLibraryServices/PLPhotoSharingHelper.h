//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLPhotoSharingHelper : NSObject
{
}

+ (_Bool)debugAutoAcceptInvitation;
+ (_Bool)debugDownloadAllDerivatives;
+ (_Bool)debugDownloadMetadataOnly;
+ (_Bool)debugDownloadThumbnailsOnly;
+ (_Bool)debugAlwaysStreamSharedVideos;
+ (void)deleteDebugBreadcrumbsForAlbumGUID:(id)arg1;
+ (void)writeDownloadDebugBreadcrumbForAsset:(id)arg1 albumGUID:(id)arg2 content:(id)arg3 state:(int)arg4 error:(id)arg5;
+ (void)writeUploadDebugBreadcrumbForAssetCollections:(id)arg1 state:(int)arg2 error:(id)arg3;
+ (id)prefixForBreadcrumbState:(int)arg1;
+ (void)writeAlbumNameBreadCrumb:(id)arg1 forAlbumGUID:(id)arg2 isUpload:(_Bool)arg3;
+ (id)directoryPathForDownloadActivityForAlbumGUID:(id)arg1 create:(_Bool)arg2;
+ (id)directoryPathForUploadActivityForAlbumGUID:(id)arg1 create:(_Bool)arg2;
+ (_Bool)isBreadcrumbDebugEnabled;
+ (unsigned long long)purgeSpace:(unsigned long long)arg1;
+ (unsigned long long)purgeableSpace;
+ (void)countOfAssetsInMstreamdSharingDownloadQueueWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)isMstreamdBusyPerformingSharingActivityWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)applicationIsInForeground:(_Bool)arg1;
+ (double)intervalBetweenAlbumPolls;
+ (double)intervalBetweenPolls;
+ (void)downloadAsset:(id)arg1 cloudPlaceholderKind:(short)arg2 shouldPrioritize:(_Bool)arg3 shouldExtendTimer:(_Bool)arg4;
+ (id)downloadNotificationForAssetwithUUID:(id)arg1 cloudPlaceholderKind:(short)arg2;
+ (_Bool)_derivativeExistsForAsset:(id)arg1 cloudPlaceholderKind:(short)arg2;
+ (id)_downloadRequestQueue;
+ (_Bool)_recentlyRequestedDownloadAsset:(id)arg1 cloudPlaceholderKind:(short)arg2;
+ (void)prioritizeDownloadsForAlbumGUID:(id)arg1;
+ (void)checkServerModelForAlbum:(id)arg1;
+ (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2;
+ (void)markAlbumGUIDAsViewed:(id)arg1 clearUnseenAssetsCount:(_Bool)arg2;
+ (struct CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 derivativeType:(int)arg3 withSpecificationInfo:(id)arg4;
+ (id)temporaryLargeVideoDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporarySmallVideoDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporaryVideoPosterFramePathForCollectionGUID:(id)arg1;
+ (id)temporaryVideoPathForCollectionGUID:(id)arg1;
+ (id)temporaryThumbnailPathForCollectionGUID:(id)arg1;
+ (id)temporaryDerivativePathForCollectionGUID:(id)arg1 uti:(id)arg2;
+ (double)derivedAssetSmallDimensionLimitForType:(int)arg1;
+ (id)derivativesForMasterAsset:(id)arg1 withSpecifications:(id)arg2;
+ (id)videoDerivativesForAssetCollection:(id)arg1 withSpecifications:(id)arg2;
+ (void)deleteCommentWithGUIDFromServer:(id)arg1;
+ (void)publishCloudSharedCommentToServer:(id)arg1;
+ (void)handlePhoneInvitationFailuresWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)_transactionWithName:(const char *)arg1;
+ (id)_processPhoneFailuresQueue;
+ (void)savePhoneInvitationFailuresForPhoneNumber:(id)arg1 inAlbum:(id)arg2;
+ (id)_phoneInvitationFailureFile;
+ (_Bool)hasPhoneInvitationForAlbum:(id)arg1;
+ (void)refreshSubscriberListForAlbumGUID:(id)arg1;
+ (void)markPendingInvitationAsSpamForAlbum:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)declinePendingInvitationForAlbum:(id)arg1;
+ (void)acceptPendingInvitationForAlbum:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)unsubscribeFromAlbum:(id)arg1;
+ (void)removeSubscribers:(id)arg1 fromOwnedAlbum:(id)arg2;
+ (void)sendPendingInvitationsForNewlyCreatedAlbum:(id)arg1;
+ (unsigned int)unregisterIdleStateChangeObserverWithToken:(int)arg1;
+ (unsigned int)registerIdleStateChangeObserverWithToken:(int *)arg1 handler:(CDUnknownBlockType)arg2;
+ (_Bool)removeCloudSharingDirectories:(id *)arg1;
+ (void)requestVideoPlaybackURLForAsset:(id)arg1 videoType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)isCellularConnection;
+ (void)deleteCloudSharedAssetsFromServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)enqueueCloudSharedAssetsForPublishToServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)updateCloudSharedAlbumMultipleContributorsStateOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumPublicURLStateOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumMetadataOnServer:(id)arg1;
+ (void)deleteCloudSharedAlbumFromServer:(id)arg1;
+ (void)publishCloudSharedAlbumToServer:(id)arg1;
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUIDs:(id)arg1;
+ (void)resetAllLocalState;
+ (void)updateLocalAlbumMetadataForMSASAlbum:(id)arg1 info:(id)arg2;
+ (void)trackUploadBatchSize:(unsigned long long)arg1;
+ (id)_localizationKeyForAssets:(id)arg1;
+ (_Bool)canSetUserCloudSharedLiked:(_Bool)arg1 forAssets:(id)arg2 error:(id *)arg3;
+ (_Bool)canAcceptPendingInvitationForAlbum:(id)arg1 error:(id *)arg2;
+ (_Bool)canCreateStreamInPhotoLibrary:(id)arg1 error:(id *)arg2;
+ (_Bool)hasReachedLimitOfSubscribedStreamsInLibrary:(id)arg1;
+ (_Bool)hasReachedLimitOfOwnedStreamsInLibrary:(id)arg1;
+ (long long)maxGIFSizeForPublishing;
+ (long long)maxVideoLengthForPublishing;
+ (long long)maxNumThumbnailsToPrefetchPerDay;
+ (long long)maxNumDerivativesToPrefetchPerDay;
+ (long long)maxNumDerivativesToDownloadPerPush;
+ (long long)maxCharactersPerComment;
+ (long long)maxCommentsPerAsset;
+ (long long)maxSubscribersPerStream;
+ (long long)maxAssetsPerStream;
+ (long long)maxSubscribedStreams;
+ (long long)maxOwnedStreams;
+ (struct CGSize)videoPosterFrameDimension;
+ (long long)_serverLimitValueForKey:(id)arg1 withDefaultResult:(long long)arg2;
+ (id)serverSideConfigurationDictionary;
+ (void)_resetServerSideConfigurationDictionary;
+ (void)updateSharedAlbumsCachedServerConfigurationLimits;
+ (id)streamdVideoCache;
+ (id)_pathToServerConfigurationCache;
+ (void)initializeMSPlatform;
+ (void)forgetSharingPersonID:(id)arg1;
+ (void)retryOutstandingActivities;
+ (void)pollForAlbumListUpdates;
+ (_Bool)accountMatchesEmail:(id)arg1;
+ (id)sharingUsername;
+ (id)sharingPersonID;
+ (_Bool)sharedStreamsExplictlyDisabled;
+ (_Bool)sharedStreamsEnabled;
+ (_Bool)sharedStreamsUIEnabled;
+ (void)clearCachedAccountState;
+ (void)photosPreferencesChanged;
+ (void)accountSettingsChanged;

@end

