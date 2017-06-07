//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantUI/BFFPasscodeInputView.h>

#import <SetupAssistantUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

@interface BFFComplexPasscodeInputView : BFFPasscodeInputView <UITextFieldDelegate>
{
    UITextField *_passcodeField;
}

@property(retain, nonatomic) UITextField *passcodeField; // @synthesize passcodeField=_passcodeField;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)passcode;
- (void)setPasscode:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 numericOnly:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

