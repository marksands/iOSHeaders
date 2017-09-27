//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, PDFDestination, PDFDocument, PDFPage, PDFSelection, PDFViewPrivate, UIColor;

@interface PDFView : UIView <UIGestureRecognizerDelegate>
{
    PDFViewPrivate *_private;
}

+ (void)EnableAnnotationKit;
- (void).cxx_destruct;
- (struct CGRect)extendedRootViewBounds;
- (_Bool)flipsTileContents;
- (struct CGRect)convertRootViewRect:(struct CGRect)arg1 toPageLayer:(id)arg2;
- (struct CGRect)convertRectToRootView:(struct CGRect)arg1 fromPageLayer:(id)arg2;
- (struct CGRect)rootViewBounds;
- (void)setShowsScrollIndicators:(_Bool)arg1;
- (_Bool)showsScrollIndicators;
- (void)setEnableSelectionDrawing:(_Bool)arg1;
- (_Bool)enableSelectionDrawing;
- (void)callPageVisibilityDelegateMethodForOverlayAdaptorOnly:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;
- (void)performOverlayAdaptorPageVisibilityTrueUpAfterSettingDocument;
- (void)callPageVisibilityDelegateMethod:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;
- (void)setNewPageVisibilityDelegate:(id)arg1 withOldDelegate:(id)arg2;
- (void)setAkAnnotationEditingEnabled:(_Bool)arg1;
- (_Bool)akAnnotationEditingEnabled;
- (id)akRedoToolbarItem;
- (id)akUndoToolbarItem;
- (id)akToolbarViewItemTintColor;
- (void)setAkToolbarViewItemTintColor:(id)arg1;
- (id)akToolbarViewTintColor;
- (void)setAkToolbarViewTintColor:(id)arg1;
- (id)akToolbarView;
- (id)_getDocumentAKController;
- (void)startEditingTextWidgetAnnotation:(id)arg1;
- (_Bool)isForcingWebKitMainThread;
- (void)forceWebKitMainThread:(_Bool)arg1;
- (void)setForcesTopAlignment:(_Bool)arg1;
- (void)setEnablePageShadows:(_Bool)arg1;
- (_Bool)automaticallyHandleGutter;
- (double)defaultGutterWidth;
- (double)gutterWidth;
- (void)setGutterWidth:(double)arg1;
- (_Bool)isOverWidgetAnnotation:(struct CGPoint)arg1;
- (_Bool)isOverLinkAnnotation:(struct CGPoint)arg1;
- (_Bool)PDFKitHandleBackTabInTextWidget:(id)arg1;
- (_Bool)PDFKitHandleTabInTextWidget:(id)arg1;
- (_Bool)handleBackTabInTextWidget:(id)arg1;
- (_Bool)handleTabInTextWidget:(id)arg1;
- (void)interactWithAnnotation:(id)arg1;
- (void)endEditingAnnotation;
- (id)popupManager;
- (void)setPopupManager:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)_forceTileRefresh;
- (void)setEnableTileUpdates:(_Bool)arg1;
- (void)enableTextSelectionHandles;
- (void)clearTextSelectionHandles;
- (void)setLollipopMagnifierPage:(id)arg1 forPagePoint:(struct CGPoint)arg2;
- (void)clearLollipopMagnifier;
- (void)setTextSelectionMagnifierPage:(id)arg1 forPagePoint:(struct CGPoint)arg2;
- (void)clearTextSelectionMagnifier;
- (id)swipeGestureRecognizer;
- (id)tapGestureRecognizer;
- (id)panGestureRecognizer;
- (id)longPressGestureRecognizer;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (id)documentScrollView;
- (_Bool)displaysMarkupAnnotations;
- (void)_updateBookmarksForPages;
- (void)setDisplaysBookmarksForPages:(_Bool)arg1;
- (_Bool)displaysBookmarksForPages;
- (id)pageColor;
- (void)setPageColor:(id)arg1;
- (double)lineWidthThreshold;
- (void)setLineWidthThreshold:(double)arg1;
- (void)setScrollingChangesPages:(_Bool)arg1;
- (_Bool)scrollingChangesPages;
@property(nonatomic) _Bool displaysRTL;
- (_Bool)usesPageLabels;
- (void)setUsesPageLabels:(_Bool)arg1;
- (long long)currentHistoryIndex;
- (id)history;
- (void)setScaleFactor:(double)arg1 anchorPoint:(struct CGPoint)arg2;
- (double)autoScaleFactor;
- (_Bool)isRectVisible:(struct CGRect)arg1 onPage:(id)arg2;
- (void)goToPageNoPush:(id)arg1 animated:(_Bool)arg2;
- (void)goToPageNoPush:(id)arg1;
- (void)goToDestinationNoPush:(id)arg1;
- (void)pushDestination:(id)arg1;
- (id)previousPage;
- (id)nextPage;
- (id)akOverlayAdaptor;
- (id)renderingProperties;
- (void)_updateAnnotations;
- (void)hintScrollDirectionHorizontal:(unsigned long long)arg1 andVertical:(unsigned long long)arg2;
- (void)documentWasUnlocked;
- (void)animateTransitionFromPage:(id)arg1 toPage:(id)arg2;
- (void)findVisiblePages;
- (struct CGPoint)scrollOriginForPageTopLeft:(id)arg1;
- (void)scrollByPage:(_Bool)arg1;
- (void)scrollHorizontalBy:(double)arg1;
- (void)scrollVerticalBy:(double)arg1;
- (void)constrainedScrollToPoint:(struct CGPoint)arg1;
- (void)positionInternalViews:(id)arg1;
- (void)resizeDisplayView:(id)arg1;
- (struct CGSize)pageViewSizeForPage:(id)arg1;
- (void)updateCurrentPageUsingViewCenter;
- (void)pdfViewDidChangePage:(id)arg1;
- (void)pdfViewDidChangeScale:(id)arg1;
- (void)documentDidEndWrite:(id)arg1;
- (void)documentDidBeginWrite:(id)arg1;
- (void)scrollViewSaysPageMayHaveChanged:(id)arg1;
- (id)determineCurrentPage;
- (void)_syncPageIndexToScrollView;
- (void)syncPageIndexToScrollView;
- (void)reflectNewPageOn;
- (void)selfDidResize:(id)arg1;
@property(nonatomic) double minScaleFactor;
@property(nonatomic) double maxScaleFactor;
- (void)internalSetScaleFactor:(double)arg1;
- (unsigned long long)lastPageIndex;
- (_Bool)doPeriodicFlush;
- (void)setDoPeriodicFlush:(_Bool)arg1;
- (double)_unboundAutoScaleFactorForPageWithSize:(struct CGSize)arg1;
- (double)_unboundAutoScaleFactorForPage:(id)arg1;
- (double)autoScaleFactorForPageWithSize:(struct CGSize)arg1;
- (double)autoScaleFactorForPage:(id)arg1;
- (double)pageViewHeight:(id)arg1;
- (struct CGRect)normalizedPageBounds:(id)arg1;
- (id)PDFLayout;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (void)showTextSelectionMenuIfPossible;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)_dragItemsAtLocationInView:(struct CGPoint)arg1;
- (_Bool)_hasDraggableSelectionAtLocation:(struct CGPoint)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)gestureInit;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)removePasswordUI;
- (void)appendPasswordUI;
- (struct CGAffineTransform)_transformFromPageViewToPage:(id)arg1;
- (struct CGAffineTransform)_transformFromPageToPageView:(id)arg1;
- (void)dealloc;
- (void)_commonInit;
- (void)removeFromSuperview;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)drawAccessibilityNodeType:(int)arg1 enableDrawing:(_Bool)arg2;
- (_Bool)isDrawingAccessibilityNodeType:(int)arg1;
- (void)colorWidgetBackgrounds:(_Bool)arg1;
- (id)viewForPage:(id)arg1;
- (void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2;
- (double)PDFViewWillChangeScaleFactor:(id)arg1 toScale:(double)arg2;
@property(nonatomic) _Bool enableDataDetectors;
- (id)visiblePageViews;
@property(readonly, nonatomic) NSArray *visiblePages;
- (struct CGSize)rowSizeForPage:(id)arg1;
- (void)annotationsChangedOnPage:(id)arg1;
- (void)layoutDocumentView;
@property(readonly, nonatomic) UIView *documentView;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromPage:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromPage:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toPage:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toPage:(id)arg2;
- (id)pageForPoint:(struct CGPoint)arg1 nearest:(_Bool)arg2;
- (void)copy:(id)arg1;
- (void)drawPagePost:(id)arg1 toContext:(struct CGContext *)arg2;
- (void)drawPage:(id)arg1 toContext:(struct CGContext *)arg2;
- (void)takePasswordFrom:(id)arg1;
@property(copy, nonatomic) NSArray *highlightedSelections;
- (void)scrollSelectionToVisible:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)clearSelection;
- (void)setCurrentSelection:(id)arg1 animate:(_Bool)arg2;
- (void)setCurrentSelectionNoClear:(id)arg1;
@property(retain, nonatomic) PDFSelection *currentSelection;
- (void)performAction:(id)arg1;
- (void)performBeep;
- (long long)areaOfInterestForPoint:(struct CGPoint)arg1;
- (long long)areaOfInterestForMouse:(id)arg1;
@property(readonly, nonatomic) double scaleFactorForSizeToFit;
@property(nonatomic) _Bool autoScales;
@property(readonly, nonatomic) _Bool canZoomOut;
- (void)zoomOut:(id)arg1;
@property(readonly, nonatomic) _Bool canZoomIn;
- (void)zoomIn:(id)arg1;
- (void)_doNotQueryScaleFactor;
@property(nonatomic) double scaleFactor;
@property(nonatomic) __weak id <PDFViewDelegate> delegate;
- (void)_setupPageViewController;
- (void)usePageViewController:(_Bool)arg1 withViewOptions:(id)arg2;
- (id)documentViewController;
@property(readonly, nonatomic) _Bool isUsingPageViewController;
@property(nonatomic) long long interpolationQuality;
@property(retain, nonatomic) UIColor *backgroundColor;
- (void)takeBackgroundColorFrom:(id)arg1;
- (double)greekingThreshold;
- (void)setGreekingThreshold:(double)arg1;
- (_Bool)shouldAntiAlias;
- (void)setShouldAntiAlias:(_Bool)arg1;
@property(nonatomic) _Bool displaysAsBook;
@property(nonatomic) long long displayBox;
@property(nonatomic) struct UIEdgeInsets pageBreakMargins;
@property(nonatomic) _Bool displaysPageBreaks;
@property(nonatomic) long long displayDirection;
@property(nonatomic) long long displayMode;
- (void)goToRect:(struct CGRect)arg1 onPage:(id)arg2;
- (void)goToSelection:(id)arg1;
- (void)goToDestination:(id)arg1;
@property(readonly, nonatomic) PDFDestination *currentDestination;
- (void)_goToPage:(id)arg1 animated:(_Bool)arg2 withBackgroundUpdate:(_Bool)arg3;
- (void)goToPageWithoutBackgroundUpdate:(id)arg1;
- (void)goToPage:(id)arg1 animated:(_Bool)arg2;
- (void)goToPage:(id)arg1;
@property(readonly, nonatomic) PDFPage *currentPage;
- (void)goForward:(id)arg1;
@property(readonly, nonatomic) _Bool canGoForward;
- (void)goBack:(id)arg1;
@property(readonly, nonatomic) _Bool canGoBack;
- (void)goToPreviousPage:(id)arg1;
@property(readonly, nonatomic) _Bool canGoToPreviousPage;
- (void)goToNextPage:(id)arg1;
@property(readonly, nonatomic) _Bool canGoToNextPage;
- (void)goToLastPage:(id)arg1;
@property(readonly, nonatomic) _Bool canGoToLastPage;
- (void)goToFirstPage:(id)arg1;
@property(readonly, nonatomic) _Bool canGoToFirstPage;
- (void)_releaseDocument;
- (void)setDocument:(id)arg1 waitDuration:(double)arg2;
- (void)setDocument:(id)arg1 withInitialPageIndex:(unsigned long long)arg2;
@property(retain, nonatomic) PDFDocument *document;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

