//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUImageTileViewController.h>

#import "PHLivePhotoViewDelegate.h"
#import "PHLivePhotoViewDelegatePrivate.h"

@class NSString, PHLivePhotoView;

__attribute__((visibility("hidden")))
@interface PUIrisImageTileViewController : PUImageTileViewController <PHLivePhotoViewDelegate, PHLivePhotoViewDelegatePrivate>
{
    struct {
        _Bool respondsToDidBeginPlaying;
        _Bool respondsToWillEndPlaying;
        _Bool respondsToDidEndPlaying;
        _Bool respondsToDidEndVitality;
        _Bool respondsToDidBeginHinting;
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToDelegateForGestureRecognizer;
    } _delegateFlags;
    CDUnknownBlockType _ppt_didEndPlayingHandler;
    id <PUIrisImageTileViewControllerDelegate> _delegate;
    PHLivePhotoView *__livePhotoView;
}

@property(readonly, nonatomic) PHLivePhotoView *_livePhotoView; // @synthesize _livePhotoView=__livePhotoView;
@property(nonatomic) __weak id <PUIrisImageTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)livePhotoViewDidBeginHinting:(id)arg1;
- (void)livePhotoViewDidEndPlayingVitality:(id)arg1;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)_updatePlaybackGestureRecognizer;
- (void)_playVitalityHintIfNeeded;
- (void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)generateAssetTransitionInfo;
- (void)ppt_playLivePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updatePlayerViewInteractivePlaybackAllowed;
- (void)_assetFocusValueDidChange;
- (void)_updateLivePhotoViewVitalityEnabled;
- (void)_setLivePhotoView:(id)arg1;
- (void)assetViewModelDidChange;
- (void)setAssetViewModel:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)addToTilingView:(id)arg1;
- (void)removeAllAnimations;
- (void)updateMutableImageLayerModulator:(id)arg1;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

