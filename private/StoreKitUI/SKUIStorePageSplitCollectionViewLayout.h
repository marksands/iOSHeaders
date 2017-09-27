//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UICollectionViewCompositionLayout.h"

#import "SKUIStorePageCollectionViewLayout.h"

@class NSArray, NSMapTable, NSMutableArray, NSString;

@interface SKUIStorePageSplitCollectionViewLayout : _UICollectionViewCompositionLayout <SKUIStorePageCollectionViewLayout>
{
    NSString *_backdropGroupName;
    NSArray *_indexPathsForGradientItems;
    NSMutableArray *_orderedSublayouts;
    _Bool _rendersWithParallax;
    _Bool _rendersWithPerspective;
    NSMapTable *_sublayoutToSectionsToIndexRanges;
}

@property(nonatomic) _Bool rendersWithParallax; // @synthesize rendersWithParallax=_rendersWithParallax;
@property(nonatomic) _Bool rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(copy, nonatomic) NSArray *indexPathsForGradientItems; // @synthesize indexPathsForGradientItems=_indexPathsForGradientItems;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
- (void).cxx_destruct;
- (id)_newStorePageCollectionViewLayout;
- (void)_createSectionsToIndexRangesMapTableIfNeededForSublayout:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)sublayouts;
- (void)removeSublayout:(id)arg1;
- (struct CGRect)_frameForLayout:(id)arg1 offset:(struct CGPoint)arg2 relativeToEdges:(unsigned long long)arg3 fromSiblingLayout:(id)arg4;
- (void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(struct CGPoint)arg3 relativeToEdges:(unsigned long long)arg4 fromSiblingLayout:(id)arg5;
- (void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(long long)arg3 offset:(struct CGPoint)arg4 relativeToEdges:(unsigned long long)arg5 fromSiblingLayout:(id)arg6;
- (void)addSublayout:(id)arg1 forElementKinds:(id)arg2;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *indexPathsForPinningItems;
- (void)addSublayoutsUsingSplitsDescription:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

