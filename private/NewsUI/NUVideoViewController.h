//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NUAsyncContentViewControllerLoader.h"
#import "SXAnimatableVideoViewController.h"

@class NUVideoPlayerEventTracker, SXVideoView, SXVideoViewController, UIView;

@interface NUVideoViewController : UIViewController <SXAnimatableVideoViewController, NUAsyncContentViewControllerLoader>
{
    _Bool _loadStarted;
    id <NUVideoViewControllerDelegate> _delegate;
    NUVideoPlayerEventTracker *_eventTracker;
    SXVideoViewController *_videoViewController;
    id <SXVideoPlaybackController> _playbackController;
    id <NUVideoAdProviderDataSource> _videoAdProviderDataSource;
}

@property(nonatomic, getter=hasLoadStarted) _Bool loadStarted; // @synthesize loadStarted=_loadStarted;
@property(readonly, nonatomic) id <NUVideoAdProviderDataSource> videoAdProviderDataSource; // @synthesize videoAdProviderDataSource=_videoAdProviderDataSource;
@property(readonly, nonatomic) id <SXVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) SXVideoViewController *videoViewController; // @synthesize videoViewController=_videoViewController;
@property(readonly, nonatomic) NUVideoPlayerEventTracker *eventTracker; // @synthesize eventTracker=_eventTracker;
@property(nonatomic) __weak id <NUVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)loadContentWithTimeoutTime:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIViewController *controlsViewController;
@property(readonly, nonatomic) SXVideoView *videoView;
@property(readonly, nonatomic) UIView *videoHostView;
- (void)pause;
- (void)play;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithResolver:(id)arg1 videoItems:(id)arg2 eventTracker:(id)arg3 configuration:(id)arg4 discoverMoreVideosInfo:(id)arg5 videoGroupsConfig:(id)arg6 videoProviderFactory:(id)arg7 videoAdProviderFactory:(id)arg8 onboardingVersion:(long long)arg9 visibilityMonitor:(id)arg10 activityViewControllerFactory:(id)arg11 URLHandler:(id)arg12;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

