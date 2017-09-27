//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<TNPageControllerDelegate>, TNDocumentRoot, TNPageCoordinateDictionary, TNPrintProperties, TNSheet, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TNPageController : NSObject
{
    _Bool _pageCountsValid;
    _Bool _computingPageCounts;
    _Bool _maxPageCoordinateValid;
    _Bool _processingChanges;
    _Bool _updateViewScaleForDrawablesChangeAfterProcessingChanges;
    _Bool _postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges;
    _Bool _inDynamicContentScaleChange;
    struct TSUCellCoord _maxPageCoordinate;
    NSObject<TNPageControllerDelegate> *_delegate;
    TNDocumentRoot *_documentRoot;
    TNSheet *_sheet;
    double _userViewScale;
    double _headerTextHeight;
    double _footerTextHeight;
    TNPageCoordinateDictionary *_pageLayoutCache;
    TSUPointerKeyDictionary *_hintCacheDictionary;
    TSUPointerKeyDictionary *_sheetPageCountCache;
    TNPageCoordinateDictionary *_headerLayerCache;
    TNPageCoordinateDictionary *_footerLayerCache;
    long long _cachedPageCountDuringDynamicContentScaleChange;
    long long _priorPageCount;
    long long _subsequentPageCount;
    TNPrintProperties *_printProperties;
}

+ (double)autoFitContentScaleForSheet:(id)arg1;
+ (double)p_unclampedAutoFitContentScaleForSheet:(id)arg1;
+ (id)cachedAutoFitContentScaleDictionary;
@property(readonly, nonatomic) _Bool inDynamicContentScaleChange; // @synthesize inDynamicContentScaleChange=_inDynamicContentScaleChange;
@property(nonatomic) _Bool postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges; // @synthesize postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges=_postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges;
@property(nonatomic) _Bool updateViewScaleForDrawablesChangeAfterProcessingChanges; // @synthesize updateViewScaleForDrawablesChangeAfterProcessingChanges=_updateViewScaleForDrawablesChangeAfterProcessingChanges;
@property(nonatomic, getter=isProcessingChanges) _Bool processingChanges; // @synthesize processingChanges=_processingChanges;
@property(retain, nonatomic) TNPrintProperties *printProperties; // @synthesize printProperties=_printProperties;
@property(nonatomic) _Bool maxPageCoordinateValid; // @synthesize maxPageCoordinateValid=_maxPageCoordinateValid;
@property(nonatomic) struct TSUCellCoord maxPageCoordinate; // @synthesize maxPageCoordinate=_maxPageCoordinate;
@property(nonatomic) _Bool computingPageCounts; // @synthesize computingPageCounts=_computingPageCounts;
@property(nonatomic) _Bool pageCountsValid; // @synthesize pageCountsValid=_pageCountsValid;
@property(nonatomic) long long subsequentPageCount; // @synthesize subsequentPageCount=_subsequentPageCount;
@property(nonatomic) long long priorPageCount; // @synthesize priorPageCount=_priorPageCount;
@property(nonatomic) long long cachedPageCountDuringDynamicContentScaleChange; // @synthesize cachedPageCountDuringDynamicContentScaleChange=_cachedPageCountDuringDynamicContentScaleChange;
@property(retain, nonatomic) TNPageCoordinateDictionary *footerLayerCache; // @synthesize footerLayerCache=_footerLayerCache;
@property(retain, nonatomic) TNPageCoordinateDictionary *headerLayerCache; // @synthesize headerLayerCache=_headerLayerCache;
@property(retain, nonatomic) TSUPointerKeyDictionary *sheetPageCountCache; // @synthesize sheetPageCountCache=_sheetPageCountCache;
@property(retain, nonatomic) TSUPointerKeyDictionary *hintCacheDictionary; // @synthesize hintCacheDictionary=_hintCacheDictionary;
@property(retain, nonatomic) TNPageCoordinateDictionary *pageLayoutCache; // @synthesize pageLayoutCache=_pageLayoutCache;
@property(nonatomic) double footerTextHeight; // @synthesize footerTextHeight=_footerTextHeight;
@property(nonatomic) double headerTextHeight; // @synthesize headerTextHeight=_headerTextHeight;
@property(nonatomic) double userViewScale; // @synthesize userViewScale=_userViewScale;
@property(nonatomic) __weak TNSheet *sheet; // @synthesize sheet=_sheet;
@property(nonatomic) __weak TNDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (void).cxx_destruct;
- (void)layoutAtPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2;
- (unsigned long long)pageCount;
- (id)pageInfoForPageIndex:(unsigned long long)arg1;
- (id)p_pageInfoForPageAtIndex:(unsigned long long)arg1;
- (void)p_layoutInfo:(id)arg1 intoPageRange:(CDStruct_d8c645bd)arg2;
- (void)p_layoutInfo:(id)arg1 intoPageLayout:(id)arg2 atPageCoordinate:(struct TSUCellCoord)arg3;
- (CDStruct_d8c645bd)pageRangeForInfo:(id)arg1 upperBound:(struct TSUCellCoord)arg2;
- (void)syncPositionOfLayout:(id)arg1 atCoordinate:(struct TSUCellCoord)arg2;
- (id)p_layoutForInfo:(id)arg1 atCoordinate:(struct TSUCellCoord)arg2 parentLayout:(id)arg3;
- (id)p_hintCacheForInfo:(id)arg1;
- (void)p_updateVisiblePageRange:(CDStruct_d8c645bd)arg1 forLayoutController:(id)arg2;
- (void)p_enumerateOverPageRange:(CDStruct_d8c645bd)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)registerPageLayout:(id)arg1 atPageCoordinate:(struct TSUCellCoord)arg2;
- (_Bool)p_headersOrFootersContainPageNumberRelatedAttachments;
- (void)p_didEndDynamicContentScaleChange:(id)arg1;
- (void)p_willBeginDynamicContentScaleChange:(id)arg1;
- (void)i_setLayer:(id)arg1 forHeaderType:(int)arg2 fragment:(int)arg3 atPageCoordinate:(struct TSUCellCoord)arg4;
- (id)i_layerForHeaderType:(int)arg1 fragment:(int)arg2 atPageCoordinate:(struct TSUCellCoord)arg3;
- (void)invalidatePageLayout;
- (void)p_invalidateCachedAutoFitContentScaleForSheet:(id)arg1 notify:(_Bool)arg2;
- (void)invalidateCachedAutoFitContentScaleForSheet:(id)arg1;
- (void)p_postAutoFitContentScaleDidChangeNotification;
- (void)i_invalidateHintCache;
- (void)invalidateDrawableLayouts;
- (void)invalidatePageLayoutGeometries;
- (void)p_invalidatePageCounts;
- (void)p_clearHintCache;
- (void)i_invalidatePageLayoutCache;
- (void)removeLayoutsFromPages;
- (void)willExitPrintView;
- (CDStruct_d8c645bd)pageRangeForPageIndex:(unsigned long long)arg1;
- (struct TSUCellCoord)pageCoordinateForPageIndex:(unsigned long long)arg1;
- (id)p_pageLayoutAtCoordinate:(struct TSUCellCoord)arg1;
- (struct CGRect)printingLayoutRectForPageIndex:(unsigned long long)arg1;
- (id)pageLayoutGeometryForPageCoordinate:(struct TSUCellCoord)arg1;
- (id)pageLayoutGeometryForPrintingAtPageCoordinate:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)pageCoordinateForDrawableAtUnscaledPoint:(struct CGPoint)arg1;
- (struct TSUCellCoord)p_pageCoordinateForPageLayoutAtDevicePoint:(struct CGPoint)arg1;
- (struct TSUCellCoord)pageCoordinateForPageLayoutAtUnscaledPoint:(struct CGPoint)arg1;
- (void)layoutInPageRange:(CDStruct_d8c645bd)arg1 forLayoutController:(id)arg2;
- (void)p_measureHeadersAndFooters;
- (struct CGRect)firstPartitionFrameForInfo:(id)arg1 outStartPageCoordinate:(out struct TSUCellCoord *)arg2;
- (unsigned long long)pageNumberForPageCoordinate:(struct TSUCellCoord)arg1;
- (_Bool)isPagePlaceholderAtPageCoordinate:(struct TSUCellCoord)arg1;
@property(readonly, nonatomic) unsigned long long numPages;
- (CDStruct_d8c645bd)pageRangeWithPlaceholdersWithUpperBound:(struct TSUCellCoord)arg1;
- (struct CGSize)contentSizeForCanvasLayer;
- (struct TSUCellCoord)pageCoordinateForMaxVisiblePage;
- (CDStruct_d8c645bd)pageRangeForContentWithUpperBound:(struct TSUCellCoord)arg1;
- (CDStruct_d8c645bd)pageRangeForContent;
- (void)updatePrintMargins;
- (void)updateContentScale;
- (void)updateViewScale;
- (void)updateUserViewScale;
- (void)canvasViewScaleDidChange:(double)arg1;
- (long long)p_priorPageCount;
- (struct CGSize)pageSizeWithGutter;
@property(readonly, nonatomic) struct CGRect contentFrame;
@property(readonly, nonatomic) struct CGSize pageSize;
- (void)p_computePriorPageCountForCurrentSheet;
- (void)p_computeSubsequentPageCountForCurrentSheet;
- (long long)p_pageCountForSheet:(id)arg1;
- (long long)p_updateCachedPageCountForCurrentSheet;
@property(readonly, nonatomic, getter=isPortrait) _Bool portrait;
@property(readonly, nonatomic) double contentScale;
@property(nonatomic) __weak NSObject<TNPageControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;
- (double)p_printViewDefaultUserViewScale;

@end

