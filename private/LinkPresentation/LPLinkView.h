//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <LinkPresentation/CAAnimationDelegate-Protocol.h>
#import <LinkPresentation/LPTapToLoadViewDelegate-Protocol.h>
#import <LinkPresentation/LPThemeClient-Protocol.h>
#import <LinkPresentation/UIGestureRecognizerDelegate-Protocol.h>

@class LPAnimationMaskView, LPCaptionBarPresentationProperties, LPImage, LPLinkMetadata, LPLinkViewComponents, LPMetadataProvider, LPTheme, LPVideo, LPiTunesPlaybackInformation, NSMutableArray, NSString, NSURL, UIColor;
@protocol LPLinkViewDelegate;

@interface LPLinkView : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate, LPTapToLoadViewDelegate, LPThemeClient>
{
    unsigned int _loggingID;
    LPMetadataProvider *_pendingMetadataProvider;
    _Bool _mayReceiveAdditionalMetadata;
    _Bool _usesComputedPresentationProperties;
    LPTheme *_theme;
    NSMutableArray *_tapGestureRecognizers;
    NSMutableArray *_highlightGestureRecognizers;
    UIView *_highlightView;
    _Bool _isPreliminary;
    long long _style;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPVideo *_video;
    UIColor *_backgroundColor;
    UIColor *_overrideBackgroundColor;
    LPiTunesPlaybackInformation *_iTunesPlaybackInformation;
    LPLinkViewComponents *_components;
    LPLinkViewComponents *_componentsForSizing;
    UIView *_contentView;
    UIView *_animationView;
    UIView *_mediaViewBackground;
    LPAnimationMaskView *_animationMaskView;
    _Bool _hasEverBuilt;
    _Bool _needsRebuild;
    _Bool _usesDeferredLayout;
    _Bool _shouldAnimateDuringNextBuild;
    _Bool _hasValidPresentationProperties;
    _Bool _hasSetDisableHighlightGesture;
    _Bool _disableAnimations;
    _Bool _disableTapGesture;
    _Bool _disableHighlightGesture;
    _Bool _disableAutoPlay;
    _Bool _disablePlayback;
    _Bool _disablePlaybackControls;
    _Bool _allowsTapToLoad;
    _Bool _forceFlexibleWidth;
    _Bool _applyCornerRadius;
    long long _animationOrigin;
    id <LPLinkViewDelegate> _delegate;
    LPLinkMetadata *_metadata;
    NSURL *_URL;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) __weak id <LPLinkViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setApplyCornerRadius:) _Bool _applyCornerRadius; // @synthesize _applyCornerRadius;
@property(nonatomic, setter=_setForceFlexibleWidth:) _Bool _forceFlexibleWidth; // @synthesize _forceFlexibleWidth;
@property(nonatomic, setter=_setUsesDeferredLayout:) _Bool _usesDeferredLayout; // @synthesize _usesDeferredLayout;
@property(nonatomic, setter=_setAllowsTapToLoad:) _Bool _allowsTapToLoad; // @synthesize _allowsTapToLoad;
@property(nonatomic, setter=_setAnimationOrigin:) long long _animationOrigin; // @synthesize _animationOrigin;
@property(nonatomic, setter=_setDisablePlaybackControls:) _Bool _disablePlaybackControls; // @synthesize _disablePlaybackControls;
@property(nonatomic, setter=_setDisablePlayback:) _Bool _disablePlayback; // @synthesize _disablePlayback;
@property(nonatomic, setter=_setDisableAutoPlay:) _Bool _disableAutoPlay; // @synthesize _disableAutoPlay;
@property(nonatomic, setter=_setDisableTapGesture:) _Bool _disableTapGesture; // @synthesize _disableTapGesture;
@property(nonatomic, setter=_setDisableAnimations:) _Bool _disableAnimations; // @synthesize _disableAnimations;
- (void).cxx_destruct;
- (void)_setupInteraction;
- (void)tapToLoadViewWasTapped:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_didScroll;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_addHighlightRecognizerToView:(id)arg1;
- (void)_addTapRecognizerToView:(id)arg1;
@property(nonatomic, setter=_setDisableHighlightGesture:) _Bool _disableHighlightGesture; // @synthesize _disableHighlightGesture;
- (void)_rebuildGestureRecognizersIfNeeded;
- (void)_uninstallTapGestureRecognizers;
- (void)_uninstallHighlightGestureRecognizers;
- (void)_installTapGestureRecognizers;
- (void)_installHighlightGestureRecognizers;
- (struct CGSize)_layoutLinkViewForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;
- (id)_createQuotedTextView;
- (id)_createMediaView;
- (id)_videoViewConfiguration;
- (id)_createTapToLoadView;
- (id)_createMediaBottomCaptionBarView;
- (id)_createMediaTopCaptionBarView;
- (id)_createCaptionBar;
- (void)_performDeferredLayout;
- (void)_invalidateLayout;
- (void)_layoutLinkView;
- (void)_rebuildSubviewsWithAnimation:(_Bool)arg1;
- (id)_createComponents;
- (void)animateBackgroundColor;
- (void)setSuppressMask:(_Bool)arg1;
- (void)animateFromOldFrame:(struct CGRect)arg1 oldMediaBackgroundFrame:(struct CGRect)arg2 oldCaptionBarView:(id)arg3;
- (void)_setMaskImage:(id)arg1;
- (void)animateInViews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateOutAndRemoveViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(readonly, nonatomic) long long _style;
- (void)_setPresentationProperties:(id)arg1;
- (void)_computePresentationPropertiesFromMetadataIfNeeded;
- (void)_invalidatePresentationProperties;
- (void)_setMetadata:(id)arg1 isFinal:(_Bool)arg2;
- (void)themeParametersDidChange;
- (void)_setupView;
- (void)_fetchMetadata;
- (void)_commonInitWithURL:(id)arg1;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2;
- (id)initWithPresentationProperties:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithMetadataLoadedFromURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

