//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, TSWPHyperlinkField, TSWPHyperlinkSettingsViewController;

@interface TSWPHyperlinkActionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    TSWPHyperlinkField *_hyperlink;
    _Bool _readOnly;
    TSWPHyperlinkSettingsViewController *_hyperlinkSettingsViewController;
}

@property(retain, nonatomic) TSWPHyperlinkField *hyperlink; // @synthesize hyperlink=_hyperlink;
- (id)hyperlinkSettingsViewController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithHyperlink:(id)arg1 readOnly:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

