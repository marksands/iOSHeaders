//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MPAVRoutingThemeableCellView.h"

@class MPAVRoutingTableViewCellSubtitleTextState, MPVolumeSlider, NSString, NSTimer, UIActivityIndicatorView, UIImageView, UILabel;

@interface MPAVRoutingTableViewCell : UITableViewCell <MPAVRoutingThemeableCellView>
{
    UIImageView *_iconImageView;
    UILabel *_routeNameLabel;
    UILabel *_subtitleTextLabel;
    NSTimer *_subtitleTextUpdateTimer;
    UIActivityIndicatorView *_spinnerView;
    UIImageView *_smartAudioImageView;
    _Bool _mirroringSwitchVisible;
    _Bool _pendingSelection;
    _Bool _isDisplayedAsPicked;
    _Bool _useSmartAudioCheckmarkStyle;
    _Bool _provideOwnSeparator;
    _Bool _showingVolumeSlider;
    id <MPAVRoutingTableViewCellDelegate> _delegate;
    unsigned long long _mirroringStyle;
    unsigned long long _iconStyle;
    double _subtitleViewAlpha;
    MPVolumeSlider *_volumeSlider;
    MPAVRoutingTableViewCellSubtitleTextState *_subtitleTextState;
}

@property(retain, nonatomic) MPAVRoutingTableViewCellSubtitleTextState *subtitleTextState; // @synthesize subtitleTextState=_subtitleTextState;
@property(nonatomic, getter=isShowingVolumeSlider) _Bool showingVolumeSlider; // @synthesize showingVolumeSlider=_showingVolumeSlider;
@property(retain, nonatomic) MPVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(nonatomic) double subtitleViewAlpha; // @synthesize subtitleViewAlpha=_subtitleViewAlpha;
@property(nonatomic) _Bool provideOwnSeparator; // @synthesize provideOwnSeparator=_provideOwnSeparator;
@property(nonatomic) _Bool useSmartAudioCheckmarkStyle; // @synthesize useSmartAudioCheckmarkStyle=_useSmartAudioCheckmarkStyle;
@property(nonatomic) _Bool isDisplayedAsPicked; // @synthesize isDisplayedAsPicked=_isDisplayedAsPicked;
@property(nonatomic, getter=isPendingSelection) _Bool pendingSelection; // @synthesize pendingSelection=_pendingSelection;
@property(nonatomic) unsigned long long iconStyle; // @synthesize iconStyle=_iconStyle;
@property(nonatomic) unsigned long long mirroringStyle; // @synthesize mirroringStyle=_mirroringStyle;
@property(nonatomic) _Bool mirroringSwitchVisible; // @synthesize mirroringSwitchVisible=_mirroringSwitchVisible;
@property(nonatomic) __weak id <MPAVRoutingTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_removeVolumeSlider;
- (void)_animateSubtitleLabelToNextAvailableText;
- (void)_updateSpinnerStyle;
- (void)_updateSubtitleTextLabelForRoute:(id)arg1;
- (void)_updateSmartAudioAccessory;
- (id)_checkmarkImageForSmartAudio;
- (id)_checkmarkImageNameForSmartAudio;
- (id)_iconImageForRoute:(id)arg1;
- (id)_pairedDeviceTextForRoute:(id)arg1;
- (id)_batteryTextForRoute:(id)arg1;
- (_Bool)_shouldShowSeparateBatteryPercentagesForBatteryLevel:(id)arg1;
- (void)_configureDetailLabel:(id)arg1;
- (void)_configureLabel:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)setAccessoryType:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)layoutSubviews;
- (id)separatorView;
- (id)iconView;
- (id)volumeView;
- (id)subtitleView;
- (id)titleView;
- (void)updateForEndpoint:(id)arg1 route:(id)arg2 inferLocalizedModelName:(_Bool)arg3;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

