//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextViewDelegate.h"

@class CALayer, NSString, TTYUtterance, UITextView;

@interface TTYUtteranceCell : UITableViewCell <UITextViewDelegate>
{
    UITextView *_textView;
    CALayer *_bubbleLayer;
    _Bool _editingUtterance;
    TTYUtterance *_utterance;
    id <TTYUtteranceCellDelegate> _delegate;
}

+ (double)heightForUtterance:(id)arg1 andWidth:(double)arg2;
@property(nonatomic) id <TTYUtteranceCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditingUtterance) _Bool editingUtterance; // @synthesize editingUtterance=_editingUtterance;
@property(retain, nonatomic) TTYUtterance *utterance; // @synthesize utterance=_utterance;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)textViewDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)adjustTextViewSize;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (double)preferredHeightForWidth:(double)arg1;
- (struct _NSRange)selectedTextRange;
- (void)dealloc;
- (void)setSendProgressIndex:(unsigned long long)arg1;
- (void)updateUtterance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

