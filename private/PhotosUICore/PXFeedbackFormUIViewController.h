//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class NSArray, NSMutableDictionary, NSString, UITableViewController, UITextView;

@interface PXFeedbackFormUIViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate>
{
    _Bool _userLikedIt;
    _Bool _wantsCustomFeedbackSection;
    _Bool _wantsPositiveFeedbackSection;
    NSArray *_positiveFeedbackKeys;
    NSMutableDictionary *_positiveFeedbackValues;
    NSArray *_negativeFeedbackKeys;
    NSMutableDictionary *_negativeFeedbackValues;
    UITextView *_customFeedbackTextView;
    UITableViewController *_tableViewController;
    id <PXFeedbackFormDelegate> _delegate;
}

@property(retain, nonatomic) id <PXFeedbackFormDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void).cxx_destruct;
- (long long)_feedbackFormSectionForSectionIndex:(long long)arg1;
- (void)_markCell:(id)arg1 asSelected:(_Bool)arg2;
- (id)_feedbackKeyForIndexPath:(id)arg1;
- (void)_setSelectionStateForKey:(id)arg1 inSection:(long long)arg2 to:(_Bool)arg3;
- (_Bool)_isSelectedRow:(id)arg1 inSection:(long long)arg2;
- (void)_handleDoneButtonWasPressedOnCustomFeedbackView;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sendFeedback:(id)arg1;
- (void)cancelFeedback:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 positiveKeys:(id)arg2 negativeKeys:(id)arg3 wantsCustomFeedbackSection:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

