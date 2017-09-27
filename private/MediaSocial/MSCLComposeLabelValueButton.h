//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UIImageView, UILabel, UIView;

@interface MSCLComposeLabelValueButton : UIControl
{
    _Bool _didHighlightForInitialTouch;
    UIImageView *_disclosureImageView;
    UIView *_highlightView;
    UILabel *_label;
    UIView *_topSeparatorView;
    UILabel *_valueLabel;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)_reloadHighlightViewAnimated:(_Bool)arg1;
@property(copy, nonatomic) NSString *valueText;
@property(copy, nonatomic) NSString *labelText;
- (void)deselectAnimated:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

