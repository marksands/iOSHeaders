//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickLook/QLMediaItemViewController.h>

#import "AVPictureInPictureControllerDelegate.h"

@class NSLayoutConstraint, NSString, PHPlaceholderView, QLOverlayPlayButton, QLVideoScrubberView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface QLMovieItemViewController : QLMediaItemViewController <AVPictureInPictureControllerDelegate>
{
    _Bool _previewIsVisisble;
    _Bool _isObservingPlayerExternalPlaybackActive;
    PHPlaceholderView *_airPlayPlaceholderView;
    QLOverlayPlayButton *_playButton;
    QLVideoScrubberView *_scrubber;
    NSLayoutConstraint *_bottomScrubberConstraint;
    UIView *_scrubberContainer;
    UIScrollView *_scrubberContainerScrollView;
    double _scrubberVerticalOffset;
}

@property(nonatomic) double scrubberVerticalOffset; // @synthesize scrubberVerticalOffset=_scrubberVerticalOffset;
@property(retain) UIScrollView *scrubberContainerScrollView; // @synthesize scrubberContainerScrollView=_scrubberContainerScrollView;
@property(retain) UIView *scrubberContainer; // @synthesize scrubberContainer=_scrubberContainer;
@property(retain) NSLayoutConstraint *bottomScrubberConstraint; // @synthesize bottomScrubberConstraint=_bottomScrubberConstraint;
@property(retain) QLVideoScrubberView *scrubber; // @synthesize scrubber=_scrubber;
@property(retain) QLOverlayPlayButton *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (void)_updatePlaceHolderView;
@property(readonly, nonatomic) PHPlaceholderView *airPlayPlaceholderView;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (id)parallaxView;
- (id)transitioningView;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)didChangePlayingStatus;
- (void)setPlayControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)play;
- (_Bool)canEnterFullScreen;
- (id)timeLabelScrollView;
- (id)accessoryView;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)addScrubberIfNeededWithDeferral;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

