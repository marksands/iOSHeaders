//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"
#import "UITableViewDataSource.h"

@class NSArray, NSString;

@interface VCUIGalleryDataSource : NSObject <UITableViewDataSource, UISearchResultsUpdating, UISearchControllerDelegate>
{
    _Bool _loadedOnce;
    id <VCUIGalleryDataSourceDelegate> _delegate;
    NSString *_query;
    NSArray *_allAppSuggestionsSections;
    NSArray *_appSuggestionsSections;
}

+ (void)initialize;
@property(nonatomic) _Bool loadedOnce; // @synthesize loadedOnce=_loadedOnce;
@property(retain, nonatomic) NSArray *appSuggestionsSections; // @synthesize appSuggestionsSections=_appSuggestionsSections;
@property(retain, nonatomic) NSArray *allAppSuggestionsSections; // @synthesize allAppSuggestionsSections=_allAppSuggestionsSections;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) __weak id <VCUIGalleryDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateResults;
- (id)filteredAppSuggestionsSectionsForQuery:(id)arg1;
- (id)gallerySectionForSection:(unsigned long long)arg1;
- (void)updateRecommendedShortcuts;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldShowSeeAllButtonInSection:(long long)arg1;
- (id)applicationBundleIdentifierForSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (id)actionDonationAtIndexPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

