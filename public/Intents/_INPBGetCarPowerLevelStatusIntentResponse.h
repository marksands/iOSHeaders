//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBGetCarPowerLevelStatusIntentResponse.h"

@class INCodableAttribute, NSString, _INPBDistance, _INPBDouble, _INPBInteger;

@interface _INPBGetCarPowerLevelStatusIntentResponse : PBCodable <_INPBGetCarPowerLevelStatusIntentResponse, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int charging:1;
    } _has;
    _Bool _charging;
    _INPBDouble *_chargePercentRemaining;
    _INPBDistance *_distanceRemaining;
    _INPBDouble *_fuelPercentRemaining;
    _INPBInteger *_minutesToFull;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBInteger *minutesToFull; // @synthesize minutesToFull=_minutesToFull;
@property(retain, nonatomic) _INPBDouble *fuelPercentRemaining; // @synthesize fuelPercentRemaining=_fuelPercentRemaining;
@property(retain, nonatomic) _INPBDistance *distanceRemaining; // @synthesize distanceRemaining=_distanceRemaining;
@property(nonatomic) _Bool charging; // @synthesize charging=_charging;
@property(retain, nonatomic) _INPBDouble *chargePercentRemaining; // @synthesize chargePercentRemaining=_chargePercentRemaining;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasMinutesToFull;
@property(readonly, nonatomic) _Bool hasFuelPercentRemaining;
@property(readonly, nonatomic) _Bool hasDistanceRemaining;
@property(nonatomic) _Bool hasCharging;
@property(readonly, nonatomic) _Bool hasChargePercentRemaining;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

