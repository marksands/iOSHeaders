//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotoLibrary/PLImageLoadingQueueDelegate-Protocol.h>
#import <PhotoLibrary/PLPhotoTileViewControllerDelegate-Protocol.h>
#import <PhotoLibrary/PLVideoViewDelegate-Protocol.h>

@class NSString, NSURL, PLCropOverlay, PLImageCache, PLImageLoadingQueue, PLImageSource, PLManagedAsset, PLPhotoTileViewController, PLProgressView, PLVideoRemaker, PLVideoView, UIImage;

@interface PLUIImageViewController : UIViewController <PLVideoViewDelegate, PLImageLoadingQueueDelegate, PLPhotoTileViewControllerDelegate>
{
    PLManagedAsset *_photo;
    struct CGImage *_imageRef;
    UIImage *_image;
    struct CGRect _cropRect;
    PLCropOverlay *_cropOverlay;
    PLPhotoTileViewController *_imageTile;
    PLVideoView *_videoView;
    PLVideoRemaker *_remaker;
    PLProgressView *_progressView;
    NSURL *_videoURL;
    PLImageCache *_imageCache;
    PLImageLoadingQueue *_imageLoadingQueue;
    PLImageSource *_imageSource;
    long long _previousStatusBarStyle;
    long long _newStatusBarStyle;
    unsigned int _allowEditing:1;
    unsigned int _statusBarWasHidden:1;
    unsigned int _isVideo:1;
    unsigned int _isDisappearing:1;
    unsigned int _remaking:1;
}

- (unsigned long long)imagePickerSavingOptions;
- (_Bool)imagePickerAllowsEditing;
- (id)chooseButtonTitle;
- (_Bool)force1XCroppedImage;
- (_Bool)forceNativeScreenScale;
- (_Bool)disableVideoTrimMessage;
- (id)videoMaximumDuration;
- (_Bool)viewImageBeforeSelecting;
- (id)exportPreset;
- (id)videoQuality;
- (_Bool)doNotTranscode;
- (void)handleVideoSelectionWithURL:(id)arg1 args:(id)arg2;
- (void)handleMediaSelectionUsingTile:(id)arg1 managedAsset:(id)arg2 args:(id)arg3 includeEditing:(_Bool)arg4;
- (void)imageLoadingQueue:(id)arg1 didLoadImage:(id)arg2 forAsset:(id)arg3 fromSource:(id)arg4;
- (_Bool)photoTileViewControllerAllowsEditing:(id)arg1;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)photoTileViewControllerWillBeginGesture:(id)arg1;
- (void)photoTileViewControllerDoubleTap:(id)arg1;
- (void)photoTileViewControllerSingleTap:(id)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
- (void)photoTileViewControllerCancelImageRequests:(id)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (int)imageFormat;
- (void)photoTileViewController:(id)arg1 didDisappear:(_Bool)arg2;
- (void)photoTileViewController:(id)arg1 didAppear:(_Bool)arg2;
- (void)photoTileViewController:(id)arg1 willAppear:(_Bool)arg2;
- (_Bool)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(_Bool)arg2;
- (void)videoViewDidPausePlayback:(id)arg1 didFinish:(_Bool)arg2;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewIsReadyToBeginPlayback:(id)arg1;
- (id)_trimMessage;
- (_Bool)videoViewCanBeginPlayback:(id)arg1;
- (double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2;
- (void)videoView:(id)arg1 scrubberWasCreated:(id)arg2 slalomRegionEditor:(id)arg3;
- (_Bool)videoViewCanCreateMetadata:(id)arg1;
- (void)cropOverlayPause:(id)arg1;
- (void)cropOverlayPlay:(id)arg1;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (void)handleAutoloopSelected;
- (void)beginDisplayingProgress;
- (void)_handleVideoSelected;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)_enableCropOverlay;
- (void)_enableCropOverlayIfNecessary;
- (void)didChooseVideoAtURL:(id)arg1 options:(id)arg2;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)_updateGestureSettings;
- (void)_editabilityChanged:(id)arg1;
- (void)setAllowsEditing:(_Bool)arg1;
- (void)_removedAsTopViewController;
- (void)attachScrubberPalette;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)_imagePickerStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isDisplayedInPhotoPicker;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (long long)desiredStatusBarAnimation;
- (_Bool)wantsStatusBarVisible;
- (void)loadView;
- (Class)_viewClass;
- (void)setupNavigationItem;
- (_Bool)wantsAutoloopUI;
- (_Bool)clientIsWallpaper;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *localizedUseButtonTitle;
- (unsigned long long)_tileAutoresizingMask;
- (unsigned long long)_contentAutoresizingMask;
- (struct CGRect)_viewFrame;
- (struct CGRect)previewFrame;
- (void)setCropOverlayDone;
- (id)cropOverlay;
- (int)cropOverlayMode;
- (void)dealloc;
- (id)initWithVideoURL:(id)arg1;
- (id)initWithImageData:(id)arg1 cropRect:(struct CGRect)arg2;
- (id)initWithUIImage:(id)arg1 cropRect:(struct CGRect)arg2;
- (id)initWithImage:(struct CGImage *)arg1 cropRect:(struct CGRect)arg2;
- (id)initWithPhoto:(id)arg1;
- (_Bool)_displaysFullScreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

