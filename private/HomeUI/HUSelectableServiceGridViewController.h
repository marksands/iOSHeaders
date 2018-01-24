//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUServiceGridViewController.h>

#import "HUServiceGridItemManagerDelegate.h"

@class HFMutableSetDiff, HFSetDiff, HUServiceGridItemManager, NSString;

@interface HUSelectableServiceGridViewController : HUServiceGridViewController <HUServiceGridItemManagerDelegate>
{
    _Bool _allowsEmptySelection;
    _Bool _allowsMultipleSelection;
    HUServiceGridItemManager *_serviceGridItemManager;
    HFMutableSetDiff *_mutableSelectedItems;
}

+ (CDUnknownBlockType)defaultItemProviderCreatorWithOptions:(unsigned long long)arg1;
+ (id)itemServiceTypesToHide;
@property(retain, nonatomic) HFMutableSetDiff *mutableSelectedItems; // @synthesize mutableSelectedItems=_mutableSelectedItems;
@property(nonatomic) __weak HUServiceGridItemManager *serviceGridItemManager; // @synthesize serviceGridItemManager=_serviceGridItemManager;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) _Bool allowsEmptySelection; // @synthesize allowsEmptySelection=_allowsEmptySelection;
- (void).cxx_destruct;
- (void)_deleteItemFromSelection:(id)arg1;
- (void)_addItemToSelection:(id)arg1;
- (_Bool)_wantsToggleButtonForSection:(unsigned long long)arg1;
- (void)_updateToggleStateForSection:(long long)arg1 headerView:(id)arg2;
- (void)_setSelected:(_Bool)arg1 forItemsInSection:(long long)arg2;
- (void)_updateSelectionState:(_Bool)arg1 forCell:(id)arg2;
- (_Bool)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (void)addItemToSelection:(id)arg1;
- (void)deleteItemFromSelection:(id)arg1;
- (void)didDeselectItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (void)didChangeSelection;
- (_Bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)_removeAllServicesInSectionFromButton:(id)arg1;
- (void)_addAllServicesInSectionFromButton:(id)arg1;
@property(retain, nonatomic) HFSetDiff *selectedItems;
- (id)initWithItemManager:(id)arg1;
- (id)initWithServiceGridItemManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

