//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/CNContactPickerDelegate-Protocol.h>
#import <HomeUI/HUUserManagementDelegate-Protocol.h>
#import <HomeUI/MFComposeRecipientViewDelegate-Protocol.h>
#import <HomeUI/MFContactsSearchConsumer-Protocol.h>
#import <HomeUI/UITableViewDataSource-Protocol.h>
#import <HomeUI/UITableViewDelegate-Protocol.h>

@class HMHome, MFComposeRecipientView, MFContactsSearchManager, MFContactsSearchResultsModel, MFSearchShadowView, NSArray, NSNumber, NSString, UIScrollView, UITableView;
@protocol HUAddUserViewControllerDelegate;

@interface HUAddUserViewController : UIViewController <MFComposeRecipientViewDelegate, MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate, CNContactPickerDelegate, HUUserManagementDelegate>
{
    _Bool _showingSearchField;
    _Bool _addressBookAccessDenied;
    HMHome *_home;
    id <HUAddUserViewControllerDelegate> _delegate;
    MFComposeRecipientView *_composeView;
    UIScrollView *_composeScrollView;
    UITableView *_searchResultsView;
    MFSearchShadowView *_shadowView;
    MFContactsSearchResultsModel *_searchResultsModel;
    MFContactsSearchManager *_searchManager;
    NSArray *_searchResults;
    NSNumber *_lastSearchID;
}

@property(nonatomic) _Bool addressBookAccessDenied; // @synthesize addressBookAccessDenied=_addressBookAccessDenied;
@property(copy, nonatomic) NSNumber *lastSearchID; // @synthesize lastSearchID=_lastSearchID;
@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) MFContactsSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(retain, nonatomic) MFContactsSearchResultsModel *searchResultsModel; // @synthesize searchResultsModel=_searchResultsModel;
@property(nonatomic) _Bool showingSearchField; // @synthesize showingSearchField=_showingSearchField;
@property(retain, nonatomic) MFSearchShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UITableView *searchResultsView; // @synthesize searchResultsView=_searchResultsView;
@property(retain, nonatomic) UIScrollView *composeScrollView; // @synthesize composeScrollView=_composeScrollView;
@property(retain, nonatomic) MFComposeRecipientView *composeView; // @synthesize composeView=_composeView;
@property(nonatomic) __weak id <HUAddUserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (void)updateHome:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)_addRecipientFromSelectedContactProperty:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)animationDidStop:(id)arg1;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 identifier:(int)arg3;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)_searchWithText:(id)arg1;
- (double)_maxScrollerHeight;
- (void)_hideSearchFieldAndCancelOutstandingSearches:(_Bool)arg1;
- (void)_showSearchField;
- (void)_addTapped;
- (void)_cancelTapped;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

