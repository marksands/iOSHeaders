//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMDaemonCore/IMDServiceSession.h>

@class IDSAccount, NSArray, NSString;

@interface IMDAppleServiceSession : IMDServiceSession
{
    NSString *_serviceName;
    NSString *_GUID;
}

@property(readonly, retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(readonly, nonatomic) NSString *serviceType;
@property(readonly, retain, nonatomic) NSString *callerID;
- (void)clearCallerIDForAccount:(id)arg1;
- (void)clearCallerID;
- (id)certForURI:(id)arg1;
- (id)idsAccountForFromURI:(id)arg1 toURI:(id)arg2;
- (id)idsAccountForURI:(id)arg1 IDSServiceName:(id)arg2;
- (id)callerURIForIDSAccount:(id)arg1;
@property(readonly, retain, nonatomic) NSString *callerURI;
- (long long)validationStatusForAlias:(id)arg1 onAccount:(id)arg2;
- (long long)validationStatusForAlias:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *aliases;
@property(readonly, retain, nonatomic) NSArray *vettedAliases;
- (void)reIdentify;
- (void)reregister;
- (void)activeDevicesUpdated;
- (void)refreshRegistration;
- (id)certForURI:(id)arg1 onIDSAccount:(id)arg2;
- (void)validateProfileWithAccount:(id)arg1;
- (void)unvalidateAliases:(id)arg1 account:(id)arg2;
- (void)validateAliases:(id)arg1 account:(id)arg2;
- (void)addAliases:(id)arg1 account:(id)arg2;
- (void)removeAliases:(id)arg1 account:(id)arg2;
- (id)_aliasesForIDSAccount:(id)arg1;
- (id)_aliases;
- (id)_aliasStringsForIDSAccount:(id)arg1;
- (long long)_validationStatusForAlias:(id)arg1 onAccount:(id)arg2;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 account:(id)arg3;
- (void)passwordUpdatedWithAccount:(id)arg1;
- (void)unregisterAccount:(id)arg1;
- (void)registerAccount:(id)arg1;
- (void)authenticateAccount:(id)arg1;
- (void)logoutServiceSessionWithAccount:(id)arg1;
- (void)loginServiceSessionWithAccount:(id)arg1;
- (void)sessionWillBecomeInactiveWithAccount:(id)arg1;
- (void)sessionDidBecomeActive;
- (void)_updateAccountStatusToUnregistered:(_Bool)arg1 withAccount:(id)arg2;
- (_Bool)_isDeviceRegisteredForAccount:(id)arg1;
- (_Bool)_isDeviceRegistered;
@property(readonly, nonatomic) NSArray *registeredURIs;
- (id)imdAccountForIDSAccount:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *idsAccounts;
@property(readonly, retain, nonatomic) IDSAccount *idsAccount;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 service:(id)arg2;

@end

