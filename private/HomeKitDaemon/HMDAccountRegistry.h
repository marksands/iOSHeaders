//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "HMFTimerDelegate.h"
#import "IDSServiceDelegate.h"

@class HMDAccount, HMDDevice, HMDLocalAccountContext, HMFExponentialBackoffTimer, HMFTimer, IDSService, NSArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface HMDAccountRegistry : HMFObject <HMFTimerDelegate, IDSServiceDelegate, HMFLogging>
{
    NSMutableSet *_accounts;
    _Bool _monitoring;
    _Bool _resolved;
    HMDAccount *_currentAccount;
    HMDLocalAccountContext *_localAccountContext;
    HMDDevice *_currentDevice;
    id <HMDAccountRegistryDelegate> _delegate;
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFExponentialBackoffTimer *_accountChangeBackoffTimer;
    HMFTimer *_devicesChangeBackoffTimer;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (id)sharedRegistry;
@property(nonatomic, getter=isResolved) _Bool resolved; // @synthesize resolved=_resolved;
@property(nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(readonly, nonatomic) HMFTimer *devicesChangeBackoffTimer; // @synthesize devicesChangeBackoffTimer=_devicesChangeBackoffTimer;
@property(readonly, nonatomic) HMFExponentialBackoffTimer *accountChangeBackoffTimer; // @synthesize accountChangeBackoffTimer=_accountChangeBackoffTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property __weak id <HMDAccountRegistryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)timerDidFire:(id)arg1;
- (void)updateLocalAccountContext;
@property(retain) HMDLocalAccountContext *localAccountContext; // @synthesize localAccountContext=_localAccountContext;
- (void)_cleanupDevices;
- (void)_updateLocalDevices;
- (void)_updateLocalAccount;
- (void)stopMonitoring;
- (void)startMonitoring;
- (id)deviceForDestination:(id)arg1 shouldCreate:(_Bool)arg2;
- (id)accountForDestination:(id)arg1 shouldCreate:(_Bool)arg2;
- (void)updateCurrentDevice;
- (void)notifyDelegateCurrentDeviceChanged:(id)arg1;
@property(nonatomic) __weak HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
- (void)updateCurrentAccount;
@property(nonatomic) __weak HMDAccount *currentAccount; // @synthesize currentAccount=_currentAccount;
- (void)notifyDelegateAccountRemove:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)notifyDelegateAccountAdded:(id)arg1;
- (void)addAccount:(id)arg1;
@property(retain, nonatomic) NSArray *accounts;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithIDSService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

