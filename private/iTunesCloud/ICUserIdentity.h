//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface ICUserIdentity : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_deviceIdentifier;
    _Bool _allowsDelegation;
    _Bool _allowsAccountEstablishment;
    long long _type;
    unsigned long long _creationTime;
    NSNumber *_DSID;
}

+ (_Bool)supportsSecureCoding;
+ (id)specificAccountWithDSID:(id)arg1;
+ (id)nullIdentity;
+ (id)carrierBundleWithDeviceIdentifier:(id)arg1;
+ (id)autoupdatingActiveLockerAccount;
+ (id)autoupdatingActiveAccount;
+ (id)activeLockerAccount;
+ (id)activeAccount;
@property(readonly, copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(readonly, nonatomic) unsigned long long creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool allowsAccountEstablishment; // @synthesize allowsAccountEstablishment=_allowsAccountEstablishment;
@property(readonly, nonatomic) _Bool allowsDelegation; // @synthesize allowsDelegation=_allowsDelegation;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToIdentity:(id)arg1;
- (id)identityAllowingEstablishment:(_Bool)arg1;
- (id)identityAllowingDelegation:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier;
- (id)init;

@end

