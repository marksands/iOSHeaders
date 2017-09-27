//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "HUCellProtocol.h"
#import "HUDisableableCellProtocol.h"
#import "HUEditableTextCellProtocol.h"

@class HFItem, HUIconButton, NSLayoutConstraint, NSString, UIFont, UITextField, UIView;

@interface HUNameAndIconEditorCell : UITableViewCell <HUCellProtocol, HUEditableTextCellProtocol, HUDisableableCellProtocol>
{
    _Bool _disabled;
    _Bool _fullWidth;
    HFItem *_item;
    id <HUNameAndIconEditorCellDelegate> _delegate;
    HUIconButton *_iconButton;
    UIView *_containerView;
    UITextField *_textField;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *rightConstraint; // @synthesize rightConstraint=_rightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftConstraint; // @synthesize leftConstraint=_leftConstraint;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool fullWidth; // @synthesize fullWidth=_fullWidth;
@property(retain, nonatomic) HUIconButton *iconButton; // @synthesize iconButton=_iconButton;
@property(nonatomic) __weak id <HUNameAndIconEditorCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_handleIconButtonTap:(id)arg1;
- (void)_updateFullWidthAppearance;
@property(retain, nonatomic) UIFont *textFieldFont;
- (void)_setupConstraints;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

