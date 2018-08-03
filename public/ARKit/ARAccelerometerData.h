//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARDictionaryCoding.h"
#import "ARMutableSensorData.h"
#import "NSSecureCoding.h"

@class NSString;

@interface ARAccelerometerData : NSObject <ARDictionaryCoding, ARMutableSensorData, NSSecureCoding>
{
    double _timestamp;
    double _temperature;
    CDStruct_31142d93 _acceleration;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
@property(nonatomic) CDStruct_31142d93 acceleration; // @synthesize acceleration=_acceleration;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)encodeToDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

