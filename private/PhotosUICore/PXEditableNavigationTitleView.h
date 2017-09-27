//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, _PXEditableNavigationTitleTextField;

@interface PXEditableNavigationTitleView : UIView <UITextFieldDelegate>
{
    struct {
        _Bool textColor;
    } _needsUpdateFlags;
    _Bool _isPerformingUpdates;
    struct {
        _Bool validateNewText;
        _Bool didEndEditing;
    } _delegateRespondsTo;
    _Bool _editing;
    id <PXEditableNavigationTitleViewDelegate> _delegate;
    NSString *_text;
    _PXEditableNavigationTitleTextField *_textField;
}

@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) _PXEditableNavigationTitleTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <PXEditableNavigationTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)_updateTextColorIfNeeded;
- (void)_invalidateTextColor;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)endEditing;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

