//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFMessageReceiver.h"
#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class ACAccount, HMAccessory, HMDelegateCaller, HMFMessageDispatcher, HMRemoteLoginAnisetteDataProvider, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMRemoteLoginHandler : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    ACAccount *_loggedInAccount;
    NSString *_currentSessionID;
    NSUUID *_uniqueIdentifier;
    HMRemoteLoginAnisetteDataProvider *_anisetteDataProvider;
    NSUUID *_uuid;
    HMAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMDelegateCaller *_delegateCaller;
    HMFMessageDispatcher *_msgDispatcher;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) HMRemoteLoginAnisetteDataProvider *anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_handleRemoteLoginSignoutResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_signout:(CDUnknownBlockType)arg1;
- (void)signout:(CDUnknownBlockType)arg1;
- (void)_handleLoginResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_proxyLoginWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)proxyLoginWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleQueryProxiedDeviceResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queryProxiedDevice:(CDUnknownBlockType)arg1;
- (void)queryProxiedDevice:(CDUnknownBlockType)arg1;
- (void)_companionLoginWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)companionLoginWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_callAccountUpdateDelegate:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_handleRemoteLoginAccountUpdated:(id)arg1;
@property(readonly, nonatomic, getter=isSessionInProgress) _Bool sessionInProgress;
@property(retain, nonatomic) NSString *currentSessionID; // @synthesize currentSessionID=_currentSessionID;
- (void)setLoggedInAccount:(id)arg1;
@property(readonly, nonatomic) ACAccount *loggedInAccount; // @synthesize loggedInAccount=_loggedInAccount;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)registerForMessages;
- (void)_configureClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

