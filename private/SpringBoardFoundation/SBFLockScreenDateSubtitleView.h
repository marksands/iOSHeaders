//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBFScreenFadeReplicatable.h"

@class NSHashTable, NSString, SBUILegibilityLabel, UIFont, UIView<SBFScreenFadeReplicatable>, _UILegibilitySettings;

@interface SBFLockScreenDateSubtitleView : UIView <SBFScreenFadeReplicatable>
{
    NSHashTable *_replicatedViews;
    SBUILegibilityLabel *_label;
    UIView<SBFScreenFadeReplicatable> *_accessoryView;
    UIView<SBFScreenFadeReplicatable> *_backgroundView;
    _UILegibilitySettings *_legibilitySettings;
    double _strength;
    double _customInterItemSpacing;
}

+ (double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2;
+ (id)labelFont;
@property(nonatomic) double customInterItemSpacing; // @synthesize customInterItemSpacing=_customInterItemSpacing;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) UIView<SBFScreenFadeReplicatable> *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView<SBFScreenFadeReplicatable> *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void).cxx_destruct;
@property(readonly, nonatomic) double baselineOffsetFromBottom;
@property(readonly, nonatomic) double baselineOffsetFromOrigin;
- (double)interItemSpacing;
- (void)_enumerateReplicateViews:(CDUnknownBlockType)arg1;
- (id)_createReplicateView;
- (id)replicate;
- (struct CGRect)backgroundViewFrame;
- (struct CGRect)subtitleLabelFrame;
- (struct CGRect)accessoryViewFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateForCurrentSizeCategory;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) NSString *string;
- (void)dealloc;
- (id)initWithString:(id)arg1 accessoryView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

