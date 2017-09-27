//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXPeopleCollectionViewController.h>

@class NSString;

@interface PXPeopleAddCollectionViewController : PXPeopleCollectionViewController
{
    NSString *_titleString;
    id <PXPeopleAddCollectionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <PXPeopleAddCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;
- (void)swipeSelectionManager:(id)arg1 didSelectIndexPaths:(id)arg2;
- (void)_updateForSelectionChange;
- (id)selectionModeTitle;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)cancel:(id)arg1;
- (void)confirm:(id)arg1;
- (void)viewDidLoad;

@end

