//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutManager, NSMutableArray, NSMutableSet, NSString, NSTextContainer, NSTextStorage, UIColor, UIFont;

@interface SUICStreamingTextView : UIView
{
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSMutableArray *_words;
    NSMutableArray *_wordsToShow;
    NSMutableSet *_wordsToDelete;
    UIFont *_font;
    UIColor *_startTextColor;
    UIColor *_endTextColor;
    double _animationDuration;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIColor *endTextColor; // @synthesize endTextColor=_endTextColor;
@property(retain, nonatomic) UIColor *startTextColor; // @synthesize startTextColor=_startTextColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (id)_createGlyphImage:(struct CGRect)arg1 glyphRange:(struct _NSRange)arg2 layoutManager:(id)arg3;
- (void)_resetState;
- (void)_configureWordAnimateOutEnd:(id)arg1;
- (void)_configureWordAnimateInEnd:(id)arg1;
- (void)_configureWordAnimateInBegin:(id)arg1;
- (void)_layoutFrames;
- (void)_updateText:(id)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *text;
@property(copy, nonatomic) NSArray *words;
- (void)_sharedInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

