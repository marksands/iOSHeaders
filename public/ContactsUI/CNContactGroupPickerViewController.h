//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface CNContactGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_pickableGroups;
    UITableView *_tableView;
    id <CNContactGroupPickerDelegate> _groupPickerDelegate;
}

+ (id)pickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2;
+ (id)propertySections;
+ (_Bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2;
@property(nonatomic) __weak id <CNContactGroupPickerDelegate> groupPickerDelegate; // @synthesize groupPickerDelegate=_groupPickerDelegate;
- (void).cxx_destruct;
- (id)_loadPickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2;
- (void)cancel:(id)arg1;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithGroups:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

