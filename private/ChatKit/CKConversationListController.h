//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "CKConversationListCellDelegate.h"
#import "CKConversationResultsControllerDelegate.h"
#import "CKTranscriptPreviewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITableViewDragDestinationDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"
#import "UIViewControllerPreviewingDelegate_Private.h"

@class CKCloudKitSyncProgressViewController, CKConversation, CKConversationList, CKConversationSearchResultsController, CKMessagesController, CKScheduledUpdater, NSArray, NSIndexPath, NSString, UIBarButtonItem, UISearchController, UITableView, UIView;

@interface CKConversationListController : UITableViewController <UISearchControllerDelegate, UISearchBarDelegate, CKConversationResultsControllerDelegate, CKConversationListCellDelegate, UITableViewDragDestinationDelegate, CKTranscriptPreviewControllerDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate>
{
    UITableView *_table;
    NSIndexPath *_previouslySelectedIndexPath;
    unsigned int _isVisible:1;
    unsigned int _willRotate:1;
    _Bool _isInitialLoad;
    _Bool _isInitialAppearance;
    _Bool _isShowingSwipeDeleteConfirmation;
    CKConversationList *_conversationList;
    CKMessagesController *_messagesController;
    CKCloudKitSyncProgressViewController *_syncProgressViewController;
    UIBarButtonItem *_currentEditButtonItem;
    CKScheduledUpdater *_updater;
    UIView *_noMessagesDialogView;
    NSArray *_frozenConversations;
    unsigned long long _filteredConversationCount;
    long long _filterMode;
    NSArray *_filteredWhitelistedConversations;
    NSArray *_filteredJunkConversations;
    NSArray *_nonPlaceholderConversations;
    CKConversation *_conversationChangingPinState;
    double _conversationCellHeight;
    UISearchController *_searchController;
    CKConversationSearchResultsController *_searchResultsController;
    UIBarButtonItem *_composeButton;
    CDUnknownBlockType _searchCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType searchCompletion; // @synthesize searchCompletion=_searchCompletion;
@property(retain, nonatomic) UIBarButtonItem *composeButton; // @synthesize composeButton=_composeButton;
@property(retain, nonatomic) CKConversationSearchResultsController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) double conversationCellHeight; // @synthesize conversationCellHeight=_conversationCellHeight;
@property(retain, nonatomic) CKConversation *conversationChangingPinState; // @synthesize conversationChangingPinState=_conversationChangingPinState;
@property(retain, nonatomic) NSArray *nonPlaceholderConversations; // @synthesize nonPlaceholderConversations=_nonPlaceholderConversations;
@property(retain, nonatomic) NSArray *filteredJunkConversations; // @synthesize filteredJunkConversations=_filteredJunkConversations;
@property(retain, nonatomic) NSArray *filteredWhitelistedConversations; // @synthesize filteredWhitelistedConversations=_filteredWhitelistedConversations;
@property(nonatomic) long long filterMode; // @synthesize filterMode=_filterMode;
@property(nonatomic) unsigned long long filteredConversationCount; // @synthesize filteredConversationCount=_filteredConversationCount;
@property(copy, nonatomic) NSArray *frozenConversations; // @synthesize frozenConversations=_frozenConversations;
@property(retain, nonatomic) UIView *noMessagesDialogView; // @synthesize noMessagesDialogView=_noMessagesDialogView;
@property(retain, nonatomic) CKScheduledUpdater *updater; // @synthesize updater=_updater;
@property(nonatomic) _Bool isShowingSwipeDeleteConfirmation; // @synthesize isShowingSwipeDeleteConfirmation=_isShowingSwipeDeleteConfirmation;
@property(retain, nonatomic) UIBarButtonItem *currentEditButtonItem; // @synthesize currentEditButtonItem=_currentEditButtonItem;
@property(retain, nonatomic) NSIndexPath *previouslySelectedIndexPath; // @synthesize previouslySelectedIndexPath=_previouslySelectedIndexPath;
@property(nonatomic) __weak CKMessagesController *messagesController; // @synthesize messagesController=_messagesController;
@property(nonatomic) __weak CKConversationList *conversationList; // @synthesize conversationList=_conversationList;
- (void).cxx_destruct;
- (void)cloudKitSyncProgressViewController:(id)arg1 actionButtonWasPressed:(long long)arg2 errors:(id)arg3;
- (void)cloudKitSyncProgressViewControllerDidChangeVisibility:(id)arg1;
- (void)_updateSyncProgressIfNeeded;
@property(readonly, nonatomic) _Bool shouldShowPendingCell;
- (void)selectConversationClosestToDeletedIndex:(unsigned long long)arg1;
- (void)selectNextSequentialConversation:(_Bool)arg1;
- (void)selectDefaultConversationAnimated:(_Bool)arg1;
- (void)_selectConversationAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)_indexOfDefaultConversation;
- (unsigned long long)_indexOfConverationClosestToDeletedIndex:(unsigned long long)arg1;
- (void)_updateInsets;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (_Bool)_tableView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)searcherDidComplete:(id)arg1;
- (void)searcher:(id)arg1 userDidDeleteChatGUID:(id)arg2;
- (void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;
- (id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)_filterCellSelectionChanged:(id)arg1;
- (void)_dismissDetailsController:(id)arg1;
- (void)avatarHeaderWasTappedForConversation:(id)arg1 inCell:(id)arg2;
- (double)tableViewSpacingForExtraSeparators:(id)arg1;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)pinConversationButtonTappedForIndexPath:(id)arg1 setPinned:(_Bool)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)muteConversationButtonTappedForIndexPath:(id)arg1 setMuted:(_Bool)arg2;
- (void)markAsReadButtonTappedForIndexPath:(id)arg1;
- (void)markAsReadButtonTapped:(id)arg1;
- (void)deleteButtonTappedForIndexPath:(id)arg1;
- (void)batchDeleteButtonTapped:(id)arg1;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 trailingSwipeActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)composeButtonClicked:(id)arg1;
- (void)_updateToolbarItems;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)inputAccessoryView;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)performResumeDeferredSetup;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (id)actionsForTranscriptPreviewController:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)committedViewControllerForPreviewViewController:(id)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)previewViewControllerForRowAtIndexPath:(id)arg1;
@property(readonly, nonatomic) _Bool isVisible;
- (void)applicationWillSuspend;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) CKCloudKitSyncProgressViewController *syncProgressViewController; // @synthesize syncProgressViewController=_syncProgressViewController;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (id)_mergeUnsentComposition:(id)arg1 withDroppedComposition:(id)arg2;
- (void)_showConversationWithComposition:(id)arg1 atIndexPath:(id)arg2;
- (void)performSearch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateNonPlaceholderConverationLists;
- (void)_updateFilteredConversationLists;
- (void)_updateConversationFilteredFlagsAndReportSpam;
- (void)updateNoMessagesDialog;
- (void)updateConversationList;
- (void)updateSMSSpamConversationsDisplayName;
- (void)endHoldingConversationListUpdatesForKey:(id)arg1;
- (void)beginHoldingConversationListUpdatesForKey:(id)arg1;
- (void)scrollToTop;
- (void)significantTimeChange;
- (void)noteUnreadCountsChanged;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (void)updateConversationSelection;
- (void)updateCurrentEditButton;
- (void)editButtonTapped:(id)arg1;
- (void)updateNavigationItems;
- (void)_updateTableViewRowHeights;
- (_Bool)_shouldKeepSelection;
- (void)_groupsChanged:(id)arg1;
- (void)_conversationMessageWasSent:(id)arg1;
- (void)_conversationListDidChange:(id)arg1;
- (void)_conversationListDidFinishLoadingConversations:(id)arg1;
- (void)_chatWatermarkDidChange:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_conversationPinStateChangedNotification:(id)arg1;
- (void)_conversationContactPhotosEnabledChangedNotification:(id)arg1;
- (void)_conversationSpamFilteringStateChangedNotification:(id)arg1;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (void)_conversationMuteDidChangeNotification:(id)arg1;
- (void)_conversationDisplayNameChangedNotification:(id)arg1;
- (void)_conversationIsFilteredChangedNotification:(id)arg1;
- (void)_chatParticipantsChangedNotification:(id)arg1;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)accessibilityLargeTextDidChange;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (_Bool)_shouldResizeNavigationBar;
- (void)invalidateCellLayout;
- (void)dealloc;
- (id)init;
- (id)activeConversations;
- (void)updateFilterControl:(id)arg1;
- (Class)conversationListCellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

