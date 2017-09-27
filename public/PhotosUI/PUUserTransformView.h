//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class CADisplayLink, NSString, UIImage, UIScrollView;

@interface PUUserTransformView : UIView <UIScrollViewDelegate>
{
    struct {
        _Bool respondsToShouldReceiveTouchAtPoint;
        _Bool respondsToDidChangeIsUserInteracting;
    } _delegateFlags;
    _Bool _isUserInteracting;
    _Bool __updatingScrollView;
    _Bool __isUserPanning;
    _Bool __isUserDeceleratingPan;
    _Bool __isUserZooming;
    _Bool __isUserEndingZoom;
    _Bool __isUserPanningOrDecelerating;
    _Bool __isUserZoomingOrBouncing;
    _Bool __shouldTrackContentAnimation;
    _Bool __isContentAnimating;
    _Bool __isAnimatingZoomEnd;
    _Bool __isUpdatingState;
    _Bool __wasUserInteractingBeforeStateUpdate;
    _Bool __needsUpdateUserPanningOrDecelerating;
    _Bool __needsUpdateUserZoomingOrBouncing;
    _Bool __needsUpdateUserInteracting;
    _Bool __needsUpdateShouldTrackContentAnimation;
    _Bool __needsUpdateUserAffineTransform;
    _Bool __needsUpdateContentState;
    _Bool __needsUpdateAnimatingZoomEnd;
    _Bool __needsUpdateZoomAndScroll;
    _Bool __needsUpdateScrollView;
    id <PUUserTransformViewDelegate> _delegate;
    unsigned long long _enabledInteractions;
    UIScrollView *__scrollView;
    UIView *__scrollContentView;
    double __doubleTapZoomScale;
    double __contentZoomScale;
    long long __numberOfNestedStateChanges;
    CADisplayLink *__displayLink;
    double __desiredZoomScale;
    double __preferredMinimumZoomScale;
    double __preferredMaximumZoomScale;
    long long __numberOfNestedZoomAndScrollChanges;
    UIImage *_debugScrollViewContentImage;
    struct CGSize _contentPixelSize;
    struct CGSize _scrollPadding;
    struct CGPoint __contentCenter;
    struct CGRect _untransformedContentFrame;
    struct CGAffineTransform _userAffineTransform;
}

@property(retain, nonatomic) UIImage *debugScrollViewContentImage; // @synthesize debugScrollViewContentImage=_debugScrollViewContentImage;
@property(nonatomic, setter=_setNeedsUpdateScrollView:) _Bool _needsUpdateScrollView; // @synthesize _needsUpdateScrollView=__needsUpdateScrollView;
@property(nonatomic, setter=_setNeedsUpdateZoomAndScroll:) _Bool _needsUpdateZoomAndScroll; // @synthesize _needsUpdateZoomAndScroll=__needsUpdateZoomAndScroll;
@property(nonatomic, setter=_setNumberOfNestedZoomAndScrollChanges:) long long _numberOfNestedZoomAndScrollChanges; // @synthesize _numberOfNestedZoomAndScrollChanges=__numberOfNestedZoomAndScrollChanges;
@property(nonatomic, setter=_setPreferredMaximumZoomScale:) double _preferredMaximumZoomScale; // @synthesize _preferredMaximumZoomScale=__preferredMaximumZoomScale;
@property(nonatomic, setter=_setPreferredMinimumZoomScale:) double _preferredMinimumZoomScale; // @synthesize _preferredMinimumZoomScale=__preferredMinimumZoomScale;
@property(nonatomic, setter=_setDesiredZoomScale:) double _desiredZoomScale; // @synthesize _desiredZoomScale=__desiredZoomScale;
@property(retain, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property(nonatomic, setter=_setNeedsUpdateAnimatingZoomEnd:) _Bool _needsUpdateAnimatingZoomEnd; // @synthesize _needsUpdateAnimatingZoomEnd=__needsUpdateAnimatingZoomEnd;
@property(nonatomic, setter=_setNeedsUpdateContentState:) _Bool _needsUpdateContentState; // @synthesize _needsUpdateContentState=__needsUpdateContentState;
@property(nonatomic, setter=_setNeedsUpdateUserAffineTransform:) _Bool _needsUpdateUserAffineTransform; // @synthesize _needsUpdateUserAffineTransform=__needsUpdateUserAffineTransform;
@property(nonatomic, setter=_setNeedsUpdateShouldTrackContentAnimation:) _Bool _needsUpdateShouldTrackContentAnimation; // @synthesize _needsUpdateShouldTrackContentAnimation=__needsUpdateShouldTrackContentAnimation;
@property(nonatomic, setter=_setNeedsUpdateUserInteracting:) _Bool _needsUpdateUserInteracting; // @synthesize _needsUpdateUserInteracting=__needsUpdateUserInteracting;
@property(nonatomic, setter=_setNeedsUpdateUserZoomingOrBouncing:) _Bool _needsUpdateUserZoomingOrBouncing; // @synthesize _needsUpdateUserZoomingOrBouncing=__needsUpdateUserZoomingOrBouncing;
@property(nonatomic, setter=_setNeedsUpdateUserPanningOrDecelerating:) _Bool _needsUpdateUserPanningOrDecelerating; // @synthesize _needsUpdateUserPanningOrDecelerating=__needsUpdateUserPanningOrDecelerating;
@property(nonatomic, setter=_setWasUserInteractingBeforeStateUpdate:) _Bool _wasUserInteractingBeforeStateUpdate; // @synthesize _wasUserInteractingBeforeStateUpdate=__wasUserInteractingBeforeStateUpdate;
@property(nonatomic, setter=_setUpdatingState:) _Bool _isUpdatingState; // @synthesize _isUpdatingState=__isUpdatingState;
@property(nonatomic, setter=_setNumberOfNestedStateChanges:) long long _numberOfNestedStateChanges; // @synthesize _numberOfNestedStateChanges=__numberOfNestedStateChanges;
@property(nonatomic, setter=_setAnimatingZoomEnd:) _Bool _isAnimatingZoomEnd; // @synthesize _isAnimatingZoomEnd=__isAnimatingZoomEnd;
@property(nonatomic, setter=_setContentZoomScale:) double _contentZoomScale; // @synthesize _contentZoomScale=__contentZoomScale;
@property(nonatomic, setter=_setContentCenter:) struct CGPoint _contentCenter; // @synthesize _contentCenter=__contentCenter;
@property(nonatomic, setter=_setContentAnimating:) _Bool _isContentAnimating; // @synthesize _isContentAnimating=__isContentAnimating;
@property(nonatomic, setter=_setShouldTrackContentAnimation:) _Bool _shouldTrackContentAnimation; // @synthesize _shouldTrackContentAnimation=__shouldTrackContentAnimation;
@property(nonatomic, setter=_setUserZoomingOrBouncing:) _Bool _isUserZoomingOrBouncing; // @synthesize _isUserZoomingOrBouncing=__isUserZoomingOrBouncing;
@property(nonatomic, setter=_setUserPanningOrDecelerating:) _Bool _isUserPanningOrDecelerating; // @synthesize _isUserPanningOrDecelerating=__isUserPanningOrDecelerating;
@property(nonatomic, setter=_setUserEndingZoom:) _Bool _isUserEndingZoom; // @synthesize _isUserEndingZoom=__isUserEndingZoom;
@property(nonatomic, setter=_setUserZooming:) _Bool _isUserZooming; // @synthesize _isUserZooming=__isUserZooming;
@property(nonatomic, setter=_setUserDeceleratingPan:) _Bool _isUserDeceleratingPan; // @synthesize _isUserDeceleratingPan=__isUserDeceleratingPan;
@property(nonatomic, setter=_setUserPanning:) _Bool _isUserPanning; // @synthesize _isUserPanning=__isUserPanning;
@property(nonatomic, getter=_isUpdatingScrollView, setter=_setUpdatingScrollView:) _Bool _updatingScrollView; // @synthesize _updatingScrollView=__updatingScrollView;
@property(nonatomic, setter=_setDoubleTapZoomScale:) double _doubleTapZoomScale; // @synthesize _doubleTapZoomScale=__doubleTapZoomScale;
@property(readonly, nonatomic) UIView *_scrollContentView; // @synthesize _scrollContentView=__scrollContentView;
@property(readonly, nonatomic) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property(nonatomic, setter=_setUserInteracting:) _Bool isUserInteracting; // @synthesize isUserInteracting=_isUserInteracting;
@property(nonatomic) struct CGSize scrollPadding; // @synthesize scrollPadding=_scrollPadding;
@property(nonatomic) unsigned long long enabledInteractions; // @synthesize enabledInteractions=_enabledInteractions;
@property(nonatomic) struct CGAffineTransform userAffineTransform; // @synthesize userAffineTransform=_userAffineTransform;
@property(nonatomic) struct CGRect untransformedContentFrame; // @synthesize untransformedContentFrame=_untransformedContentFrame;
@property(nonatomic) struct CGSize contentPixelSize; // @synthesize contentPixelSize=_contentPixelSize;
@property(nonatomic) __weak id <PUUserTransformViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)_handleDisplayLink:(id)arg1;
- (void)_updateDisplayLink;
- (void)_updateScrollViewIfNeeded;
- (void)_invalidateScrollView;
- (struct CGPoint)_contentOffsetAdjustmentForContentInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_contentInsetsForContentScale:(double)arg1;
- (void)_updateZoomAndScrollIfNeeded;
- (void)_invalidateZoomAndScroll;
- (void)_assertInsideZoomAndScrollChangeBlock;
- (void)_setEnabledInteractions:(unsigned long long)arg1;
- (void)_performZoomAndScrollChanges:(CDUnknownBlockType)arg1;
- (void)_updateUserAffineTransformIfNeeded;
- (void)_invalidateUserAffineTransform;
- (void)_updateAnimatingZoomEndIfNeeded;
- (void)_invalidateAnimatingZoomEnd;
- (void)_updateContentStateIfNeeded;
- (void)_invalidateContentState;
- (void)_updateShouldTrackContentAnimationIfNeeded;
- (void)_invalidateShouldTrackContentAnimation;
- (void)_updateUserInteractingIfNeeded;
- (void)_invalidateUserInteracting;
- (void)_updateUserZoomingOrBouncingIfNeeded;
- (void)_invalidateUserZoomingOrBouncing;
- (void)_updateUserPanningOrDeceleratingIfNeeded;
- (void)_invalidateUserPanningOrDecelerating;
- (void)_setUserAffineTransform:(struct CGAffineTransform)arg1;
- (void)_setNeedsStateUpdate;
- (_Bool)_needsStateUpdate;
- (void)_updateStateIfNeeded;
- (void)_didChangeState;
- (void)_willChangeState;
- (void)_performStateChanges:(CDUnknownBlockType)arg1;
- (void)_assertInsideStateUpdate;
- (void)_assertInsideStateChangeBlock;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)handleDoubleTapWithLocationProvider:(id)arg1;
- (_Bool)contentContainsLocationFromProvider:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

