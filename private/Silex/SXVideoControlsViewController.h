//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SXUpNextViewControllerDelegate.h"
#import "SXVideoControlManagerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SXAdPrivacyButton, SXLearnMoreButton, SXMaterialVideoPlayButton, SXMediaSelectionButton, SXTopVideoControlsView, SXUpNextViewController, SXVideoCloseButton, SXVideoControlManager, SXVideoControlsLayout, SXVideoProgressView, SXVolumeButton, UIButton;

@interface SXVideoControlsViewController : UIViewController <UIGestureRecognizerDelegate, SXUpNextViewControllerDelegate, SXVideoControlManagerDelegate>
{
    id <SXVideoControlsViewControllerDelegate> _delegate;
    SXVideoControlsLayout *_layout;
    double _duration;
    double _time;
    double _loadingProgress;
    SXTopVideoControlsView *_topControls;
    SXVideoProgressView *_progressView;
    SXVideoCloseButton *_closeButton;
    SXMediaSelectionButton *_captionsButton;
    SXLearnMoreButton *_adLearnMoreButton;
    SXAdPrivacyButton *_adMarker;
    SXMaterialVideoPlayButton *_playButton;
    UIButton *_skipToPreviousButton;
    UIButton *_skipToNextButton;
    SXUpNextViewController *_upNextViewController;
    SXVideoControlManager *_videoControlManager;
    SXVolumeButton *_volumeButton;
}

@property(retain, nonatomic) SXVolumeButton *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(retain, nonatomic) SXVideoControlManager *videoControlManager; // @synthesize videoControlManager=_videoControlManager;
@property(retain, nonatomic) SXUpNextViewController *upNextViewController; // @synthesize upNextViewController=_upNextViewController;
@property(retain, nonatomic) UIButton *skipToNextButton; // @synthesize skipToNextButton=_skipToNextButton;
@property(retain, nonatomic) UIButton *skipToPreviousButton; // @synthesize skipToPreviousButton=_skipToPreviousButton;
@property(retain, nonatomic) SXMaterialVideoPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) SXAdPrivacyButton *adMarker; // @synthesize adMarker=_adMarker;
@property(retain, nonatomic) SXLearnMoreButton *adLearnMoreButton; // @synthesize adLearnMoreButton=_adLearnMoreButton;
@property(retain, nonatomic) SXMediaSelectionButton *captionsButton; // @synthesize captionsButton=_captionsButton;
@property(retain, nonatomic) SXVideoCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SXVideoProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SXTopVideoControlsView *topControls; // @synthesize topControls=_topControls;
@property(nonatomic) double loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) SXVideoControlsLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <SXVideoControlsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoControlManager:(id)arg1 didToggleControlVisibility:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)upNextViewControllerWantsToReplay:(id)arg1;
- (void)upNextViewControllerWantsToSkip:(id)arg1;
- (void)skipToPreviousVideoTapped:(id)arg1;
- (void)skipToNextVideoTapped:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)adMarkerTapped:(id)arg1;
- (void)adLearnMoreButtonTapped:(id)arg1;
- (void)volumeButtonTapped:(id)arg1;
- (void)captionsButtonTapped:(id)arg1;
- (void)accessibilityDidActivateVideoView:(id)arg1;
- (void)tap;
- (void)configurePlayButtonWithLayout:(id)arg1;
- (void)configureControlsWithLayout:(id)arg1;
- (void)configureUpNextViewControllerWithLayout:(id)arg1;
- (void)setLayout:(id)arg1 animated:(_Bool)arg2;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
