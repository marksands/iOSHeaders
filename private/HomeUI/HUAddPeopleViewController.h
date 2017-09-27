//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CNContactPickerDelegate.h"
#import "HFContactControllerDelegate.h"
#import "IDSBatchIDQueryControllerDelegate.h"
#import "MFComposeRecipientTextViewDelegate.h"
#import "MFContactsSearchConsumer.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HFContactController, HMHome, IDSBatchIDQueryController, MFComposeRecipientTextView, MFContactsSearchManager, NSArray, NSLayoutConstraint, NSMutableArray, NSNumber, NSString, NSTimer, UIActivityIndicatorView, UIColor, UITableView, UIView;

@interface HUAddPeopleViewController : UIViewController <MFComposeRecipientTextViewDelegate, MFContactsSearchConsumer, UITableViewDelegate, UITableViewDataSource, CNContactPickerDelegate, IDSBatchIDQueryControllerDelegate, HFContactControllerDelegate>
{
    _Bool _addressBookAccessDenied;
    _Bool _showingAutoCompleteResults;
    id <HUAddPeopleViewControllerDelegate> _delegate;
    HMHome *_home;
    unsigned long long _state;
    MFComposeRecipientTextView *_composeView;
    UIView *_separatorView;
    UITableView *_tableView;
    NSLayoutConstraint *_composeViewBottomConstraint;
    NSArray *_constraints;
    UIActivityIndicatorView *_spinner;
    UIColor *_effectiveTintColor;
    HFContactController *_contactsController;
    MFContactsSearchManager *_searchManager;
    NSNumber *_lastSearchID;
    NSArray *_autoCompleteResults;
    NSMutableArray *_additionalAutoCompleteResults;
    NSArray *_familyMembers;
    NSString *_unatomizedAddress;
    NSTimer *_statusQueryDebounceTimer;
    IDSBatchIDQueryController *_statusQueryController;
}

@property(retain, nonatomic) IDSBatchIDQueryController *statusQueryController; // @synthesize statusQueryController=_statusQueryController;
@property(retain, nonatomic) NSTimer *statusQueryDebounceTimer; // @synthesize statusQueryDebounceTimer=_statusQueryDebounceTimer;
@property(retain, nonatomic) NSString *unatomizedAddress; // @synthesize unatomizedAddress=_unatomizedAddress;
@property(retain, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(retain, nonatomic) NSMutableArray *additionalAutoCompleteResults; // @synthesize additionalAutoCompleteResults=_additionalAutoCompleteResults;
@property(retain, nonatomic) NSArray *autoCompleteResults; // @synthesize autoCompleteResults=_autoCompleteResults;
@property(nonatomic) _Bool showingAutoCompleteResults; // @synthesize showingAutoCompleteResults=_showingAutoCompleteResults;
@property(retain, nonatomic) NSNumber *lastSearchID; // @synthesize lastSearchID=_lastSearchID;
@property(retain, nonatomic) MFContactsSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(retain, nonatomic) HFContactController *contactsController; // @synthesize contactsController=_contactsController;
@property(nonatomic) _Bool addressBookAccessDenied; // @synthesize addressBookAccessDenied=_addressBookAccessDenied;
@property(retain, nonatomic) UIColor *effectiveTintColor; // @synthesize effectiveTintColor=_effectiveTintColor;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSLayoutConstraint *composeViewBottomConstraint; // @synthesize composeViewBottomConstraint=_composeViewBottomConstraint;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MFComposeRecipientTextView *composeView; // @synthesize composeView=_composeView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) __weak id <HUAddPeopleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendInvites;
- (id)recipientsWithStatusPassingTest:(CDUnknownBlockType)arg1;
- (void)lookupIDSDestinations:(id)arg1;
- (void)lookupVisibleRecipients;
- (void)scheduleDelayedLookupVisibleRecipients;
- (id)composeRecipientForAddress:(id)arg1;
- (id)IDSDestinationForRecipient:(id)arg1;
- (id)requiredKeyDescriptors;
- (void)updateStateDependentUI;
- (id)tintColorForRecipient:(id)arg1;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactController:(id)arg1 didFinishDownloadingFamilyMemberAvatar:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sendButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)updateViewConstraints;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithHome:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

