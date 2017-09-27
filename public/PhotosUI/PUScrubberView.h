//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PUBrowsingViewModelChangeObserver.h"
#import "PUPlaybackTimeIndicatorTileViewControllerDelegate.h"
#import "PUScrubberTilingLayoutDelegate.h"
#import "PUTilingViewScrollDelegate.h"
#import "PUTilingViewTileSource.h"
#import "PUTilingViewTileTransitionDelegate.h"
#import "PXVideoScrubberControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSIndexPath, NSMutableDictionary, NSString, PUBrowsingSession, PUScrubberTilingLayout, PUTilingView, PUTouchingGestureRecognizer, PXVideoScrubberController, UIScrollView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUScrubberView : UIView <PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, UIScrollViewDelegate, PUBrowsingViewModelChangeObserver, PUScrubberTilingLayoutDelegate, PXVideoScrubberControllerDelegate, PUPlaybackTimeIndicatorTileViewControllerDelegate, UIGestureRecognizerDelegate>
{
    NSString *_scrubbingIdentifier;
    NSString *_contentScrubbingIdentifier;
    NSString *_transitionLayoutIdentifier;
    _Bool _loupeEffectIsValid;
    _Bool _snapToExpandedIsValid;
    _Bool _scrubberLayoutIsValid;
    _Bool _scrubberLayoutNeedsTransition;
    PUTouchingGestureRecognizer *_touchingGestureRecognizer;
    NSMutableDictionary *_aspectRatioByIndexPath;
    struct {
        _Bool respondsToShouldIgnoreHitTestWithEvent;
    } _delegateFlags;
    _Bool _isForPreview;
    _Bool __isHandlingUserScroll;
    _Bool __isScrubbingAwayFromContentEdge;
    _Bool __scrollViewSettled;
    _Bool __useLoupe;
    _Bool __thinLoupe;
    _Bool __useSmoothingTransitionCoordinator;
    _Bool __snapToExpandedItem;
    _Bool __isHandlingScrollViewWillEndDragging;
    PUBrowsingSession *_browsingSession;
    long long _type;
    id <PUScrubberViewDelegate> _delegate;
    PUScrubberTilingLayout *__scrubberLayout;
    PUTilingView *__tilingView;
    UITapGestureRecognizer *__tapGestureRecognizer;
    PXVideoScrubberController *__videoScrubberController;
    long long __expandedItemType;
    NSIndexPath *__decelerationTargetIndexPath;
    double __decelerationDistance;
    long long __layoutTransitionsDisabledCount;
    double __scrubbingTransitionProgress;
    struct CGPoint __decelerationTargetOffset;
}

@property(nonatomic, setter=_setHandlingScrollViewWillEndDragging:) _Bool _isHandlingScrollViewWillEndDragging; // @synthesize _isHandlingScrollViewWillEndDragging=__isHandlingScrollViewWillEndDragging;
@property(nonatomic, setter=_setScrubbingTransitionProgress:) double _scrubbingTransitionProgress; // @synthesize _scrubbingTransitionProgress=__scrubbingTransitionProgress;
@property(nonatomic, setter=_setLayoutTransitionsDisabledCount:) long long _layoutTransitionsDisabledCount; // @synthesize _layoutTransitionsDisabledCount=__layoutTransitionsDisabledCount;
@property(nonatomic, setter=_setDecelerationDistance:) double _decelerationDistance; // @synthesize _decelerationDistance=__decelerationDistance;
@property(nonatomic, setter=_setDecelerationTargetOffset:) struct CGPoint _decelerationTargetOffset; // @synthesize _decelerationTargetOffset=__decelerationTargetOffset;
@property(retain, nonatomic, setter=_setDecelerationTargetIndexPath:) NSIndexPath *_decelerationTargetIndexPath; // @synthesize _decelerationTargetIndexPath=__decelerationTargetIndexPath;
@property(nonatomic, setter=_setSnapToExpandedItem:) _Bool _snapToExpandedItem; // @synthesize _snapToExpandedItem=__snapToExpandedItem;
@property(nonatomic, setter=_setUseSmoothingTransitionCoordinator:) _Bool _useSmoothingTransitionCoordinator; // @synthesize _useSmoothingTransitionCoordinator=__useSmoothingTransitionCoordinator;
@property(nonatomic, setter=_setThinLoupe:) _Bool _thinLoupe; // @synthesize _thinLoupe=__thinLoupe;
@property(nonatomic, setter=_setUseLoupe:) _Bool _useLoupe; // @synthesize _useLoupe=__useLoupe;
@property(nonatomic, setter=_setScrollViewSettled:) _Bool _scrollViewSettled; // @synthesize _scrollViewSettled=__scrollViewSettled;
@property(nonatomic, setter=_setScrubbingAwayFromContentEdge:) _Bool _isScrubbingAwayFromContentEdge; // @synthesize _isScrubbingAwayFromContentEdge=__isScrubbingAwayFromContentEdge;
@property(nonatomic, setter=_setIsHandlingUserScroll:) _Bool _isHandlingUserScroll; // @synthesize _isHandlingUserScroll=__isHandlingUserScroll;
@property(nonatomic, setter=_setExpandedItemType:) long long _expandedItemType; // @synthesize _expandedItemType=__expandedItemType;
@property(retain, nonatomic, setter=_setVideoScrubberController:) PXVideoScrubberController *_videoScrubberController; // @synthesize _videoScrubberController=__videoScrubberController;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(retain, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView; // @synthesize _tilingView=__tilingView;
@property(retain, nonatomic, setter=_setScrubberLayout:) PUScrubberTilingLayout *_scrubberLayout; // @synthesize _scrubberLayout=__scrubberLayout;
@property(nonatomic) _Bool isForPreview; // @synthesize isForPreview=_isForPreview;
@property(nonatomic) __weak id <PUScrubberViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)playbackTimeIndicatorTileViewControllerCanFlashIndicator:(id)arg1;
- (void)videoScrubberController:(id)arg1 desiredSeekTime:(CDStruct_1b6d18a9)arg2;
- (void)videoScrubberControllerDidUpdate:(id)arg1;
- (double)videoScrubberController:(id)arg1 lengthForDuration:(double)arg2;
- (void)_reenableLayoutTransitions;
- (void)_disableLayoutTransitionsForDuration:(double)arg1;
@property(readonly, nonatomic, getter=_areLayoutTransitionsDisabled) _Bool _layoutTransitionsDisabled;
- (void)_updateScrollPositionAnimated:(_Bool)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)handleTouchGesture:(id)arg1;
- (void)_endScrubbing;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGPoint)tilingView:(id)arg1 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint)arg2 withLayout:(id)arg3;
- (struct CGPoint)tilingView:(id)arg1 initialVisibleOriginWithLayout:(id)arg2;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(id)arg2;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (_Bool)layout:(id)arg1 shouldShowTimeIndicatorForExpandedItemAtIndexPath:(id)arg2;
- (float)layout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (double)_playheadProgressForIrisAssetReference:(id)arg1;
- (double)_expandedItemWidth;
- (void)_updateScrubbingAwayFromContentEdgeBeganDragging:(_Bool)arg1;
- (void)_updateScrubberLayoutIfNeeded;
- (void)_invalidateScrubberLayout;
- (void)_invalidateScrubberLayoutEnsureTransition;
- (id)_expandedAssetReference;
- (id)_currentAssetsDataSource;
@property(readonly, nonatomic) UIScrollView *scrollViewForPreviewing;
- (double)_lengthForDuration:(double)arg1;
- (void)_handleTapOnBrowsingIrisPlayer:(id)arg1;
- (void)_handleTapOnBrowsingVideoPlayer:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_handleUserScrollWillBegin:(_Bool)arg1;
- (_Bool)_allowExitFromContentScrubbing;
- (_Bool)_isDrivingPlayheadProgress;
- (_Bool)_isContentScrubbing;
- (_Bool)_isLibraryScrubbing;
- (id)_newScrubberLayout;
- (void)_updateTilingViewIfNeeded;
- (void)_updateSnapToExpandedItemIfNeeded;
- (void)_invalidateSnapToExpandedItem;
- (void)_updateLoupeEffectIfNeeded;
- (void)_invalidateLoupeEffect;
@property(readonly, nonatomic) double topOutset;
- (void)updateIfNeeded;
- (void)_setNeedsUpdate;
- (void)endPreviewing;
- (void)beginPreviewing;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

