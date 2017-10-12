//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "HMFMessageReceiver.h"

@class AKAnisetteProvisioningController, HMFMessageDispatcher, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDRemoteLoginAnisetteDataHandler : HMFObject <HMFLogging, HMFMessageReceiver>
{
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    AKAnisetteProvisioningController *_provisioningController;
}

+ (id)logCategory;
@property(readonly, nonatomic) AKAnisetteProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)registerForMessages;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
