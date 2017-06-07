//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPQuaternion;

@interface CLPIndoorCMAttitude : PBCodable <NSCopying>
{
    double _timestamp;
    float _magneticAccuracy;
    int _magneticCalibration;
    CLPQuaternion *_quaternion;
    struct {
        unsigned int timestamp:1;
        unsigned int magneticAccuracy:1;
        unsigned int magneticCalibration:1;
    } _has;
}

@property(nonatomic) float magneticAccuracy; // @synthesize magneticAccuracy=_magneticAccuracy;
@property(retain, nonatomic) CLPQuaternion *quaternion; // @synthesize quaternion=_quaternion;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsMagneticCalibration:(id)arg1;
- (id)magneticCalibrationAsString:(int)arg1;
@property(nonatomic) _Bool hasMagneticCalibration;
@property(nonatomic) int magneticCalibration; // @synthesize magneticCalibration=_magneticCalibration;
@property(nonatomic) _Bool hasMagneticAccuracy;
@property(readonly, nonatomic) _Bool hasQuaternion;
@property(nonatomic) _Bool hasTimestamp;

@end

