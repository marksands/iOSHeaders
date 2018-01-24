//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TPBackgroundLayoutControllerDelegate.h"
#import "TPLayoutStateConsumer.h"
#import "TPLayoutStateProvider.h"
#import "TPPageLayoutInfoProvider.h"
#import "TSKChangeSourceObserver.h"
#import "TSWPLayoutOwner.h"

@class NSArray, NSMutableArray, NSString, TPDocumentRoot, TPFootnoteLayoutController, TPPageControllerCanvasDelegate, TPPageLayoutState, TPTextFlowLayoutController, TPTextWrapController, TSUMutablePointerSet, TSWPLayoutManager, TSWPLayoutMetricsCache, TSWPMutableDirtyRangeArray;

__attribute__((visibility("hidden")))
@interface TPPageController : NSObject <TPPageLayoutInfoProvider, TSKChangeSourceObserver, TSWPLayoutOwner, TPLayoutStateConsumer, TPLayoutStateProvider, TPBackgroundLayoutControllerDelegate>
{
    // Error parsing type: Ai, name: _isScrolling
    // Error parsing type: Ai, name: _isZooming
    _Bool _isObservingNotifications;
    multimap_41f9c887 _pageLayoutCache;
    TSWPMutableDirtyRangeArray *_dirtyRanges;
    TPPageControllerCanvasDelegate *_offscreenSearchDelegate;
    TPFootnoteLayoutController *_footnoteLayoutController;
    _Bool _checkedForBackUp;
    NSMutableArray *_pageGeneratorStack;
    unsigned long long _lastKnownPageCount;
    unsigned long long _completePageCount;
    _Bool _shouldUpdatePageCount;
    _Bool _bodyLayoutInvalidated;
    unsigned long long _didLayOutPageIndex;
    unsigned long long _currentPageBeingLaidOut;
    TSUMutablePointerSet *_layoutObservers;
    TSWPLayoutMetricsCache *_bodyLayoutMetricsCache;
    TPTextFlowLayoutController *_flowController;
    TPTextWrapController *_wrapController;
    _Bool _exportingFixedLayoutEPUB;
    double _horizontalGapBetweenPages;
    double _verticalGapBetweenPages;
    unsigned long long _pageHeightCount;
    TPPageLayoutState *_layoutState;
    NSMutableArray *_sectionHints;
    id <TPPageControllerDelegate> _delegate;
    TSWPLayoutManager *_bodyLayoutManager;
}

@property(readonly, nonatomic) TSWPLayoutManager *bodyLayoutManager; // @synthesize bodyLayoutManager=_bodyLayoutManager;
@property(readonly, nonatomic) __weak id <TPPageControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableArray *sectionHints; // @synthesize sectionHints=_sectionHints;
@property(readonly, nonatomic) TPPageLayoutState *layoutState; // @synthesize layoutState=_layoutState;
@property(readonly, nonatomic) unsigned long long pageCount; // @synthesize pageCount=_lastKnownPageCount;
@property(nonatomic, getter=isExportingFixedLayoutEPUB) _Bool exportingFixedLayoutEPUB; // @synthesize exportingFixedLayoutEPUB=_exportingFixedLayoutEPUB;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)p_layoutNextPageOnceWithOffscreenLayoutController;
- (void)backgroundLayoutDidEnd;
- (_Bool)performBackgroundLayout;
- (_Bool)backgroundLayoutWillBegin;
- (void)p_notifyObserversDidInvalidate;
- (void)p_notifyObserversDidLayoutWhileSyncing:(_Bool)arg1;
- (void)p_notifyObserversWillLayoutWhileSyncing:(_Bool)arg1;
- (unsigned long long)p_textPageIndexPrecedingPageIndex:(unsigned long long)arg1;
- (unsigned long long)p_lastValidTextPageIndex;
- (id)p_lastValidTextPageHint:(out unsigned long long *)arg1;
- (id)p_lastValidPageHint;
- (id)p_textPageHintFollowingPageIndexPath:(id)arg1;
- (id)p_textPageHintPrecedingPageIndexPath:(id)arg1;
- (id)p_pageHintPrecedingPageIndexPath:(id)arg1;
- (id)p_pageHintForPageIndexPath:(id)arg1;
- (id)p_sectionHintForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 allowAfterLayoutPoint:(_Bool)arg3;
- (id)p_pageHintForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 allowAfterLayoutPoint:(_Bool)arg3;
- (id)p_pageIndexPathForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 allowAfterLayoutPoint:(_Bool)arg3;
- (void)p_updatePageCount;
- (_Bool)p_didLayout;
- (void)p_advanceSectionIndex;
- (void)p_removeFinishedPageGenerators;
- (void)p_syncFromNextPageWithDirtyRanges:(id)arg1 pageTextRange:(const struct _NSRange *)arg2;
- (void)p_resetPageGenerators;
- (void)p_preparePageHintForNextPage;
- (void)p_prepareSectionHintForNextPage;
- (void)p_prepareLayoutStateForNextPage;
- (void)p_updateNonTextHintAtPageIndexPath:(id)arg1 pageLayout:(id)arg2;
- (void)p_updateTextHintAtPageIndexPath:(id)arg1 withTarget:(id)arg2;
- (void)p_removeDeletedFootnotesOnPageLayout:(id)arg1;
- (void)p_forceRestartLayoutAndResetMetricsCache:(_Bool)arg1;
- (void)p_layoutFootnotesIntoPageLayout:(id)arg1;
- (void)p_layoutTextIntoPageLayout:(id)arg1 outDidSync:(_Bool *)arg2;
- (void)p_layoutIntoPageLayout:(id)arg1 outDidSync:(_Bool *)arg2;
- (void)p_layoutNextPageForLayoutController:(id)arg1 dirtyRange:(id)arg2;
- (void)p_layoutThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2 clearOffscreenInfos:(_Bool)arg3;
- (void)p_checkForBackUp;
- (id)p_pageInfosForFlow:(id)arg1 withSelection:(id)arg2;
- (id)p_pageIndicesForFlow:(id)arg1 withSelection:(id)arg2 forceLayout:(_Bool)arg3;
- (id)p_pageInfosForBodySelection:(id)arg1;
- (void)p_processWidowsAndInflationForLayoutController:(id)arg1;
- (unsigned long long)p_pageIndexForFootnoteIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 searchAfterLayoutPoint:(_Bool)arg3;
- (unsigned long long)p_pageIndexForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 searchAfterLayoutPoint:(_Bool)arg3;
- (_Bool)p_couldBeFirstPageIndex:(unsigned long long)arg1 forPartitionedAttachmentCharIndex:(unsigned long long)arg2;
- (unsigned long long)p_pageIndexContainingIndex:(unsigned long long)arg1 ofType:(int)arg2;
- (struct _NSRange)p_footnoteLayoutRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 allowAfterLayoutPoint:(_Bool)arg3;
- (struct _NSRange)p_anchoredRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 allowAfterLayoutPoint:(_Bool)arg3;
- (struct _NSRange)p_bodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 allowAfterLayoutPoint:(_Bool)arg3;
- (unsigned long long)p_pageIndexForCharIndex:(unsigned long long)arg1 includeEmptyPages:(_Bool)arg2 caretAffinity:(int)arg3 forceLayout:(_Bool)arg4 searchAfterLayoutPoint:(_Bool)arg5;
- (id)p_pageInfoForPageAtIndex:(unsigned long long)arg1;
- (void)p_withPageLayoutAtIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 executeBlock:(CDUnknownBlockType)arg3;
- (id)p_cachedPageLayoutForPageIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2;
- (void)p_removePageLayoutFromCache:(id)arg1;
- (void)p_insertPageLayoutIntoCache:(id)arg1;
- (unsigned long long)p_layoutEndFootnoteIndex;
- (unsigned long long)p_layoutEndCharIndex;
- (_Bool)p_isBodyLayoutComplete;
- (_Bool)p_isLayoutComplete;
- (void)p_destroyBodyLayoutState;
- (void)p_invalidatePageIndex:(unsigned long long)arg1;
- (void)p_setNeedsLayoutOnPageIndex:(unsigned long long)arg1;
- (void)p_setNeedsLayoutFromSectionIndexToEnd:(unsigned long long)arg1;
- (void)p_hasBodyChanged:(id)arg1;
- (Class)p_pageInfoClass;
- (void)p_didScroll:(id)arg1;
- (void)p_willScroll:(id)arg1;
- (void)p_didZoom:(id)arg1;
- (void)p_willZoom:(id)arg1;
- (unsigned long long)p_firstPageColumn;
- (unsigned long long)p_backupPageIndexForCharIndex:(unsigned long long)arg1;
- (struct _NSRange)p_pageRangeAffectedByInfo:(id)arg1;
- (_Bool)p_pageIndexIsAlternativePageNotInDocument:(unsigned long long)arg1;
- (void)p_rebuildPageLayoutsContainingDrawableUUIDs:(id)arg1;
- (void)p_performWithCachedPageLayouts:(CDUnknownBlockType)arg1;
- (void)i_rebuildCachedLayoutChildrenFromStartPage:(unsigned long long)arg1 toEndPage:(unsigned long long)arg2 setNeedsLayout:(_Bool)arg3;
- (void)preprocessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)processHeaderFooterPropertyChanged;
@property(readonly, nonatomic) double verticalPageSeparation;
@property(readonly, nonatomic) double horizontalPageSeparation;
- (void)invalidateAllPageLayoutsSizeAndPosition;
- (struct CGSize)canvasSizeToFitAllPagesForPageViewState:(long long)arg1;
- (unsigned long long)pageHeightCountForPageViewState:(long long)arg1;
- (unsigned long long)calculatePageIndexFromCanvasPoint:(struct CGPoint)arg1;
- (unsigned long long)pageIndexFromCanvasPoint:(struct CGPoint)arg1;
- (struct CGRect)pageRectForPageIndex:(unsigned long long)arg1 allowAfterLayoutPoint:(_Bool)arg2;
- (struct CGPoint)pageOriginForPageIndex:(unsigned long long)arg1 allowAfterLayoutPoint:(_Bool)arg2;
- (id)sectionHintsForArchivedLayoutState:(id)arg1;
- (unsigned long long)bodyLengthForArchivedLayoutState:(id)arg1;
- (unsigned long long)lastPageCountForArchivedLayoutState:(id)arg1;
- (unsigned long long)documentPageIndexForArchivedLayoutState:(id)arg1;
- (unsigned long long)sectionPageIndexForArchivedLayoutState:(id)arg1;
- (unsigned long long)sectionIndexForArchivedLayoutState:(id)arg1;
- (_Bool)archivedLayoutState:(id)arg1 setSectionHints:(id)arg2;
- (_Bool)archivedLayoutState:(id)arg1 setBodyLength:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setLastPageCount:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setDocumentPageIndex:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setSectionPageIndex:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setSectionIndex:(unsigned long long)arg2;
- (id)metricsCacheForStorage:(id)arg1;
- (void)didLayoutChangingDirtyRanges;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (id)textWrapper;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (_Bool)caresAboutStorageChanges;
- (id)p_pageIndicesForInfo:(id)arg1 withSelectionPath:(id)arg2 pageInfos:(inout id)arg3;
- (id)pageInfosForInfo:(id)arg1 withSelectionPath:(id)arg2;
- (void)removeLayoutObserver:(id)arg1;
- (void)addLayoutObserver:(id)arg1;
- (_Bool)okToAnchorDrawables:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (_Bool)okToAnchorDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (_Bool)p_canAnchorDrawable:(id)arg1 toPageLayout:(id)arg2;
- (id)footnoteLayoutController;
@property(readonly, nonatomic) unsigned long long firstPageIndexNeedingLayout;
- (_Bool)isLayoutInProgress;
- (_Bool)isLayoutComplete;
- (_Bool)isLayoutCompleteThroughPageIndex:(unsigned long long)arg1;
- (_Bool)isLayoutCompleteForSelection:(id)arg1 inFlow:(id)arg2;
- (double)footerHeight;
- (double)headerHeight;
- (void)withPageLayoutAtIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 executeBlock:(CDUnknownBlockType)arg3;
- (void)withPageLayoutAtIndex:(unsigned long long)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (id)pageIndicesForPartitionableAttachmentAtBodyCharIndex:(unsigned long long)arg1 selectionPath:(id)arg2 forceLayout:(_Bool)arg3;
@property(readonly, nonatomic) NSArray *numberOfPagesInEachSection;
- (id)pageInfoForPageIndex:(unsigned long long)arg1;
- (_Bool)pageIndexIsFirstPageOfSection:(unsigned long long)arg1;
- (struct _NSRange)sectionPageRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2 outEndIsValid:(_Bool *)arg3;
- (unsigned long long)sectionPageIndexForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (struct _NSRange)sectionBodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (unsigned long long)sectionIndexForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (struct _NSRange)documentPageRangeOfSectionIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (unsigned long long)pageIndexForFootnoteIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (unsigned long long)pageIndexForAnchoredAttachment:(id)arg1 forceLayout:(_Bool)arg2;
- (unsigned long long)pageIndexForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (unsigned long long)pageIndexForCharIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (_Bool)pageAtIndexHasBody:(unsigned long long)arg1;
- (_Bool)pageEndsWithPaginatedAttachment:(unsigned long long)arg1;
- (_Bool)pageBeginsWithPaginatedAttachment:(unsigned long long)arg1;
- (struct _NSRange)footnoteLayoutRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (id)anchoredDrawablesOnPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (struct _NSRange)anchoredRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (struct _NSRange)bodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(_Bool)arg2;
- (struct _NSRange)validPageRangeForSelection:(id)arg1;
- (struct _NSRange)p_pageRangeForSelection:(id)arg1 includingEmptyPages:(_Bool)arg2 outEndIsValid:(_Bool *)arg3 forceLayout:(_Bool)arg4;
- (struct _NSRange)pageRangeForSelection:(id)arg1 includingEmptyPages:(_Bool)arg2 outEndIsValid:(_Bool *)arg3;
- (void)canvasDidValidateLayouts:(id)arg1;
- (void)layoutThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2;
- (void)layoutThroughPageIndex:(unsigned long long)arg1;
- (struct CGSize)pageSize;
@property(readonly, nonatomic) _Bool isPaginated;
- (void)accquireLockAndPerformAction:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)teardown;
@property(readonly, nonatomic) __weak TPDocumentRoot *documentRoot;
- (id)initWithDelegate:(id)arg1;
- (struct _NSRange)p_rangeOfContinuousSectionsAtPageIndex:(unsigned long long)arg1 startPage:(unsigned long long *)arg2;
- (id)p_pageMasterForPageIndex:(unsigned long long)arg1 inSection:(id)arg2 sectionHint:(id)arg3;
- (id)p_sectionAtSectionIndex:(unsigned long long)arg1;
- (_Bool)isSectionInfo:(id)arg1 onPage:(unsigned long long)arg2;
- (unsigned long long)contentFlagsForPageIndex:(unsigned long long)arg1;
- (id)displayPageNumberForPageIndex:(unsigned long long)arg1;
- (id)displayPageNumberForCharIndex:(unsigned long long)arg1;
- (id)pageNumberFormatForSectionOnPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageCountForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1;
- (id)masterDrawableProviderForPageIndex:(unsigned long long)arg1;
- (_Bool)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
- (id)headerFooterProviderForPageIndex:(unsigned long long)arg1;
- (_Bool)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1;
- (_Bool)canProvideInfoForPageIndex:(unsigned long long)arg1;
- (id)i_flowLayoutController;
- (multimap_41f9c887 *)i_pageCache;
- (void)i_setNeedsDynamicLayoutForLayoutController:(id)arg1 onPageIndex:(unsigned long long)arg2;
- (_Bool)i_shouldLayoutBodyVertically;
- (void)i_unregisterPageLayout:(id)arg1;
- (void)i_registerPageLayout:(id)arg1;
- (void)i_invalidateFlows:(id)arg1 startingPage:(id)arg2;
- (void)i_invalidatePageIndex:(unsigned long long)arg1;
- (id)i_textPageHintPrecedingPageIndex:(inout unsigned long long *)arg1;
- (void)i_inflateTextFlowsOnPage:(id)arg1;
- (void)i_inflateFootnotesInFootnoteContainer:(id)arg1;
- (void)i_inflateColumnsInBodyLayout:(id)arg1;
- (id)i_firstChildHintAfterPageIndex:(unsigned long long)arg1;
- (id)i_columnAfterPageIndex:(unsigned long long)arg1;
- (id)i_topicHintsAfterPageIndex:(unsigned long long)arg1;
- (id)i_topicHintsPriorToPageIndex:(unsigned long long)arg1;
- (id)i_columnPriorToPageIndex:(unsigned long long)arg1;
- (void)i_trimPageAtIndex:(unsigned long long)arg1 toCharIndex:(unsigned long long)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
- (id)i_pageHintForPageIndex:(unsigned long long)arg1;
- (void)d_toggleWrapAnimation;
- (void)d_timeLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

