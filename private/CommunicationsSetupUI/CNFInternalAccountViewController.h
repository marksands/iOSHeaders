//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class FTRegConnectionHandler, IMAccount;

@interface CNFInternalAccountViewController : PSListController
{
    IMAccount *_account;
    FTRegConnectionHandler *_connectionHandler;
}

@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_startListeningForNotifications;
- (id)accountIsActive:(id)arg1;
- (id)registrationFailureReason:(id)arg1;
- (id)accountDisplayName:(id)arg1;
- (id)statusForAlias:(id)arg1;
- (id)accountType:(id)arg1;
- (id)accountLogin:(id)arg1;
- (id)registrationStatus:(id)arg1;
- (id)accountLoginStatus:(id)arg1;
- (_Bool)isConnectedToDaemon;
- (id)specifierForAlias:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)bundle;
- (id)specifiers;
- (id)initWithAccount:(id)arg1;

@end

