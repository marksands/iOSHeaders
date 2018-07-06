//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMDevice, HMFUnfairLock, HMHome, NSString, NSUUID, _HMContext;

@interface HMResidentDevice : NSObject <HMObjectMerge, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    _Bool _enabled;
    NSUUID *_uniqueIdentifier;
    unsigned long long _status;
    HMHome *_home;
    NSUUID *_accountIdentifier;
    unsigned long long _capabilities;
    id <HMResidentDeviceDelegate> _delegate;
    HMDevice *_device;
    _HMContext *_context;
    NSUUID *_uuid;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly) HMDevice *device; // @synthesize device=_device;
@property __weak id <HMResidentDeviceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updatedEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(copy, nonatomic) NSUUID *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property __weak HMHome *home; // @synthesize home=_home;
@property unsigned long long status; // @synthesize status=_status;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, getter=isCurrentDevice) _Bool currentDevice;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

