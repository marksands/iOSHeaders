//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSMutableDictionary *_usage;
    id _validationToken;
}

+ (_Bool)supportsSecureCoding;
+ (id)_serverQueue;
+ (id)ODRUsageForBundleIdentifier:(id)arg1 error:(id *)arg2;
+ (id)ODRConnection;
+ (id)usageFromMobileInstallationForBundleIdentifier:(id)arg1 error:(id *)arg2;
+ (id)mobileInstallationQueue;
+ (id)propertyQueue;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)removeAllCachedUsageValues;
@property(readonly, nonatomic) NSNumber *sharedUsage; // @dynamic sharedUsage;
@property(readonly, nonatomic) NSNumber *onDemandResourcesUsage; // @dynamic onDemandResourcesUsage;
@property(readonly, nonatomic) NSNumber *dynamicUsage; // @dynamic dynamicUsage;
@property(readonly, nonatomic) NSNumber *staticUsage; // @dynamic staticUsage;
- (id)init;
- (_Bool)_fetchWithXPCConnection:(id)arg1 error:(id *)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2 validationToken:(id)arg3;
- (_Bool)fetchClientSideWithError:(id *)arg1;
- (_Bool)fetchServerSideWithConnection:(id)arg1 error:(id *)arg2;

@end

