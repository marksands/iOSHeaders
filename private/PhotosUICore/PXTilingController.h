//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXTilingLayoutObserver.h"

@class NSArray, NSMutableArray, NSMutableIndexSet, NSString, PXTileStatePool, PXTilingChange, PXTilingControllerDebugInfo, PXTilingCoordinateSpace, PXTilingCoordinateSpaceConverter, PXTilingLayout, PXTilingScrollInfo;

@interface PXTilingController : NSObject <PXTilingLayoutObserver>
{
    _Bool _isPerformingUpdates;
    _Bool _hasScheduledUpdate;
    struct {
        _Bool scrollControllerMetrics;
        _Bool pagedRect;
        _Bool layoutMetrics;
        _Bool layoutPreferredVisibleOrigin;
        _Bool layoutPosition;
        _Bool layoutVisibleRect;
        _Bool layoutPreparation;
        _Bool tiles;
        _Bool preheating;
        _Bool maxPreheatPadding;
        _Bool scrollInfo;
    } _needsUpdateFlags;
    struct {
        _Bool respondsToInitialVisibleOriginForLayout;
        _Bool respondsToTargetVisibleOriginForLayoutProposedVisibleOrigin;
        _Bool respondsToScrollInfoForLayout;
    } _scrollDelegateFlags;
    struct {
        _Bool respondsToPrepareForChange;
        _Bool respondsToTileIdentifierConverterForChange;
        _Bool respondsToTransitionAnimationCoordinatorForChange;
    } _transitionDelegateFlags;
    _Bool _hasInitializedLayout;
    struct PXTileIdentifier *_identifierBuffer;
    struct PXTileGeometry *_geometryBuffer;
    unsigned long long _bufferCount;
    _Bool _shouldAggressivelyEvictTileCaches;
    PXTilingChange *__currentChange;
    PXTilingLayout *_targetLayout;
    PXTilingLayout *_currentLayout;
    id <PXTilingScrollController> _scrollController;
    id <PXTileSource> _tileSource;
    id <PXTileAnimator> _tileAnimator;
    id <PXTilingControllerScrollDelegate> _scrollDelegate;
    id <PXTilingControllerTransitionDelegate> _transitionDelegate;
    PXTilingCoordinateSpace *__coordinateSpace;
    void *__coordinateSpaceIdentifier;
    PXTilingCoordinateSpaceConverter *__coordinateSpaceConverter;
    PXTilingLayout *__layoutWithInitializedVisibleOrigin;
    PXTilingScrollInfo *__scrollInfo;
    PXTileStatePool *__tileStates;
    NSMutableIndexSet *__dirtyTileIndexes;
    NSMutableArray *__preheatRecords;
    id <PXTilingControllerObserver> _observer;
    NSArray *_compositionInvalidationContexts;
    id <PXTilingDebugDelegate> _debugDelegate;
    struct CGSize __referenceSize;
    struct CGPoint __updatedPreferredVisibleOrigin;
    struct CGPoint __layoutDesiredOrigin;
    struct UIEdgeInsets __contentInset;
    struct CGRect __activeRect;
    struct CGRect __visibleRect;
    struct CGRect __pagedRect;
    struct CGRect __cachedRect;
    struct CGRect __dirtyRect;
    struct UIEdgeInsets __maxPreheatPadding;
}

@property(nonatomic) __weak id <PXTilingDebugDelegate> debugDelegate; // @synthesize debugDelegate=_debugDelegate;
@property(copy, nonatomic) NSArray *compositionInvalidationContexts; // @synthesize compositionInvalidationContexts=_compositionInvalidationContexts;
@property(nonatomic) __weak id <PXTilingControllerObserver> observer; // @synthesize observer=_observer;
@property(nonatomic, setter=_setMaxPreheatPadding:) struct UIEdgeInsets _maxPreheatPadding; // @synthesize _maxPreheatPadding=__maxPreheatPadding;
@property(readonly, nonatomic) NSMutableArray *_preheatRecords; // @synthesize _preheatRecords=__preheatRecords;
@property(readonly, nonatomic) NSMutableIndexSet *_dirtyTileIndexes; // @synthesize _dirtyTileIndexes=__dirtyTileIndexes;
@property(nonatomic, setter=_setDirtyRect:) struct CGRect _dirtyRect; // @synthesize _dirtyRect=__dirtyRect;
@property(readonly, nonatomic) PXTileStatePool *_tileStates; // @synthesize _tileStates=__tileStates;
@property(nonatomic, setter=_setCachedRect:) struct CGRect _cachedRect; // @synthesize _cachedRect=__cachedRect;
@property(nonatomic, setter=_setPagedRect:) struct CGRect _pagedRect; // @synthesize _pagedRect=__pagedRect;
@property(copy, nonatomic, setter=_setScrollInfo:) PXTilingScrollInfo *_scrollInfo; // @synthesize _scrollInfo=__scrollInfo;
@property(nonatomic, setter=_setLayoutDesiredOrigin:) struct CGPoint _layoutDesiredOrigin; // @synthesize _layoutDesiredOrigin=__layoutDesiredOrigin;
@property(nonatomic, setter=_setUpdatedPreferredVisibleOrigin:) struct CGPoint _updatedPreferredVisibleOrigin; // @synthesize _updatedPreferredVisibleOrigin=__updatedPreferredVisibleOrigin;
@property(nonatomic, setter=_setVisibleRect:) struct CGRect _visibleRect; // @synthesize _visibleRect=__visibleRect;
@property(nonatomic, setter=_setActiveRect:) struct CGRect _activeRect; // @synthesize _activeRect=__activeRect;
@property(nonatomic, setter=_setContentInset:) struct UIEdgeInsets _contentInset; // @synthesize _contentInset=__contentInset;
@property(nonatomic, setter=_setReferenceSize:) struct CGSize _referenceSize; // @synthesize _referenceSize=__referenceSize;
@property(nonatomic, setter=_setLayoutWithInitializedVisibleOrigin:) __weak PXTilingLayout *_layoutWithInitializedVisibleOrigin; // @synthesize _layoutWithInitializedVisibleOrigin=__layoutWithInitializedVisibleOrigin;
@property(readonly, nonatomic) PXTilingCoordinateSpaceConverter *_coordinateSpaceConverter; // @synthesize _coordinateSpaceConverter=__coordinateSpaceConverter;
@property(readonly, nonatomic) void *_coordinateSpaceIdentifier; // @synthesize _coordinateSpaceIdentifier=__coordinateSpaceIdentifier;
@property(readonly, nonatomic) PXTilingCoordinateSpace *_coordinateSpace; // @synthesize _coordinateSpace=__coordinateSpace;
@property(nonatomic) _Bool shouldAggressivelyEvictTileCaches; // @synthesize shouldAggressivelyEvictTileCaches=_shouldAggressivelyEvictTileCaches;
@property(nonatomic) __weak id <PXTilingControllerTransitionDelegate> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(nonatomic) __weak id <PXTilingControllerScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <PXTileAnimator> tileAnimator; // @synthesize tileAnimator=_tileAnimator;
@property(nonatomic) __weak id <PXTileSource> tileSource; // @synthesize tileSource=_tileSource;
@property(nonatomic) __weak id <PXTilingScrollController> scrollController; // @synthesize scrollController=_scrollController;
@property(retain, nonatomic, setter=_setCurrentLayout:) PXTilingLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(retain, nonatomic, setter=_setTargetLayout:) PXTilingLayout *targetLayout; // @synthesize targetLayout=_targetLayout;
- (void).cxx_destruct;
- (void)tilingLayout:(id)arg1 invalidatedWithContext:(id)arg2;
- (void)_updateDebugDelegateIfNeeded;
- (void)_updateScrollInfoIfNeeded;
- (void)_invalidateScrollInfo;
- (void)_updateMaxPreheatPaddingIfNeeded;
- (void)_invalidateMaxPreheatPadding;
- (void)_updatePreheatingIfNeeded;
- (void)_invalidatePreheating;
- (void)_updateTilesIfNeeded;
- (void)_invalidateTiles;
- (void)_invalidateCachesOutsideRect:(struct CGRect)arg1;
- (void)_invalidateAllCachedRects;
- (void)_invalidateRect:(struct CGRect)arg1;
- (void)_updatePagedRectIfNeeded;
- (void)_invalidatePagedRect;
- (void)_updateLayoutPreparationIfNeeded;
- (void)_invalidateLayoutPreparation;
- (void)_updateLayoutVisibleRectIfNeeded;
- (void)_invalidateLayoutVisibleRect;
- (void)_updateLayoutPositionIfNeeded;
- (void)_invalidateLayoutPosition;
- (void)_updateLayoutPreferredVisibleOriginIfNeeded;
- (void)_invalidateLayoutPreferredVisibleOrigin;
- (void)_updateLayoutMetricsIfNeeded;
- (void)_invalidateLayoutMetrics;
- (void)_updateScrollControllerMetricsIfNeeded;
- (void)_invalidateScrollControllerMetrics;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)endUpdate;
- (void)updateLayout;
- (void)updateMetrics;
- (void)beginUpdate;
- (void)_discardCurrentChange;
- (id)_currentChangeIfExists;
@property(readonly, nonatomic) PXTilingChange *_currentChange; // @synthesize _currentChange=__currentChange;
- (void)_ensureCurrentChange;
- (id)convertScrollInfoFromLayout:(id)arg1;
- (struct CGRect)convertRectFromLayout:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromLayout:(struct CGPoint)arg1;
- (void)setLayoutOrigin:(struct CGPoint)arg1;
@property(readonly, nonatomic) PXTilingScrollInfo *scrollInfo;
@property(readonly, nonatomic) struct CGPoint layoutOrigin;
@property(readonly, nonatomic) struct CGPoint layoutPreferredOrigin;
@property(readonly, nonatomic) struct CGRect layoutScrollBounds;
@property(readonly, nonatomic) struct CGRect layoutContentBounds;
- (void)setReferenceSize:(struct CGSize)arg1 contentInset:(struct UIEdgeInsets)arg2;
- (void)invalidateLayoutPreferredVisibleOrigin;
- (void)invalidateScrollControllerMetrics;
- (void)_markRectAsCached:(struct CGRect)arg1;
- (void)_fillBuffersWithTileStatesAtIndexes:(id)arg1;
- (void)_prepareBufferForCount:(unsigned long long)arg1;
- (id)_preheatRecordForPreheatHandler:(id)arg1 context:(void *)arg2 createIfNeeded:(_Bool)arg3;
- (void)_handleTileAnimationCompletionWithIndex:(unsigned long long)arg1;
- (id)_indexesOfVisibleTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2;
- (id)debugQuickLookObject;
@property(readonly, nonatomic) PXTilingControllerDebugInfo *debugInfo;
- (void)unregisterPreheatHandler:(id)arg1 context:(void *)arg2;
- (void)registerPreheatHandler:(id)arg1 withPadding:(struct UIEdgeInsets)arg2 tileGroup:(unsigned long long)arg3 context:(void *)arg4;
- (struct PXTileIdentifier)hitTestTileAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getTile:(out void **)arg1 geometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forTileWithIdentifier:(struct PXTileIdentifier)arg5;
- (struct PXTileIdentifier)tileIdentifierForTile:(void *)arg1;
@property(readonly, nonatomic) void *contentCoordinateSpaceIdentifier;
- (void)transitionToLayout:(id)arg1;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;
- (id)init;
- (void)requestFocus;
- (id)imageTileWithIdentifier:(struct PXTileIdentifier)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

