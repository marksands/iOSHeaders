//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AEBrowserLayoutDelegate.h"
#import "AECameraTileSource.h"
#import "CAMCameraCaptureDelegate.h"
#import "CAMCameraConfigurationDelegate.h"
#import "CAMCameraReviewDelegate.h"
#import "CAMCameraViewControllerPresentationDelegate.h"
#import "PUAssetExplorerReviewScreenViewControllerDelegate.h"
#import "PXAssetsSceneDelegate.h"
#import "PXChangeObserver.h"
#import "PXPhotoLibraryUIChangeObserver.h"
#import "PXReusableObjectPoolDelegate.h"
#import "PXTileSource.h"
#import "PXTilingControllerScrollDelegate.h"
#import "PXTilingControllerTransitionDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"

@class AECameraAssetPackageGenerator, AECameraTileController, AEPackageTransport, AEProgressViewModel, CAMCameraReviewAdapter, NSArray, NSIndexSet, NSMutableIndexSet, NSMutableSet, NSString, PUAssetExplorerReviewScreenViewController, PXAssetsScene, PXBasicUIViewTileAnimator, PXMediaProvider, PXPhotoKitAssetsDataSourceManager, PXTilingController, PXUIScrollViewController, UIPopoverPresentationController, UIView;

@interface AEExplorerViewController : UIViewController <PXChangeObserver, PXTileSource, AECameraTileSource, PXReusableObjectPoolDelegate, PXAssetsSceneDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXPhotoLibraryUIChangeObserver, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIViewControllerPreviewingDelegate, CAMCameraConfigurationDelegate, CAMCameraCaptureDelegate, CAMCameraReviewDelegate, CAMCameraViewControllerPresentationDelegate, PUAssetExplorerReviewScreenViewControllerDelegate, UIPopoverPresentationControllerDelegate, AEBrowserLayoutDelegate>
{
    _Bool __fakeAllCloudAndVideo;
    _Bool __didPresentPhotoLibrary;
    AEPackageTransport *__packageTransport;
    PXPhotoKitAssetsDataSourceManager *__dataSourceManager;
    PXMediaProvider *__mediaProvider;
    id <AEHostStatisticsManager> __statisticsManager;
    NSArray *__clientGestureRecognizers;
    unsigned long long __options;
    NSIndexSet *__cloudAssetIndexes;
    NSIndexSet *__pendingCloudAssetIndexes;
    NSMutableIndexSet *__recentlyDownloadedAssetIndexes;
    PXBasicUIViewTileAnimator *__tileAnimator;
    PXUIScrollViewController *__scrollViewController;
    PXTilingController *__tilingController;
    PXAssetsScene *__sceneController;
    AEProgressViewModel *__progressModel;
    AECameraTileController *__cameraTileController;
    CAMCameraReviewAdapter *__cameraReviewAdapter;
    AECameraAssetPackageGenerator *__cameraPackageGenerator;
    UIView *__previousSuperview;
    NSMutableSet *__tilesInUse;
    PUAssetExplorerReviewScreenViewController *__reviewController;
    id <UIViewControllerPreviewing> __previewingItem;
    UIView *__imagePickerSenderView;
    UIPopoverPresentationController *__imagePickerPopoverPresentationController;
}

@property(nonatomic, setter=_setDidPresentPhotoLibrary:) _Bool _didPresentPhotoLibrary; // @synthesize _didPresentPhotoLibrary=__didPresentPhotoLibrary;
@property(nonatomic, setter=_setImagePickerPopoverPresentationController:) __weak UIPopoverPresentationController *_imagePickerPopoverPresentationController; // @synthesize _imagePickerPopoverPresentationController=__imagePickerPopoverPresentationController;
@property(nonatomic, setter=_setImagePickerSenderView:) __weak UIView *_imagePickerSenderView; // @synthesize _imagePickerSenderView=__imagePickerSenderView;
@property(nonatomic, setter=_setFakeAllCloudAndVideo:) _Bool _fakeAllCloudAndVideo; // @synthesize _fakeAllCloudAndVideo=__fakeAllCloudAndVideo;
@property(retain, nonatomic, setter=_setPreviewingItem:) id <UIViewControllerPreviewing> _previewingItem; // @synthesize _previewingItem=__previewingItem;
@property(retain, nonatomic, setter=_setReviewController:) PUAssetExplorerReviewScreenViewController *_reviewController; // @synthesize _reviewController=__reviewController;
@property(readonly, nonatomic) NSMutableSet *_tilesInUse; // @synthesize _tilesInUse=__tilesInUse;
@property(retain, nonatomic, setter=_setPreviousSuperview:) UIView *_previousSuperview; // @synthesize _previousSuperview=__previousSuperview;
@property(readonly, nonatomic) AECameraAssetPackageGenerator *_cameraPackageGenerator; // @synthesize _cameraPackageGenerator=__cameraPackageGenerator;
@property(readonly, nonatomic) CAMCameraReviewAdapter *_cameraReviewAdapter; // @synthesize _cameraReviewAdapter=__cameraReviewAdapter;
@property(readonly, nonatomic) AECameraTileController *_cameraTileController; // @synthesize _cameraTileController=__cameraTileController;
@property(readonly, nonatomic) AEProgressViewModel *_progressModel; // @synthesize _progressModel=__progressModel;
@property(retain, nonatomic, setter=_setSceneController:) PXAssetsScene *_sceneController; // @synthesize _sceneController=__sceneController;
@property(retain, nonatomic, setter=_setTilingController:) PXTilingController *_tilingController; // @synthesize _tilingController=__tilingController;
@property(readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // @synthesize _scrollViewController=__scrollViewController;
@property(readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(readonly, nonatomic) NSMutableIndexSet *_recentlyDownloadedAssetIndexes; // @synthesize _recentlyDownloadedAssetIndexes=__recentlyDownloadedAssetIndexes;
@property(retain, nonatomic, setter=_setPendingCloudAssetIndexes:) NSIndexSet *_pendingCloudAssetIndexes; // @synthesize _pendingCloudAssetIndexes=__pendingCloudAssetIndexes;
@property(retain, nonatomic, setter=_setCloudAssetIndexes:) NSIndexSet *_cloudAssetIndexes; // @synthesize _cloudAssetIndexes=__cloudAssetIndexes;
@property(readonly, nonatomic) unsigned long long _options; // @synthesize _options=__options;
@property(readonly) NSArray *_clientGestureRecognizers; // @synthesize _clientGestureRecognizers=__clientGestureRecognizers;
@property(readonly, nonatomic) __weak id <AEHostStatisticsManager> _statisticsManager; // @synthesize _statisticsManager=__statisticsManager;
@property(readonly, nonatomic) PXMediaProvider *_mediaProvider; // @synthesize _mediaProvider=__mediaProvider;
@property(readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *_dataSourceManager; // @synthesize _dataSourceManager=__dataSourceManager;
@property(readonly, nonatomic) AEPackageTransport *_packageTransport; // @synthesize _packageTransport=__packageTransport;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *cameraParentViewController;
- (void)ensureSubviewForTile:(id)arg1;
- (void)applyExistingGeometryForTile:(id)arg1;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (id)_createOpenPhotoLibraryButtonTileWithLayoutStyle:(long long)arg1;
- (id)_createOpenCameraButtonTileWithLayoutStyle:(long long)arg1;
- (void)_attachGestureRecognizersIfNeeded:(void *)arg1;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (_Bool)layout:(id)arg1 shouldShowCloudDecorationAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)layout:(id)arg1 shouldShowLoopDecorationAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)layout:(id)arg1 shouldShowVideoDecorationAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)_computeInitialResourcesIndexSetAsync;
- (void)_addCloudIndexes:(id)arg1;
- (id)_cloudResourcesIndexSetForAssets:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)assetsScene:(id)arg1 didTransitionToDataSource:(id)arg2;
- (void)assetsScene:(id)arg1 willTransitionToDataSource:(id)arg2;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_handleTransportStagingUpdateWithDataSource:(id)arg1;
- (id)contentAssetReferenceAtPoint:(struct CGPoint)arg1 outContentFrame:(out struct CGRect *)arg2;
- (id)_validateAssetReference:(id)arg1 forScrollViewPoint:(struct CGPoint)arg2;
- (id)_createNewLayoutForDataSource:(id)arg1;
- (id)_currentDataSource;
- (long long)_currentLayoutStyle;
- (long long)_layoutStyleForSize:(struct CGSize)arg1;
- (void)_stageAsset:(id)arg1 withReference:(id)arg2 atIndexPath:(struct PXSimpleIndexPath)arg3 suppressLivePhotoContent:(_Bool)arg4;
- (void)_handleAttemptedSelectionToggleOfAssetReference:(id)arg1 cancelIfAlreadySelected:(_Bool)arg2 suppressLivePhotoContent:(_Bool)arg3;
- (void)handleInProgressPackageGenerator:(id)arg1;
- (void)_handleInProgressPackageGenerator:(id)arg1 suppressLivePhotoContent:(_Bool)arg2 mediaOrigin:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)scrollView;
- (void)reviewViewController:(id)arg1 didFinishReviewingAssets:(id)arg2;
- (void)reviewViewControllerDidRequestRetake:(id)arg1;
- (void)reviewViewControllerDidCancelReview:(id)arg1;
- (void)_invalidateCameraTileLayout;
- (void)cameraViewControllerDidCompleteConfigurationForCaptureMode:(long long)arg1 captureDevice:(long long)arg2;
- (void)cameraViewControllerWillBeginConfigurationForCaptureMode:(long long)arg1 captureDevice:(long long)arg2;
- (void)cameraViewController:(id)arg1 didCaptureAVAsset:(id)arg2 andAudioMix:(id)arg3 withProperties:(id)arg4 error:(id)arg5;
- (void)cameraViewController:(id)arg1 didCaptureLivePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (void)cameraViewController:(id)arg1 didCapturePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (void)_immediatelyGenerateAndStagePackageFromReviewAsset:(id)arg1 suppressLivePhoto:(_Bool)arg2 mediaOrigin:(long long)arg3;
- (void)cameraViewControllerRequestedDismissal:(id)arg1;
- (void)_presentCameraReviewViewControllerFromAdapter:(id)arg1 fromNavigationController:(id)arg2;
- (void)_presentCameraReviewViewControllerFromAdapter:(id)arg1 fromViewController:(id)arg2;
- (_Bool)_isPresentingFullscreenCamera;
- (void)_dismissFullScreenCamera;
- (void)_presentFullScreenCamera;
- (struct CGRect)_sourceRectForPhotoLibraryPresentationInCoordinateSpace:(id)arg1;
- (void)_updatePhotoLibraryPresentationIfNeeded;
- (void)_dismissPhotoLibraryIfNeeded;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_presentFullScreenPhotoLibrary:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)_dismissReviewScreenViewController;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPressDoneWithSelectedAssetUUIDs:(id)arg2 livePhotoDisabledAssetUUIDs:(id)arg3 substituteAssetsByUUID:(id)arg4;
- (void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;
- (_Bool)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)_presentConfidentialityAlertWithConfirmAction:(CDUnknownBlockType)arg1 abortAction:(CDUnknownBlockType)arg2;
- (void)_configureReviewControllerWithAssetReference:(id)arg1;
- (id)_selectedAssetUUIDs;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)_shouldEnable3DTouchPreview;
- (Class)assetsSceneClass;
- (void)dealloc;
- (id)initWithPackageTransport:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 cameraTileController:(id)arg4 statisticsManager:(id)arg5 additionalGestureRecognizers:(id)arg6 options:(unsigned long long)arg7;
- (_Bool)confirmAsset:(id)arg1 matchesView:(id)arg2 alertOnInternal:(_Bool)arg3;
- (void)associateAsset:(id)arg1 withTile:(void *)arg2;
- (void)ppt_scrollThumbnailGridWithTestName:(id)arg1 fakeExpensiveBadges:(_Bool)arg2;
- (void)ppt_openPhotoLibrary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

