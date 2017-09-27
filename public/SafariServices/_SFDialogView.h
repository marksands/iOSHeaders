//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, SFDialogContentView, UISwipeGestureRecognizer, UITapGestureRecognizer;

@interface _SFDialogView : UIView
{
    SFDialogContentView *_contentView;
    SFDialogContentView *_contentViewConfiguredForMinimumHeight;
    UISwipeGestureRecognizer *_keyboardDismissSwipeGesture;
    UITapGestureRecognizer *_keyboardDismissTapGesture;
    NSLayoutConstraint *_obscuredInsetTopConstraint;
    NSLayoutConstraint *_obscuredInsetLeftConstraint;
    NSLayoutConstraint *_obscuredInsetBottomConstraint;
    NSLayoutConstraint *_obscuredInsetRightConstraint;
    id <_SFDialogViewDelegate> _delegate;
}

@property(nonatomic) __weak id <_SFDialogViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_keyboardDismissGesture:(id)arg1;
- (void)didAppear;
- (void)setDialogActions:(id)arg1;
- (void)setPasswordText:(id)arg1 placeholder:(id)arg2;
- (void)setInputText:(id)arg1 placeholder:(id)arg2;
- (void)setUsesOpaqueAppearance:(_Bool)arg1;
- (void)setObscuredInsets:(struct UIEdgeInsets)arg1;
- (void)setMessageText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (_Bool)becomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

