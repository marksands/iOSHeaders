//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class MCProfile, NSString;
@protocol MCInstallationConsentDelegate;

@interface MCInstallationConsentViewController : UITableViewController <PSStateRestoration>
{
    _Bool _showInstall;
    MCProfile *_profile;
    id <MCInstallationConsentDelegate> _consentDelegate;
}

@property(nonatomic) _Bool showInstall; // @synthesize showInstall=_showInstall;
@property(nonatomic) __weak id <MCInstallationConsentDelegate> consentDelegate; // @synthesize consentDelegate=_consentDelegate;
@property(retain, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_installProfile;
- (void)_cancelInstallProfile;
- (_Bool)canBeShownFromSuspendedState;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)_setup;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

