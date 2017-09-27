//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "MusicClientContextConsuming.h"

@class MusicClientContext, NSOperationQueue, NSString, SKUIClientContext, SKUICompletionList, SSVLoadURLOperation, UISearchBar;

@interface MusicSearchHintsViewController : UITableViewController <MusicClientContextConsuming>
{
    NSString *_baseHintsURLString;
    SKUICompletionList *_completionList;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    UISearchBar *_searchBar;
    _Bool _appendRadioTabParameter;
    MusicClientContext *_clientContext;
    id <MusicSearchHintsViewControllerDelegate> _delegate;
}

@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <MusicSearchHintsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool appendRadioTabParameter; // @synthesize appendRadioTabParameter=_appendRadioTabParameter;
@property(retain, nonatomic) SKUIClientContext *clientContext;
- (void).cxx_destruct;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (void)reloadData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

