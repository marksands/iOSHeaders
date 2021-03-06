//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOComposedWaypoint, PBUnknownFields;

@interface MSPRidesharingTrip : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOComposedWaypoint *_endWaypoint;
    GEOComposedWaypoint *_startWaypoint;
}

@property(retain, nonatomic) GEOComposedWaypoint *endWaypoint; // @synthesize endWaypoint=_endWaypoint;
@property(retain, nonatomic) GEOComposedWaypoint *startWaypoint; // @synthesize startWaypoint=_startWaypoint;
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
@property(readonly, nonatomic) _Bool hasEndWaypoint;
@property(readonly, nonatomic) _Bool hasStartWaypoint;

@end

