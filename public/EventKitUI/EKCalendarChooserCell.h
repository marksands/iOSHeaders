//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKUITableViewCell.h>

@class NSString, NSTextAttachment, UIColor, UIImage, UIImageView;

@interface EKCalendarChooserCell : EKUITableViewCell
{
    _Bool _showCheckmarksOnLeft;
    _Bool _checked;
    _Bool _shouldAnimate;
    _Bool _showsColorDot;
    UIImage *_colorDot;
    UIImage *_colorDotHighlighted;
    UIImageView *_colorDotView;
    UIImageView *_checkmarkView;
    UIColor *_checkMarkColor;
    NSTextAttachment *_colorDotAttachment;
    _Bool _showingSelectionCheckmark;
    _Bool _multiSelectStyle;
    NSString *_textLabelText;
    UIColor *_selectionCheckmarkColor;
}

@property(retain, nonatomic) UIColor *selectionCheckmarkColor; // @synthesize selectionCheckmarkColor=_selectionCheckmarkColor;
@property(retain, nonatomic) NSString *textLabelText; // @synthesize textLabelText=_textLabelText;
@property(nonatomic) _Bool showsColorDot; // @synthesize showsColorDot=_showsColorDot;
@property(nonatomic) _Bool shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) _Bool showCheckmarksOnLeft; // @synthesize showCheckmarksOnLeft=_showCheckmarksOnLeft;
@property(nonatomic) _Bool multiSelectStyle; // @synthesize multiSelectStyle=_multiSelectStyle;
@property(nonatomic) _Bool showingSelectionCheckmark; // @synthesize showingSelectionCheckmark=_showingSelectionCheckmark;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)textLeadingIndent;
- (void)updateSelectionCheckmark;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setColorDotHighlightedImage:(id)arg1;
- (void)setColorDotImage:(id)arg1;
- (void)_updateTextLabelTextWithColorDot;
- (void)setAccessoryType:(long long)arg1;
- (void)prepareForReuse;
- (id)_multiselectBackgroundColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setContentAlpha:(double)arg1;

@end

