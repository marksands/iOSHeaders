//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXMediaComponentView.h>

#import "SXMediaPlaybackDelegate.h"

@class AVPlayerViewController, NSString, SXAVPlayer, SXAudioComponentOverlayView;

@interface SXAudioComponentView : SXMediaComponentView <SXMediaPlaybackDelegate>
{
    _Bool _audioHasPlayed;
    _Bool _startPlaybackWhenReady;
    AVPlayerViewController *_playerViewController;
    SXAVPlayer *_player;
    SXAudioComponentOverlayView *_overlayView;
}

@property(nonatomic) _Bool startPlaybackWhenReady; // @synthesize startPlaybackWhenReady=_startPlaybackWhenReady;
@property(nonatomic) _Bool audioHasPlayed; // @synthesize audioHasPlayed=_audioHasPlayed;
@property(retain, nonatomic) SXAudioComponentOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) SXAVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (void).cxx_destruct;
- (_Bool)allowHierarchyRemoval;
- (void)submitMediaEngageCompleteEvent;
- (void)submitMediaEngageEventForUserAction:(unsigned long long)arg1;
- (unsigned long long)analyticsMediaType;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)hidePlaybackControls;
- (void)showPlaybackControls;
- (void)pauseMediaPlayback;
- (void)renderContents;
- (void)playbackStarted;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackFinished;
- (_Bool)shouldAutoStartPlayback;
- (void)loadAudio;
- (void)loadImage;
- (void)setupPlayerViewControllerWithPlayer:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)presentComponent;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
