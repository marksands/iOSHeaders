//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessory, HMDAccessoryInvitation, HMDUser, HMDUserManagementOperationManager, HMFTimer, NSArray, NSDate, NSDictionary, NSMutableArray, NSObject, NSString, NSUUID;
@protocol HMDUserManagementOperationDelegate, OS_dispatch_queue;

@interface HMDUserManagementOperation : HMFObject <HMFTimerDelegate, NSSecureCoding>
{
    NSMutableArray *_dependencies;
    _Bool _executing;
    _Bool _backingOff;
    _Bool _lastOperationFailed;
    unsigned long long _state;
    HMDUserManagementOperationManager *_operationManager;
    id <HMDUserManagementOperationDelegate> _delegate;
    NSUUID *_identifier;
    unsigned long long _operationType;
    HMDUser *_user;
    HMDAccessory *_accessory;
    NSDate *_expirationDate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFTimer *_expirationTimer;
    double _backoffInterval;
    HMFTimer *_backoffTimer;
}

+ (id)operationWithDictionary:(id)arg1 home:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (id)removeUserManagementOperationForUser:(id)arg1 accessory:(id)arg2;
+ (id)addUserManagementOperationForUser:(id)arg1 accessory:(id)arg2;
@property(retain, nonatomic) HMFTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(readonly, nonatomic) double backoffInterval; // @synthesize backoffInterval=_backoffInterval;
@property(readonly, nonatomic) HMFTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDUserManagementOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (id)dictionaryEncoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSDictionary *accessoryInvitationInformation;
@property(readonly, nonatomic) HMDAccessoryInvitation *accessoryInvitation;
- (long long)_accessoryInvitationState;
- (_Bool)mergeWithOperation:(id)arg1;
- (void)_removePairingFromAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addPairingToAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)executeWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)addDependency:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *dependencies;
- (void)_endBackoffTimer;
- (void)_startBackoffTimer;
- (double)nextBackoffInterval;
@property(nonatomic, getter=isBackingOff) _Bool backingOff; // @synthesize backingOff=_backingOff;
@property(retain, nonatomic) HMDUserManagementOperationManager *operationManager; // @synthesize operationManager=_operationManager;
@property(nonatomic) _Bool lastOperationFailed; // @synthesize lastOperationFailed=_lastOperationFailed;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (_Bool)_isFinished;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (_Bool)isValid;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)_setupExpirationTimer;
- (id)initWithOperationType:(unsigned long long)arg1 user:(id)arg2 accessory:(id)arg3 expiration:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

