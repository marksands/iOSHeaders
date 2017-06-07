//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface PXLoadingFailureBadgeView : UIImageView
{
    struct {
        _Bool image;
        _Bool sizeClass;
    } _needsUpdateFlags;
    long long __sizeClass;
}

+ (struct CGSize)_imageSizeForSizeClass:(long long)arg1;
+ (id)_imageForSizeClass:(long long)arg1;
@property(nonatomic, setter=_setSizeClass:) long long _sizeClass; // @synthesize _sizeClass=__sizeClass;
- (void)_updateSizeClassIfNeeded;
- (void)_invalidateSizeClass;
- (void)_updateImageIfNeeded;
- (void)_invalidateImage;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)setImage:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

