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

@class NEVPNProtocol, NSArray;

@interface NEVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    _Bool _enabled;
    _Bool _onDemandEnabled;
    NSArray *_onDemandRules;
    NEVPNProtocol *_protocol;
    NSArray *_exceptionApps;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSArray *exceptionApps; // @synthesize exceptionApps=_exceptionApps;
@property(copy) NEVPNProtocol *protocol; // @synthesize protocol=_protocol;
@property(copy) NSArray *onDemandRules; // @synthesize onDemandRules=_onDemandRules;
@property(getter=isOnDemandEnabled) _Bool onDemandEnabled; // @synthesize onDemandEnabled=_onDemandEnabled;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyProfileDictionaryWithCertificateUUID:(id)arg1;
- (id)copyLegacyDictionary;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

