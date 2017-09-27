//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDelegate.h"

@class NSString, SKUIReportAConcernConfiguration, SKUIReportAConcernDetailsDataSource, SKUIReportAConcernMetadata, UITableView;

@interface SKUIReportAConcernDetailsViewController : UIViewController <UITableViewDelegate>
{
    CDUnknownBlockType _completion;
    SKUIReportAConcernMetadata *_metadata;
    SKUIReportAConcernConfiguration *_configuration;
    SKUIReportAConcernDetailsDataSource *_dataSource;
    UITableView *_tableView;
    double _keyboardHeight;
}

@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SKUIReportAConcernDetailsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SKUIReportAConcernConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SKUIReportAConcernMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (double)_detailsCellHeight;
- (id)_detailsText;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)submitPressed:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

