//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNAutocompleteFetchDelegate.h"
#import "TUSearchModuleProtocol.h"

@class CNAutocompleteStore, NSObject<OS_dispatch_queue>, NSString, TUAutocompleteResultPartitioner, TUSearchController, TUSearchResults;

@interface TUContactsAutocompleteSearchModule : NSObject <CNAutocompleteFetchDelegate, TUSearchModuleProtocol>
{
    _Bool _searchComplete;
    _Bool _cancelled;
    TUSearchController *_searchController;
    CNAutocompleteStore *_autocompleteStore;
    id <CNCancelable> _fetchRequest;
    TUAutocompleteResultPartitioner *_autocompleteResultPartitioner;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completion;
}

@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isSearchComplete) _Bool searchComplete; // @synthesize searchComplete=_searchComplete;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) TUAutocompleteResultPartitioner *autocompleteResultPartitioner; // @synthesize autocompleteResultPartitioner=_autocompleteResultPartitioner;
@property(retain, nonatomic) id <CNCancelable> fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(retain, nonatomic) CNAutocompleteStore *autocompleteStore; // @synthesize autocompleteStore=_autocompleteStore;
@property __weak TUSearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
@property(readonly) TUSearchResults *searchResults;
- (void)cancelSearch;
- (void)searchForString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cleanup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

