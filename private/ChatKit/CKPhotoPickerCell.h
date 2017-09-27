//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "PHLivePhotoViewDelegate.h"

@class CKPhotoTileBadgeView, NSString, PHLivePhotoView, PLRoundProgressView, UIImageView;

@interface CKPhotoPickerCell : UICollectionViewCell <PHLivePhotoViewDelegate>
{
    _Bool _isVideo;
    _Bool _isLivePhoto;
    id <CKPhotoPickerCellDelegate> _delegate;
    UIImageView *_imageView;
    PLRoundProgressView *_progressView;
    UIImageView *_videoImageView;
    PHLivePhotoView *_livePhotoView;
    CKPhotoTileBadgeView *_livePhotoBadgeView;
}

@property(retain, nonatomic) CKPhotoTileBadgeView *livePhotoBadgeView; // @synthesize livePhotoBadgeView=_livePhotoBadgeView;
@property(nonatomic) _Bool isLivePhoto; // @synthesize isLivePhoto=_isLivePhoto;
@property(retain, nonatomic) PHLivePhotoView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) PLRoundProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <CKPhotoPickerCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)_badgeToggled:(id *)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)updateProgress:(double)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

