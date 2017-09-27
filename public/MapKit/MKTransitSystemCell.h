//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class NSLayoutConstraint, NSString, UIImage, UIImageView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitSystemCell : MKCustomSeparatorTableViewCell
{
    UIImageView *_shieldImageView;
    _MKUILabel *_systemLabel;
    NSLayoutConstraint *_imageToLabelConstraint;
    NSLayoutConstraint *_systemLabelToTopConstraint;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *systemName;
@property(retain, nonatomic) UIImage *systemArtwork;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (id)initWithReuseIdentifier:(id)arg1;

@end

