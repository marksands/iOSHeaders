//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSArray, NSString, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface PUAlbumListSectionHeaderView : UICollectionReusableView
{
    NSString *_sectionHeaderTitle;
    UIFont *_sectionHeaderTitleFont;
    UILabel *__titleLabel;
    NSArray *__constraints;
    struct UIEdgeInsets _sectionHeaderInsets;
}

@property(retain, nonatomic, setter=_setConstraints:) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property(nonatomic) struct UIEdgeInsets sectionHeaderInsets; // @synthesize sectionHeaderInsets=_sectionHeaderInsets;
@property(retain, nonatomic) UIFont *sectionHeaderTitleFont; // @synthesize sectionHeaderTitleFont=_sectionHeaderTitleFont;
@property(copy, nonatomic) NSString *sectionHeaderTitle; // @synthesize sectionHeaderTitle=_sectionHeaderTitle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

