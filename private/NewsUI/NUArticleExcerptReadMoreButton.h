//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSURL, UIImageView, UILabel;

@interface NUArticleExcerptReadMoreButton : UIButton
{
    unsigned long long _excerptLenthType;
    NSURL *_domainURL;
    UILabel *_readStoryLabel;
    UILabel *_domainLabel;
    UIImageView *_arrowImageView;
}

+ (id)arrowImage;
+ (double)readMoreButtonHeight;
@property(readonly, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(readonly, nonatomic) UILabel *domainLabel; // @synthesize domainLabel=_domainLabel;
@property(readonly, nonatomic) UILabel *readStoryLabel; // @synthesize readStoryLabel=_readStoryLabel;
@property(retain, nonatomic) NSURL *domainURL; // @synthesize domainURL=_domainURL;
@property(nonatomic) unsigned long long excerptLenthType; // @synthesize excerptLenthType=_excerptLenthType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

