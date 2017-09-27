//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFDumpState.h"
#import "HMFLogging.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString;

@interface HMDRemoteIdentityRegistry : HMFObject <HMFLogging, HMFDumpState>
{
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSMapTable *_accountIdentities;
    NSMapTable *_deviceIdentities;
}

+ (id)logCategory;
+ (id)shortDescription;
@property(readonly, nonatomic) NSMapTable *deviceIdentities; // @synthesize deviceIdentities=_deviceIdentities;
@property(readonly, nonatomic) NSMapTable *accountIdentities; // @synthesize accountIdentities=_accountIdentities;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
- (void).cxx_destruct;
- (id)dumpState;
- (void)reset;
- (id)pairingIdentityForIdentifier:(id)arg1;
- (id)pairingIdentityForAccount:(id)arg1;
- (id)pairingIdentityForDevice:(id)arg1;
- (void)registerPairingIdentity:(id)arg1 forAccount:(id)arg2;
- (void)registerPairingIdentity:(id)arg1 forDevice:(id)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

