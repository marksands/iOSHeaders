//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import <HealthUI/HKTitledBuddyHeaderViewDelegate-Protocol.h>
#import <HealthUI/UITableViewDataSource-Protocol.h>
#import <HealthUI/UITableViewDelegate-Protocol.h>

@class HKOrganDonationConnectionManager, HKOrganDonationRegistrant, NSArray, NSString, UIActivityIndicatorView, UIButton, UIFont, UITableView, UIView, UIVisualEffectView, _HKMedicalIDData;

@interface HKOrganDonationConfirmationViewController : HKViewController <HKTitledBuddyHeaderViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    HKOrganDonationConnectionManager *_connectionManager;
    HKOrganDonationRegistrant *_registrant;
    UIView *_headerView;
    UIVisualEffectView *_footerView;
    UIFont *_bodyFont;
    NSString *_completionButtonTitle;
    CDUnknownBlockType _registrationCompletionHandler;
    UITableView *_tableView;
    UIActivityIndicatorView *_loadingIndicator;
    _HKMedicalIDData *_medicalIDData;
    NSArray *_dataEntryItems;
    UIButton *_submitButton;
}

@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) NSArray *dataEntryItems; // @synthesize dataEntryItems=_dataEntryItems;
@property(retain, nonatomic) _HKMedicalIDData *medicalIDData; // @synthesize medicalIDData=_medicalIDData;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType registrationCompletionHandler; // @synthesize registrationCompletionHandler=_registrationCompletionHandler;
@property(retain, nonatomic) NSString *completionButtonTitle; // @synthesize completionButtonTitle=_completionButtonTitle;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1;
- (void)confirmSubmissionIfNecessaryWithConfirmHandler:(CDUnknownBlockType)arg1 andCancelHandler:(CDUnknownBlockType)arg2;
- (void)submitButtonTapped:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)_createTableFooterView;
- (id)_createTableHeaderView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithRegistrant:(id)arg1 medicalIDData:(id)arg2 connectionManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

