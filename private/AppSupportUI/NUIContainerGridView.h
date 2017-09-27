//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppSupportUI/NUIContainerView.h>

#import "_NUIGridArrangementContainer.h"

@class NSMutableArray, NSString;

@interface NUIContainerGridView : NUIContainerView <_NUIGridArrangementContainer>
{
    NSMutableArray *_viewRows;
    struct _NUIGridArrangement _visibleArrangement;
    struct CGSize _visibleCount;
    struct unordered_map<UIView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::hash<UIView *>, std::__1::equal_to<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, const std::__1::pair<_NSRange, _NSRange>>>> _viewRanges;
    struct unordered_map<unsigned long, const std::__1::pair<UIView *, UIView *>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, const std::__1::pair<UIView *, UIView *>>>> _rowBaselineViews;
    struct CGSize _spacing;
    struct vector<_NUIGridViewDimensionConfiguration, std::__1::allocator<_NUIGridViewDimensionConfiguration>> _rows;
    struct vector<_NUIGridViewDimensionConfiguration, std::__1::allocator<_NUIGridViewDimensionConfiguration>> _columns;
    struct {
        unsigned int inInsertOrRemove:1;
        unsigned int pendingUpdate:1;
        unsigned int delegateMinSpacing:1;
        unsigned int delegateMinDirectionalSpacing:1;
        unsigned int delegateHorizontalAlignment:1;
        unsigned int delegateVerticalAlignment:1;
    } _gridViewFlags;
    long long _horizontalAlignment;
    long long _verticalAlignment;
    double _rowHeight;
    double _columnWidth;
}

@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)populateGridArrangementDimension:(vector_29d414c0 *)arg1 withCells:(const vector_f7a18e83 *)arg2 axis:(long long)arg3;
- (void)populateGridArrangementCells:(vector_f7a18e83 *)arg1;
- (void)_setupViewRangesIfNeeded;
- (long long)_verticalAlignmentOfView:(id)arg1 inColumn:(long long)arg2;
- (long long)_horizontalAlignmentOfView:(id)arg1 inColumn:(long long)arg2;
- (double)_heightOfRowAtIndex:(long long)arg1;
- (double)_widthOfColumnAtIndex:(long long)arg1;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (_Bool)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(_Bool)arg1;
- (id)arrangedDescription;
- (_Bool)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;
- (id)viewForLastBaselineLayoutInRow:(long long)arg1;
- (id)viewForFirstBaselineLayoutInRow:(long long)arg1;
- (id)_baselineViewForFirstBaseline:(_Bool)arg1 forRow:(unsigned long long)arg2;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)_baselineViewVendForFirstBaseline:(_Bool)arg1 fromViews:(id)arg2;
@property(nonatomic) double columnSpacing;
@property(nonatomic) double rowSpacing;
@property(nonatomic) long long verticalDistribution;
@property(nonatomic) long long horizontalDistribution;
- (void)replaceArrangedSubview:(id)arg1 inColumnAtIndex:(long long)arg2 rowAtIndex:(long long)arg3;
- (void)removeColumnAtIndex:(long long)arg1;
- (void)insertColumnAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2;
- (void)addColumnWithArrangedSubviews:(id)arg1;
- (void)removeRowAtIndex:(long long)arg1;
- (void)insertRowAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2;
- (void)addRowWithArrangedSubviews:(id)arg1;
- (long long)columnIndexForArrangedSubview:(id)arg1;
- (long long)rowIndexForArrangedSubview:(id)arg1;
- (void)getColumnRange:(struct _NSRange *)arg1 rowRange:(struct _NSRange *)arg2 forArrangedSubview:(id)arg3;
- (id)arrangedSubviewInColumnAtIndex:(long long)arg1 rowAtIndex:(long long)arg2;
- (id)arrangedSubviewsInColumnAtIndex:(long long)arg1;
- (id)arrangedSubviewsInRowAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfColumns;
@property(readonly, nonatomic) long long numberOfRows;
- (void)_invalidateIntrinsicContentSizeAndUpdateArrangedSubviewsToMatchCurrentGrid;
- (void)_updateArrangedSubviewsToMatchCurrentGrid;
- (_Bool)_verifyInternalGridConsistencyWarningOnly:(_Bool)arg1;
- (void)dealloc;
- (id)initWithArrangedSubviewRows:(id)arg1;
- (id)initWithArrangeSubviewRows:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (void)setBaselineRelativeArrangement:(_Bool)arg1;
@property(nonatomic) __weak id <NUIContainerGridViewDelegate> delegate; // @dynamic delegate;
- (double)widthOfColumnAtIndex:(long long)arg1;
- (void)setWidth:(double)arg1 ofColumnAtIndex:(long long)arg2;
- (double)heightOfRowAtIndex:(long long)arg1;
- (void)setHeight:(double)arg1 ofRowAtIndex:(long long)arg2;
- (double)spacingAfterColumnAtIndex:(long long)arg1;
- (void)setSpacing:(double)arg1 afterColumnAtIndex:(long long)arg2;
- (double)spacingAfterRowAtIndex:(long long)arg1;
- (void)setSpacing:(double)arg1 afterRowAtIndex:(long long)arg2;
- (long long)verticalAlignmentOfColumnAtIndex:(unsigned long long)arg1;
- (void)setVerticalAlignment:(long long)arg1 ofColumnAtIndex:(long long)arg2;
- (long long)horizontalAlignmentOfColumnAtIndex:(unsigned long long)arg1;
- (void)setHorizontalAlignment:(long long)arg1 ofColumnAtIndex:(long long)arg2;
- (_Bool)isColumnAtIndexHidden:(long long)arg1;
- (void)setColumnAtIndex:(long long)arg1 hidden:(_Bool)arg2;
- (_Bool)isRowAtIndexHidden:(long long)arg1;
- (void)setRowAtIndex:(long long)arg1 hidden:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

