//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>
#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface HDDataOriginProvenance : NSObject <NSSecureCoding, NSCopying>
{
    long long _syncProvenance;
    NSString *_productType;
    NSString *_systemBuild;
    NSString *_sourceVersion;
    NSString *_timeZoneName;
    NSNumber *_sourceID;
    NSNumber *_deviceID;
    CDStruct_f6aba300 _operatingSystemVersion;
}

+ (_Bool)supportsSecureCoding;
+ (id)dataProvenanceWithSyncProvenance:(long long)arg1 productType:(id)arg2 systemBuild:(id)arg3 operatingSystemVersion:(CDStruct_f6aba300)arg4 sourceVersion:(id)arg5 timeZoneName:(id)arg6 sourceID:(id)arg7 deviceID:(id)arg8;
@property(retain, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSNumber *sourceID; // @synthesize sourceID=_sourceID;
@property(copy, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(nonatomic) CDStruct_f6aba300 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(copy, nonatomic) NSString *systemBuild; // @synthesize systemBuild=_systemBuild;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(nonatomic) long long syncProvenance; // @synthesize syncProvenance=_syncProvenance;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValid;
- (unsigned long long)hash;

@end

