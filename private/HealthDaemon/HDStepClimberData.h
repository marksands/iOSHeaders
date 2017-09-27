//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDFitnessMachineDataCharacteristicBase.h>

#import "HDDatumRendering.h"

@class HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDStepClimberData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering>
{
    HDFitnessMachineCharacteristicUInt16Field *_floorsField;
    HDFitnessMachineCharacteristicUInt16Field *_stepCountField;
    HDFitnessMachineCharacteristicUInt16Field *_stepPerMinuteField;
    HDFitnessMachineCharacteristicUInt16Field *_averageStepRateField;
    HDFitnessMachineCharacteristicUInt16Field *_positiveElevationGainField;
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;
}

+ (unsigned char)flagFieldLength;
+ (id)uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned short remainingTime;
@property(readonly, nonatomic) _Bool remainingTimeIsSet;
@property(readonly, nonatomic) unsigned short elapsedTime;
@property(readonly, nonatomic) _Bool elapsedTimeIsSet;
@property(readonly, nonatomic) unsigned char metabolicEquivalent;
@property(readonly, nonatomic) _Bool metabolicEquivalentIsSet;
@property(readonly, nonatomic) unsigned char heartRate;
@property(readonly, nonatomic) _Bool heartRateIsSet;
@property(readonly, nonatomic) unsigned char energyPerMinute;
@property(readonly, nonatomic) _Bool energyPerMinuteIsSet;
@property(readonly, nonatomic) unsigned short energyPerHour;
@property(readonly, nonatomic) _Bool energyPerHourIsSet;
@property(readonly, nonatomic) unsigned short totalEnergy;
@property(readonly, nonatomic) _Bool totalEnergyIsSet;
@property(readonly, nonatomic) unsigned short positiveElevationGain;
@property(readonly, nonatomic) _Bool positiveElevationGainIsSet;
@property(readonly, nonatomic) unsigned short averageStepRate;
@property(readonly, nonatomic) _Bool averageStepRateIsSet;
@property(readonly, nonatomic) unsigned short stepPerMinute;
@property(readonly, nonatomic) _Bool stepPerMinuteIsSet;
@property(readonly, nonatomic) unsigned short stepCount;
@property(readonly, nonatomic) _Bool stepCountIsSet;
@property(readonly, nonatomic) unsigned short floors;
@property(readonly, nonatomic) _Bool floorsIsSet;
- (id)description;
- (id)init;
- (id)allFields;
- (id)generateDatums:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSDate *updateTime;

@end

