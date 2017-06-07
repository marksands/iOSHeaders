//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImage, UIImageView;

@interface PKImageViewCell : UITableViewCell
{
    _Bool _matchCellBackgroundToImage;
    long long _imageViewContentMode;
}

@property(nonatomic) _Bool matchCellBackgroundToImage; // @synthesize matchCellBackgroundToImage=_matchCellBackgroundToImage;
@property(nonatomic) long long imageViewContentMode; // @synthesize imageViewContentMode=_imageViewContentMode;
- (void)setContentMode:(long long)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) UIImageView *imageView; // @dynamic imageView;

@end

