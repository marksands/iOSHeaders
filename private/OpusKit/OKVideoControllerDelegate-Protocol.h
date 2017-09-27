//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerItem, OKVideoPlayerController;

@protocol OKVideoControllerDelegate <NSObject>
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 didFailToPlayItem:(AVPlayerItem *)arg2;
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 didFinishPlayingItem:(AVPlayerItem *)arg2;
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 didStartPlayingItem:(AVPlayerItem *)arg2;

@optional
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 bufferingStateDidChange:(unsigned long long)arg2;
- (void)videoPlayerController:(OKVideoPlayerController *)arg1 stateDidChange:(unsigned long long)arg2;
- (void)videoPlayerControllerIsReadyToPlay:(OKVideoPlayerController *)arg1;
@end

