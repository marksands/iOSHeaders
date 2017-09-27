//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDelegate.h"

@class NSString, SKUIReportAConcernConfiguration, SKUIReportAConcernReasonDataSource, UITableView;

@interface SKUIReportAConcernReasonViewController : UIViewController <UITableViewDelegate>
{
    CDUnknownBlockType _completion;
    SKUIReportAConcernConfiguration *_configuration;
    SKUIReportAConcernReasonDataSource *_dataSource;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SKUIReportAConcernReasonDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SKUIReportAConcernConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancelPressed:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

