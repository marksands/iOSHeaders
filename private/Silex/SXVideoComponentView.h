//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXMediaComponentView.h>

#import "SXFullscreenVideoPlaybackCandidate.h"
#import "SXMediaPlaybackDelegate.h"
#import "SXReachabilityObserver.h"
#import "SXVideoAdProviderDataSource.h"
#import "SXVideoPlayerViewControllerDataSource.h"
#import "SXVideoPlayerViewControllerDelegate.h"
#import "SXViewportChangeListener.h"

@class NSString, SXPosterFrameView, SXVideoPlayerViewController;

@interface SXVideoComponentView : SXMediaComponentView <SXViewportChangeListener, SXMediaPlaybackDelegate, SXVideoPlayerViewControllerDelegate, SXVideoPlayerViewControllerDataSource, SXVideoAdProviderDataSource, SXReachabilityObserver, SXFullscreenVideoPlaybackCandidate>
{
    _Bool _isReceivingViewportDynamicBoundsChanges;
    SXVideoPlayerViewController *_videoPlayerViewController;
    SXPosterFrameView *_posterFrame;
    CDUnknownBlockType _thumbnailRequestCancelHandler;
}

@property(copy, nonatomic) CDUnknownBlockType thumbnailRequestCancelHandler; // @synthesize thumbnailRequestCancelHandler=_thumbnailRequestCancelHandler;
@property(retain, nonatomic) SXPosterFrameView *posterFrame; // @synthesize posterFrame=_posterFrame;
@property(nonatomic) _Bool isReceivingViewportDynamicBoundsChanges; // @synthesize isReceivingViewportDynamicBoundsChanges=_isReceivingViewportDynamicBoundsChanges;
@property(retain, nonatomic) SXVideoPlayerViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
- (void).cxx_destruct;
- (_Bool)allowHierarchyRemoval;
- (void)reachabilityChanged:(_Bool)arg1;
- (unsigned long long)analyticsVideoType;
- (unsigned long long)analyticsMediaType;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (id)transitionContentView;
- (_Bool)transitionViewUsesThumbnail;
- (struct CGRect)transitionContentFrame;
- (void)enterFullscreen;
- (_Bool)canEnterFullscreen;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)pausePrerollIfNeeded;
- (_Bool)playbackIsAllowedForMode:(unsigned long long)arg1;
- (void)viewport:(id)arg1 interfaceOrientationChangedFromOrientation:(long long)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)unregisterForViewportDynamicBoundsChanges;
- (void)registerForViewportDynamicBoundsChanges;
- (void)pauseMediaPlayback;
- (void)registerAsMediaPlaybackDelegate;
- (CDUnknownBlockType)videoAdWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)videoPlayerViewControllerShouldStartPlayback:(id)arg1;
- (void)videoPlayerViewController:(id)arg1 resumedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewController:(id)arg1 startedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewControllerFinishedVideoPlayback:(id)arg1;
- (id)videoAdForVideoPlayerViewController:(id)arg1;
- (id)videoForVideoPlayerViewController:(id)arg1;
- (void)setupVideoPlayerViewController:(id)arg1;
- (void)playButtonTapped;
- (void)loadPosterFrameImage;
- (void)discardContents;
- (void)renderContents;
- (void)presentComponent;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
