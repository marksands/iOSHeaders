//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CDPContext, CDPFollowUpContext, NSString;

@protocol CDPDaemonProtocol
- (void)postFollowUpWithContext:(CDPFollowUpContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)clearFollowUpWithContext:(CDPFollowUpContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)performRecoveryWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 authProvider:(id <CDPAuthProviderInternal>)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (void)removeNonViewAwarePeersFromCircleWithContext:(CDPContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setUserVisibleKeychainSyncEnabled:(_Bool)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)isUserVisibleKeychainSyncEnabledWithCompletion:(void (^)(_Bool))arg1;
- (void)hasLocalSecretWithCompletion:(void (^)(_Bool))arg1;
- (void)isICDPEnabledForDSID:(NSString *)arg1 checkWithServer:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)generateRandomRecoveryKeyWithContext:(CDPContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)deleteRecoveryKeyWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)generateNewRecoveryKeyWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)finishOfflineLocalSecretChangeWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)localSecretChangedTo:(NSString *)arg1 secretType:(unsigned long long)arg2 context:(CDPContext *)arg3 uiProvider:(id <CDPStateUIProviderInternal>)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)recoverSquirrelWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)recoverAndSynchronizeSquirrelWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)shouldPerformRepairForContext:(CDPContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)repairCloudDataProtectionStateWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)startCircleApplicationApprovalServerWithContext:(CDPContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)handleCloudDataProtectionStateWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 completion:(void (^)(_Bool, _Bool, NSError *))arg3;
@end

