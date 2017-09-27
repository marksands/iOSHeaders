//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PSController.h"

@class NSString, PSRootController, PSSpecifier, UIViewController<PSController>;

__attribute__((visibility("hidden")))
@interface PUStorageManagementBaseController : UIViewController <PSController>
{
    PSSpecifier *_specifier;
    id _preferenceValue;
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
}

- (void).cxx_destruct;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)handleURL:(id)arg1;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (void)showController:(id)arg1;
- (void)didWake;
- (void)didUnlock;
- (void)willUnlock;
- (void)didLock;
- (void)suspend;
- (_Bool)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)specifier;
- (void)setSpecifier:(id)arg1;
- (id)rootController;
- (void)setRootController:(id)arg1;
- (id)parentController;
- (void)setParentController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

