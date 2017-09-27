//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVKit/AVButtonOverlappingHitRectResolverView.h>

#import "AVPlaybackControlsViewItemAvailabilityObserver.h"

@class AVBackdropView, AVButton, AVPlaybackControlsRoutePickerView, AVScrubber, AVTransportControlsView, AVView, AVVolumeButtonControl, AVVolumeSlider, NSArray, NSLayoutConstraint, NSString, UIView;

@interface AVPlaybackControlsView : AVButtonOverlappingHitRectResolverView <AVPlaybackControlsViewItemAvailabilityObserver>
{
    _Bool _fullScreen;
    _Bool _canHideInteractiveContentOverlayView;
    _Bool _doubleRowLayoutEnabled;
    _Bool _needsIntialLayout;
    long long _preferredUnobscuredArea;
    AVBackdropView *_screenModeControls;
    AVBackdropView *_volumeControls;
    AVBackdropView *_prominentPlayButtonBackdropView;
    AVBackdropView *_miniPlayPauseButtonBackdropView;
    AVView *_transportControlsContainerView;
    AVButton *_doneButton;
    AVButton *_fullScreenButton;
    AVButton *_pictureInPictureButton;
    AVVolumeButtonControl *_volumeButton;
    AVVolumeSlider *_volumeSlider;
    AVButton *_prominentPlayButton;
    AVButton *_miniPlayPauseButton;
    AVTransportControlsView *_transportControlsView;
    AVButton *_standardPlayPauseButton;
    AVButton *_skipForwardButton;
    AVButton *_skipBackButton;
    AVScrubber *_scrubber;
    AVPlaybackControlsRoutePickerView *_routePickerView;
    AVButton *_mediaSelectionButton;
    UIView *_interactiveContentOverlayView;
    id <AVPlaybackControlsViewDelegate> _delegate;
    NSString *_playbackControlsViewGroupName;
    NSArray *_playbackControlsViewItems;
    NSLayoutConstraint *_volumeBottomToTransportControlsTopConstraint;
    NSLayoutConstraint *_volumeTopToLayoutGuideTopConstraint;
    NSLayoutConstraint *_volumeTopToViewTopConstraint;
    NSLayoutConstraint *_screenModeControlsToVolumeControlsSpacingConstraint;
}

@property(nonatomic) _Bool needsIntialLayout; // @synthesize needsIntialLayout=_needsIntialLayout;
@property(nonatomic, getter=isDoubleRowLayoutEnabled) _Bool doubleRowLayoutEnabled; // @synthesize doubleRowLayoutEnabled=_doubleRowLayoutEnabled;
@property(readonly, nonatomic) NSLayoutConstraint *screenModeControlsToVolumeControlsSpacingConstraint; // @synthesize screenModeControlsToVolumeControlsSpacingConstraint=_screenModeControlsToVolumeControlsSpacingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *volumeTopToViewTopConstraint; // @synthesize volumeTopToViewTopConstraint=_volumeTopToViewTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *volumeTopToLayoutGuideTopConstraint; // @synthesize volumeTopToLayoutGuideTopConstraint=_volumeTopToLayoutGuideTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *volumeBottomToTransportControlsTopConstraint; // @synthesize volumeBottomToTransportControlsTopConstraint=_volumeBottomToTransportControlsTopConstraint;
@property(readonly, nonatomic) NSArray *playbackControlsViewItems; // @synthesize playbackControlsViewItems=_playbackControlsViewItems;
@property(readonly, nonatomic) NSString *playbackControlsViewGroupName; // @synthesize playbackControlsViewGroupName=_playbackControlsViewGroupName;
@property(nonatomic) __weak id <AVPlaybackControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *interactiveContentOverlayView; // @synthesize interactiveContentOverlayView=_interactiveContentOverlayView;
@property(readonly, nonatomic) AVButton *mediaSelectionButton; // @synthesize mediaSelectionButton=_mediaSelectionButton;
@property(readonly, nonatomic) AVPlaybackControlsRoutePickerView *routePickerView; // @synthesize routePickerView=_routePickerView;
@property(readonly, nonatomic) AVScrubber *scrubber; // @synthesize scrubber=_scrubber;
@property(readonly, nonatomic) AVButton *skipBackButton; // @synthesize skipBackButton=_skipBackButton;
@property(readonly, nonatomic) AVButton *skipForwardButton; // @synthesize skipForwardButton=_skipForwardButton;
@property(readonly, nonatomic) AVButton *standardPlayPauseButton; // @synthesize standardPlayPauseButton=_standardPlayPauseButton;
@property(readonly, nonatomic) AVTransportControlsView *transportControlsView; // @synthesize transportControlsView=_transportControlsView;
@property(readonly, nonatomic) AVButton *miniPlayPauseButton; // @synthesize miniPlayPauseButton=_miniPlayPauseButton;
@property(readonly, nonatomic) AVButton *prominentPlayButton; // @synthesize prominentPlayButton=_prominentPlayButton;
@property(readonly, nonatomic) AVVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(readonly, nonatomic) AVVolumeButtonControl *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(readonly, nonatomic) AVButton *pictureInPictureButton; // @synthesize pictureInPictureButton=_pictureInPictureButton;
@property(readonly, nonatomic) AVButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(readonly, nonatomic) AVButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) AVView *transportControlsContainerView; // @synthesize transportControlsContainerView=_transportControlsContainerView;
@property(readonly, nonatomic) AVBackdropView *miniPlayPauseButtonBackdropView; // @synthesize miniPlayPauseButtonBackdropView=_miniPlayPauseButtonBackdropView;
@property(readonly, nonatomic) AVBackdropView *prominentPlayButtonBackdropView; // @synthesize prominentPlayButtonBackdropView=_prominentPlayButtonBackdropView;
@property(readonly, nonatomic) AVBackdropView *volumeControls; // @synthesize volumeControls=_volumeControls;
@property(readonly, nonatomic) AVBackdropView *screenModeControls; // @synthesize screenModeControls=_screenModeControls;
@property(nonatomic) long long preferredUnobscuredArea; // @synthesize preferredUnobscuredArea=_preferredUnobscuredArea;
@property(nonatomic) _Bool canHideInteractiveContentOverlayView; // @synthesize canHideInteractiveContentOverlayView=_canHideInteractiveContentOverlayView;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
- (void).cxx_destruct;
- (double)_volumeButtonToTransportControlsTopConstraintConstant;
- (_Bool)_isDescendantOfNonPagingScrollView;
- (void)_updateLayoutMargins:(struct CGRect)arg1;
- (void)_updateLayoutMargins;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_statusBarFrameWillChange:(id)arg1;
- (void)_statusBarOrientationWillChange:(id)arg1;
- (void)_setupInitialLayout;
- (void)_updateDoubleRowTransportControlsEnabled;
- (struct UIEdgeInsets)_interactiveContentOverlayViewLayoutMargins;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)playbackControlsViewItemChangedAvailability:(id)arg1;
- (void)animateAlongsideVisibilityChangeIfNeeded;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

