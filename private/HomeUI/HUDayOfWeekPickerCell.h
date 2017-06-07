//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, NSArray, NSSet, NSString, UIStackView;
@protocol HUDayOfWeekPickerCellDelegate, HUResizableCellDelegate;

@interface HUDayOfWeekPickerCell : UITableViewCell <HUCellProtocol>
{
    HFItem *_item;
    id <HUDayOfWeekPickerCellDelegate> _delegate;
    NSSet *_selectedRecurrences;
    NSArray *_buttons;
    UIStackView *_buttonStackView;
}

@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSSet *selectedRecurrences; // @synthesize selectedRecurrences=_selectedRecurrences;
@property(nonatomic) __weak id <HUDayOfWeekPickerCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_setupConstraints;
- (void)_toggleWeekdayButton:(id)arg1;
- (void)_updateSelectedDays;
- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

