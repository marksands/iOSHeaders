//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

#import "MPVolumeControllerDelegate.h"
#import "MPVolumeDisplaying.h"

@class MPAVController, MPAVRoute, MPVolumeController, NSString, NSTimer, UIImage, UIImageView, UILabel, UILayoutGuide, UIView;

@interface MPVolumeSlider : UISlider <MPVolumeControllerDelegate, MPVolumeDisplaying>
{
    NSTimer *_commitTimer;
    UILabel *_routeNameLabel;
    long long _style;
    UIImageView *_thumbImageView;
    _Bool _isOffScreen;
    _Bool _forcingOffscreenVisibility;
    _Bool _thumbIsDefault;
    _Bool _configuredLayoutGuide;
    UIView *_volumeWarningView;
    _Bool _volumeWarningBlinking;
    UIImage *_volumeWarningTrackImage;
    _Bool _userWasBlocked;
    double _originalMinTrackViewAlphaOverride;
    double _originalMinValueViewAlphaOverride;
    double _originalMaxValueViewAlphaOverride;
    UILayoutGuide *_trackLayoutGuide;
    MPVolumeController *_volumeController;
    struct UIEdgeInsets _hitRectInsets;
}

@property(readonly, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) UILayoutGuide *trackLayoutGuide; // @synthesize trackLayoutGuide=_trackLayoutGuide;
@property(nonatomic) struct UIEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property(retain, nonatomic) UIImage *volumeWarningTrackImage; // @synthesize volumeWarningTrackImage=_volumeWarningTrackImage;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)_newVolumeWarningView;
- (void)_endBlinkingWarningView;
- (void)_blinkWarningView;
- (void)_beginBlinkingWarningView;
- (void)_layoutVolumeWarningView;
- (void)_layoutForAvailableRoutes;
- (void)_resetThumbImageForState:(unsigned long long)arg1;
- (id)_maxTrackImageForStyle:(long long)arg1;
- (id)_minTrackImageForStyle:(long long)arg1;
- (id)_thumbImageForStyle:(long long)arg1;
- (void)_commitVolumeChange;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
@property(readonly, nonatomic) __weak UIView *thumbView;
@property(nonatomic, setter=_setIsOffScreen:) _Bool _isOffScreen;
- (void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeControlLabelDidChange:(id)arg2;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;
@property(readonly, nonatomic) NSString *volumeAudioCategory;
@property(readonly, nonatomic, getter=isOnScreenForVolumeDisplay) _Bool onScreenForVolumeDisplay;
- (void)setVolumeDataSource:(id)arg1;
@property(retain, nonatomic) MPAVRoute *route;
@property(retain, nonatomic) MPAVController *player;
@property(readonly, copy, nonatomic) NSString *volumeControlLabel;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)_endTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (float)minimumValue;
- (float)maximumValue;
- (id)createThumbView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isOnScreen) _Bool onScreen;
@property(readonly) Class superclass;

@end

