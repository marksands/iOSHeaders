//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SKUISettingDescriptionView, UIImageView;

@interface SKUISettingsTableViewCell : UITableViewCell
{
    struct UIEdgeInsets _contentInset;
    UIImageView *_disclosureChevron;
    _Bool _hasDisclosureChevron;
    SKUISettingDescriptionView *_settingDescriptionView;
}

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)prepareForReuse;
@property(readonly, nonatomic) SKUISettingDescriptionView *settingDescriptionView;
- (void)displaySettingDescriptionView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
