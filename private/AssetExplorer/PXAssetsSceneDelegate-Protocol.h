//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXAssetsDataSource, PXAssetsScene, PXAssetsTilingLayout, PXTilingChange;

@protocol PXAssetsSceneDelegate <NSObject>
- (PXAssetsTilingLayout *)assetsScene:(PXAssetsScene *)arg1 layoutForDataSource:(PXAssetsDataSource *)arg2;

@optional
- (id <PXTileTransitionAnimationCoordinator>)assetsScene:(PXAssetsScene *)arg1 transitionAnimationCoordinatorForChange:(PXTilingChange *)arg2;
- (id <PXTileIdentifierConverter>)assetsScene:(PXAssetsScene *)arg1 tileIdentifierConverterForChange:(PXTilingChange *)arg2;
- (void)assetsScene:(PXAssetsScene *)arg1 didTransitionToDataSource:(PXAssetsDataSource *)arg2;
- (void)assetsScene:(PXAssetsScene *)arg1 willTransitionToDataSource:(PXAssetsDataSource *)arg2;
@end

