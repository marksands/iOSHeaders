//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDCharacteristicMetadata, HMDHAPAccessory, HMDService, NSData, NSDate, NSDictionary, NSMutableSet, NSNumber, NSString, NSUUID;

@interface HMDCharacteristic : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMFDumpState>
{
    _Bool _broadcastNotificationEnabled;
    _Bool _notificationRegisteredWithRemoteGateway;
    HMDHAPAccessory *_accessory;
    HMDService *_service;
    NSNumber *_stateNumber;
    NSData *_authorizationData;
    NSMutableSet *_hapCharacteristicTuples;
    NSString *_characteristicType;
    id _lastKnownValue;
    NSDate *_lastKnownValueUpdateTime;
    NSNumber *_characteristicInstanceID;
    long long _characteristicProperties;
    HMDCharacteristicMetadata *_characteristicMetadata;
    NSMutableSet *_notificationRegistrations;
    NSDate *_notificationEnabledTime;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool notificationRegisteredWithRemoteGateway; // @synthesize notificationRegisteredWithRemoteGateway=_notificationRegisteredWithRemoteGateway;
@property(retain, nonatomic) NSDate *notificationEnabledTime; // @synthesize notificationEnabledTime=_notificationEnabledTime;
@property(retain, nonatomic) NSMutableSet *notificationRegistrations; // @synthesize notificationRegistrations=_notificationRegistrations;
@property(retain, nonatomic) HMDCharacteristicMetadata *characteristicMetadata; // @synthesize characteristicMetadata=_characteristicMetadata;
@property(nonatomic) long long characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(retain, nonatomic) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(retain, nonatomic) NSDate *lastKnownValueUpdateTime; // @synthesize lastKnownValueUpdateTime=_lastKnownValueUpdateTime;
@property(retain, nonatomic) id lastKnownValue; // @synthesize lastKnownValue=_lastKnownValue;
@property(retain, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(retain, nonatomic) NSMutableSet *hapCharacteristicTuples; // @synthesize hapCharacteristicTuples=_hapCharacteristicTuples;
@property(nonatomic) _Bool broadcastNotificationEnabled; // @synthesize broadcastNotificationEnabled=_broadcastNotificationEnabled;
@property(copy, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property(copy, nonatomic, setter=setStateNumber:) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(readonly, nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateService:(id)arg1 accessory:(id)arg2;
- (_Bool)deregisterNotificationForClientIdentifier:(id)arg1;
- (void)setNotificationEnabled:(_Bool)arg1 forClientIdentifier:(id)arg2;
- (_Bool)isNotificationEnabledForClientIdentifierPrefix:(id)arg1;
- (_Bool)isNotificationEnabledForClientIdentifier:(id)arg1;
- (_Bool)isNonClientNotificationEnabled;
- (_Bool)isNonHomeNotificationsEnabled;
- (_Bool)isClientNotificationEnabled;
- (_Bool)isNotificationEnabled;
- (_Bool)supportsRead;
- (_Bool)supportsNotification;
- (id)validateValue:(id)arg1 outValue:(id *)arg2;
@property(readonly, nonatomic) HMDCharacteristicMetadata *metadata;
- (_Bool)isValueUpdatedFromHAPCharacteristic:(id)arg1;
- (_Bool)value:(id)arg1 differentThan:(id)arg2;
- (void)updateLastKnownValue;
- (void)updateValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3;
@property(readonly, copy, nonatomic) id value;
@property(readonly, nonatomic) long long properties;
- (id)characteristicForHAPAccessory:(id)arg1;
- (id)characteristicForServerIdentifier:(id)arg1 linkType:(long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *instanceID;
@property(readonly, copy, nonatomic) NSString *type;
- (void)unconfigureAll;
- (void)unconfigureForServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (void)unconfigure;
- (id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;
- (void)configureWithCharacteristic:(id)arg1;
- (id)getCharacteristicDictionary;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)hapCharacteristicTupleWithIdentifier:(id)arg1 linkType:(long long)arg2;
@property(readonly, nonatomic) NSString *serializedIdentifier;
- (id)dumpState;
- (id)characteristicTypeDescription;
- (id)shortTypeDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *bulletinContext;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

