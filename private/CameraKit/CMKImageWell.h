//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSMutableArray, NSString, UIImageView, UIView;

@interface CMKImageWell : UIButton
{
    long long _cameraOrientation;
    UIView *__containerView;
    UIImageView *__thumbnailImageView;
    UIImageView *__maskImageView;
    NSMutableArray *__dimmingViewQueue;
    NSString *__uuid;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property(retain, nonatomic, setter=_setUuid:) NSString *_uuid; // @synthesize _uuid=__uuid;
@property(readonly, nonatomic) NSMutableArray *_dimmingViewQueue; // @synthesize _dimmingViewQueue=__dimmingViewQueue;
@property(readonly, nonatomic) UIImageView *_maskImageView; // @synthesize _maskImageView=__maskImageView;
@property(readonly, nonatomic) UIImageView *_thumbnailImageView; // @synthesize _thumbnailImageView=__thumbnailImageView;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) long long cameraOrientation; // @synthesize cameraOrientation=_cameraOrientation;
- (void).cxx_destruct;
- (id)_maskImage;
- (void)_removeFirstDimmingView;
- (void)_performEmitAnimationWithImage:(id)arg1 orientation:(long long)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (struct CGAffineTransform)_affineTransformForImageOrientation:(long long)arg1;
- (void)_updateThumbnailTransformFromCameraOrientation;
- (void)recoverFromFailedThumbnailUpdate;
- (void)prepareForThumbnailUpdateFromCapture;
- (void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(_Bool)arg3;
- (void)setThumbnailImage:(id)arg1 animated:(_Bool)arg2;
- (void)setCameraOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKImageWellInitialization;

@end

