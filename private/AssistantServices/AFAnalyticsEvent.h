//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData;

@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    unsigned long long _timestamp;
    long long _contextDataType;
    NSData *_contextData;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *contextData; // @synthesize contextData=_contextData;
@property(readonly, nonatomic) long long contextDataType; // @synthesize contextDataType=_contextDataType;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 timestamp:(unsigned long long)arg2 contextDataType:(long long)arg3 contextData:(id)arg4;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

