//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HSCloudItemIDList, HSConnectionConfiguration, NSArray, NSDictionary, NSNumber, NSString;

@protocol HSCloudServerProtocol
- (void)loadBooksForStoreIDs:(NSArray *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)canShowCloudVideoWithCompletion:(void (^)(_Bool))arg1;
- (void)canShowCloudMusicWithCompletion:(void (^)(_Bool))arg1;
- (void)canShowCloudDownloadButtonsWithCompletion:(void (^)(_Bool))arg1;
- (void)shouldProhibitStoreAppsActionForCurrentNetworkConditionsWithCompletion:(void (^)(_Bool))arg1;
- (void)isCellularDataRestrictedForStoreAppsWithCompletion:(void (^)(_Bool))arg1;
- (void)shouldProhibitVideosActionForCurrentNetworkConditionsWithCompletion:(void (^)(_Bool))arg1;
- (void)isCellularDataRestrictedForVideosWithCompletion:(void (^)(_Bool))arg1;
- (void)shouldProhibitMusicActionForCurrentNetworkConditionsWithCompletion:(void (^)(_Bool))arg1;
- (void)isCellularDataRestrictedForMusicWithCompletion:(void (^)(_Bool))arg1;
- (void)hasProperNetworkConditionsToShowCloudMediaWithCompletion:(void (^)(_Bool))arg1;
- (void)hasProperNetworkConditionsToPlayMediaWithCompletion:(void (^)(_Bool))arg1;
- (void)disableJaliscoGeniusWithCompletion:(void (^)(NSError *))arg1;
- (void)loadJaliscoGeniusOperationStatusWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)cancelUpdateJaliscoGeniusDataWithCompletion:(void (^)(NSError *))arg1;
- (void)updateJaliscoGeniusDataWithCompletion:(void (^)(NSError *))arg1;
- (void)enableJaliscoGeniusWithCompletion:(void (^)(NSError *))arg1;
- (void)setJaliscoGeniusCUID:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)loadJaliscoGeniusCUIDWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)loadJaliscoGeniusLearnMoreURLWithCompletion:(void (^)(NSURL *, NSError *))arg1;
- (void)loadIsJaliscoGeniusSupportedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)updateArtistHeroImages;
- (void)updateJaliscoAppsLibraryForFamilyStoreID:(NSNumber *)arg1 withReason:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)unhideAllPurchasedAppsWithCompletion:(void (^)(NSError *))arg1;
- (void)setHidden:(_Bool)arg1 purchasedAppWithStoreID:(NSNumber *)arg2 completion:(void (^)(NSError *))arg3;
- (void)redownloadPurchaseAppWithStoreID:(NSNumber *)arg1 completion:(void (^)(NSError *, NSData *))arg2;
- (void)jaliscoAppsImageDataForStoreID:(NSNumber *)arg1 completion:(void (^)(NSError *, NSData *))arg2;
- (void)searchJaliscoAppsLibrary:(NSString *)arg1 location:(NSString *)arg2 searchColumns:(NSArray *)arg3 includeHidden:(_Bool)arg4 includeUnsupported:(_Bool)arg5 completion:(void (^)(NSError *, NSArray *))arg6;
- (void)setCollectionProperties:(NSDictionary *)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)uploadCloudPlaylistPropertiesWithCompletion:(void (^)(NSError *))arg1;
- (void)uploadCloudItemPropertiesWithCompletion:(void (^)(NSError *))arg1;
- (void)setItemProperties:(NSDictionary *)arg1 forSagaID:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)setItemProperties:(NSDictionary *)arg1 forPurchaseHistoryID:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)hideItemsWithPurchaseHistoryIDs:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeItemsWithSagaIDs:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addStorePlaylistWithGlobalID:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)sdk_addStoreItemWithOpaqueID:(NSString *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)addStoreItemWithAdamID:(long long)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)updateSubscribedPlaylistsWithSagaIDs:(NSArray *)arg1 ignoreMinRefreshInterval:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)removePlaylistsWithSagaIDs:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)publishPlaylistWithSagaID:(long long)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)sdk_addStoreItemWithOpaqueID:(NSString *)arg1 toPlaylistWithPersistentID:(long long)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)setPlaylistProperties:(NSDictionary *)arg1 trackList:(HSCloudItemIDList *)arg2 forPlaylistPersistentID:(long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)sdk_createPlaylistWithPersistentID:(long long)arg1 properties:(NSDictionary *)arg2 trackList:(HSCloudItemIDList *)arg3 completion:(void (^)(unsigned long long, NSError *))arg4;
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(NSDictionary *)arg2 trackList:(HSCloudItemIDList *)arg3 completion:(void (^)(unsigned long long, NSError *))arg4;
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(NSString *)arg2 seedItemSagaIDs:(NSArray *)arg3 itemSagaIDs:(NSArray *)arg4 completion:(void (^)(unsigned long long, NSError *))arg5;
- (void)updateGeniusDataWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(NSArray *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(NSArray *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(NSArray *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (void)loadScreenshotInfoForSagaIDs:(NSArray *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (void)loadArtworkInfoForContainerSagaIDs:(NSArray *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (void)loadArtworkInfoForSagaIDs:(NSArray *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(NSArray *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(NSArray *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1;
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1;
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;
- (void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)importArtistHeroImageForPersistentID:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)importSubscriptionContainerArtworkForPersistentID:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)importSubscriptionScreenshotForPersistentID:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)importSubscriptionItemArtworkForPersistentID:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)importScreenshotForSagaID:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)loadUpdateProgressWithCompletion:(void (^)(NSError *, float))arg1;
- (void)loadIsUpdateInProgressWithCompletion:(void (^)(_Bool, _Bool))arg1;
- (void)removeJaliscoLibraryWithCompletion:(void (^)(NSError *))arg1;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)deauthenticateWithCompletion:(void (^)(NSError *))arg1;
- (void)authenticateAndStartInitialImport:(_Bool)arg1 mergeWithCloudLibrary:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateSagaLibraryWithReason:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateJaliscoAppsLibraryWithReason:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)setConnectionConfiguration:(HSConnectionConfiguration *)arg1 daemonConfiguration:(unsigned long long)arg2 preferredVideoQuality:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
@end

