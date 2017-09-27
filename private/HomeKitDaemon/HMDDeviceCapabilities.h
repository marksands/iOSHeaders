//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@interface HMDDeviceCapabilities : HMFObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    _Bool _supportsKeychainSync;
    _Bool _supportsDeviceSetup;
    _Bool _supportsKeyTransferClient;
    _Bool _supportsKeyTransferServer;
    _Bool _supportsStandaloneMode;
    _Bool _supportsCloudDataSync;
    _Bool _supportsWholeHouseAudio;
    _Bool _supportsSharedEventTriggerActivation;
    _Bool _residentCapable;
    _Bool _remoteGatewayCapable;
}

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (id)deviceCapabilities;
@property(readonly, nonatomic, getter=isRemoteGatewayCapable) _Bool remoteGatewayCapable; // @synthesize remoteGatewayCapable=_remoteGatewayCapable;
@property(readonly, nonatomic, getter=isResidentCapable) _Bool residentCapable; // @synthesize residentCapable=_residentCapable;
@property(readonly, nonatomic) _Bool supportsWholeHouseAudio; // @synthesize supportsWholeHouseAudio=_supportsWholeHouseAudio;
@property(readonly, nonatomic) _Bool supportsCloudDataSync; // @synthesize supportsCloudDataSync=_supportsCloudDataSync;
@property(readonly, nonatomic) _Bool supportsStandaloneMode; // @synthesize supportsStandaloneMode=_supportsStandaloneMode;
@property(readonly, nonatomic) _Bool supportsKeyTransferServer; // @synthesize supportsKeyTransferServer=_supportsKeyTransferServer;
@property(readonly, nonatomic) _Bool supportsKeyTransferClient; // @synthesize supportsKeyTransferClient=_supportsKeyTransferClient;
@property(readonly, nonatomic) _Bool supportsDeviceSetup; // @synthesize supportsDeviceSetup=_supportsDeviceSetup;
@property(readonly, nonatomic) _Bool supportsKeychainSync; // @synthesize supportsKeychainSync=_supportsKeychainSync;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithProductInfo:(id)arg1;
- (id)init;

@end

