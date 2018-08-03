//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSNumber, NSSet, NSString, RMFamilyOrganizationSettings, RMLocalOrganizationSettings, RMUserDeviceState, RMiCloudOrganizationSettings;

@interface RMCoreUser : NSManagedObject
{
}

+ (id)fetchRequestForUsersWithDSID:(id)arg1;
+ (id)fetchRequestMatchingLocalUser;
+ (id)fetchUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchLocalUserInContext:(id)arg1 error:(id *)arg2;
- (void)updateWithDescription:(id)arg1;
- (id)unmodeled_managingOrganization;
- (id)umodeled_managingOrganizationSettings;
- (id)unmodeled_effectivePasscode;
- (void)unmodeled_setScreenTimeEnabled:(_Bool)arg1;
- (_Bool)unmodeled_screenTimeEnabled;

// Remaining properties
@property(copy, nonatomic) NSString *appleID; // @dynamic appleID;
@property(retain, nonatomic) NSSet *blueprints; // @dynamic blueprints;
@property(retain, nonatomic) RMiCloudOrganizationSettings *cloudSettings; // @dynamic cloudSettings;
@property(copy, nonatomic) NSNumber *dsid; // @dynamic dsid;
@property(copy, nonatomic) NSString *familyMemberType; // @dynamic familyMemberType;
@property(copy, nonatomic) NSString *familyName; // @dynamic familyName;
@property(retain, nonatomic) RMFamilyOrganizationSettings *familySettings; // @dynamic familySettings;
@property(copy, nonatomic) NSString *givenName; // @dynamic givenName;
@property(nonatomic) _Bool isFamilyOrganizer; // @dynamic isFamilyOrganizer;
@property(nonatomic) _Bool isParent; // @dynamic isParent;
@property(retain, nonatomic) RMLocalOrganizationSettings *localSettings; // @dynamic localSettings;
@property(retain, nonatomic) RMUserDeviceState *localUserDeviceState; // @dynamic localUserDeviceState;
@property(readonly, copy, nonatomic) NSString *phoneticFamilyName; // @dynamic phoneticFamilyName;
@property(readonly, copy, nonatomic) NSString *phoneticGivenName; // @dynamic phoneticGivenName;
@property(retain, nonatomic) NSSet *userDeviceAddresses; // @dynamic userDeviceAddresses;
@property(retain, nonatomic) NSSet *userDeviceStates; // @dynamic userDeviceStates;

@end

