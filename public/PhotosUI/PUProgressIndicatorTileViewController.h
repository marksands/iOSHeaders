//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import "PUAssetSharedViewModelChangeObserver.h"
#import "PUBrowsingVideoPlayerChangeObserver.h"

@class NSObject<OS_os_log>, NSString, PLRoundProgressView, PUAssetSharedViewModel, PUBrowsingVideoPlayer, PUOperationStatus, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface PUProgressIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver>
{
    _Bool __needsUpdateProgressViewStyle;
    _Bool __needsUpdateStatus;
    _Bool __needsUpdateSizeClass;
    _Bool __needsUpdateStatusViews;
    _Bool __isProgressViewVisible;
    _Bool __didStartProgressLogging;
    PUAssetSharedViewModel *_assetSharedViewModel;
    PUBrowsingVideoPlayer *_videoPlayer;
    long long __progressViewStyle;
    PUOperationStatus *__status;
    long long __sizeClass;
    PLRoundProgressView *__progressView;
    UIButton *__errorButton;
    UILabel *__debugProgressLabel;
}

+ (id)_loadErrorIconForSizeClass:(long long)arg1;
+ (struct CGSize)progressIndicatorTileSizeForSizeClass:(long long)arg1;
@property(nonatomic, getter=_didStartProgressLogging, setter=_setDidStartProgressLogging:) _Bool _didStartProgressLogging; // @synthesize _didStartProgressLogging=__didStartProgressLogging;
@property(retain, nonatomic, setter=_setDebugProgressLabel:) UILabel *_debugProgressLabel; // @synthesize _debugProgressLabel=__debugProgressLabel;
@property(retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton; // @synthesize _errorButton=__errorButton;
@property(nonatomic, setter=_setProgressViewVisible:) _Bool _isProgressViewVisible; // @synthesize _isProgressViewVisible=__isProgressViewVisible;
@property(retain, nonatomic, setter=_setProgressView:) PLRoundProgressView *_progressView; // @synthesize _progressView=__progressView;
@property(nonatomic, setter=_setSizeClass:) long long _sizeClass; // @synthesize _sizeClass=__sizeClass;
@property(copy, nonatomic, setter=_setStatus:) PUOperationStatus *_status; // @synthesize _status=__status;
@property(nonatomic, setter=_setProgressViewStyle:) long long _progressViewStyle; // @synthesize _progressViewStyle=__progressViewStyle;
@property(nonatomic, setter=_setNeedsUpdateStatusViews:) _Bool _needsUpdateStatusViews; // @synthesize _needsUpdateStatusViews=__needsUpdateStatusViews;
@property(nonatomic, setter=_setNeedsUpdateSizeClass:) _Bool _needsUpdateSizeClass; // @synthesize _needsUpdateSizeClass=__needsUpdateSizeClass;
@property(nonatomic, setter=_setNeedsUpdateStatus:) _Bool _needsUpdateStatus; // @synthesize _needsUpdateStatus=__needsUpdateStatus;
@property(nonatomic, setter=_setNeedsUpdateProgressViewStyle:) _Bool _needsUpdateProgressViewStyle; // @synthesize _needsUpdateProgressViewStyle=__needsUpdateProgressViewStyle;
@property(retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // @synthesize assetSharedViewModel=_assetSharedViewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *_progressLog;
- (void)_handleVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateSubviewOrdering;
- (void)_updateStatusViewsIfNeeded;
- (void)_invalidateStatusViews;
- (void)_updateSizeClassIfNeeded;
- (void)_invalidateSizeClass;
- (void)_updateStatusIfNeeded;
- (void)_invalidateStatus;
- (void)_updateProgressViewStyleIfNeeded;
- (void)_invalidateProgressViewStyle;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_handleErrorButtonTap:(id)arg1;
- (void)_setProgressViewVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

