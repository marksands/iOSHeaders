//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "HACCContentModule.h"

@class AXHAStepSlider, NSNumberFormatter, NSString, UILabel, UIVisualEffectView;

@interface HACCSlider : UIControl <HACCContentModule>
{
    UIVisualEffectView *_titleContainer;
    UIVisualEffectView *_subtitleContainer;
    unsigned long long module;
    id <HACCContentModuleDelegate> delegate;
    unsigned long long _numberOfSteps;
    double _value;
    NSNumberFormatter *_numberFormatter;
    long long _style;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_statusLabel;
    AXHAStepSlider *_slider;
}

@property(retain, nonatomic) AXHAStepSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) __weak id <HACCContentModuleDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned long long module; // @synthesize module;
- (void).cxx_destruct;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)enabled;
- (id)contentValue;
- (void)updateValue;
- (void)updateValueString;
- (void)sliderDidChange:(id)arg1;
@property(nonatomic) unsigned long long numberOfSteps; // @synthesize numberOfSteps=_numberOfSteps;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1 andStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

