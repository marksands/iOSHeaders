//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPerformActionView-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSDateFormatter, NSString, PKPass, PKPaymentPassAction, PKPerformActionSelectItemExpiresHeader, PKSelectedItemActionItem, UITableView, UITextField;
@protocol PKPerformActionViewDelegate;

@interface PKPerformActionSelectItemView : UIView <UITableViewDelegate, UITableViewDataSource, PKPerformActionView>
{
    PKPass *_pass;
    PKPaymentPassAction *_action;
    NSDateFormatter *_dateFormatter;
    PKSelectedItemActionItem *_selectedItem;
    UITableView *_tableView;
    PKPerformActionSelectItemExpiresHeader *_expiresHeader;
    id <PKPerformActionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PKPerformActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addSubviews;
@property(readonly, nonatomic) UITextField *amountTextField;
- (id)serviceProviderData;
- (id)transactionCurrency;
- (id)transactionAmount;
- (id)pass;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_optionsSectionFooterText;
- (id)_optionsSectionHeaderText;
- (_Bool)_showsExpirationSection;
- (void)saveLastInputValues;
- (void)layoutSubviews;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

