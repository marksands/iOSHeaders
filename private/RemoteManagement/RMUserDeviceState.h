//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSData, NSDate, NSString, RMCoreDevice, RMCoreUser;

@interface RMUserDeviceState : NSManagedObject
{
}

+ (id)fetchRequestMatchingLocalUserDeviceState;
+ (id)fetchOrCreateLocalUserDeviceStateInContext:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(copy, nonatomic) NSData *capabilitiesPlist; // @dynamic capabilitiesPlist;
@property(copy, nonatomic) NSString *coreDuetIdentifier; // @dynamic coreDuetIdentifier;
@property(retain, nonatomic) RMCoreUser *currentUser; // @dynamic currentUser;
@property(retain, nonatomic) RMCoreDevice *device; // @dynamic device;
@property(copy, nonatomic) NSData *deviceInfoPlist; // @dynamic deviceInfoPlist;
@property(copy, nonatomic) NSDate *lastUsageEventDate; // @dynamic lastUsageEventDate;
@property(nonatomic) _Bool managementEnabled; // @dynamic managementEnabled;
@property(copy, nonatomic) NSString *passcode; // @dynamic passcode;
@property(copy, nonatomic) NSString *passcodeOwner; // @dynamic passcodeOwner;
@property(nonatomic) _Bool screenTimeEnabled; // @dynamic screenTimeEnabled;
@property(retain, nonatomic) RMCoreUser *user; // @dynamic user;

@end

