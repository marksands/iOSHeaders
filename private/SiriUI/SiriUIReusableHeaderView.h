//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

#import "SiriUIReusableView.h"
#import "SiriUISizableHeaderView.h"

@class NSString, SiriUIKeyline, SiriUISnippetViewController, UIButton, UIColor, UIImageView, UILabel, UIView;

@interface SiriUIReusableHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView>
{
    UIView *_backgroundView;
    UILabel *_headerLabel;
    struct UIEdgeInsets _contentInsets;
    SiriUIKeyline *_keyline;
    UIImageView *_chevronView;
    SiriUISnippetViewController *_snippetViewController;
    NSString *_titleText;
    UIColor *_titleTextColor;
    UIButton *_headerAreaButton;
    long long _keylineType;
}

+ (id)elementKind;
+ (double)defaultHeight;
+ (id)reuseIdentifier;
@property(nonatomic) long long keylineType; // @synthesize keylineType=_keylineType;
@property(readonly, nonatomic) UIButton *headerAreaButton; // @synthesize headerAreaButton=_headerAreaButton;
@property(copy, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController; // @synthesize snippetViewController=_snippetViewController;
- (void).cxx_destruct;
- (double)desiredHeightForWidth:(double)arg1;
- (void)_configureHeaderLabelForBounds:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

