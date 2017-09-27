//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "PSKeyboardNavigationSearchResultsController.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface PSSpotlightSearchResultsController : UITableViewController <PSKeyboardNavigationSearchResultsController>
{
    NSMutableDictionary *_iconViewMap;
    NSMutableArray *_reusableIconViews;
    NSArray *_tableDataCopy;
    NSArray *_results;
    id <PSSpotlightSearchResultsControllerDelegate> _delegate;
    NSMutableArray *_tableData;
}

@property(retain, nonatomic) NSMutableArray *tableData; // @synthesize tableData=_tableData;
@property(nonatomic) __weak id <PSSpotlightSearchResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (void)showSelectedSearchResult;
- (void)_selectIndexPath:(id)arg1;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)searchQueryCompleted;
- (void)searchQueryFoundItems:(id)arg1;
- (void)searchQueryStarted;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateIconViews:(_Bool)arg1;
- (void)_removeIconViewForSection:(id)arg1;
- (id)_itemForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end

