//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDMediaAccessory.h>

#import "HMDAccessoryDisassociation.h"
#import "HMDAccessoryMinimumUserPrivilegeCapable.h"
#import "HMDAccessoryUserManagement.h"
#import "HMFLogging.h"

@class HMFPairingIdentity, NSString;

@interface HMDAirPlayAccessory : HMDMediaAccessory <HMDAccessoryMinimumUserPrivilegeCapable, HMDAccessoryDisassociation, HMDAccessoryUserManagement, HMFLogging>
{
    HMFPairingIdentity *_pairingIdentity;
    NSString *_password;
    long long _minimumUserPriviledge;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)pairingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) _Bool supportsUserManagement;
- (void)disassociateWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) _Bool supportsDisassociation;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)backingStoreObjects:(long long)arg1;
- (void)setMinimumUserPriviledge:(long long)arg1;
@property(readonly) long long minimumUserPriviledge; // @synthesize minimumUserPriviledge=_minimumUserPriviledge;
- (void)setPassword:(id)arg1;
@property(readonly, copy) NSString *password; // @synthesize password=_password;
- (void)setPairingIdentity:(id)arg1;
@property(readonly, copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)handleUpdatedPassword:(id)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (_Bool)supportsMinimumUserPrivilege;
- (void)handleUpdatedName:(id)arg1;
- (void)handleUpdatedAdvertisement:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
