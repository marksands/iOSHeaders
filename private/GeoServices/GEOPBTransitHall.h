//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOStyleAttributes, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPBTransitHall : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    unsigned int _hallIndex;
    GEOLatLng *_location;
    NSString *_nameDisplayString;
    unsigned int _stationIndex;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_zoomNames;
    struct {
        unsigned int muid:1;
        unsigned int hallIndex:1;
        unsigned int stationIndex:1;
    } _has;
}

+ (Class)zoomNameType;
@property(retain, nonatomic) NSString *nameDisplayString; // @synthesize nameDisplayString=_nameDisplayString;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) NSMutableArray *zoomNames; // @synthesize zoomNames=_zoomNames;
@property(retain, nonatomic) GEOLatLng *location; // @synthesize location=_location;
@property(nonatomic) unsigned int stationIndex; // @synthesize stationIndex=_stationIndex;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(nonatomic) unsigned int hallIndex; // @synthesize hallIndex=_hallIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasNameDisplayString;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
- (id)zoomNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoomNamesCount;
- (void)addZoomName:(id)arg1;
- (void)clearZoomNames;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasStationIndex;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) _Bool hasHallIndex;
- (id)identifier;
- (id)bestNameWithLocale:(out id *)arg1;
- (id)bestName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

