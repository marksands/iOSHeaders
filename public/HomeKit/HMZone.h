//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFMessageReceiver.h"
#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMDelegateCaller, HMFMessageDispatcher, HMHome, HMThreadSafeMutableArrayCollection, NSArray, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMZone : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMHome *_home;
    NSUUID *_uuid;
    HMFMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
    HMThreadSafeMutableArrayCollection *_currentRooms;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMThreadSafeMutableArrayCollection *currentRooms; // @synthesize currentRooms=_currentRooms;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerNotificationHandlers;
- (void)_handleZoneRenamedNotification:(id)arg1;
- (void)_handleRoomRemovedNotification:(id)arg1;
- (void)_removeRoom:(id)arg1;
- (void)_handleRoomAddedNotification:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (void)_removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (void)_unconfigure;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)init;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
- (void)setUuid:(id)arg1;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSArray *rooms;
- (void)setName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

