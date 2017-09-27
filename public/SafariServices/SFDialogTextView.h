//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, NSParagraphStyle, NSString, UIFont, UITextView;

__attribute__((visibility("hidden")))
@interface SFDialogTextView : UIView
{
    NSString *_title;
    NSString *_message;
    UIFont *_titleFont;
    UIFont *_messageFont;
    UIFont *_messageFontWithTitle;
    NSParagraphStyle *_titleParagraphStyle;
    UITextView *_textView;
    double _preferredMaxLayoutWidth;
    CAGradientLayer *_topGradient;
    CAGradientLayer *_bottomGradient;
}

- (void).cxx_destruct;
- (void)flashScrollIndicators;
- (void)_updateFontStyling;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)_updateText;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

