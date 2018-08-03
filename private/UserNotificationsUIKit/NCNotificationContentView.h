//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MTVibrantStylingProviderObserving.h"
#import "MTVibrantStylingRequiring.h"
#import "PLContentSizeCategoryAdjusting.h"
#import "UITextViewDelegate.h"

@class BSUIEmojiLabelView, BSUIFontProvider, MTVibrantStylingProvider, NSMutableDictionary, NSString, NSStringDrawingContext, UIImage, UIImageView, UILabel, UITextView;

@interface NCNotificationContentView : UIView <UITextViewDelegate, MTVibrantStylingProviderObserving, MTVibrantStylingRequiring, PLContentSizeCategoryAdjusting>
{
    long long _lookStyle;
    struct UIEdgeInsets _contentInsets;
    UIView *_contentView;
    UIImageView *_thumbnailImageView;
    NSMutableDictionary *_widthToFontToStringToMeasuredNumLines;
    NSStringDrawingContext *_drawingContext;
    _Bool _adjustsFontForContentSizeCategory;
    UILabel *_secondaryLabel;
    UITextView *_secondaryTextView;
    MTVibrantStylingProvider *_vibrantStylingProvider;
    NSString *_preferredContentSizeCategory;
    id <NCNotificationContentViewDelegate> _delegate;
    UIView *_accessoryView;
    BSUIFontProvider *_fontProvider;
    UILabel *_primaryLabel;
    UILabel *_primarySubtitleLabel;
    BSUIEmojiLabelView *_summaryLabel;
}

@property(retain, nonatomic, getter=_summaryLabel, setter=_setSummaryLabel:) BSUIEmojiLabelView *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic, getter=_primarySubtitleLabel, setter=_setPrimarySubtitleLabel:) UILabel *primarySubtitleLabel; // @synthesize primarySubtitleLabel=_primarySubtitleLabel;
@property(retain, nonatomic, getter=_primaryLabel, setter=_setPrimaryLabel:) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider; // @synthesize fontProvider=_fontProvider;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) __weak id <NCNotificationContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(retain, nonatomic) MTVibrantStylingProvider *vibrantStylingProvider; // @synthesize vibrantStylingProvider=_vibrantStylingProvider;
@property(readonly, nonatomic, getter=_secondaryTextView) UITextView *secondaryTextView; // @synthesize secondaryTextView=_secondaryTextView;
@property(readonly, nonatomic, getter=_secondaryLabel) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)vibrantStylingDidChangeForProvider:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)_frameForThumbnailInRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *thumbnail;
- (void)_updateTextAttributesForLabel:(id)arg1;
@property(retain, nonatomic) NSString *summaryText;
- (id)_lazySummaryLabel;
- (id)_newSummaryLabel;
- (void)_updateStyleForSummaryLabel:(id)arg1 withStyle:(long long)arg2;
- (void)_updateTextAttributesForSummaryLabel:(id)arg1 withStyle:(long long)arg2;
@property(retain, nonatomic) NSString *secondaryText;
- (id)_lazySecondaryTextSupportingView;
- (id)_lazySecondaryTextView;
- (id)_lazySecondaryLabel;
- (id)_secondaryTextSupportingView;
- (id)_newSecondaryTextView;
- (id)_newSecondaryLabel;
- (void)_configureTextSupportingView:(id)arg1;
- (void)_updateStyleForSecondaryTextSupportingView:(id)arg1 withStyle:(long long)arg2;
@property(nonatomic) unsigned long long messageNumberOfLines;
- (void)_setSecondaryTextNumberOfLines:(unsigned long long)arg1;
- (unsigned long long)_secondaryTextNumberOfLines;
- (void)_updateFontForSecondaryTextSupportingView:(id)arg1 withStyle:(long long)arg2;
- (id)_lazyThumbnailImageView;
@property(retain, nonatomic) NSString *primarySubtitleText;
- (id)_lazyPrimarySubtitleLabel;
@property(retain, nonatomic) NSString *primaryText;
- (id)_lazyPrimaryLabel;
- (id)_newPrimaryLabel;
- (void)_updateStyleForPrimaryLabel:(id)arg1 withStyle:(long long)arg2;
- (void)_updateTextAttributesForPrimaryLabel:(id)arg1 withStyle:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2;
- (unsigned long long)_numberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forSize:(struct CGSize)arg3;
- (unsigned long long)_cachedNumberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forWidth:(double)arg3;
- (void)_clearCacheForFont:(id)arg1;
- (void)_invalidateNumberOfLinesCache;
- (struct CGRect)_summaryLabelBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3;
- (unsigned long long)_summaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1;
- (unsigned long long)_summaryTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (struct CGRect)_secondaryTextViewBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3;
- (unsigned long long)_secondaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1;
- (unsigned long long)_secondaryTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (struct CGRect)_primarySubtitleLabelBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3;
- (unsigned long long)_primarySubtitleTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1;
- (unsigned long long)_primarySubtitleTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (struct CGRect)_primaryLabelBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3;
- (unsigned long long)_primaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1;
- (unsigned long long)_primaryTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (double)_summaryTextBaselineOffsetForCurrentStyle;
- (double)_secondaryTextBaselineOffsetForCurrentStyle;
- (double)_primarySubtitleTextBaselineOffsetForCurrentStyle;
- (struct UIEdgeInsets)_contentInsetsForStyle:(long long)arg1;
- (struct UIEdgeInsets)_contentInsetsForLongLook;
- (struct UIEdgeInsets)_contentInsetsForShortLook;
- (struct UIEdgeInsets)_contentInsets;
- (double)_summaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (double)_secondaryTextBaselineOffsetFromBottomWithBaseValue:(double)arg1;
- (double)_secondaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (double)_primaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

