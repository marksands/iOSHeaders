//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ADPrerollBottomBarDelegate.h"
#import "ADPrerollTopBarDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class ADPrerollBottomBar, ADPrerollTopBar, ADPrivacyButton, NSString, NSTimer, UIImageView;

@interface ADPrerollView : UIView <UIGestureRecognizerDelegate, ADPrerollTopBarDelegate, ADPrerollBottomBarDelegate>
{
    id <ADPrerollViewDelegate> _delegate;
    _Bool _barsVisible;
    _Bool _hasAction;
    _Bool _skipButtonCountingDown;
    ADPrerollTopBar *_topBar;
    ADPrerollBottomBar *_bottomBar;
    UIImageView *_swooshView;
    NSTimer *_passiveWatchingTimer;
    double _accumulatedViewingTime;
    ADPrivacyButton *_privacyButton;
}

+ (Class)layerClass;
@property(retain, nonatomic) ADPrivacyButton *privacyButton; // @synthesize privacyButton=_privacyButton;
@property(nonatomic) double accumulatedViewingTime; // @synthesize accumulatedViewingTime=_accumulatedViewingTime;
@property(retain, nonatomic) NSTimer *passiveWatchingTimer; // @synthesize passiveWatchingTimer=_passiveWatchingTimer;
@property(retain, nonatomic) UIImageView *swooshView; // @synthesize swooshView=_swooshView;
@property(nonatomic) _Bool skipButtonCountingDown; // @synthesize skipButtonCountingDown=_skipButtonCountingDown;
@property(retain, nonatomic) ADPrerollBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) ADPrerollTopBar *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) _Bool hasAction; // @synthesize hasAction=_hasAction;
@property(nonatomic) _Bool barsVisible; // @synthesize barsVisible=_barsVisible;
@property(nonatomic) __weak id <ADPrerollViewDelegate> delegate;
- (void)fadeToBlackWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginCountdown:(double)arg1;
- (void)enablePrivacyButton;
- (void)attachToAVPlayer:(id)arg1 showiAdBrandingSwoosh:(_Bool)arg2;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)displayAsPaused:(_Bool)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)bottomBarPauseButtonTapped:(id)arg1;
- (void)bottomBarPlayButtonTapped:(id)arg1;
- (void)bottomBarSkipButtonTapped:(id)arg1;
- (void)bottomBarActionButtonTapped:(id)arg1;
- (void)topBarScaleToFit:(id)arg1;
- (void)topBarScaleToFill:(id)arg1;
- (void)topBarDoneButtonTapped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_privacyButtonWasTapped;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_singleTapGestureRecognized:(id)arg1;
- (void)_firePassiveWatchingTimer:(id)arg1;
- (void)_restartPassiveWatchingTimer;
- (_Bool)_layoutForExpandedSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)shutdown;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

