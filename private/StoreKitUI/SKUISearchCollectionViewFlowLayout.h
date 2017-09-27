//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIItemGridCollectionViewLayout.h>

@class UICollectionView;

@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout
{
    UICollectionView *_collectionView;
    long long _numberOfRows;
    long long _numberOfColumns;
    struct CGSize _headerSize;
    double _horizontalPadding;
    double _verticalPadding;
    _Bool _backfills;
}

@property(nonatomic) _Bool backfills; // @synthesize backfills=_backfills;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
- (void).cxx_destruct;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;

@end

