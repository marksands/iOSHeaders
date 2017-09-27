//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMObjectMerge.h"

@class HMActionSet, HMDelegateCaller, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMAction : NSObject <HMObjectMerge>
{
    NSUUID *_uniqueIdentifier;
    NSUUID *_uuid;
    HMActionSet *_actionSet;
    unsigned long long _actionType;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
}

+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
+ (id)_lookupActionWithInfo:(id)arg1 inArray:(id)arg2;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_invalidate;
- (void)_configure:(id)arg1 actionSet:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (_Bool)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
- (id)init;
@property(nonatomic) __weak HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

