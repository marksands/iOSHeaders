//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFMessageReceiver.h"
#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMEventTrigger, HMFUnfairLock, NSObject<OS_dispatch_queue>, NSString, NSUUID, _HMContext;

@interface HMEvent : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver>
{
    HMFUnfairLock *_lock;
    _Bool _endEvent;
    HMEventTrigger *_eventTrigger;
    NSUUID *_uniqueIdentifier;
    _HMContext *_context;
    NSUUID *_uuid;
    NSString *_triggerType;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)sharedTriggerActivationSupportedForHome:(id)arg1;
+ (_Bool)isSupportedForHome:(id)arg1;
@property(readonly, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(nonatomic, getter=isEndEvent) _Bool endEvent; // @synthesize endEvent=_endEvent;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_serializeForAdd;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_handleEventUpdatedNotification:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_updateTriggerType;
- (void)_invalidate;
@property(nonatomic) __weak HMEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2;
- (id)initWithDict:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

