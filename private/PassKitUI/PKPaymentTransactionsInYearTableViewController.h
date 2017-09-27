//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "CNAvatarViewDelegate.h"

@class NSArray, NSCalendar, NSDate, NSDateFormatter, NSString, PKPaymentPass, PKPaymentTransactionCellController, PKPeerPaymentContactResolver, PKPeerPaymentController;

@interface PKPaymentTransactionsInYearTableViewController : UITableViewController <CNAvatarViewDelegate>
{
    NSDate *_dateFromYear;
    NSCalendar *_calendar;
    NSArray *_transactionsByMonth;
    PKPaymentPass *_paymentPass;
    id <PKPaymentDataProvider> _paymentServiceDataProvider;
    PKPaymentTransactionCellController *_transactionCellController;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPeerPaymentController *_peerPaymentController;
    NSDateFormatter *_transactionMonthFormatter;
}

- (void).cxx_destruct;
- (void)_fetchDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_transactionMonthFormatter;
- (id)_transactionsInYearTitleString;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDateFromYear:(id)arg1 calendar:(id)arg2 paymentPass:(id)arg3 paymentServiceDataProvider:(id)arg4 contactResolver:(id)arg5 peerPaymentController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

