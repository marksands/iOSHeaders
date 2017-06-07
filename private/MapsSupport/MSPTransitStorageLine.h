//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitLine-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class GEOMapItemIdentifier, MSPTransitStorageArtwork, MSPTransitStorageSystem, NSArray, NSString, PBUnknownFields;

@interface MSPTransitStorageLine : PBCodable <GEOTransitLine, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    MSPTransitStorageArtwork *_alternateArtwork;
    MSPTransitStorageArtwork *_artwork;
    NSString *_lineColorString;
    MSPTransitStorageArtwork *_modeArtwork;
    NSString *_name;
    MSPTransitStorageSystem *_system;
    CDStruct_e99c65f7 _has;
}

@property(retain, nonatomic) MSPTransitStorageArtwork *alternateArtwork; // @synthesize alternateArtwork=_alternateArtwork;
@property(retain, nonatomic) MSPTransitStorageSystem *system; // @synthesize system=_system;
@property(retain, nonatomic) MSPTransitStorageArtwork *modeArtwork; // @synthesize modeArtwork=_modeArtwork;
@property(retain, nonatomic) MSPTransitStorageArtwork *artwork; // @synthesize artwork=_artwork;
@property(retain, nonatomic) NSString *lineColorString; // @synthesize lineColorString=_lineColorString;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
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
@property(readonly, nonatomic) _Bool hasAlternateArtwork;
@property(readonly, nonatomic) _Bool hasSystem;
@property(readonly, nonatomic) _Bool hasModeArtwork;
@property(readonly, nonatomic) _Bool hasArtwork;
@property(readonly, nonatomic) _Bool hasLineColorString;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasMuid;
@property(readonly, nonatomic) _Bool departuresAreVehicleSpecific;
@property(readonly, nonatomic) _Bool showVehicleNumber;
@property(readonly, nonatomic) NSArray *operatingHours;
@property(readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
- (id)initWithLine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

