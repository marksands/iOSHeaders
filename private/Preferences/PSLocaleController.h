//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSViewController.h>

#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, PSLocaleSelector, PSRegion, UISearchBar, UITableView, UIView;

@interface PSLocaleController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>
{
    UITableView *_tableView;
    UIView *_contentView;
    UISearchBar *_searchBar;
    _Bool _searchMode;
    _Bool _hideKeyboardInSearchMode;
    PSLocaleSelector *_localeSelector;
    NSArray *_filteredListContent;
    NSArray *_sections;
    NSArray *_regionsList;
    PSRegion *_currentRegion;
}

@property(retain, nonatomic) PSRegion *currentRegion; // @synthesize currentRegion=_currentRegion;
@property(retain, nonatomic) NSArray *regionsList; // @synthesize regionsList=_regionsList;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *filteredListContent; // @synthesize filteredListContent=_filteredListContent;
@property(retain, nonatomic) PSLocaleSelector *localeSelector; // @synthesize localeSelector=_localeSelector;
- (void).cxx_destruct;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)filteredRegionsForRegionList:(id)arg1 searchString:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)reloadDataAndScrollToCheckedRegionAnimated:(_Bool)arg1;
- (void)updateChecked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)loadRegions;
- (void)reloadSections;
- (id)_mainContentView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

