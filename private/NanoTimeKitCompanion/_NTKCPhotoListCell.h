//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImage, UIImageView, UIView;

@interface _NTKCPhotoListCell : UICollectionViewCell
{
    UIView *_selectionOverlayView;
    UIImageView *_selectionBadge;
    UIView *_highlightOverlayView;
    UIView *_content;
    UIImageView *_contentImageView;
    struct CGRect _crop;
}

+ (id)reuseIdentifier;
@property(nonatomic) struct CGRect crop; // @synthesize crop=_crop;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *photo;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

