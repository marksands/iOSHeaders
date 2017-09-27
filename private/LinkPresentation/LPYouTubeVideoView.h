//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LinkPresentation/LPVideoView.h>

#import "LPYouTubePlayerDelegate.h"

@class LPYouTubePlayerView, NSString;

__attribute__((visibility("hidden")))
@interface LPYouTubeVideoView : LPVideoView <LPYouTubePlayerDelegate>
{
    LPYouTubePlayerView *_platformYouTubeView;
}

- (void).cxx_destruct;
- (void)enterCustomFullScreen;
- (_Bool)usesCustomFullScreenImplementation;
- (void)youTubePlayer:(id)arg1 didChangeToFullScreen:(_Bool)arg2;
- (void)youTubePlayer:(id)arg1 didReceiveError:(id)arg2;
- (void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2;
- (id)createVideoPlayerView;
- (void)setPlaying:(_Bool)arg1;
- (void)setVolume:(double)arg1;
- (double)volume;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (_Bool)shouldShowMuteButton;
- (_Bool)usesSharedAudioSession;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

