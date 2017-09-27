//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMediaItem, MPModelGenericObject, NSDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface MPMediaPlaybackItemMetadata : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _allowsCellularNetworking;
    _Bool _allowsInitiatingPlayWhileDownload;
    _Bool _isExplicitTrack;
    _Bool _requiresPlayWhileDownload;
    _Bool _showComposer;
    _Bool _shouldReportPlayEventsToStore;
    _Bool _shouldRememberBookmarkTime;
    _Bool _subscriptionRequired;
    _Bool _prefersStoreContentInfo;
    _Bool _offlineHLS;
    float _volumeNormalization;
    NSString *_albumArtistName;
    long long _albumStoreAdamID;
    NSString *_albumTitle;
    NSString *_artistName;
    long long _artistStoreAdamID;
    NSString *_buyParameters;
    NSString *_composerName;
    NSString *_contentTitle;
    unsigned long long _contentType;
    NSString *_copyrightText;
    long long _downloadIdentifier;
    long long _endpointType;
    double _expectedDuration;
    NSString *_genreTitle;
    NSURL *_localNetworkContentURL;
    MPMediaItem *_mediaItem;
    long long _mediaLibraryPersistentID;
    MPModelGenericObject *_modelGenericObject;
    NSURL *_protectedContentSupportStorageURL;
    double _bookmarkTime;
    NSString *_storeUbiquitousIdentifier;
    unsigned long long _storeAccountID;
    long long _storeAdamID;
    long long _storeSubscriptionAdamID;
    unsigned long long _storeSagaID;
    NSNumber *_iTunesStoreContentID;
    NSNumber *_iTunesStoreContentDSID;
    NSNumber *_rentalIdentifier;
    NSDictionary *_hlsOfflinePlaybackKeys;
}

+ (_Bool)_shouldRespectStoreCellularDataSetting;
+ (_Bool)_shouldRespectMusicCellularDataSetting;
@property(readonly, nonatomic, getter=isOfflineHLS) _Bool offlineHLS; // @synthesize offlineHLS=_offlineHLS;
@property(readonly, nonatomic) NSDictionary *hlsOfflinePlaybackKeys; // @synthesize hlsOfflinePlaybackKeys=_hlsOfflinePlaybackKeys;
@property(readonly, nonatomic, getter=_rentalIdentifier) NSNumber *rentalIdentifier; // @synthesize rentalIdentifier=_rentalIdentifier;
@property(readonly, nonatomic) _Bool prefersStoreContentInfo; // @synthesize prefersStoreContentInfo=_prefersStoreContentInfo;
@property(readonly, copy, nonatomic) NSNumber *iTunesStoreContentDSID; // @synthesize iTunesStoreContentDSID=_iTunesStoreContentDSID;
@property(readonly, copy, nonatomic) NSNumber *iTunesStoreContentID; // @synthesize iTunesStoreContentID=_iTunesStoreContentID;
@property(readonly, nonatomic) float volumeNormalization; // @synthesize volumeNormalization=_volumeNormalization;
@property(readonly, nonatomic, getter=isSubscriptionRequired) _Bool subscriptionRequired; // @synthesize subscriptionRequired=_subscriptionRequired;
@property(readonly, nonatomic) unsigned long long storeSagaID; // @synthesize storeSagaID=_storeSagaID;
@property(readonly, nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property(readonly, nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(readonly, nonatomic) unsigned long long storeAccountID; // @synthesize storeAccountID=_storeAccountID;
@property(readonly, copy, nonatomic) NSString *storeUbiquitousIdentifier; // @synthesize storeUbiquitousIdentifier=_storeUbiquitousIdentifier;
@property(readonly, nonatomic) _Bool shouldRememberBookmarkTime; // @synthesize shouldRememberBookmarkTime=_shouldRememberBookmarkTime;
@property(readonly, nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(readonly, nonatomic) _Bool shouldReportPlayEventsToStore; // @synthesize shouldReportPlayEventsToStore=_shouldReportPlayEventsToStore;
@property(readonly, nonatomic) _Bool showComposer; // @synthesize showComposer=_showComposer;
@property(readonly, nonatomic) _Bool requiresPlayWhileDownload; // @synthesize requiresPlayWhileDownload=_requiresPlayWhileDownload;
@property(readonly, copy, nonatomic) NSURL *protectedContentSupportStorageURL; // @synthesize protectedContentSupportStorageURL=_protectedContentSupportStorageURL;
@property(readonly, nonatomic) MPModelGenericObject *modelGenericObject; // @synthesize modelGenericObject=_modelGenericObject;
@property(readonly, nonatomic) long long mediaLibraryPersistentID; // @synthesize mediaLibraryPersistentID=_mediaLibraryPersistentID;
@property(readonly, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, copy, nonatomic) NSURL *localNetworkContentURL; // @synthesize localNetworkContentURL=_localNetworkContentURL;
@property(readonly, nonatomic) _Bool isExplicitTrack; // @synthesize isExplicitTrack=_isExplicitTrack;
@property(readonly, copy, nonatomic) NSString *genreTitle; // @synthesize genreTitle=_genreTitle;
@property(readonly, nonatomic) double expectedDuration; // @synthesize expectedDuration=_expectedDuration;
@property(readonly, nonatomic) long long endpointType; // @synthesize endpointType=_endpointType;
@property(readonly, nonatomic) long long downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(readonly, copy, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(readonly, copy, nonatomic) NSString *composerName; // @synthesize composerName=_composerName;
@property(readonly, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property(readonly, nonatomic) long long artistStoreAdamID; // @synthesize artistStoreAdamID=_artistStoreAdamID;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(readonly, nonatomic) long long albumStoreAdamID; // @synthesize albumStoreAdamID=_albumStoreAdamID;
@property(readonly, copy, nonatomic) NSString *albumArtistName; // @synthesize albumArtistName=_albumArtistName;
@property(readonly, nonatomic) _Bool allowsInitiatingPlayWhileDownload; // @synthesize allowsInitiatingPlayWhileDownload=_allowsInitiatingPlayWhileDownload;
- (void).cxx_destruct;
- (void)_storeCellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (void)_musicCellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (void)_contentTasteControllerDidChangeNotification:(id)arg1;
- (id)_storeRedownloadProductItem;
- (_Bool)_requiresPendingItemDownload;
- (void)_persistURI:(id)arg1 persistentContentKey:(id)arg2;
- (void)_setNeedsAllowsCellularNetworkingUpdate;
- (_Bool)_calculateAllowsCellularNetworking;
- (id)streamingPlaybackPurchaseBundleDestinationFilePathForAssetFilePath:(id)arg1;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4;
- (void)setLikedState:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNetworkConstraintsForDownloadKind:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long *)arg1 protectionType:(unsigned long long *)arg2 usesPurchaseBundle:(_Bool *)arg3;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
@property(readonly, copy, nonatomic) NSString *iTunesStoreContentUserAgent;
@property(readonly, copy, nonatomic) NSString *iTunesStoreContentType;
@property(readonly, copy, nonatomic) NSString *iTunesStoreContentPurchasedMediaKind;
@property(readonly, copy, nonatomic) NSString *iTunesStoreContentDownloadParameters;
@property(readonly, nonatomic) long long likedState;
@property(readonly, copy, nonatomic) NSDictionary *additionalHTTPHeaderFields;
@property(readonly, nonatomic) _Bool allowsCellularNetworking;
@property(readonly, nonatomic) _Bool allowsAssetCaching;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

