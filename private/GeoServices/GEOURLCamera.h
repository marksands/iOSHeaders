//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOURLCamera : PBCodable <NSCopying>
{
    double _altitude;
    double _heading;
    double _latitude;
    double _longitude;
    double _pitch;
    struct {
        unsigned int altitude:1;
        unsigned int heading:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int pitch:1;
    } _has;
}

@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double heading; // @synthesize heading=_heading;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAltitude;
@property(nonatomic) _Bool hasPitch;
@property(nonatomic) _Bool hasHeading;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasLatitude;

@end

