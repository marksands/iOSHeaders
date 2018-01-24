//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPPageLayout.h>

#import "TPAttachmentLayoutParent.h"
#import "TSDWrapInvalidationParent.h"
#import "TSWPColumnMetrics.h"
#import "TSWPLayoutParent.h"

@class NSArray, NSMutableSet, NSSet, TPBodyLayout, TPFootnoteContainerLayout, TPiOSMarginAdjustLayout, TSURetainedPointerKeyDictionary, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TPPageLayout : TSWPPageLayout <TSWPLayoutParent, TSWPColumnMetrics, TPAttachmentLayoutParent, TSDWrapInvalidationParent>
{
    id <TSWPHeaderFooterProvider> _headerFooterProvider;
    TPFootnoteContainerLayout *_footnoteContainerLayout;
    unsigned long long _pageNumber;
    unsigned long long _pageCount;
    _Bool _childLayoutsValid;
    TSURetainedPointerKeyDictionary *_oldChildLayouts;
    id <TPMasterDrawableProvider> _masterDrawableProvider;
    unsigned long long _contentFlags;
    int _inInvalidationClusterCount;
    _Bool _childTextLayoutsNeedInvalidationForExteriorWrap;
    _Bool _validating;
    NSMutableSet *_anchoredDrawableLayouts;
    TPiOSMarginAdjustLayout *_marginAdjustLayout;
}

@property(readonly, nonatomic) TPFootnoteContainerLayout *footnoteContainerLayout; // @synthesize footnoteContainerLayout=_footnoteContainerLayout;
@property(readonly, nonatomic) TPiOSMarginAdjustLayout *marginAdjustLayout; // @synthesize marginAdjustLayout=_marginAdjustLayout;
@property(nonatomic, getter=isValidating) _Bool validating; // @synthesize validating=_validating;
- (void).cxx_destruct;
- (pair_b2618ff2)p_sideMargins;
- (void)p_removeNoLongerInlineLayoutsFromBodyLayout;
- (void)p_removeInlineLayoutsFromPageLayout;
- (_Bool)p_isHeaderFooterLayout:(id)arg1;
- (void)p_sortChildLayouts;
- (void)p_populateOldChildLayoutsWithLayouts:(id)arg1;
- (void)p_insertFootnoteContainerLayout;
- (void)p_insertBodyLayout;
- (void)p_insertValidatedFloatingLayouts;
- (void)p_insertValidatedMasterLayouts;
- (id)p_existingChildLayoutForInfo:(id)arg1;
- (id)p_insertValidatedChildLayoutForInfo:(id)arg1;
- (id)p_insertChildLayoutForInfo:(id)arg1;
- (void)p_updateFromLayoutInfoProvider;
- (id)p_orderedChildInfos;
@property(readonly, nonatomic) _Bool marginsAreMirrored;
@property(readonly, nonatomic) _Bool columnsAreLeftToRight;
- (_Bool)textIsVertical;
@property(readonly, nonatomic) _Bool shrinkTextToFit;
@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) unsigned long long pageNumber;
- (void)evacuateOldChildLayoutCache;
- (void)validate;
- (unsigned long long)pageCountForAttachment:(id)arg1;
- (unsigned long long)pageNumberForAttachment:(id)arg1;
- (int)naturalAlignmentForTextLayout:(id)arg1;
- (double)maxAutoGrowHeightForTextLayout:(id)arg1;
- (double)maxAutoGrowWidthForTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (void)wrappableChildInvalidated:(id)arg1;
- (void)endResizeWrapInvalidationCluster;
- (void)beginResizeWrapInvalidationCluster;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (void)addAttachmentLayout:(id)arg1;
- (id)existingAttachmentLayoutForInfo:(id)arg1;
- (id)layoutsCausingWrapOnTextLayoutTarget:(id)arg1 ignoreIntersection:(_Bool)arg2;
- (struct CGRect)footnoteContainerFrameWithSize:(struct CGSize)arg1;
- (void)inflateFootnotesInFootnoteContainer:(id)arg1;
- (double)heightAvailableForFootnotes;
- (void)setNeedsInflation;
- (void)rebuildChildLayoutsOnNextValidationForcingTextLayout:(_Bool)arg1;
- (void)invalidateFootnoteContainers;
- (void)invalidateFootnoteSeparatorLine;
- (void)invalidateBodyAndMarginLayouts;
- (void)invalidateHeaderFooterLayouts;
- (void)invalidateHeaderFooterLayoutsCache;
- (void)processWidowAndInflation;
@property(readonly, nonatomic) NSSet *anchoredDrawableLayouts;
@property(readonly, nonatomic) NSArray *floatingDrawableLayouts;
- (_Bool)isRootLayoutForInspectorGeometry;
@property(readonly, nonatomic) id <NSFastEnumeration> childTextLayoutsForExteriorWrap;
- (void)invalidateSize;
- (void)invalidatePosition;
- (id)dependentLayouts;
- (id)computeLayoutGeometry;
- (_Bool)allowIntersectionOfChildLayout:(id)arg1;
- (struct CGSize)maximumFrameSizeForChild:(id)arg1;
- (void)p_addLayoutIfAttached:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (id)pageLayout;
@property(readonly, nonatomic) unsigned long long pageIndex;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (_Bool)providesGuidesForChildLayouts;
- (_Bool)isReadyForBodyLayout;
- (id)layoutsForChildInfo:(id)arg1;
- (id)p_childLayoutInParentLayout:(id)arg1 forChildInfo:(id)arg2;
- (id)layoutForChildInfo:(id)arg1;
- (id)primaryLayoutForInfo:(id)arg1;
- (void)invalidateLayoutsForPageCountChange;
- (_Bool)hasFooters;
- (_Bool)hasHeaders;
- (_Bool)allowsHeaderFooter;
@property(readonly, nonatomic) _Bool allowsFootnotes;
@property(readonly, nonatomic) _Bool allowsBody;
@property(readonly, nonatomic) struct CGRect bodyRect;
@property(readonly, nonatomic) __weak TPBodyLayout *bodyLayout;
@property(readonly, nonatomic) __weak id <TPMasterDrawableProvider> masterDrawableProvider;
- (_Bool)headerFooterProviderValid;
- (id)headerFooterProvider;
- (_Bool)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
- (_Bool)shouldHeaderFooterBeVisible:(long long)arg1;
- (_Bool)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (void)dealloc;
- (void)p_addLayoutsForInfos:(id)arg1 toArray:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) double textScaleFactor;

@end

