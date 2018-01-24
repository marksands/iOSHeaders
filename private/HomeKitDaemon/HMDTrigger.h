//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDBackingStoreObjectProtocol.h"
#import "HMDBulletinIdentifiers.h"
#import "HMDHomeMessageReceiver.h"
#import "HMFDumpState.h"
#import "HMFLogging.h"
#import "NSSecureCoding.h"

@class HMDDevice, HMDHome, HMDUser, HMFMessageDispatcher, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDTrigger : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMFLogging, HMDBackingStoreObjectProtocol>
{
    _Bool _active;
    NSString *_name;
    NSUUID *_uuid;
    HMDHome *_home;
    HMDUser *_owner;
    HMDDevice *_owningDevice;
    NSMutableArray *_actionSetUUIDs;
    NSMutableDictionary *_actionSetMappings;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    unsigned long long _triggerType;
    NSDate *_mostRecentFireDate;
}

+ (_Bool)hasMessageReceiverChildren;
+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(copy, nonatomic) NSDate *mostRecentFireDate; // @synthesize mostRecentFireDate=_mostRecentFireDate;
@property(nonatomic) unsigned long long triggerType; // @synthesize triggerType=_triggerType;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableDictionary *actionSetMappings; // @synthesize actionSetMappings=_actionSetMappings;
@property(retain, nonatomic) NSMutableArray *actionSetUUIDs; // @synthesize actionSetUUIDs=_actionSetUUIDs;
@property(retain, nonatomic) HMDDevice *owningDevice; // @synthesize owningDevice=_owningDevice;
@property(retain, nonatomic) HMDUser *owner; // @synthesize owner=_owner;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)updateEventTriggerMessage:(int)arg1 message:(id)arg2 relay:(_Bool)arg3;
- (void)timerFired:(id)arg1;
- (id)emptyModelObject;
- (id)backingStoreObjects:(long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(id)arg2;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)shouldEncodeLastFireDate:(id)arg1;
- (void)_handleTriggerUpdate:(id)arg1 message:(id)arg2;
- (void)_fillBaseObjectChangeModel:(id)arg1;
- (void)_registerForMessages;
- (void)userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_executeActionSets:(id)arg1 captureCurrentState:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_executeActionSetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_activateTriggerRequest:(id)arg1;
- (void)_handleActivateTriggerRequest:(id)arg1;
- (void)_actionSetsUpdated:(id)arg1 message:(id)arg2;
- (void)_updateActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;
- (void)_handleUpdateActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;
- (void)_handleRemoveTriggerOwnedActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;
- (void)_handleRemoveActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;
- (void)_handleAddTriggerOwnedActionSetRequest:(id)arg1;
- (void)_handleAddActionSetRequest:(id)arg1;
- (void)_renameRequest:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (void)_activate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)markChangedForMessage:(id)arg1 triggerModel:(id)arg2;
- (void)markChangedForMessage:(id)arg1;
- (_Bool)modelContainsTriggerFired:(id)arg1;
- (void)activateAfterResidentChangeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isConfigured) _Bool configured;
- (_Bool)shouldActivateOnLocalDevice;
@property(readonly, nonatomic, getter=isOwnedByThisDevice) _Bool ownedByThisDevice;
- (void)invalidate;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (_Bool)_isTriggerFiredNotificationEntitled;
- (void)sendTriggerFiredNotification:(id)arg1;
- (void)_recentFireDateUpdated:(id)arg1;
- (void)triggerFired;
- (void)reEvaluate;
- (void)fixupForReplacementAccessory:(id)arg1;
- (void)removeCharacteristic:(id)arg1;
- (void)removeService:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (void)removeActionSet:(id)arg1 postUpdate:(_Bool)arg2;
- (void)checkForNoActions;
- (void)setEnabled:(_Bool)arg1 message:(id)arg2;
- (_Bool)compatible:(id)arg1 user:(id)arg2;
@property(readonly, nonatomic) _Bool requiresDataVersion4;
@property(readonly, nonatomic) NSArray *actionSets;
- (id)dumpState;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
@property(readonly, nonatomic) NSDictionary *bulletinContext;
@property(readonly, nonatomic) NSDictionary *actionContext;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

