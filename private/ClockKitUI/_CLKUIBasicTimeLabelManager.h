//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CLKUITimeLabelManager.h"

@class CLKTimeFormatter, CLKUITimeLabelStyle, NSAttributedString, NSString, UIColor, UILabel, UIView;

@interface _CLKUIBasicTimeLabelManager : NSObject <_CLKUITimeLabelManager>
{
    UILabel *_label;
    CLKTimeFormatter *_timeFormatter;
    NSString *_timeText;
    CLKUITimeLabelStyle *_style;
    double _maxWidth;
    NSAttributedString *_correctAttributedText;
    _Bool _showsDesignator;
    _Bool _showSubstringToSeparator;
    _Bool _showSubstringFromSeparator;
    _Bool _hideMinutesIfZero;
    _Bool _primary;
    struct CGSize _cachedIntrinsicSize;
    struct UIEdgeInsets _cachedOpticalEdgeInsets;
    _Bool _cachedOpticalEdgeInsetsIsValid;
    _Bool _showSeconds;
    _Bool _animationsPaused;
    _Bool _showsBlinker;
    _Bool _showsNumbers;
}

@property(nonatomic) _Bool showsNumbers; // @synthesize showsNumbers=_showsNumbers;
@property(nonatomic) _Bool showsBlinker; // @synthesize showsBlinker=_showsBlinker;
@property(nonatomic) _Bool showSeconds; // @synthesize showSeconds=_showSeconds;
@property(nonatomic) _Bool animationsPaused; // @synthesize animationsPaused=_animationsPaused;
- (void).cxx_destruct;
- (id)_attributedTextShowingBlinker:(_Bool)arg1 numbers:(_Bool)arg2;
- (void)_updateAttributedText;
- (void)enumerateUnderlyingLabelsWithBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) struct UIEdgeInsets opticalInsets;
- (void)sizeViewToFit;
- (struct CGSize)sizeThatFits;
@property(readonly, nonatomic) struct CGSize intrinsicSize;
- (void)updateTimeText;
- (id)effectiveAttributedText;
- (id)effectiveFont;
- (double)_lastLineBaseline;
- (void)setMaxWidth:(double)arg1;
- (void)setShowsDesignator:(_Bool)arg1;
- (void)setStyle:(id)arg1;
@property(readonly, nonatomic) UIView *view;
- (id)_initPrimary:(_Bool)arg1 withTimeFormatter:(id)arg2 options:(unsigned long long)arg3 labelFactory:(CDUnknownBlockType)arg4;
- (id)initWithTimeFormatter:(id)arg1 options:(unsigned long long)arg2 labelFactory:(CDUnknownBlockType)arg3;

@end

