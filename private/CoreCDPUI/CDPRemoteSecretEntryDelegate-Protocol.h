//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CDPDevice, CDPRemoteSecretEntryViewController, NSError;

@protocol CDPRemoteSecretEntryDelegate
- (_Bool)performingAccountRecovery;
- (void)dismissRecoveryFlow:(CDPRemoteSecretEntryViewController *)arg1 completion:(void (^)(void))arg2;
- (void)finishValidation:(CDPRemoteSecretEntryViewController *)arg1 withError:(NSError *)arg2;
- (void)performAccountReset:(CDPRemoteSecretEntryViewController *)arg1;
- (void)performRemoteApproval:(CDPRemoteSecretEntryViewController *)arg1;
- (void)performRecoveryKeyRecovery:(CDPRemoteSecretEntryViewController *)arg1;
- (void)remoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1 depletedRemainingAttemptsForDevice:(CDPDevice *)arg2;
- (void)exceededMaximumAttemptsForRemoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1;
- (void)cancelledRemoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1;
- (void)remoteSecretEntry:(CDPRemoteSecretEntryViewController *)arg1 didAcceptValidRemoteSecretForDevice:(CDPDevice *)arg2;
@end

