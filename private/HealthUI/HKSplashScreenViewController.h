//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HKSplashScreenView, NSMutableArray, NSString, UIButton;

@interface HKSplashScreenViewController : HKViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_splashItems;
    long long _splashVersion;
}

+ (id)splashScreenForSplashScreenVersion:(long long)arg1;
+ (void)markSplashScreenAtVersion:(long long)arg1;
@property(nonatomic) long long splashVersion; // @synthesize splashVersion=_splashVersion;
@property(retain, nonatomic) NSMutableArray *splashItems; // @synthesize splashItems=_splashItems;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addSplashScreenViewControllerItem:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) HKSplashScreenView *splashScreenView;
@property(readonly) UIButton *continueButton;
- (id)initForSplashScreenVersion:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
