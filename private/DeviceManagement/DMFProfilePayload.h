//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface DMFProfilePayload : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_type;
    NSString *_identifier;
    long long _payloadVersion;
    NSString *_displayName;
    NSString *_organization;
    NSString *_payloadDescription;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *payloadDescription; // @synthesize payloadDescription=_payloadDescription;
@property(readonly, copy, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) long long payloadVersion; // @synthesize payloadVersion=_payloadVersion;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 identifier:(id)arg2 payloadVersion:(long long)arg3 displayName:(id)arg4 organization:(id)arg5 payloadDescription:(id)arg6;

@end

