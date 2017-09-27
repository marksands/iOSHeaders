//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICUserIdentityStoreBackendDelegate.h"
#import "NSSecureCoding.h"

@class ACAccountStore, ICDelegateAccountStore, ICDelegateAccountStoreOptions, ICUserIdentityStoreCoding, ICValueHistory, NSError, NSObject<OS_dispatch_queue>, NSString;

@interface ICUserIdentityStore : NSObject <ICUserIdentityStoreBackendDelegate, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ACAccountStore *_accountStore;
    ICValueHistory *_activeAccountHistory;
    ICValueHistory *_activeLockerAccountHistory;
    id <ICUserIdentityStoreBackend> _backend;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    ICUserIdentityStoreCoding *_codingHelper;
    ICDelegateAccountStore *_delegateAccountStore;
    // Error parsing type: AB, name: _delegateAccountStoreDidOpenOnce
    NSError *_delegateAccountStoreError;
    ICDelegateAccountStoreOptions *_delegateAccountStoreOptions;
}

+ (_Bool)supportsSecureCoding;
+ (id)testingIdentityStoreWithSingleWriterService:(id)arg1;
+ (id)testingIdentityStoreWithDatabasePath:(id)arg1;
+ (void)_claimSingleWriterStatus;
+ (id)defaultIdentityStore;
@property(readonly, nonatomic) id <ICUserIdentityStoreBackend> _unsafeBackend; // @synthesize _unsafeBackend=_backend;
- (void).cxx_destruct;
- (void)_saveIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_openDelegateAccountStoreOnceIfNecessaryForUserIdentity:(id)arg1;
- (void)_openDelegateAccountStoreOnce;
- (void)_importValuesFromCodingHelper:(id)arg1;
- (id)_existingIdentityPropertiesForUserIdentity:(id)arg1;
- (id)_dsidForUserIdentity:(id)arg1;
- (id)_dsidForTimestamp:(unsigned long long)arg1 history:(id)arg2;
- (void)_dispatchDidChange:(_Bool)arg1 result:(_Bool)arg2 error:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)_allowsDelegationForUserIdentity:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_updateDelegateAccountStoreUsingBlock:(CDUnknownBlockType)arg1;
- (void)_unsafe_deleteDelegateAccountStore;
- (void)_resetDelegateAccountStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reloadForExternalChange;
- (void)_prepareDelegateAccountStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_delegateAccountStorePath;
- (void)userIdentityStoreBackendDidChange:(id)arg1;
- (void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)synchronize;
- (void)setActiveLockerAccountWithDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setActiveAccountWithDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeDelegateTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDelegateTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllDelegateTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getVerificationContextForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPropertiesForActiveICloudAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getDelegationUUIDsForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enumerateDelegateTokensWithType:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enumerateDelegateTokensUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)_initWithStyle:(long long)arg1 delegateAccountStoreOptions:(id)arg2;
- (id)_initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

