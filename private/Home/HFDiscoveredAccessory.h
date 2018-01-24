//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HFHomeKitObject.h"

@class HMAccessory, NSDate, NSError, NSString, NSUUID, SFDevice;

@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject>
{
    NSUUID *_accessoryUUID;
    NSString *_accessoryName;
    HMAccessory *_accessory;
    SFDevice *_sharingDevice;
    NSString *_manufacturerName;
    NSDate *_discoveryDate;
    unsigned long long _status;
    NSError *_error;
    unsigned long long _certificationStatus;
}

@property(nonatomic) unsigned long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSDate *discoveryDate; // @synthesize discoveryDate=_discoveryDate;
@property(copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property(readonly, nonatomic) SFDevice *sharingDevice; // @synthesize sharingDevice=_sharingDevice;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(copy, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
- (void).cxx_destruct;
- (id)_descriptionForStatus:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
- (id)identify;
@property(readonly, nonatomic) _Bool requiresSetupCode;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, copy) NSString *description;
- (void)updateStatus:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2;
- (id)initWithSharingDevice:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

