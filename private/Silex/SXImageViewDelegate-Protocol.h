//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXAnimatedImage, SXImageView, UIImage;

@protocol SXImageViewDelegate <NSObject>

@optional
- (void)imageView:(SXImageView *)arg1 didLoadAnimatedImage:(SXAnimatedImage *)arg2;
- (void)imageView:(SXImageView *)arg1 didLoadImage:(UIImage *)arg2 ofQuality:(int)arg3;
@end

