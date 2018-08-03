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

@class HMAssistantAccessControl, HMFPairingIdentity, HMFUnfairLock, HMHome, HMHomeAccessControl, HMMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID, _HMContext;

@interface HMUser : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    HMFUnfairLock *_lock;
    HMMutableArray *_pendingAccessoryInvitations;
    _Bool _currentUser;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMHomeAccessControl *_homeAccessControl;
    HMAssistantAccessControl *_assistantAccessControl;
    NSString *_userID;
    HMHome *_home;
    HMFPairingIdentity *_pairingIdentity;
    _HMContext *_context;
    id <HMUserDelegatePrivate> _delegate;
    NSUUID *_uuid;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak id <HMUserDelegatePrivate> delegate; // @synthesize delegate=_delegate;
@property(retain) _HMContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (_Bool)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (void)pairingIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1 operations:(id)arg2;
- (void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1;
- (id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)arg1;
- (id)pendingAccessoryInvitations;
@property(nonatomic, getter=isCurrentUser) _Bool currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (id)assistantAccessControlForHome:(id)arg1;
- (void)_handleUpdatedAssistantAccessControl:(id)arg1;
- (void)updateAssistantAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(copy) HMAssistantAccessControl *assistantAccessControl; // @synthesize assistantAccessControl=_assistantAccessControl;
@property(copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)updateHomeAccessControl:(_Bool)arg1 remoteAccess:(_Bool)arg2;
@property(retain, nonatomic) HMHomeAccessControl *homeAccessControl; // @synthesize homeAccessControl=_homeAccessControl;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)dealloc;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 accessControls:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

