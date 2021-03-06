//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXAssetUIImageViewTile.h>

@class ISAnimatedImageView, PHAnimatedImage;

@interface PXAssetAnimatedImageUIViewTile : PXAssetUIImageViewTile
{
    ISAnimatedImageView *_animatedImageView;
    long long _animatedImageRequestID;
    unsigned long long _requestCount;
    PHAnimatedImage *__animatedImage;
}

@property(retain, nonatomic, setter=_setAnimatedImage:) PHAnimatedImage *_animatedImage; // @synthesize _animatedImage=__animatedImage;
- (void).cxx_destruct;
- (void)setImageRequester:(id)arg1;
- (void)_handleAnimatedImageResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3;
- (void)_requestAnimatedImageIfNeeded;
- (void)_updateAnimatedImageView;
- (id)view;
- (void)becomeReusable;

@end

