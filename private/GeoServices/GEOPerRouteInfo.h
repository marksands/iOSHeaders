//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOPerRouteInfo : PBCodable <NSCopying>
{
    struct GEOSessionID _routeUuid;
    unsigned long long _etaServiceTravelTime;
    unsigned long long _originalTravelTime;
    struct {
        unsigned int routeUuid:1;
        unsigned int etaServiceTravelTime:1;
        unsigned int originalTravelTime:1;
    } _has;
}

@property(nonatomic) struct GEOSessionID routeUuid; // @synthesize routeUuid=_routeUuid;
@property(nonatomic) unsigned long long etaServiceTravelTime; // @synthesize etaServiceTravelTime=_etaServiceTravelTime;
@property(nonatomic) unsigned long long originalTravelTime; // @synthesize originalTravelTime=_originalTravelTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRouteUuid;
@property(nonatomic) _Bool hasEtaServiceTravelTime;
@property(nonatomic) _Bool hasOriginalTravelTime;

@end

