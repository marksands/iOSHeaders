//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDApplicationData, HMDHome, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDRoom : HMFObject <HMFMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    NSString *_name;
    NSUUID *_uuid;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDApplicationData *_appData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)backingStoreObjects:(long long)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)logDuetEvent;
- (void)_logDuetEvent:(id)arg1;
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;
- (void)_handleUpdateRoomModel:(id)arg1 message:(id)arg2;
- (void)_handleRenameRequest:(id)arg1;
- (void)_registerForMessages;
- (id)dumpState;
@property(readonly, nonatomic) NSString *serializedIdentifier;
- (void)configure:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3;
- (id)assistantObject;
- (id)url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

