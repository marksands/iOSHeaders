//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface HKTitledIconHeaderView : UIView
{
    _Bool _boldsTitle;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_iconImage;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool boldsTitle; // @synthesize boldsTitle=_boldsTitle;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (struct CGSize)_sizeThatFitsLabel:(id)arg1 containerSize:(struct CGSize)arg2;
- (double)_verticalOffsetForSubtitle;
- (double)_verticalOffsetForTitle;
- (id)_titleFont;
- (id)_healthIconImage;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setLayoutMarginsWithTableView:(id)arg1;
- (void)_updateFont;
- (id)initWithFrame:(struct CGRect)arg1;

@end

