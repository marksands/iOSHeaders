//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView<MPVideoOverlay>;

@protocol MPVideoOverlayDelegate <NSObject>

@optional
- (_Bool)overlayShouldAcceptSkipBackwardEvent:(UIView<MPVideoOverlay> *)arg1;
- (_Bool)overlayShouldAcceptSkipForwardEvent:(UIView<MPVideoOverlay> *)arg1;
- (double)overlay:(UIView<MPVideoOverlay> *)arg1 interpretDuration:(double)arg2;
- (double)overlay:(UIView<MPVideoOverlay> *)arg1 interpretCurrentTime:(double)arg2;
- (void)overlay:(UIView<MPVideoOverlay> *)arg1 didEndUserEvent:(unsigned long long)arg2;
- (void)overlay:(UIView<MPVideoOverlay> *)arg1 didCancelUserEvent:(unsigned long long)arg2;
- (void)overlay:(UIView<MPVideoOverlay> *)arg1 didBeginUserEvent:(unsigned long long)arg2;
- (void)overlayTappedPictureInPictureButton:(UIView<MPVideoOverlay> *)arg1;
- (void)overlayTappedFullscreenButton:(UIView<MPVideoOverlay> *)arg1;
- (void)overlayDidDismissAlternateTracksPopover:(UIView<MPVideoOverlay> *)arg1;
- (void)overlayTappedScaleModeButton:(UIView<MPVideoOverlay> *)arg1;
- (void)overlayDidEndScrubbing:(UIView<MPVideoOverlay> *)arg1;
- (void)overlayDidBeginScrubbing:(UIView<MPVideoOverlay> *)arg1;
- (void)overlayTappedBackButton:(UIView<MPVideoOverlay> *)arg1;
@end

