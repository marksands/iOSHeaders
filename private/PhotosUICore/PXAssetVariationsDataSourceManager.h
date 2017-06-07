//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXAssetEditOperationManagerObserver-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PHAsset, PXAssetEditOperationManager, PXAssetVariationsDataSource;

@interface PXAssetVariationsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver, PXAssetEditOperationManagerObserver>
{
    struct {
        _Bool pendingVariationType;
        _Bool currentVariationType;
        _Bool dataSource;
    } _needsUpdateFlags;
    _Bool _didCreateInitialDataSource;
    PHAsset *_asset;
    PXAssetEditOperationManager *_editOperationManager;
    PHAsset *_currentAsset;
    long long _pendingVariationType;
    long long _currentVariationType;
}

@property(nonatomic) long long currentVariationType; // @synthesize currentVariationType=_currentVariationType;
@property(nonatomic) long long pendingVariationType; // @synthesize pendingVariationType=_pendingVariationType;
@property(retain, nonatomic) PHAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(readonly, nonatomic) PXAssetEditOperationManager *editOperationManager; // @synthesize editOperationManager=_editOperationManager;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void *)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)_assetEditOperationsDidChange;
- (void)_updateDataSourceIfNeeded;
- (void)_invalidateDataSource;
- (void)_updateCurrentVariationTypeIfNeeded;
- (void)_invalidateCurrentVariationType;
- (void)_updatePendingVariationTypeIfNeeded;
- (void)_invalidatePendingVariationType;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (id)_variationOptionWithType:(long long)arg1 asset:(id)arg2;
- (id)initWithAsset:(id)arg1 editOperationManager:(id)arg2;
- (id)init;
@property(readonly, nonatomic) PXAssetVariationsDataSource *dataSource;
- (void)didPerformChanges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

