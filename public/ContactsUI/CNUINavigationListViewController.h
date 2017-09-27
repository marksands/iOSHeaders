//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CNUINavigationListViewDataSource.h"
#import "CNUINavigationListViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CNUINavigationListItem, CNUINavigationListView, NSArray, NSString;

@interface CNUINavigationListViewController : UIViewController <CNUINavigationListViewDataSource, CNUINavigationListViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _ignoreParentControllerResize;
    CNUINavigationListView *_navigationListView;
    NSArray *_items;
    CNUINavigationListItem *_expandedItem;
    id <CNUINavigationListViewControllerDelegate> _delegate;
    CNUINavigationListItem *_displayedExpandedItem;
}

+ (_Bool)itemRequiresDetailCell:(id)arg1;
@property(nonatomic) _Bool ignoreParentControllerResize; // @synthesize ignoreParentControllerResize=_ignoreParentControllerResize;
@property(retain, nonatomic) CNUINavigationListItem *displayedExpandedItem; // @synthesize displayedExpandedItem=_displayedExpandedItem;
@property(nonatomic) __weak id <CNUINavigationListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNUINavigationListItem *expandedItem; // @synthesize expandedItem=_expandedItem;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) CNUINavigationListView *navigationListView; // @synthesize navigationListView=_navigationListView;
- (void).cxx_destruct;
- (void)navigationListView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)stopTrackingRollover;
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;
- (void)updateNavigationListViewStateAnimated:(_Bool)arg1;
- (void)reloadNavigationListView;
- (void)updateNavigationListViewSeparatorStyle;
- (void)updateNavigationListView;
- (struct CGSize)contentSizeForExpandedItem:(id)arg1;
- (id)itemsForItem:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (id)dequeueReusableDetailCell;
- (id)dequeueReusableStandardCell;
- (void)navigationListView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (_Bool)canExpandItem:(id)arg1;
- (void)toggleItem:(id)arg1;
- (void)expandItem:(id)arg1;
- (double)cellSeparatorHeight;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

