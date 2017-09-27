//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSString, NSUUID, _IDSDevice;

@interface IDSDevice : NSObject
{
    _IDSDevice *_internal;
}

- (void).cxx_destruct;
- (void)closeSocketForDomain:(id)arg1;
- (int)openSocketForDomain:(id)arg1 transportType:(long long)arg2;
- (int)openSocketForDomain:(id)arg1;
- (int)socketForDomain:(id)arg1;
- (void)cleanupStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)establishStreamPairWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)closeSocket:(int)arg1;
- (void)openSocketWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (id)_internal;
- (void)_setAccount:(id)arg1;
@property(readonly, nonatomic) unsigned long long serviceMinCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long pairingProtocolVersion;
- (void)_addIdentity:(id)arg1;
@property(readonly, nonatomic) NSArray *identities;
@property(readonly, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) NSDate *lastActivityDate;
@property(readonly, nonatomic) NSString *enclosureColor;
@property(readonly, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) _Bool supportsPhoneCalls;
@property(readonly, nonatomic) _Bool supportsMMSRelay;
@property(readonly, nonatomic) _Bool supportsSMSRelay;
@property(readonly, nonatomic) _Bool supportsApplePay;
@property(readonly, nonatomic) _Bool supportsHandoff;
@property(readonly, nonatomic) _Bool supportsTethering;
@property(readonly, nonatomic) _Bool supportsiCloudPairing;
@property(retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property(readonly, nonatomic) NSArray *linkedUserURIs;
@property(readonly, nonatomic) _Bool isHSATrusted;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) _Bool isLocallyPaired;
@property(readonly, nonatomic) _Bool isDefaultPairedDevice;
@property(readonly, nonatomic) _Bool locallyPresent;
@property(readonly, nonatomic) _Bool isCloudConnected;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic, getter=isNearby) _Bool nearby;
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *modelIdentifier;
@property(readonly, nonatomic) CDStruct_2ec95fd7 operatingSystemVersion;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *uniqueIDOverride;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)description;
- (id)fullDescription;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)_initWithDictionary:(id)arg1;

@end

