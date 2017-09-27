//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocation, NSString, PBUnknownFields, _INPBImageValue;

@interface _INPBRideVehicle : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOLocation *_location;
    NSString *_manufacturer;
    _INPBImageValue *_mapAnnotationImage;
    NSString *_model;
    NSString *_registrationPlate;
}

+ (id)options;
@property(retain, nonatomic) _INPBImageValue *mapAnnotationImage; // @synthesize mapAnnotationImage=_mapAnnotationImage;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) NSString *registrationPlate; // @synthesize registrationPlate=_registrationPlate;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMapAnnotationImage;
@property(readonly, nonatomic) _Bool hasModel;
@property(readonly, nonatomic) _Bool hasManufacturer;
@property(readonly, nonatomic) _Bool hasRegistrationPlate;
@property(readonly, nonatomic) _Bool hasLocation;

@end

