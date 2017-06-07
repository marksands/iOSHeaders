//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitIncidentEntity-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitIncidentEntityFilter, NSSet, NSString, PBUnknownFields;

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _affectedMuid;
    GEOPBTransitIncidentEntityFilter *_filter;
    struct {
        unsigned int affectedMuid:1;
    } _has;
}

@property(retain, nonatomic) GEOPBTransitIncidentEntityFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) unsigned long long affectedMuid; // @synthesize affectedMuid=_affectedMuid;
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
@property(readonly, nonatomic) _Bool hasFilter;
@property(nonatomic) _Bool hasAffectedMuid;
@property(readonly, nonatomic) NSSet *nextStopIDs;
@property(readonly, nonatomic) _Bool hasNextStopIDs;
@property(readonly, nonatomic) unsigned long long muid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

