//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "STAllowanceDetailListControllerDelegate.h"
#import "STAllowanceSetupListControllerDelegate.h"

@class NSObject<STRootViewModelCoordinator>, NSString, PSSpecifier;

@interface STAllowanceListController : PSListController <STAllowanceDetailListControllerDelegate, STAllowanceSetupListControllerDelegate>
{
    NSObject<STRootViewModelCoordinator> *_coordinator;
    PSSpecifier *_addAllowanceSpecifier;
}

@property(retain, nonatomic) PSSpecifier *addAllowanceSpecifier; // @synthesize addAllowanceSpecifier=_addAllowanceSpecifier;
@property(retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)allowanceSetupListControllerDidCancel:(id)arg1;
- (void)allowanceSetupListController:(id)arg1 didSelectAllowanceIdentifiers:(id)arg2;
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (void)addAllowance:(id)arg1;
- (void)showBudgetDetailController:(id)arg1;
- (id)budgetDetailText:(id)arg1;
- (id)budgetSpecifiers;
- (id)specifiers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

