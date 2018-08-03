//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeUI/STAllowanceSetupListController.h>

@class NSArray, NSDictionary, PSSpecifier;

@interface STAppAllowanceSetupListController : STAllowanceSetupListController
{
    NSArray *_chooseBundleIDs;
    NSDictionary *_appsByBundleID;
    PSSpecifier *_chooseAppsGroupSpecifier;
    NSArray *_chooseAppsSpecifiers;
}

@property(retain, nonatomic) NSArray *chooseAppsSpecifiers; // @synthesize chooseAppsSpecifiers=_chooseAppsSpecifiers;
@property(retain, nonatomic) PSSpecifier *chooseAppsGroupSpecifier; // @synthesize chooseAppsGroupSpecifier=_chooseAppsGroupSpecifier;
@property(copy, nonatomic) NSDictionary *appsByBundleID; // @synthesize appsByBundleID=_appsByBundleID;
@property(copy, nonatomic) NSArray *chooseBundleIDs; // @synthesize chooseBundleIDs=_chooseBundleIDs;
- (void).cxx_destruct;
- (id)appSpecifiersForBundleIDs:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)addButtonTapped:(id)arg1;
- (CDUnknownBlockType)localizedAppNameComparator;
- (id)createChooseAppsSpecifiers;
- (id)specifiers;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)viewWillAppear:(_Bool)arg1;

@end

