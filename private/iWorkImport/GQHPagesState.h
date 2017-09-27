//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/GQHState.h>

#import "GQWrapPointGenerator.h"

@class GQDSStyle, GQDWPContainerHint, GQHStyle, GQWrapPointSet, NSString;

__attribute__((visibility("hidden")))
@interface GQHPagesState : GQHState <GQWrapPointGenerator>
{
    struct __CFDictionary *mFloatingDrawables;
    int mMode;
    struct __CFDictionary *mHeaders;
    struct __CFDictionary *mFooters;
    struct __CFArray *mSectionStyles;
    struct __CFDictionary *mPageWrapPointsMap;
    int mCurrentPageIndex;
    int mStartPageAt;
    int mStartPageAtValueChangedAtPageIndex;
    GQHStyle *mCurrentLayoutStyle;
    GQHStyle *mCurrentParagraphStyle;
    GQDSStyle *mCurrentBaseParagraphStyle;
    struct __CFString *mCurrentCachedParagraphClass;
    GQHStyle *mCurrentSpanStyle;
    GQDSStyle *mCurrentBaseSpanStyle;
    struct __CFString *mCurrentCachedSpanClass;
    GQWrapPointSet *mCurrentWrapPointSet;
    struct CGRect mLastFrame;
    _Bool mMappingFloatingDrawables;
    _Bool mStartedPage;
    _Bool mStartedSection;
    _Bool mDidInsertPageHeader;
    _Bool mDidFindContainerHint;
    GQDWPContainerHint *mLastInsertedContainerHint;
    struct __CFArray *mAttachmentPositions;
    long long mAttachmentIdCounter;
    long long mFirstAttachmentId;
    _Bool mSplitNextAttachment;
    GQDSStyle *mCurrentSectionStyle;
    _Bool mHasLayoutDrawables;
    int mCurrentHintPageIndex;
    int mCurrentHintColumnIndex;
    _Bool mIsMappingHeadersFooters;
    int mHeaderFooterPageNumber;
    struct __CFDictionary *mDrawablePagesOrderToCssZOrderClassMap;
    struct CGSize mPageSize;
    struct __CFArray *mTocHrefStack;
    _Bool mCurrentFrameHasSandbagFloats;
    int mProgressiveIndex;
}

- (_Bool)allowInlineWrap;
- (_Bool)needAbsolutelyPositionedTables;
- (void)endSection;
- (void)popTocHref;
- (void)pushTocHref:(struct __CFString *)arg1;
- (unsigned int)tocDepth;
- (void)setPageSize:(struct CGSize)arg1;
- (struct CGSize)pageSize;
- (struct __CFDictionary *)pagesOrderToCssZOrderClassMapDictionary;
- (struct __CFString *)cssZOrderClassForDrawablePagesOrder:(int)arg1;
- (struct __CFString *)cssZOrderClassForDrawable:(id)arg1;
- (void)addStyle:(struct __CFString *)arg1 className:(struct __CFString *)arg2 srcStyle:(id)arg3;
- (void)setOutlineStyleType:(int)arg1;
- (void)setOutlineLevel:(int)arg1;
- (_Bool)useOutline;
- (int)pageNumberForHeaderOrFooter;
- (_Bool)isMappingHeadersFooters;
- (void)setIsMappingHeadersFooters:(_Bool)arg1;
- (_Bool)hasLayoutDrawables;
- (void)setHasLayoutDrawables:(_Bool)arg1;
- (void)inContent;
- (void)clearWrapPoints;
- (vector_dadce35e *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (const set_3d57cb01 *)wrapPoints;
- (void)addWrapPoint:(id)arg1;
- (void)endWrapPointSet;
- (void)beginWrapPointSet;
- (void)resolveHeaderName:(const struct __CFString **)arg1 footerName:(const struct __CFString **)arg2;
- (void)handleContainerHint:(id)arg1;
- (void)insertAttachmentPlaceholder;
- (long long)firstAttachmentId;
- (long long)nextAttachmentId;
- (long long)currentAttachmentId;
- (double)moveToNextAttachmentPosition;
- (double)currentAttachmentPosition;
- (void)addAttachmentPosition:(double)arg1;
- (void)finishedWithSplitAttachment;
- (_Bool)splitNextAttachment;
- (void)mapFloatingDrawablesForPageAtIndex:(unsigned long long)arg1;
- (void)setDidFindContainerHint:(_Bool)arg1;
- (void)setDidInsertPageHeader:(_Bool)arg1;
- (void)setCurrentSpanStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString *)arg3;
- (void)setCurrentParagraphStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString *)arg3;
- (void)setCurrentLayoutStyle:(id)arg1;
- (void)setCurrentPageIndex:(int)arg1;
- (int)currentPageIndex;
- (void)overrideSectionStyle:(id)arg1;
- (CDStruct_627e0f85)rangeForSectionStyleAtPageIndex:(int)arg1;
- (id)sectionStyleForPageIndex:(int)arg1;
- (void)addSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3;
- (void)setFooters:(struct __CFArray *)arg1;
- (id)footerForName:(struct __CFString *)arg1;
- (void)setHeaders:(struct __CFArray *)arg1;
- (id)headerForName:(struct __CFString *)arg1;
- (void)setMode:(int)arg1;
- (int)mode;
- (struct __CFArray *)pageDrawables:(int)arg1;
- (void)clearFloatingDrawables;
- (id)drawableAtIndex:(int)arg1;
- (void)addFloatingDrawable:(id)arg1;
- (int)floatingDrawablesCount;
- (void)dealloc;
- (id)initWithState:(id)arg1 documentSize:(struct CGSize)arg2;
- (id)sectionStyleRunForRunBeforePageIndex:(int)arg1;
- (void)openStateLayoutElementsAndStyles;
- (void)closeStateLayoutElementsAndStyles;
- (void)startLayout;
- (void)startSection;
- (id)wrapPointSetForPage:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

