//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDEurotasData : HDHealthServiceCharacteristic
{
    _Bool _hasHeartRate;
    _Bool _hasActiveEnergy;
    _Bool _hasTotalEnergy;
    _Bool _hasAverageHeartRate;
    unsigned short _heartRate;
    unsigned short _activeEnergy;
    unsigned short _totalEnergy;
    unsigned short _averageHeartRate;
}

+ (id)uuid;
@property(readonly, nonatomic) unsigned short averageHeartRate; // @synthesize averageHeartRate=_averageHeartRate;
@property(readonly, nonatomic) _Bool hasAverageHeartRate; // @synthesize hasAverageHeartRate=_hasAverageHeartRate;
@property(readonly, nonatomic) unsigned short totalEnergy; // @synthesize totalEnergy=_totalEnergy;
@property(readonly, nonatomic) _Bool hasTotalEnergy; // @synthesize hasTotalEnergy=_hasTotalEnergy;
@property(readonly, nonatomic) unsigned short activeEnergy; // @synthesize activeEnergy=_activeEnergy;
@property(readonly, nonatomic) _Bool hasActiveEnergy; // @synthesize hasActiveEnergy=_hasActiveEnergy;
@property(readonly, nonatomic) unsigned short heartRate; // @synthesize heartRate=_heartRate;
@property(readonly, nonatomic) _Bool hasHeartRate; // @synthesize hasHeartRate=_hasHeartRate;
- (_Bool)_appendUInt16Value:(unsigned short)arg1 type:(unsigned char)arg2 toData:(char **)arg3 before:(const char *)arg4;
- (void)addAverageHeartRate:(unsigned short)arg1;
- (void)addTotalEnergy:(unsigned short)arg1;
- (void)addActiveEnergy:(unsigned short)arg1;
- (void)addHeartRate:(unsigned short)arg1;
- (id)getBinaryValueWithError:(id *)arg1;
- (id)initForWriting;

@end

