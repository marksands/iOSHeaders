//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UIButton, UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface PUPhotoCommentEntryView : UIView <UITextViewDelegate>
{
    UILabel *placeholderLabel;
    UILabel *_placeholderLabel;
    UITextView *_textView;
    UIButton *_postButton;
    id <PUPhotoCommentEntryViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PUPhotoCommentEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) UIButton *postButton; // @synthesize postButton=_postButton;
@property(readonly, retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(readonly, retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
- (void).cxx_destruct;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)trimmedText;
- (void)setText:(id)arg1;
- (void)clearText;
- (double)preferredHeight;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

