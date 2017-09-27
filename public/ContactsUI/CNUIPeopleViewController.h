//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "CNContactListBannerViewDelegate.h"

@class CNContactFormatter, CNContactListBannerView, CNContactStore, CNUIContactsEnvironment, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIPeopleViewController : UITableViewController <CNContactListBannerViewDelegate>
{
    NSArray *_people;
    CNContactFormatter *_formatter;
    CNUIContactsEnvironment *_environment;
    CNContactListBannerView *_meBanner;
    CNContactStore *_contactStore;
}

@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContactListBannerView *meBanner; // @synthesize meBanner=_meBanner;
@property(retain, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) CNContactFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
- (void).cxx_destruct;
- (void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showContact:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (id)descriptorForRequiredKeys;
- (id)initWithEnvironment:(id)arg1 contactStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

