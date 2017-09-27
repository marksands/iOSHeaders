//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, UICollectionView, UITableView, UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface UITableViewIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout *_flowLayout;
    UITableView *_table;
}

- (void).cxx_destruct;
- (void)reloadData;
- (void)_setIndexColor:(id)arg1;
- (void)_invalidateTable;
- (void)_doneTapped;
- (void)_cellTapped:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithTable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

