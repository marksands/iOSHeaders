//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

@class NSArray, NSMutableArray, NSString, PKTableHeaderView;

@interface PKPaymentSelectPassesViewController : PKPaymentSetupTableViewController
{
    PKTableHeaderView *_headerView;
    NSArray *_passes;
    NSMutableArray *_selectedIndexPaths;
    id <PKPaymentSelectPassesViewControllerDelegate> _delegate;
    _Bool _canSelectMultiplePasses;
    NSString *_buttonText;
    NSString *_headerTitle;
    NSString *_headerSubtitle;
}

@property(copy, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(nonatomic) _Bool canSelectMultiplePasses; // @synthesize canSelectMultiplePasses=_canSelectMultiplePasses;
- (void).cxx_destruct;
- (void)_setNavigationBarEnabled:(_Bool)arg1;
- (void)_setViewEnabledState:(_Bool)arg1;
- (void)_continousButtonPressed;
- (void)_setContinousButtonEnabledState;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (id)headerView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)pkui_navigationBarTintColor;
- (_Bool)pkui_prefersNavigationBarShadowHidden;
- (id)initWithStyle:(long long)arg1 context:(long long)arg2;
- (id)initWithPaymentPasses:(id)arg1 context:(long long)arg2 delegate:(id)arg3;

@end

