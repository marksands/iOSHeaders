//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationLegacySupport.h"
#import "NEConfigurationValidating.h"
#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface NEIPv4Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    _Bool _overridePrimary;
    NSArray *_addresses;
    NSArray *_subnetMasks;
    NSArray *_includedRoutes;
    NSArray *_excludedRoutes;
    long long _configMethod;
    NSString *_router;
}

+ (_Bool)supportsSecureCoding;
@property _Bool overridePrimary; // @synthesize overridePrimary=_overridePrimary;
@property(copy) NSString *router; // @synthesize router=_router;
@property long long configMethod; // @synthesize configMethod=_configMethod;
@property(copy) NSArray *excludedRoutes; // @synthesize excludedRoutes=_excludedRoutes;
@property(copy) NSArray *includedRoutes; // @synthesize includedRoutes=_includedRoutes;
@property(readonly) NSArray *subnetMasks; // @synthesize subnetMasks=_subnetMasks;
@property(readonly) NSArray *addresses; // @synthesize addresses=_addresses;
- (void).cxx_destruct;
- (_Bool)hasDefaultRoute;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddresses:(id)arg1 subnetMasks:(id)arg2;
- (id)init;

@end

