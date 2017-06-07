//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/CAMAccessibilityHUDItemProvider-Protocol.h>
#import <CameraUI/CAMBarsAccessibilityHUDManagerGestureProvider-Protocol.h>
#import <CameraUI/CAMExpandableMenuButtonDelegate-Protocol.h>

@class CAMElapsedTimeView, CAMExpandableMenuButton, CAMFilterButton, CAMFlashButton, CAMFlipButton, CAMFramerateIndicatorView, CAMHDRButton, CAMIrisButton, CAMTimerButton, NSMutableArray, NSString;
@protocol CAMControlVisibilityUpdateDelegate;

@interface CAMTopBar : UIView <CAMExpandableMenuButtonDelegate, CAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerGestureProvider>
{
    id <CAMControlVisibilityUpdateDelegate> _visibilityUpdateDelegate;
    long long _style;
    long long _backgroundStyle;
    CAMFlashButton *_flashButton;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMHDRButton *_HDRButton;
    CAMFlipButton *_flipButton;
    CAMFilterButton *_filterButton;
    CAMTimerButton *_timerButton;
    CAMIrisButton *_irisButton;
    CAMFramerateIndicatorView *_framerateIndicatorView;
    long long _orientation;
    UIView *__backgroundView;
    NSMutableArray *__allowedControls;
    CAMExpandableMenuButton *__expandedMenuButton;
    struct UIEdgeInsets __expandedMenuButtonTappableInsets;
}

@property(nonatomic, setter=_setExpandedMenuButtonTappableInsets:) struct UIEdgeInsets _expandedMenuButtonTappableInsets; // @synthesize _expandedMenuButtonTappableInsets=__expandedMenuButtonTappableInsets;
@property(retain, nonatomic, setter=_setExpandedMenuButton:) CAMExpandableMenuButton *_expandedMenuButton; // @synthesize _expandedMenuButton=__expandedMenuButton;
@property(readonly, nonatomic) NSMutableArray *_allowedControls; // @synthesize _allowedControls=__allowedControls;
@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) CAMFramerateIndicatorView *framerateIndicatorView; // @synthesize framerateIndicatorView=_framerateIndicatorView;
@property(retain, nonatomic) CAMIrisButton *irisButton; // @synthesize irisButton=_irisButton;
@property(retain, nonatomic) CAMTimerButton *timerButton; // @synthesize timerButton=_timerButton;
@property(retain, nonatomic) CAMFilterButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) CAMFlipButton *flipButton; // @synthesize flipButton=_flipButton;
@property(retain, nonatomic) CAMHDRButton *HDRButton; // @synthesize HDRButton=_HDRButton;
@property(retain, nonatomic) CAMElapsedTimeView *elapsedTimeView; // @synthesize elapsedTimeView=_elapsedTimeView;
@property(retain, nonatomic) CAMFlashButton *flashButton; // @synthesize flashButton=_flashButton;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <CAMControlVisibilityUpdateDelegate> visibilityUpdateDelegate; // @synthesize visibilityUpdateDelegate=_visibilityUpdateDelegate;
- (void).cxx_destruct;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)_iterateViewsInHUDManager:(id)arg1 forHUDItem:(CDUnknownBlockType)arg2;
- (id)touchingRecognizersToCancel;
- (void)expandMenuButton:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)expandedFrameForMenuButton:(id)arg1;
- (void)collapseMenuButton:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)collapsedFrameForMenuButton:(id)arg1;
- (_Bool)shouldHideFramerateIndicatorForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideIrisButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideElapsedTimeViewForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideFlipButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideFilterButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideTimerButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideHDRButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideFlashButtonForGraphConfiguration:(id)arg1;
- (_Bool)_shouldExpandButtonsHorizontally;
- (void)_updateControlVisibilityAnimated:(_Bool)arg1;
- (void)configureForMode:(long long)arg1 animated:(_Bool)arg2;
- (void)configureForMode:(long long)arg1;
- (id)_allowedControlsForTimelapseMode;
- (id)_allowedControlsForPanoramaMode;
- (id)_allowedControlsForVideoMode;
- (id)_allowedControlsForSquareMode;
- (id)_allowedControlsForPortraitMode;
- (id)_allowedControlsForStillImageMode;
- (double)_opacityForBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isFloating) _Bool floating;
- (void)_computeHorizontalLayoutForViewsBetweenLeftView:(id)arg1 rightView:(id)arg2 views:(id)arg3 alignmentRects:(id)arg4;
- (void)_layoutControls:(id)arg1 apply:(_Bool)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect *)arg5;
- (void)_layoutFloatingRecordingStyle;
- (void)_layoutFloatingStyle;
- (double)_interpolatedFloatingBarHeight;
- (void)_layoutDefaultStyle;
- (double)_backgroundCornerRadiusForStyle:(long long)arg1;
- (_Bool)_backgroundMasksToBoundsForStyle:(long long)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMTopBarInitialization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

