//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UISearchBarDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GKNoContentView, NSArray, NSMutableArray, NSString, UIActivityIndicatorView, UISearchController;

@interface GKFriendListViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDelegate, UITableViewDataSource>
{
    id <GKFriendListViewControllerDelegate> _delegate;
    NSMutableArray *_friendPlayers;
    NSArray *_searchPlayers;
    GKNoContentView *_noContentView;
    UISearchController *_searchController;
    UIActivityIndicatorView *_activityIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) GKNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) NSArray *searchPlayers; // @synthesize searchPlayers=_searchPlayers;
@property(retain, nonatomic) NSMutableArray *friendPlayers; // @synthesize friendPlayers=_friendPlayers;
@property(nonatomic) id <GKFriendListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)removeAllFriendsButtonPressed;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)hideNoContentPlaceholder;
- (void)showNoContentPlaceholderForError:(id)arg1;
- (void)setViewsToHideHidden:(_Bool)arg1;
- (void)showLoadingIndicator;
- (void)updateTitlesWith:(long long)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadData;
- (void)setupNavBarItems;
- (void)setupSearchController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
