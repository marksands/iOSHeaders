//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSArray, _TVShelfLayoutHelper;

@interface _TVShelfViewLayout : UICollectionViewLayout
{
    double _minimumInteritemSpacing;
    double _minimumLineSpacing;
    long long _rowCount;
    double _headerSelectionMargin;
    double _headerBottomMargin;
    _TVShelfLayoutHelper *_layoutHelper;
    NSArray *_shelfLayoutSections;
    struct CGSize _itemSize;
    struct CGSize _headerReferenceSize;
    struct UIEdgeInsets _sectionInset;
}

+ (double)defaultHeaderSelectionMargin;
@property(retain, nonatomic) NSArray *shelfLayoutSections; // @synthesize shelfLayoutSections=_shelfLayoutSections;
@property(retain, nonatomic) _TVShelfLayoutHelper *layoutHelper; // @synthesize layoutHelper=_layoutHelper;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double headerBottomMargin; // @synthesize headerBottomMargin=_headerBottomMargin;
@property(nonatomic) double headerSelectionMargin; // @synthesize headerSelectionMargin=_headerSelectionMargin;
@property(nonatomic) struct CGSize headerReferenceSize; // @synthesize headerReferenceSize=_headerReferenceSize;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
- (void).cxx_destruct;
- (_Bool)_bumpHeaderForLayoutSection:(id)arg1 forIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGRect)boundingSelectionFrameForFrame:(struct CGRect)arg1;
- (double)computedContentHeight;
- (long long)computedRowCount;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)init;

@end

