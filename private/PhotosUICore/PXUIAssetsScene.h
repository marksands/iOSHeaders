//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsScene.h>

#import <PhotosUICore/PXTilingControllerPreheatHandler-Protocol.h>

@class NSMapTable, NSMutableSet, NSString, PXDebugAssetBadgeManager, PXUIMediaProvider, PXUIScrollViewController;

@interface PXUIAssetsScene : PXAssetsScene <PXTilingControllerPreheatHandler>
{
    NSMutableSet *_tilesInUse;
    NSMapTable *_imageRequesterByAssetReference;
    struct {
        _Bool preheating;
    } _needsUpdateFlags;
    _Bool __supressingColorSettings;
    PXDebugAssetBadgeManager *__debugBadgeManager;
}

+ (void)preloadResources;
@property(retain, nonatomic, setter=_setDebugBadgeManager:) PXDebugAssetBadgeManager *_debugBadgeManager; // @synthesize _debugBadgeManager=__debugBadgeManager;
@property(nonatomic, setter=_setSupressingColorSettings:) _Bool _supressingColorSettings; // @synthesize _supressingColorSettings=__supressingColorSettings;
- (void).cxx_destruct;
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3;
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)willTransitionToDataSource:(id)arg1;
- (void)_updatePreheatingIfNeeded;
- (void)_invalidatePreheating;
- (void)updateIfNeeded;
- (_Bool)needsUpdate;
- (void)_transitionImageRequestersToDataSource:(id)arg1;
- (id)_imageRequesterForIndexPath:(struct PXSimpleIndexPath)arg1 inDataSource:(id)arg2;
- (void)_registerDefaultTiles;
- (id)badgeManager;
@property(readonly, nonatomic) PXUIScrollViewController *scrollViewController;
- (void)dealloc;
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 selectionManager:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @dynamic mediaProvider;
@property(readonly) Class superclass;

@end
