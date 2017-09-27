//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSLayoutConstraint, NSString, NTKCFaceContainerView, UIFontMetrics, UIImage, UIImageView, UILabel, UIView;

@interface _NTKCGalleryCollectionCell : UICollectionViewCell
{
    NTKCFaceContainerView *_faceContainerView;
    UIView *_highlightedView;
    UILabel *_nameLabel;
    UIImageView *_nameImageView;
    NSLayoutConstraint *_nameBaselineConstraint;
    NSLayoutConstraint *_leadingImageConstraint;
    NSLayoutConstraint *_trailingImageConstraint;
    NSLayoutConstraint *_centerConstraint;
    _Bool _active;
    NSString *_calloutName;
    UIImage *_calloutImage;
    UIFontMetrics *_fontMetrics;
}

+ (struct CGSize)itemSizeWithCalloutName:(_Bool)arg1 andCalloutImage:(_Bool)arg2;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UIFontMetrics *fontMetrics; // @synthesize fontMetrics=_fontMetrics;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UIImage *calloutImage; // @synthesize calloutImage=_calloutImage;
@property(copy, nonatomic) NSString *calloutName; // @synthesize calloutName=_calloutName;
- (void).cxx_destruct;
- (id)previewViewAndRect:(struct CGRect *)arg1;
- (void)_highlight;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)setFontAdjustingAttributes;
@property(retain, nonatomic) UIView *faceView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_fontSizeDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

