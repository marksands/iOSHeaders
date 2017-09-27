//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BFFPaneHeaderView, NSString, UITableView, UIView;

@interface CDPTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_headerTitle;
    NSString *_headerSubTitle;
    CDUnknownBlockType _completionHandler;
    UIView *_containerView;
    UITableView *_tableView;
    BFFPaneHeaderView *_headerView;
}

@property(retain, nonatomic) BFFPaneHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *headerSubTitle; // @synthesize headerSubTitle=_headerSubTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (double)heightForHeaderInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) _Bool uiTestMode;
@property(readonly, nonatomic) _Bool isiPhone5OrSmaller;
@property(readonly, nonatomic) _Bool isIPad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(readonly, copy, nonatomic) NSString *deviceClass;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

