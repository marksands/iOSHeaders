//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSIndexPath, UICollectionView;

@protocol PXPeopleDragAndDropCollectionViewDelegateLayout <UICollectionViewDelegateFlowLayout>
- (void)collectionView:(UICollectionView *)arg1 didMergeDragIndexPath:(NSIndexPath *)arg2 targetIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 didCancelMergeWithDragIndexPath:(NSIndexPath *)arg2 targetIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 didBeginMergeWithDragIndexPath:(NSIndexPath *)arg2 targetIndexPath:(NSIndexPath *)arg3;

@optional
- (_Bool)collectionView:(UICollectionView *)arg1 shouldMergeDragIndexPath:(NSIndexPath *)arg2 targetIndexPath:(NSIndexPath *)arg3;
@end

