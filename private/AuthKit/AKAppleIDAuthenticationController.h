//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString, NSXPCConnection, NSXPCListenerEndpoint, _AKAppleIDAuthenticationContextManager;

@interface AKAppleIDAuthenticationController : NSObject
{
    NSString *_serviceID;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
    NSXPCConnection *_authenticationServiceConnection;
    _AKAppleIDAuthenticationContextManager *_contextManager;
    NSLock *_connectionLock;
    CDUnknownBlockType _deallocHandler;
}

+ (id)sensitiveAuthenticationKeys;
@property(copy, nonatomic) CDUnknownBlockType deallocHandler; // @synthesize deallocHandler=_deallocHandler;
- (void).cxx_destruct;
- (id)_authenticationServiceConnection;
- (id)urlBagWithError:(id *)arg1;
- (void)fetchURLBagWithCompletion:(CDUnknownBlockType)arg1;
- (id)emailsForAltDSID:(id)arg1;
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)persistMasterKeyVerifier:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyMasterKey:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)synchronizeFollowUpItemsForContext:(id)arg1 error:(id *)arg2;
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)activeLoginCode:(id *)arg1;
- (_Bool)isDevicePasscodeProtected:(id *)arg1;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkSecurityUpgradeEligibilityForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchDeviceListWithContext:(id)arg1 error:(id *)arg2;
- (void)fetchDeviceListWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAppleIDWithDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3;
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3;
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <AKAppleIDAuthenticationDelegate> delegate;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 daemonXPCEndpoint:(id)arg2;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

