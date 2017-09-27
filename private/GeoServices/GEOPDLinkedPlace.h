//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOPDMapsIdentifier, GEOStyleAttributes, NSString, PBUnknownFields;

@interface GEOPDLinkedPlace : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _featureId;
    GEOLatLng *_center;
    GEOPDMapsIdentifier *_mapsId;
    NSString *_name;
    GEOStyleAttributes *_styleAttributes;
    CDStruct_b1448a5c _has;
}

@property(nonatomic) unsigned long long featureId; // @synthesize featureId=_featureId;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) GEOPDMapsIdentifier *mapsId; // @synthesize mapsId=_mapsId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFeatureId;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(readonly, nonatomic) _Bool hasCenter;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasMapsId;

@end

