//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ENGroupID, NSArray, NSData, NSDictionary, NSNumber, NSObject<OS_xpc_object>, NSSet, NSString, NSURL;

@protocol IDSDaemonProtocol <NSObject>

@optional
- (void)registrationControlGetRegistrationStateForRegistrationType:(long long)arg1 requestID:(NSString *)arg2;
- (void)registrationControlSetRegistrationStateForRegistrationType:(long long)arg1 toState:(long long)arg2 requestID:(NSString *)arg3;
- (void)appleCareSignOutUserWithRequestID:(NSString *)arg1;
- (void)appleCareSignInUserName:(NSString *)arg1 DSID:(NSString *)arg2 authToken:(NSString *)arg3 requestID:(NSString *)arg4;
- (void)homeKitRefreshUserAccessTokensWithServiceUserID:(NSString *)arg1 userID:(NSString *)arg2 accessoryRequests:(NSArray *)arg3;
- (void)homeKitGetUserAccessTokensWithServiceUserID:(NSString *)arg1 userID:(NSString *)arg2 userHandle:(NSString *)arg3 accessoryRequests:(NSArray *)arg4;
- (void)homeKitGetConsentTokensWithServiceUserID:(NSString *)arg1 accessoryIDs:(NSArray *)arg2 adminID:(NSString *)arg3;
- (void)homeKitGetAdminAccessTokensWithServiceUserID:(NSString *)arg1 accessoryID:(NSString *)arg2 pairingToken:(NSData *)arg3;
- (void)homeKitGetServiceUserIDs;
- (void)reportiMessageSpamCheckUnknown:(NSString *)arg1 count:(NSNumber *)arg2 requestID:(NSString *)arg3;
- (void)reportiMessageUnknownSender:(NSString *)arg1 messageID:(NSString *)arg2 messageServerTimestamp:(NSNumber *)arg3 toURI:(NSString *)arg4;
- (void)reportiMessageSpam:(NSArray *)arg1 toURI:(NSString *)arg2;
- (void)continuityStopTrackingPeer:(NSString *)arg1 forType:(long long)arg2;
- (void)continuityStartTrackingPeer:(NSString *)arg1 forType:(long long)arg2;
- (void)continuityDisconnectFromPeer:(NSString *)arg1;
- (void)continuityConnectToPeer:(NSString *)arg1;
- (void)continuityStopScanningForType:(long long)arg1;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 mask:(NSData *)arg3 peers:(NSArray *)arg4 boostedScan:(_Bool)arg5 duplicates:(_Bool)arg6;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 mask:(NSData *)arg3 boostedScan:(_Bool)arg4 duplicates:(_Bool)arg5;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 mask:(NSData *)arg3 peers:(NSArray *)arg4;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 mask:(NSData *)arg3;
- (void)continuityStopAdvertisingOfType:(long long)arg1;
- (void)continuityStartAdvertisingOfType:(long long)arg1 withData:(NSData *)arg2 withOptions:(NSDictionary *)arg3;
- (void)continuityClientInstanceCreated;
- (NSArray *)participantsForGroupID:(NSString *)arg1 forNotifierWithUniqueID:(NSString *)arg2;
- (void)cleanupGroupStatusNotifier:(NSString *)arg1;
- (void)setupNewStatusNotifierWithConfiguration:(NSDictionary *)arg1;
- (void)leaveGroupSession:(NSString *)arg1 participantInfo:(NSDictionary *)arg2;
- (void)joinGroupSession:(NSString *)arg1 participantInfo:(NSDictionary *)arg2;
- (void)updateMembers:(NSArray *)arg1 forGroupID:(NSString *)arg2 isTriggeredLocally:(_Bool)arg3 forSessionWithUniqueID:(NSString *)arg4;
- (void)sendAllocationRequest:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)acknowledgeSessionID:(NSString *)arg1 clientID:(NSString *)arg2;
- (void)setInviteTimetout:(long long)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setPreferences:(NSDictionary *)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setMuted:(_Bool)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setAudioEnabled:(_Bool)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)sendSessionMessage:(NSData *)arg1 toDestinations:(NSSet *)arg2 forSessionWithUniqueID:(NSString *)arg3;
- (void)endSession:(NSString *)arg1 withData:(NSData *)arg2;
- (void)endSession:(NSString *)arg1;
- (void)declineInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)declineInvitation:(NSString *)arg1;
- (void)acceptInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)acceptInvitation:(NSString *)arg1;
- (void)cancelInvitation:(NSString *)arg1 withRemoteEndedReasonOverride:(unsigned int)arg2;
- (void)cancelInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)cancelInvitation:(NSString *)arg1;
- (void)sendInvitation:(NSString *)arg1 withData:(NSData *)arg2 declineOnError:(_Bool)arg3;
- (void)sendInvitation:(NSString *)arg1 withOptions:(NSDictionary *)arg2;
- (void)cleanupSession:(NSString *)arg1;
- (void)setupNewSessionWithConfiguration:(NSDictionary *)arg1;
- (void)setNSUUID:(NSString *)arg1 onDeviceWithUniqueID:(NSString *)arg2 forService:(NSString *)arg3;
- (void)closeSocketWithOptions:(NSDictionary *)arg1;
- (void)openSocketWithOptions:(NSDictionary *)arg1;
- (void)xpcObject:(NSObject<OS_xpc_object> *)arg1 objectContext:(NSDictionary *)arg2;
- (void)registerForNotificationsOnServices:(NSSet *)arg1;
- (void)setListenerServices:(NSSet *)arg1 commands:(NSSet *)arg2 capabilities:(unsigned int)arg3;
- (void)sendAppAckWithGUID:(NSString *)arg1 toDestination:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3 connectionType:(long long)arg4;
- (void)acknowledgeMessageWithStorageGUID:(NSString *)arg1 realGUID:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3 broadcastTime:(NSNumber *)arg4 messageSize:(NSNumber *)arg5 priority:(NSNumber *)arg6 broadcastID:(long long)arg7 connectionType:(long long)arg8;
- (void)acknowledgeMessageWithGUID:(NSString *)arg1 forAccountWithUniqueID:(NSString *)arg2 broadcastTime:(NSNumber *)arg3 messageSize:(NSNumber *)arg4 priority:(NSNumber *)arg5;
- (void)acknowledgeOutgoingMessageWithGUID:(NSString *)arg1 alternateCallbackID:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3;
- (void)failedDecryptingMessage:(NSDictionary *)arg1 reason:(long long)arg2 forGroupID:(ENGroupID *)arg3 onService:(NSString *)arg4;
- (void)testCloudQRConnection:(NSString *)arg1;
- (void)startOTRTest:(NSString *)arg1 priority:(long long)arg2;
- (void)setLinkPreferences:(NSDictionary *)arg1 service:(NSString *)arg2;
- (void)setPreferInfraWiFi:(_Bool)arg1 service:(NSString *)arg2;
- (void)sendServerMessage:(NSDictionary *)arg1 command:(NSNumber *)arg2 usingAccountWithUniqueID:(NSString *)arg3;
- (void)sendPersistedFile:(NSURL *)arg1 userInfo:(NSDictionary *)arg2 toDestinations:(NSArray *)arg3 usingAccountWithUniqueID:(NSString *)arg4 identifier:(NSString *)arg5;
- (void)cancelItemWithIdentifier:(NSString *)arg1 service:(NSString *)arg2;
- (void)sendMessageWithSendParameters:(NSDictionary *)arg1;
- (void)regenerateRegisteredIdentity;
- (void)incomingAccountSyncMessage:(NSDictionary *)arg1;
- (void)setPairedDeviceInfo:(NSDictionary *)arg1;
- (void)updateSubServices:(NSArray *)arg1 forService:(NSString *)arg2 deviceUniqueID:(NSString *)arg3;
- (void)reunionSyncCompletedForServices:(NSArray *)arg1 requestID:(NSString *)arg2;
- (void)reunionSyncStartedForServices:(NSArray *)arg1 requestID:(NSString *)arg2;
- (void)dropAllMessagesWithoutAnyAllowedClassifierForDevice:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)setAllowedTrafficClassifiersForDevice:(NSString *)arg1 classifiers:(NSArray *)arg2 requestID:(NSString *)arg3;
- (void)getPairedDevicesWithRequestID:(NSString *)arg1;
- (void)getPairingDevicesWithRequestID:(NSString *)arg1;
- (void)forgetDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)unpairDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)stopLocalPairingForDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)unpairStartForDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)deletePairedDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)redeliverMessagesForDevice:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)switchActivePairedDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)setupCompletedForPairedDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)connectPairedDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)addPairedDeviceWithID:(NSString *)arg1 requestID:(NSString *)arg2;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
- (void)setAllowedTrafficClasses:(NSSet *)arg1;
- (void)initialLocalSyncCompletedForServices:(NSArray *)arg1;
- (void)initialLocalSyncStartedForServices:(NSArray *)arg1;
- (void)getDeliveryStats;
- (void)getPairedDeviceInfo;
- (void)getLocalDeviceInfo;
- (void)deletePairedDevice:(NSString *)arg1;
- (void)connectPairedDevice:(NSString *)arg1;
- (void)addPairedDevice:(NSString *)arg1;
- (void)localSetupCompleted;
- (void)localSetupUnpairStart;
- (void)localSetupUnpair;
- (void)stopLocalSetup;
- (void)startLocalSetup;
- (void)generatePhoneAuthenticationSignatureOverData:(NSData *)arg1 withRequestUUID:(NSString *)arg2;
- (void)authenticatePhoneWithRequestUUID:(NSString *)arg1;
- (void)getRegisteredIdentities;
- (void)repairAccounts;
- (void)reRegisterWithUserID:(NSString *)arg1 action:(NSNumber *)arg2 service:(NSString *)arg3;
- (void)kickGetDependentForAccount:(NSString *)arg1;
- (void)iTunesSignOut;
- (void)iTunesSignInWithUserName:(NSString *)arg1 authToken:(NSString *)arg2 password:(NSString *)arg3 accountInfo:(NSDictionary *)arg4 accountStatus:(NSNumber *)arg5 handles:(NSArray *)arg6;
- (void)iCloudSignOut;
- (void)iCloudModifyForUserName:(NSString *)arg1;
- (void)iCloudUpdateForUserName:(NSString *)arg1 accountInfo:(NSDictionary *)arg2;
- (void)iCloudSignInWithUserName:(NSString *)arg1 authToken:(NSString *)arg2 password:(NSString *)arg3 accountInfo:(NSDictionary *)arg4 accountStatus:(NSNumber *)arg5 handles:(NSArray *)arg6;
- (void)iCloudSignOutHack;
- (void)iCloudSignInHackWithUserName:(NSString *)arg1 password:(NSString *)arg2;
- (void)triggerFinalDeregister;
- (void)hardDeregister;
- (void)deactivateAndPurgeIdentifyForAccount:(NSString *)arg1;
- (void)_reregisterAndReidentify:(NSNumber *)arg1 account:(NSString *)arg2;
- (void)unregisterAccount:(NSString *)arg1;
- (void)registerAccount:(NSString *)arg1;
- (void)deactivateAlias:(NSString *)arg1 onAccount:(NSString *)arg2;
- (void)activateAlias:(NSString *)arg1 onAccount:(NSString *)arg2;
- (void)unvalidateAliases:(NSArray *)arg1 forAccount:(NSString *)arg2;
- (void)validateAliases:(NSArray *)arg1 forAccount:(NSString *)arg2;
- (void)removeAliases:(NSArray *)arg1 fromAccount:(NSString *)arg2;
- (void)addAliases:(NSArray *)arg1 toAccount:(NSString *)arg2;
- (void)validateProfileForAccount:(NSString *)arg1;
- (void)updateAuthorizationCredentials:(NSString *)arg1 token:(NSString *)arg2 forAccount:(NSString *)arg3;
- (void)passwordUpdatedForAccount:(NSString *)arg1;
- (void)authenticateAccount:(NSString *)arg1;
- (void)authenticationChangedForAccount:(NSString *)arg1;
- (void)passwordChanged:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)authTokenChanged:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)setLoginID:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)disableAccount:(NSString *)arg1;
- (void)enableAccount:(NSString *)arg1;
- (void)updateAccount:(NSString *)arg1 withAccountInfo:(NSDictionary *)arg2;
- (void)_removeAndDeregisterAccount:(NSString *)arg1;
- (void)_removeAccount:(NSString *)arg1;
- (void)addAccountWithLoginID:(NSString *)arg1 serviceName:(NSString *)arg2 uniqueID:(NSString *)arg3 accountType:(int)arg4 accountInfo:(NSDictionary *)arg5;
- (void)setupAccountWithLoginID:(NSString *)arg1 serviceName:(NSString *)arg2 accountType:(int)arg3 accountConfig:(NSDictionary *)arg4 authToken:(NSString *)arg5 password:(NSString *)arg6 transactionID:(NSString *)arg7;
@end

