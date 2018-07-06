//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSetClimateSettingsInCarIntent.h"

@class INCodableAttribute, NSString, _INPBDataString, _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBTemperature;

@interface _INPBSetClimateSettingsInCarIntent : PBCodable <_INPBSetClimateSettingsInCarIntent, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int airCirculationMode:1;
        unsigned int climateZone:1;
        unsigned int enableAirConditioner:1;
        unsigned int enableAutoMode:1;
        unsigned int enableClimateControl:1;
        unsigned int enableFan:1;
        unsigned int relativeFanSpeedSetting:1;
        unsigned int relativeTemperatureSetting:1;
    } _has;
    _Bool _enableAirConditioner;
    _Bool _enableAutoMode;
    _Bool _enableClimateControl;
    _Bool _enableFan;
    int _airCirculationMode;
    int _climateZone;
    int _relativeFanSpeedSetting;
    int _relativeTemperatureSetting;
    _INPBDataString *_carName;
    _INPBInteger *_fanSpeedIndex;
    _INPBDouble *_fanSpeedPercentage;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTemperature *_temperature;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBTemperature *temperature; // @synthesize temperature=_temperature;
@property(nonatomic) int relativeTemperatureSetting; // @synthesize relativeTemperatureSetting=_relativeTemperatureSetting;
@property(nonatomic) int relativeFanSpeedSetting; // @synthesize relativeFanSpeedSetting=_relativeFanSpeedSetting;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDouble *fanSpeedPercentage; // @synthesize fanSpeedPercentage=_fanSpeedPercentage;
@property(retain, nonatomic) _INPBInteger *fanSpeedIndex; // @synthesize fanSpeedIndex=_fanSpeedIndex;
@property(nonatomic) _Bool enableFan; // @synthesize enableFan=_enableFan;
@property(nonatomic) _Bool enableClimateControl; // @synthesize enableClimateControl=_enableClimateControl;
@property(nonatomic) _Bool enableAutoMode; // @synthesize enableAutoMode=_enableAutoMode;
@property(nonatomic) _Bool enableAirConditioner; // @synthesize enableAirConditioner=_enableAirConditioner;
@property(nonatomic) int climateZone; // @synthesize climateZone=_climateZone;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
@property(nonatomic) int airCirculationMode; // @synthesize airCirculationMode=_airCirculationMode;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTemperature;
- (int)StringAsRelativeTemperatureSetting:(id)arg1;
- (id)relativeTemperatureSettingAsString:(int)arg1;
@property(nonatomic) _Bool hasRelativeTemperatureSetting;
- (int)StringAsRelativeFanSpeedSetting:(id)arg1;
- (id)relativeFanSpeedSettingAsString:(int)arg1;
@property(nonatomic) _Bool hasRelativeFanSpeedSetting;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasFanSpeedPercentage;
@property(readonly, nonatomic) _Bool hasFanSpeedIndex;
@property(nonatomic) _Bool hasEnableFan;
@property(nonatomic) _Bool hasEnableClimateControl;
@property(nonatomic) _Bool hasEnableAutoMode;
@property(nonatomic) _Bool hasEnableAirConditioner;
- (int)StringAsClimateZone:(id)arg1;
- (id)climateZoneAsString:(int)arg1;
@property(nonatomic) _Bool hasClimateZone;
@property(readonly, nonatomic) _Bool hasCarName;
- (int)StringAsAirCirculationMode:(id)arg1;
- (id)airCirculationModeAsString:(int)arg1;
@property(nonatomic) _Bool hasAirCirculationMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

