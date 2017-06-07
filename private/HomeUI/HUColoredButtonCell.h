//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HFItem, HUColoredButton, NSString, UIColor;
@protocol HUColoredButtonCellDelegate, HUResizableCellDelegate;

@interface HUColoredButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>
{
    _Bool _disabled;
    _Bool _buttonColorFollowsTintColor;
    HFItem *_item;
    id <HUColoredButtonCellDelegate> _delegate;
    UIColor *_buttonBackgroundColor;
    HUColoredButton *_button;
}

@property(retain, nonatomic) HUColoredButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(nonatomic) _Bool buttonColorFollowsTintColor; // @synthesize buttonColorFollowsTintColor=_buttonColorFollowsTintColor;
@property(nonatomic) __weak id <HUColoredButtonCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateButtonColor;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)prepareForReuse;
- (void)tintColorDidChange;
- (void)buttonPressed:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

