//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSIndexPath, NSMutableOrderedSet, NSPointerArray;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragSourceControllerDragState : NSObject
{
    NSMutableOrderedSet *_indexPathsOfDraggingItems;
    NSPointerArray *_dragItemsWithRebasableIndexPaths;
}

@property(retain, nonatomic) NSPointerArray *dragItemsWithRebasableIndexPaths; // @synthesize dragItemsWithRebasableIndexPaths=_dragItemsWithRebasableIndexPaths;
@property(retain, nonatomic) NSMutableOrderedSet *indexPathsOfDraggingItems; // @synthesize indexPathsOfDraggingItems=_indexPathsOfDraggingItems;
- (void).cxx_destruct;
- (void)rebaseIndexPathsWithUpdateMap:(id)arg1;
@property(readonly, nonatomic) NSArray *draggingIndexPaths;
- (_Bool)isDraggingFromIndexPath:(id)arg1;
- (id)indexPathForDragItem:(id)arg1 forCollectionView:(id)arg2;
- (void)setIndexPath:(id)arg1 forDragItem:(id)arg2 collectionView:(id)arg3;
- (void)addDraggingIndexPath:(id)arg1;
@property(readonly, nonatomic) NSIndexPath *dragFromIndexPath;
- (id)description;
- (id)init;

@end
