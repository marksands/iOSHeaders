//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickLook/QLMediaItemViewController.h>

#import "UIGestureRecognizerDelegate.h"

@class NSLayoutConstraint, NSString, QLOverlayPlayButton, QLWaveformScrubberView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface QLAudioItemViewController : QLMediaItemViewController <UIGestureRecognizerDelegate>
{
    QLOverlayPlayButton *_playButton;
    UIView *_scrubberContainer;
    UIScrollView *_scrubberContainerScrollView;
    QLWaveformScrubberView *_scrubber;
    _Bool _previewIsVisisble;
    _Bool _scrubbing;
    NSLayoutConstraint *_topScrubber;
    double _scrubberVerticalOffset;
}

+ (id)AV_indicatorForegroundColor;
+ (id)AV_indicatorBackgroundColor;
@property double scrubberVerticalOffset; // @synthesize scrubberVerticalOffset=_scrubberVerticalOffset;
@property _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(retain) UIView *scrubberContainer; // @synthesize scrubberContainer=_scrubberContainer;
@property(retain) NSLayoutConstraint *topScrubber; // @synthesize topScrubber=_topScrubber;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (_Bool)canEnterFullScreen;
- (id)timeLabelScrollView;
- (id)accessoryView;
- (void)didChangePlayingStatus;
- (void)_tapRecognized:(id)arg1;
- (void)setPlayControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)addScrubberWithDeferral;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

