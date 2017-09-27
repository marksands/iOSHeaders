//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NSMutableArray, PKGlyphView, PKPaymentAuthorizationLayout, UIButton, UILabel;

@interface PKPaymentAuthorizationFooterView : UIView
{
    UILabel *_labelView;
    PKGlyphView *_glyphView;
    UIButton *_payWithPasscodeButton;
    UILabel *_passbookPaymentDetailsView;
    UIView *_separatorView;
    UIView *_lockupView;
    NSLayoutConstraint *_separatorLeftConstraint;
    NSLayoutConstraint *_payWithPasscodeCenterYConstraint;
    NSLayoutConstraint *_overallHeightConstraint;
    NSMutableArray *_hiddenConstraints;
    NSMutableArray *_regularConstraints;
    NSMutableArray *_seperatorConstraints;
    long long _constraintState;
    long long _queuedConstraintState;
    long long _state;
    PKPaymentAuthorizationLayout *_layout;
    unsigned long long _requestType;
    unsigned long long _confirmationStyle;
    id <PKPaymentAuthorizationFooterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PKPaymentAuthorizationFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long confirmationStyle; // @synthesize confirmationStyle=_confirmationStyle;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) PKPaymentAuthorizationLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_payWithPasscodePressed;
- (id)_payWithPasscodeTitleForState:(long long)arg1;
- (id)_titleAttributedStringForState:(long long)arg1;
- (id)_titleLabelAttributedString:(id)arg1;
- (void)_prepareConstraints;
- (void)updateConstraints;
- (void)setHidden:(_Bool)arg1;
- (void)_createSubviews;
- (void)setState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setConstraintState:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 layout:(id)arg2;

@end

