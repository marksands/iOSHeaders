//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class SBUIButton, UIButton, UILabel, UIView;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase
{
    SBUIButton *_okButton;
    _Bool _showsOkButton;
    UILabel *_promptLabel;
    _Bool _showsPromptLabel;
    _Bool _firstResponder;
    UIView *_springView;
    UIView *_springViewParent;
}

+ (_Bool)_usesTextFieldForFirstResponder;
+ (_Bool)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
@property(nonatomic) _Bool showsPromptLabel; // @synthesize showsPromptLabel=_showsPromptLabel;
@property(readonly, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) _Bool showsOkButton; // @synthesize showsOkButton=_showsOkButton;
@property(readonly, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
- (void).cxx_destruct;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (void)_autofillForBiometricAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)_viewSize;
- (void)_getPasscodeFieldSize:(struct CGSize *)arg1 okButtonSize:(struct CGSize *)arg2;
- (void)_okButtonHit;
- (void)_handleKeyUIEvent:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;

@end

