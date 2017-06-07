//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class CNAvatarViewControllerSettings, CNContactFormatter, CNContactStore, NSArray, NSIndexSet, TPFavoritesController, UIView;

@interface TPFavoritesViewController : UICollectionViewController
{
    _Bool _contentUnavailable;
    TPFavoritesController *_favoritesController;
    UIView *_contentUnavailableView;
    NSArray *_favoritesEntries;
    CNAvatarViewControllerSettings *_avatarViewControllerSettings;
    CNContactFormatter *_contactFormatter;
    CNContactStore *_contactStore;
    NSIndexSet *_sections;
}

@property(retain, nonatomic) NSIndexSet *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) CNAvatarViewControllerSettings *avatarViewControllerSettings; // @synthesize avatarViewControllerSettings=_avatarViewControllerSettings;
@property(copy, nonatomic) NSArray *favoritesEntries; // @synthesize favoritesEntries=_favoritesEntries;
@property(retain, nonatomic) UIView *contentUnavailableView; // @synthesize contentUnavailableView=_contentUnavailableView;
@property(nonatomic) _Bool contentUnavailable; // @synthesize contentUnavailable=_contentUnavailable;
- (void).cxx_destruct;
- (void)refreshViewAnimated:(_Bool)arg1;
- (void)refreshView;
- (void)handleFavoritesControllerFavoritesEntriesDidChangeNotification:(id)arg1;
- (void)handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (id)favoritesEntryAtIndex:(long long)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)setFavoritesEntries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) TPFavoritesController *favoritesController; // @synthesize favoritesController=_favoritesController;
- (void)setContentUnavailable:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

@end

