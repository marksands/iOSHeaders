//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView;

@interface PUPhotoEditVisualLevelSliderCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImage *_thumbnail;
    unsigned long long _roundedCornersEdge;
}

@property(nonatomic) unsigned long long roundedCornersEdge; // @synthesize roundedCornersEdge=_roundedCornersEdge;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (void)setThumbnail:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;

@end

