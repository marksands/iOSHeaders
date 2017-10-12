//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SXVideoPlayerViewController;

@protocol SXVideoPlayerViewControllerDelegate <NSObject>
- (void)videoPlayerViewControllerFinishedVideoPlayback:(SXVideoPlayerViewController *)arg1;

@optional
- (_Bool)videoPlayerViewControllerShouldStartPlayback:(SXVideoPlayerViewController *)arg1;
- (void)videoPlayerViewController:(SXVideoPlayerViewController *)arg1 resumedPlaybackOfVideo:(id <SXVideoProviding>)arg2;
- (void)videoPlayerViewController:(SXVideoPlayerViewController *)arg1 pausedPlaybackOfVideo:(id <SXVideoProviding>)arg2;
- (void)videoPlayerViewController:(SXVideoPlayerViewController *)arg1 startedPlaybackOfVideo:(id <SXVideoProviding>)arg2;
@end
