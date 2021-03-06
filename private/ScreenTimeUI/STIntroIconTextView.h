//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface STIntroIconTextView : UIView
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    double _padding;
    struct CGSize _iconSize;
}

@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (double)_availableTextWidth:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 title:(id)arg3 content:(id)arg4;

@end

