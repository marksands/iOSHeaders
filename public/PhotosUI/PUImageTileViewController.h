//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import "PUAssetViewModelChangeObserver.h"
#import "PUImageRequesterObserver.h"

@class CALayer<PLTileableLayer>, NSData, NSDate, NSString, NSURL, PUAssetViewModel, PUImageRequester, PUMediaProvider, PXImageLayerModulator, PXImageModulationManager, UIColor, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface PUImageTileViewController : PUTileViewController <PUImageRequesterObserver, PUAssetViewModelChangeObserver>
{
    _Bool _animatesImageAppearance;
    _Bool _shouldUseFullsizeImageData;
    _Bool _imageIsFullQuality;
    _Bool __needsUpdateImage;
    _Bool __needsUpdateImageLayerModulator;
    _Bool __needsUpdateImageLayerModulatorInput;
    _Bool __needsUpdateImageView;
    _Bool __needsUpdateFullsizeImageMetadata;
    _Bool __needsUpdateFullsizeTiledLayer;
    _Bool __isDisplayingFullQualityImage;
    _Bool _canUseFullsizeTiledLayer;
    PUAssetViewModel *_assetViewModel;
    id <PUDisplayAsset> _asset;
    PUMediaProvider *_mediaProvider;
    PXImageModulationManager *_imageModulationManager;
    UIColor *_placeholderColor;
    UIImageView *__imageView;
    NSData *__fullsizeImageData;
    NSURL *__fullsizeImageURL;
    long long __fullsizeImageOrientation;
    CALayer<PLTileableLayer> *__fullsizeTiledLayer;
    long long __assetLoadingStage;
    NSDate *__assetLoadingStartDate;
    PUImageRequester *__imageRequester;
    PXImageLayerModulator *_imageLayerModulator;
    UIImage *_image;
    struct CGSize __targetSize;
    struct CGSize __fullsizeImageUntransformedSize;
    struct CGSize __fullsizeImageSize;
}

+ (id)_supportedZoomImageFormats;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) PXImageLayerModulator *imageLayerModulator; // @synthesize imageLayerModulator=_imageLayerModulator;
@property(retain, nonatomic, setter=_setImageRequester:) PUImageRequester *_imageRequester; // @synthesize _imageRequester=__imageRequester;
@property(nonatomic) _Bool canUseFullsizeTiledLayer; // @synthesize canUseFullsizeTiledLayer=_canUseFullsizeTiledLayer;
@property(retain, nonatomic, setter=_setAssetLoadingStartDate:) NSDate *_assetLoadingStartDate; // @synthesize _assetLoadingStartDate=__assetLoadingStartDate;
@property(nonatomic, setter=_setAssetLoadingStage:) long long _assetLoadingStage; // @synthesize _assetLoadingStage=__assetLoadingStage;
@property(nonatomic, setter=_setDisplayingFullQualityImage:) _Bool _isDisplayingFullQualityImage; // @synthesize _isDisplayingFullQualityImage=__isDisplayingFullQualityImage;
@property(retain, nonatomic, setter=_setFullsizeTiledLayer:) CALayer<PLTileableLayer> *_fullsizeTiledLayer; // @synthesize _fullsizeTiledLayer=__fullsizeTiledLayer;
@property(nonatomic, setter=_setFullsizeImageSize:) struct CGSize _fullsizeImageSize; // @synthesize _fullsizeImageSize=__fullsizeImageSize;
@property(nonatomic, setter=_setFullsizeImageUntransformedSize:) struct CGSize _fullsizeImageUntransformedSize; // @synthesize _fullsizeImageUntransformedSize=__fullsizeImageUntransformedSize;
@property(nonatomic, setter=_setFullsizeImageOrientation:) long long _fullsizeImageOrientation; // @synthesize _fullsizeImageOrientation=__fullsizeImageOrientation;
@property(retain, nonatomic, setter=_setFullsizeImageURL:) NSURL *_fullsizeImageURL; // @synthesize _fullsizeImageURL=__fullsizeImageURL;
@property(retain, nonatomic, setter=_setFullsizeImageData:) NSData *_fullsizeImageData; // @synthesize _fullsizeImageData=__fullsizeImageData;
@property(readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(nonatomic, setter=_setTargetSize:) struct CGSize _targetSize; // @synthesize _targetSize=__targetSize;
@property(nonatomic, setter=_setNeedsUpdateFullsizeTiledLayer:) _Bool _needsUpdateFullsizeTiledLayer; // @synthesize _needsUpdateFullsizeTiledLayer=__needsUpdateFullsizeTiledLayer;
@property(nonatomic, setter=_setNeedsUpdateFullsizeImageMetadata:) _Bool _needsUpdateFullsizeImageMetadata; // @synthesize _needsUpdateFullsizeImageMetadata=__needsUpdateFullsizeImageMetadata;
@property(nonatomic, setter=_setNeedsUpdateImageView:) _Bool _needsUpdateImageView; // @synthesize _needsUpdateImageView=__needsUpdateImageView;
@property(nonatomic, setter=_setNeedsUpdateImageLayerModulatorInput:) _Bool _needsUpdateImageLayerModulatorInput; // @synthesize _needsUpdateImageLayerModulatorInput=__needsUpdateImageLayerModulatorInput;
@property(nonatomic, setter=_setNeedsUpdateImageLayerModulator:) _Bool _needsUpdateImageLayerModulator; // @synthesize _needsUpdateImageLayerModulator=__needsUpdateImageLayerModulator;
@property(nonatomic, setter=_setNeedsUpdateImage:) _Bool _needsUpdateImage; // @synthesize _needsUpdateImage=__needsUpdateImage;
@property(readonly, nonatomic) _Bool imageIsFullQuality; // @synthesize imageIsFullQuality=_imageIsFullQuality;
@property(copy, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(nonatomic) _Bool shouldUseFullsizeImageData; // @synthesize shouldUseFullsizeImageData=_shouldUseFullsizeImageData;
@property(nonatomic) _Bool animatesImageAppearance; // @synthesize animatesImageAppearance=_animatesImageAppearance;
@property(retain, nonatomic) PXImageModulationManager *imageModulationManager; // @synthesize imageModulationManager=_imageModulationManager;
@property(retain, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void).cxx_destruct;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_cancelAllImageRequests;
- (id)generateAssetTransitionInfo;
- (void)_updateReadyForDisplay;
- (void)_updateFullsizeTiledLayerIfNeeded;
- (void)_invalidateFullsizeTiledLayer;
- (void)_updateFullsizeImageMetadataIfNeeded;
- (void)_invalidateFullsizeImageMetadata;
- (void)_updateAssetLoadingStage;
- (void)_updateImageViewIfNeeded;
- (void)_invalidateImageView;
- (void)updateMutableImageLayerModulator:(id)arg1;
- (void)_updateImageLayerModulatorInputIfNeeded;
- (void)_invalidateImageLayerModulatorInput;
- (void)_updateImageLayerModulatorIfNeeded;
- (void)_invalidateImageLayerModulator;
- (void)imageRequester:(id)arg1 didChange:(id)arg2;
- (void)_updateImageIfNeeded;
- (void)_invalidateImage;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (_Bool)shouldAvoidInPlaceSnapshottedFadeOut;
- (void)assetContentDidChange;
- (void)assetDidChange;
- (void)mediaProviderDidChange;
- (void)assetViewModelDidChange;
- (void)_handleShouldReloadAssetMediaNotification:(id)arg1;
- (void)setPreloadedImage:(id)arg1;
- (void)_setImage:(id)arg1 isFullQuality:(_Bool)arg2;
- (void)setEdgeAntialiasingEnabled:(_Bool)arg1;
- (void)didChangeVisibleRect;
- (_Bool)wantsVisibleRectChanges;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (id)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

