//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetExplorer/NSObject-Protocol.h>

@class NSDictionary, NSSet, PUAssetExplorerReviewScreenViewController;
@protocol PUDisplayAsset, PUDisplayAssetCollection;

@protocol PUAssetExplorerReviewScreenViewControllerDelegate <NSObject>
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(PUAssetExplorerReviewScreenViewController *)arg1;
- (void)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 didPressDoneWithSelectedAssetUUIDs:(NSSet *)arg2 livePhotoDisabledAssetUUIDs:(NSSet *)arg3 substituteAssetsByUUID:(NSDictionary *)arg4;

@optional
- (_Bool)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id <PUDisplayAsset>)arg3 inAssetCollection:(id <PUDisplayAssetCollection>)arg4;
- (_Bool)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id <PUDisplayAsset>)arg3 inAssetCollection:(id <PUDisplayAssetCollection>)arg4;
- (void)assetExplorerReviewScreenViewControllerDidPressRetake:(PUAssetExplorerReviewScreenViewController *)arg1;
@end

