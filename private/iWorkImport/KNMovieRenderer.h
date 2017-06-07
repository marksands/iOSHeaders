//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/KNBuildRenderer.h>

#import <iWorkImport/TSKMediaPlayerControllerDelegate-Protocol.h>

@class CALayer, NSObject, NSString;
@protocol NSCopying, TSDMovieHUDViewController, TSKMediaPlayerController;

__attribute__((visibility("hidden")))
@interface KNMovieRenderer : KNBuildRenderer <TSKMediaPlayerControllerDelegate>
{
    NSObject<TSKMediaPlayerController> *mPlayerController;
    CALayer *mVideoLayer;
    double mStartTime;
    double mPlaybackAtStartTimePauseTime;
    double mPlaybackAtStartTimePauseOffset;
    KNBuildRenderer *mBuildInRenderer;
    struct CGRect mFrameInContainerView;
    id mMovieStartCallbackTarget;
    SEL mMovieStartCallbackSelector;
    unsigned int mHasMoviePlaybackStarted:1;
    unsigned int mNeedsToSendMovieStartCallback:1;
    unsigned int mNeedsToSendBuildEndCallback:1;
    unsigned int mIsObservingVideoLayerReadyForDisplay:1;
    unsigned int mNeedsPlaybackAtStartTime:1;
    unsigned int mHasPendingTogglePlayingControl:1;
    unsigned int mPendingTogglePlayingControlStartsPlaying:1;
    unsigned int mShouldMoviePlaybackEndOnCompletion:1;
    unsigned int mWasMoviePlayingBeforeAnimationPause:1;
    unsigned int mIsTeardownCompletionBlockPending:1;
    id <TSDMovieHUDViewController> _viewController;
}

+ (id)movieInfoForMovieTimelineMovieIdentifier:(id)arg1;
+ (id)movieTimelineMovieIdentifierForMovieInfo:(id)arg1;
@property(retain, nonatomic) id <TSDMovieHUDViewController> viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) NSObject<TSKMediaPlayerController> *playerController; // @synthesize playerController=mPlayerController;
@property(nonatomic) KNBuildRenderer *buildInRenderer; // @synthesize buildInRenderer=mBuildInRenderer;
@property(readonly, nonatomic) NSObject<NSCopying> *movieTimelineMovieIdentifier;
@property(readonly, nonatomic) CALayer *offscreenVideoLayer;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)p_applyActionEffect:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)applyMovieControl:(long long)arg1;
- (struct CGImage *)p_copyCurrentVideoFrameImageUsingAVAssetImageGenerator;
- (struct CGImage *)p_copyCurrentVideoFrameImage;
- (void)p_teardownUpdatingTexture:(_Bool)arg1;
- (void)p_setupReflectionAndMaskingOnMovieTexture:(id)arg1 strokeTexture:(id)arg2 reflectionMaskTexture:(id)arg3 frameMaskTexture:(id)arg4;
- (void)p_showVideoLayer;
- (void)p_cancelPlaybackAtStartTime;
- (void)p_startPlaybackAtStartTime;
- (void)p_unschedulePlaybackAtStartTime;
- (void)p_schedulePlaybackAtStartTime;
- (void)p_setupVideoLayer;
- (void)p_setupPlayerController;
- (void)p_didEndMoviePlayback;
- (void)p_didStartMoviePlayback;
- (void)registerForMovieStartCallback:(SEL)arg1 target:(id)arg2;
- (void)p_startMoviePlaybackIfNeeded;
@property(readonly, nonatomic) _Bool hasMoviePlaybackStarted;
- (void)interruptAndReset;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)resumeAnimationsIfPaused;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)pauseAnimations;
- (void)stopAnimations;
- (void)forceRemoveAnimations;
- (void)removeAnimationsAndFinish:(_Bool)arg1;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (_Bool)addAnimationsAtLayerTime:(double)arg1;
- (void)animateAfterDelay:(double)arg1;
- (void)dealloc;
- (id)initWithAnimatedBuild:(id)arg1 info:(id)arg2 buildStage:(id)arg3 session:(id)arg4 animatedSlideView:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

