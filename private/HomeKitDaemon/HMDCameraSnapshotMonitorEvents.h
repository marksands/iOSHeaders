//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "HMFMessageReceiver.h"
#import "HMFTimerDelegate.h"

@class HMDAccessory, HMDBulletinBoard, HMDCameraSnapshotManager, HMDNotificationRegistration, HMFMessageDispatcher, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDCameraSnapshotMonitorEvents : HMFObject <HMFMessageReceiver, HMFLogging, HMFTimerDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSUUID *_uniqueIdentifier;
    HMDCameraSnapshotManager *_snapshotManager;
    NSMutableSet *_snapShotNotificationResponseTimers;
    HMDAccessory *_accessory;
    NSString *_bulletinImagesDirectory;
    NSString *_logID;
    NSMutableSet *_characteristicsList;
    NSMutableSet *_monitoredCharacteristicsList;
    HMDBulletinBoard *_bulletinBoard;
    HMDNotificationRegistration *_notificationRegistration;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(readonly, nonatomic) HMDBulletinBoard *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property(readonly, nonatomic) NSMutableSet *monitoredCharacteristicsList; // @synthesize monitoredCharacteristicsList=_monitoredCharacteristicsList;
@property(readonly, nonatomic) NSMutableSet *characteristicsList; // @synthesize characteristicsList=_characteristicsList;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSString *bulletinImagesDirectory; // @synthesize bulletinImagesDirectory=_bulletinImagesDirectory;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSMutableSet *snapShotNotificationResponseTimers; // @synthesize snapShotNotificationResponseTimers=_snapShotNotificationResponseTimers;
@property(readonly, nonatomic) __weak HMDCameraSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)_sendReleaseSnapshot:(id)arg1;
- (void)_handleRemoteNotification:(id)arg1;
- (void)handleRemoteNotificationGenerated:(id)arg1;
- (void)_removeBulletins:(id)arg1 sessionID:(id)arg2;
- (void)processPostedBulletin:(id)arg1 responseTimer:(id)arg2;
- (void)timerDidFire:(id)arg1;
- (void)_handleSnapshotResponse:(id)arg1 cameraSessionID:(id)arg2 changedCharacteristics:(id)arg3 response:(id)arg4 responseTimer:(id)arg5;
- (void)_characteristicsUpdated:(id)arg1 modifiedCharacteristics:(id)arg2;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_subscribeToNotifications;
- (void)_enableNotificationForCharacteristics:(id)arg1 newMonitoredCharacteristicsList:(id)arg2;
- (void)_monitorForEventsForServices:(id)arg1;
- (void)monitorForEventsForServices:(id)arg1;
- (void)dealloc;
- (void)handleAccessoryReachable:(id)arg1;
- (void)registerForMessages;
- (id)logIdentifier;
- (id)initWithSnapshotManager:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

