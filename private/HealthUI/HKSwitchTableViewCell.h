//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISwitch;
@protocol HKSwitchTableViewCellDelegate;

@interface HKSwitchTableViewCell : UITableViewCell
{
    UILabel *_countLabel;
    UISwitch *_switch;
    _Bool _shouldHideSwitch;
    _Bool _enabled;
    _Bool _centersIcon;
    id <HKSwitchTableViewCellDelegate> _delegate;
}

+ (id)reuseIdentifier;
@property(nonatomic) _Bool centersIcon; // @synthesize centersIcon=_centersIcon;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool shouldHideSwitch; // @synthesize shouldHideSwitch=_shouldHideSwitch;
@property(nonatomic) __weak id <HKSwitchTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)switchValueChanged:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic, getter=isOn) _Bool on;
- (void)setIconImage:(id)arg1;
- (void)setCountText:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize iconSize;
- (void)_contextSizeCategoryChanged;
- (void)_updateFont;
- (void)_setupUI;
- (id)_displayLabelFont;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

