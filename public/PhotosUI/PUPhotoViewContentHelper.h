//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHLivePhotoViewDelegate.h"

@class AVAsset, ISAnimatedImageView, ISWrappedAVAudioSession, ISWrappedAVPlayer, NSString, PHAnimatedImage, PHLivePhoto, PHLivePhotoView, PUAvalancheStackView, PUBackgroundColorView, PUPhotoDecoration, PUTextBannerView, PXCollectionTileLayoutTemplate, PXFeatureSpec, PXRoundedCornerOverlayView, PXTitleSubtitleUILabel, PXUIAssetBadgeView, PXVideoPlayerView, UIColor, UIImage, UIImageView, UIView;

@interface PUPhotoViewContentHelper : NSObject <PHLivePhotoViewDelegate>
{
    PUBackgroundColorView *_photoDecorationBorderView;
    PUBackgroundColorView *_photoDecorationOverlayView;
    _Bool _hasTransform;
    struct {
        _Bool respondsToLivePhotoWillBeginPlaybackWithStyle;
    } _delegateFlags;
    _Bool _hasPendingPlaybackRequest;
    long long _pendingPlaybackRequestStyle;
    UIColor *_layerDefaultBackgroundColor;
    struct {
        _Bool titleSubtitleUILabel;
        _Bool loopingVideoView;
        _Bool animatedImageView;
    } _needsUpdateFlags;
    PXVideoPlayerView *_loopingVideoView;
    ISWrappedAVPlayer *_loopingVideoPlayer;
    ISAnimatedImageView *_animatedImageView;
    _Bool _isTextBannerVisible;
    _Bool _avoidsImageViewIfPossible;
    _Bool _flattensBadgeView;
    _Bool _avoidsPhotoDecoration;
    _Bool _animatingRoundedCorners;
    _Bool _useOverlay;
    _Bool _highlighted;
    _Bool _livePhotoHidden;
    _Bool _shouldPrepareForPlayback;
    _Bool _loopingPlaybackAllowed;
    _Bool _showsLivePhoto;
    _Bool _needsAvalancheStack;
    UIView *_contentView;
    long long _fillMode;
    UIImage *_photoImage;
    UIImage *_placeHolderImage;
    PUPhotoDecoration *_photoDecoration;
    double _cornerRadius;
    unsigned long long _cornersToRound;
    UIColor *_overlayColor;
    double _contentAlpha;
    UIColor *_backgroundColor;
    id <PUPhotoViewContentHelperDelegate> _delegate;
    PHLivePhoto *_livePhoto;
    AVAsset *_loopingVideoAsset;
    PHAnimatedImage *_animatedImage;
    struct CGColor *_avalancheStackBackgroundColor;
    long long _badgeStyle;
    PUTextBannerView *_textBannerView;
    PXFeatureSpec *_featureSpec;
    PXCollectionTileLayoutTemplate *_collectionTileLayoutTemplate;
    NSString *_titleFontName;
    NSString *_title;
    NSString *_subtitle;
    UIImageView *_photoImageView;
    UIImageView *__crossfadeImageView;
    PUAvalancheStackView *_avalancheStackView;
    PHLivePhotoView *_livePhotoView;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    UIView *__highlightOverlayView;
    PXUIAssetBadgeView *__badgeView;
    PXTitleSubtitleUILabel *__titleSubtitleLabel;
    ISWrappedAVAudioSession *__audioSession;
    struct CGSize _photoSize;
    struct PXAssetBadgeInfo _badgeInfo;
    struct CGAffineTransform _imageTransform;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 fillMode:(long long)arg3;
+ (struct CGRect)_imageContentFrameForBounds:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 fillMode:(long long)arg3;
@property(retain, nonatomic, setter=_setAudioSession:) ISWrappedAVAudioSession *_audioSession; // @synthesize _audioSession=__audioSession;
@property(retain, nonatomic, setter=_setTitleSubtitleUILabel:) PXTitleSubtitleUILabel *_titleSubtitleLabel; // @synthesize _titleSubtitleLabel=__titleSubtitleLabel;
@property(retain, nonatomic, setter=_setBadgeView:) PXUIAssetBadgeView *_badgeView; // @synthesize _badgeView=__badgeView;
@property(retain, nonatomic, setter=_setHighlightOverlayView:) UIView *_highlightOverlayView; // @synthesize _highlightOverlayView=__highlightOverlayView;
@property(retain, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView; // @synthesize roundedCornerOverlayView=_roundedCornerOverlayView;
@property(retain, nonatomic) PHLivePhotoView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
@property(retain, nonatomic) PUAvalancheStackView *avalancheStackView; // @synthesize avalancheStackView=_avalancheStackView;
@property(retain, nonatomic) UIImageView *_crossfadeImageView; // @synthesize _crossfadeImageView=__crossfadeImageView;
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
@property(retain, nonatomic) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate; // @synthesize collectionTileLayoutTemplate=_collectionTileLayoutTemplate;
@property(retain, nonatomic) PXFeatureSpec *featureSpec; // @synthesize featureSpec=_featureSpec;
@property(readonly, nonatomic) PUTextBannerView *textBannerView; // @synthesize textBannerView=_textBannerView;
@property(nonatomic) long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property(nonatomic) struct PXAssetBadgeInfo badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(nonatomic) struct CGColor *avalancheStackBackgroundColor; // @synthesize avalancheStackBackgroundColor=_avalancheStackBackgroundColor;
@property(nonatomic) _Bool needsAvalancheStack; // @synthesize needsAvalancheStack=_needsAvalancheStack;
@property(nonatomic) _Bool showsLivePhoto; // @synthesize showsLivePhoto=_showsLivePhoto;
@property(nonatomic) _Bool loopingPlaybackAllowed; // @synthesize loopingPlaybackAllowed=_loopingPlaybackAllowed;
@property(retain, nonatomic) PHAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(copy, nonatomic) AVAsset *loopingVideoAsset; // @synthesize loopingVideoAsset=_loopingVideoAsset;
@property(nonatomic) _Bool shouldPrepareForPlayback; // @synthesize shouldPrepareForPlayback=_shouldPrepareForPlayback;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(nonatomic) __weak id <PUPhotoViewContentHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isLivePhotoHidden) _Bool livePhotoHidden; // @synthesize livePhotoHidden=_livePhotoHidden;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(retain, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(nonatomic) _Bool useOverlay; // @synthesize useOverlay=_useOverlay;
@property(readonly, nonatomic) unsigned long long cornersToRound; // @synthesize cornersToRound=_cornersToRound;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic, getter=isAnimatingRoundedCorners) _Bool animatingRoundedCorners; // @synthesize animatingRoundedCorners=_animatingRoundedCorners;
@property(nonatomic) _Bool avoidsPhotoDecoration; // @synthesize avoidsPhotoDecoration=_avoidsPhotoDecoration;
@property(nonatomic) _Bool flattensBadgeView; // @synthesize flattensBadgeView=_flattensBadgeView;
@property(nonatomic) _Bool avoidsImageViewIfPossible; // @synthesize avoidsImageViewIfPossible=_avoidsImageViewIfPossible;
@property(copy, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property(retain, nonatomic) UIImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property(nonatomic) struct CGSize photoSize; // @synthesize photoSize=_photoSize;
@property(nonatomic) struct CGAffineTransform imageTransform; // @synthesize imageTransform=_imageTransform;
@property(nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;
@property(readonly, nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isTextBannerVisible) _Bool textBannerVisible; // @synthesize textBannerVisible=_isTextBannerVisible;
- (void).cxx_destruct;
- (void)animateCrossfadeToImage:(id)arg1;
- (void)layoutSubviewsOfContentView;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
- (void)_updateTitleSubtitleUILabelIfNeeded;
- (void)_invalidateTitleSubtitleUILabel;
- (void)_updateAnimatedImageViewIfNeeded;
- (void)_invalidateAnimatedImageView;
- (void)_updateLoopingVideoViewIfNeeded;
- (void)_invalidateLoopingVideoView;
- (void)_updateHighlight;
- (void)_updateRoundedCornersOverlayView;
- (void)_updateLayerCornerRadius;
- (void)_updatePhotoDecoration;
- (void)_updateBadgeView;
- (void)_invalidateBadgeView;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)_updateTextBannerView;
- (void)_updateSubviewOrdering;
- (void)_updateContentViewClipsToBounds;
- (void)_updateImageView;
- (void)_updateLivePhotoView;
- (void)_removeAvalancheStackViewIfNecessary;
- (void)_addAvalancheStackViewIfNecessary;
- (void)_removePhotoImageViewIfNecessary;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)_startPlaybackWhenLivePhotoAvailableWithStyle:(long long)arg1;
- (void)_updateLivePhotoViewPreparing;
- (void)_updateLivePhotoViewVisibility;
- (void)stopPlayback;
- (void)startPlaybackWithStyle:(long long)arg1;
- (void)setCornerRadius:(double)arg1 cornersToRound:(unsigned long long)arg2 useOverlay:(_Bool)arg3 overlayColor:(id)arg4;
- (void)setCornersToRound:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool providesVisualFeedbackOnPress;
@property(readonly, nonatomic) UIView *badgeContainerView;
@property(nonatomic, getter=isImageViewEdgeAntialiasingEnabled) _Bool imageViewEdgeAntialiasingEnabled;
- (void)updatePhotoImageWithoutReconfiguring:(id)arg1;
@property(readonly, nonatomic) struct CGRect imageContentFrame;
- (struct CGRect)imageContentFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)photoDecorationBorderViewFrameForImageContentFrame:(struct CGRect)arg1;
- (id)initWithContentView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

