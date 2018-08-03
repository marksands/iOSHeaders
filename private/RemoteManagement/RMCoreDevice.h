//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSSet, NSString, RMUserDeviceState;

@interface RMCoreDevice : NSManagedObject
{
}

+ (id)fetchOrCreateLocalDeviceInContext:(id)arg1 error:(id *)arg2;
+ (id)fetchOrCreateDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) RMUserDeviceState *localUserDeviceState; // @dynamic localUserDeviceState;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *userDeviceAddresses; // @dynamic userDeviceAddresses;
@property(retain, nonatomic) NSSet *userDeviceStates; // @dynamic userDeviceStates;

@end

