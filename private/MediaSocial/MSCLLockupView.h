//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SKUIArtworkRequestDelegate.h"

@class NSString, SKUIArtworkRequest, UIImage, UIImageView, UILabel;

@interface MSCLLockupView : UIView <SKUIArtworkRequestDelegate>
{
    SKUIArtworkRequest *_artworkRequest;
    UIImageView *_imageView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *subtitle;
@property(retain, nonatomic) UIImage *image;
- (void)adoptArtworkRequest:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

