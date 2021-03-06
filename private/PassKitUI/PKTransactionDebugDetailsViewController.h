//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSDictionary, PKPaymentTransaction, UITableViewCell;

@interface PKTransactionDebugDetailsViewController : UITableViewController
{
    PKPaymentTransaction *_transaction;
    UITableViewCell *_mapsCell;
    NSDictionary *_transactionDetails;
    NSDictionary *_merchantDetails;
}

@property(retain, nonatomic) NSDictionary *merchantDetails; // @synthesize merchantDetails=_merchantDetails;
@property(retain, nonatomic) NSDictionary *transactionDetails; // @synthesize transactionDetails=_transactionDetails;
- (void).cxx_destruct;
- (void)_didSelectMap;
- (id)_cellWithPrimaryText:(id)arg1 infoText:(id)arg2;
- (id)_mapsCell;
- (_Bool)_hasMUID;
- (id)_merchantInfoCellForIndex:(long long)arg1;
- (id)_transactionInfoCellForIndex:(long long)arg1;
- (id)_stringForTransactionSource:(unsigned long long)arg1;
- (id)_stringForTechnologyType:(long long)arg1;
- (id)_stringForTransactionType:(long long)arg1;
- (id)_stringForTransactionStatus:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1;

@end

