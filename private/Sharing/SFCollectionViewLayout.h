//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SFCollectionViewLayout : UICollectionViewLayout
{
    double _evaluatedHorizontalItemOffset;
    NSArray *_preparedLayoutAttributes;
    NSArray *_preparedUpdateItems;
    struct CGSize _evaluatedItemSize;
    struct CGSize _evaluatedContentSize;
    struct UIEdgeInsets _evaluatedInset;
}

@property(copy, nonatomic) NSArray *preparedUpdateItems; // @synthesize preparedUpdateItems=_preparedUpdateItems;
@property(copy, nonatomic) NSArray *preparedLayoutAttributes; // @synthesize preparedLayoutAttributes=_preparedLayoutAttributes;
@property(nonatomic) double evaluatedHorizontalItemOffset; // @synthesize evaluatedHorizontalItemOffset=_evaluatedHorizontalItemOffset;
@property(nonatomic) struct CGSize evaluatedContentSize; // @synthesize evaluatedContentSize=_evaluatedContentSize;
@property(nonatomic) struct CGSize evaluatedItemSize; // @synthesize evaluatedItemSize=_evaluatedItemSize;
@property(nonatomic) struct UIEdgeInsets evaluatedInset; // @synthesize evaluatedInset=_evaluatedInset;
- (void).cxx_destruct;
- (void)invalidateGroupViewLayoutAnimated:(_Bool)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize)arg1 inset:(struct UIEdgeInsets)arg2 containerWidth:(double)arg3 offscreenPeekInFactor:(float)arg4;
- (id)_indexPathsForItemsInSection:(long long)arg1;
- (struct UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1;
- (struct CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldReverseLayoutDirection;
- (void)prepareLayout;
- (void)calculateLayoutValuesForIndexPaths:(id)arg1 containerWidth:(double)arg2;
- (struct CGPoint)firstItemCenterForContainerWidth:(double)arg1;
- (id)init;

@end

