//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEORouteTrafficDetail, GEOShortTrafficSummary, NSMutableArray;

@interface GEOETAResultByType : PBCodable <NSCopying>
{
    double _expectedTimeOfDeparture;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    GEORouteTrafficDetail *_routeTrafficDetail;
    GEOShortTrafficSummary *_shortTrafficSummary;
    unsigned int _staticTravelTime;
    int _status;
    NSMutableArray *_summaryForPredictedDestinations;
    int _transportType;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeBestEstimate;
    unsigned int _travelTimeConservativeEstimate;
    struct {
        unsigned int expectedTimeOfDeparture:1;
        unsigned int distance:1;
        unsigned int historicTravelTime:1;
        unsigned int staticTravelTime:1;
        unsigned int status:1;
        unsigned int transportType:1;
        unsigned int travelTimeAggressiveEstimate:1;
        unsigned int travelTimeBestEstimate:1;
        unsigned int travelTimeConservativeEstimate:1;
    } _has;
}

+ (Class)summaryForPredictedDestinationType;
@property(retain, nonatomic) GEOShortTrafficSummary *shortTrafficSummary; // @synthesize shortTrafficSummary=_shortTrafficSummary;
@property(retain, nonatomic) GEORouteTrafficDetail *routeTrafficDetail; // @synthesize routeTrafficDetail=_routeTrafficDetail;
@property(retain, nonatomic) NSMutableArray *summaryForPredictedDestinations; // @synthesize summaryForPredictedDestinations=_summaryForPredictedDestinations;
@property(nonatomic) unsigned int staticTravelTime; // @synthesize staticTravelTime=_staticTravelTime;
@property(nonatomic) unsigned int travelTimeAggressiveEstimate; // @synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate;
@property(nonatomic) unsigned int travelTimeConservativeEstimate; // @synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate;
@property(nonatomic) double expectedTimeOfDeparture; // @synthesize expectedTimeOfDeparture=_expectedTimeOfDeparture;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property(nonatomic) unsigned int travelTimeBestEstimate; // @synthesize travelTimeBestEstimate=_travelTimeBestEstimate;
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
@property(readonly, nonatomic) _Bool hasShortTrafficSummary;
@property(readonly, nonatomic) _Bool hasRouteTrafficDetail;
- (id)summaryForPredictedDestinationAtIndex:(unsigned long long)arg1;
- (unsigned long long)summaryForPredictedDestinationsCount;
- (void)addSummaryForPredictedDestination:(id)arg1;
- (void)clearSummaryForPredictedDestinations;
@property(nonatomic) _Bool hasStaticTravelTime;
@property(nonatomic) _Bool hasTravelTimeAggressiveEstimate;
@property(nonatomic) _Bool hasTravelTimeConservativeEstimate;
@property(nonatomic) _Bool hasExpectedTimeOfDeparture;
@property(nonatomic) _Bool hasDistance;
@property(nonatomic) _Bool hasHistoricTravelTime;
@property(nonatomic) _Bool hasTravelTimeBestEstimate;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;

@end

