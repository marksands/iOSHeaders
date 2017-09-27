//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HMAccessoryCategory, HMSetupAccessoryPayload, NSString, NSUUID;

@interface HMSetupAccessoryDescription : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _supportsIP;
    _Bool _supportsBTLE;
    _Bool _supportsWAC;
    _Bool _paired;
    _Bool _addAndSetupAccessories;
    _Bool _legacyAPI;
    NSString *_setupID;
    NSString *_setupCode;
    HMAccessoryCategory *_category;
    NSUUID *_accessoryUUID;
    NSString *_accessoryName;
    NSString *_appIdentifier;
    NSUUID *_homeUUID;
    NSString *_homeName;
    HMSetupAccessoryPayload *_setupAccessoryPayload;
}

+ (_Bool)supportsSecureCoding;
+ (id)setupAccessoryProgressAsString:(long long)arg1;
@property(nonatomic) _Bool legacyAPI; // @synthesize legacyAPI=_legacyAPI;
@property(retain, nonatomic) HMSetupAccessoryPayload *setupAccessoryPayload; // @synthesize setupAccessoryPayload=_setupAccessoryPayload;
@property(readonly, nonatomic) NSString *homeName; // @synthesize homeName=_homeName;
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(nonatomic) _Bool addAndSetupAccessories; // @synthesize addAndSetupAccessories=_addAndSetupAccessories;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(retain, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(retain, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dumpState;
- (id)description;
@property(readonly, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *setupID; // @synthesize setupID=_setupID;
@property(readonly, nonatomic) NSString *setupCode; // @synthesize setupCode=_setupCode;
@property(readonly, nonatomic, getter=isPaired) _Bool paired; // @synthesize paired=_paired;
@property(readonly, nonatomic) _Bool supportsBTLE; // @synthesize supportsBTLE=_supportsBTLE;
@property(readonly, nonatomic) _Bool supportsWAC; // @synthesize supportsWAC=_supportsWAC;
@property(readonly, nonatomic) _Bool supportsIP; // @synthesize supportsIP=_supportsIP;
- (void)updateAppIdentifier:(id)arg1;
- (void)updateWithAccessory:(id)arg1;
- (void)updateWithSetupAccessoryPayload:(id)arg1;
- (id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)arg1 appID:(id)arg2 homeName:(id)arg3 homeUUID:(id)arg4;
- (id)initToSetupAccessories:(id)arg1 legacyAPI:(_Bool)arg2 homeName:(id)arg3 homeUUID:(id)arg4;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 appID:(id)arg3 homeName:(id)arg4 homeUUID:(id)arg5;

@end

