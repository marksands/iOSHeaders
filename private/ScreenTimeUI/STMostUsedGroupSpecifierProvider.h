//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeUI/STShowMoreUsageGroupSpecifierProvider.h>

@class NSDictionary;

@interface STMostUsedGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider
{
    NSDictionary *_usageItemsByIdentifier;
    NSDictionary *_allowancesByActiveBudgetedIdentifier;
    unsigned long long _selectedItemType;
}

@property(nonatomic) unsigned long long selectedItemType; // @synthesize selectedItemType=_selectedItemType;
@property(copy, nonatomic) NSDictionary *allowancesByActiveBudgetedIdentifier; // @synthesize allowancesByActiveBudgetedIdentifier=_allowancesByActiveBudgetedIdentifier;
@property(copy, nonatomic) NSDictionary *usageItemsByIdentifier; // @synthesize usageItemsByIdentifier=_usageItemsByIdentifier;
- (void).cxx_destruct;
- (void)showMostUsedDetailListController:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadMostUsedSpecifiers;
- (void)toggleSelectedItemType:(id)arg1;
- (id)getUsageItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadActiveBudgetedIdentifiers;
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;
- (id)newSpecifierWithUsageItem:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end

