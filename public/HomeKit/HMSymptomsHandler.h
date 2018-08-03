//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFLogging.h"
#import "HMFMessageReceiver.h"
#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMFUnfairLock, HMMutableArray, NSHashTable, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID, _HMContext;

@interface HMSymptomsHandler : NSObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMObjectMerge>
{
    HMFUnfairLock *_lock;
    NSUUID *_sfDeviceIdentifier;
    NSUUID *_uniqueIdentifier;
    id <HMSymptomsHandlerDelegate> _delegate;
    _HMContext *_context;
    NSHashTable *_fixSessions;
    NSUUID *_uuid;
    HMMutableArray *_currentSymptoms;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(readonly, nonatomic) HMMutableArray *currentSymptoms; // @synthesize currentSymptoms=_currentSymptoms;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSHashTable *fixSessions; // @synthesize fixSessions=_fixSessions;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_callFixSessionAvailabilityUpdatedDelegate;
- (void)_callSymptomsUpdatedDelegate:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (id)_findAndRemoveFixSessionsForSymptom:(id)arg1;
- (void)_addFixSession:(id)arg1;
- (void)_handleSFDeviceIdentifierUpdated:(id)arg1;
- (void)_handleSymptomsUpdated:(id)arg1;
- (void)initiateFixWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)newFixSessionForSymptom:(id)arg1;
- (void)registerForMessages;
@property(readonly) long long fixState;
@property(readonly) _Bool canInitiateFix;
@property(copy, setter=setSFDeviceIdentifier:) NSUUID *sfDeviceIdentifier; // @synthesize sfDeviceIdentifier=_sfDeviceIdentifier;
@property __weak id <HMSymptomsHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSSet *symptoms;
- (void)__configureWithContext:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

