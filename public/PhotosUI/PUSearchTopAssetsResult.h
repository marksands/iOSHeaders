//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHPhotoLibraryChangeObserver.h"
#import "PUSearchResultItem.h"

@class NSArray, NSDictionary, NSString, PHFetchResult;

__attribute__((visibility("hidden")))
@interface PUSearchTopAssetsResult : NSObject <PHPhotoLibraryChangeObserver, PUSearchResultItem>
{
    NSArray *_assetUUIDs;
    NSArray *_thumbnailAssets;
    id <PUSearchTopAssetsResultChangeDelegate> _delegate;
    PHFetchResult *_thumbnailAssetsFetchResult;
}

@property(retain, nonatomic) PHFetchResult *thumbnailAssetsFetchResult; // @synthesize thumbnailAssetsFetchResult=_thumbnailAssetsFetchResult;
@property(nonatomic) __weak id <PUSearchTopAssetsResultChangeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *thumbnailAssets; // @synthesize thumbnailAssets=_thumbnailAssets;
@property(readonly, nonatomic) NSArray *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
- (void).cxx_destruct;
- (id)init;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSDictionary *debugDictionary;
- (id)_rangeSampledUUIDs:(id)arg1;
- (void)_curateThumbnailAssets;
@property(readonly, nonatomic) unsigned long long itemType;
- (void)photoLibraryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithAssetUUIDs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

