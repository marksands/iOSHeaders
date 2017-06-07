//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHAPAccessory, HMDUser, NSData, NSDate, NSUUID;

@interface HMDRelayConsentToken : HMFObject <NSSecureCoding>
{
    NSUUID *_accessoryIdentifier;
    NSUUID *_userIdentifier;
    NSUUID *_identifier;
    HMDHAPAccessory *_accessory;
    HMDUser *_user;
    NSData *_consentToken;
    NSDate *_expirationDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSData *consentToken; // @synthesize consentToken=_consentToken;
@property(nonatomic) __weak HMDUser *user; // @synthesize user=_user;
@property(nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSUUID *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)configureWithHome:(id)arg1;
@property(readonly, nonatomic) NSUUID *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithConsentToken:(id)arg1 expiration:(id)arg2 accessory:(id)arg3 user:(id)arg4;
- (id)init;

@end

