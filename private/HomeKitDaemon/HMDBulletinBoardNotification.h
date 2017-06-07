//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDBulletinBoardNotificationServiceGroup, HMDService, HMFMessageDispatcher, NSObject, NSPredicate, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState>
{
    _Bool _enabled;
    NSPredicate *_condition;
    HMDBulletinBoardNotificationServiceGroup *_notificationServiceGroup;
    NSUUID *_targetUUID;
    HMDService *_service;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (_Bool)supportsBulletinNotificationGroup:(id)arg1;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSPredicate *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)dumpState;
@property(retain, nonatomic) HMDBulletinBoardNotificationServiceGroup *notificationServiceGroup; // @synthesize notificationServiceGroup=_notificationServiceGroup;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_handleBulletinBoardNotificationCommitRequest:(id)arg1;
- (void)configureBulletinNotification:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerNotificationHandlers;
- (void)configureMsgDispatcher:(id)arg1;
- (id)logIdentifier;
@property(readonly, copy, nonatomic) NSUUID *targetUUID; // @synthesize targetUUID=_targetUUID;
- (void)dealloc;
- (id)initWithService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

