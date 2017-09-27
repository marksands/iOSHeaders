//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIBarButtonItem, UIMoreListCellLayoutManager, UITableView;

@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_table;
    _Bool _allowsCustomizing;
    _Bool _disableCustomizing;
    _Bool _hideNavigationBar;
    NSArray *_moreViewControllers;
    UIMoreListCellLayoutManager *_layoutManager;
    UIBarButtonItem *_moreEditButtonItem;
    _Bool _moreViewControllersChanged;
}

- (void).cxx_destruct;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_targetNavigationController;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)_viewControllerWasSelected;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)tabBarItem;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
@property(nonatomic) _Bool allowsCustomizing;
@property(nonatomic) _Bool moreViewControllersChanged;
@property(retain, nonatomic) NSArray *moreViewControllers;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)_updateEditButton;
- (void)_layoutCells;
- (id)table;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

