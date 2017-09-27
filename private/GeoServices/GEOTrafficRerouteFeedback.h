//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray;

@interface GEOTrafficRerouteFeedback : PBCodable <NSCopying>
{
    int _actionType;
    int _alertType;
    unsigned int _oldRouteHistoricTravelTime;
    NSData *_oldRouteID;
    NSMutableArray *_oldRouteIncidents;
    unsigned int _oldRouteTravelTime;
    int _rerouteType;
    unsigned int _reroutedRouteHistoricTravelTime;
    NSData *_reroutedRouteID;
    unsigned int _reroutedRouteTravelTime;
    NSData *_responseId;
    _Bool _backgrounded;
    struct {
        unsigned int actionType:1;
        unsigned int alertType:1;
        unsigned int oldRouteHistoricTravelTime:1;
        unsigned int oldRouteTravelTime:1;
        unsigned int rerouteType:1;
        unsigned int reroutedRouteHistoricTravelTime:1;
        unsigned int reroutedRouteTravelTime:1;
        unsigned int backgrounded:1;
    } _has;
}

+ (Class)oldRouteIncidentsType;
@property(retain, nonatomic) NSData *responseId; // @synthesize responseId=_responseId;
@property(nonatomic) _Bool backgrounded; // @synthesize backgrounded=_backgrounded;
@property(retain, nonatomic) NSData *reroutedRouteID; // @synthesize reroutedRouteID=_reroutedRouteID;
@property(retain, nonatomic) NSData *oldRouteID; // @synthesize oldRouteID=_oldRouteID;
@property(retain, nonatomic) NSMutableArray *oldRouteIncidents; // @synthesize oldRouteIncidents=_oldRouteIncidents;
@property(nonatomic) unsigned int reroutedRouteHistoricTravelTime; // @synthesize reroutedRouteHistoricTravelTime=_reroutedRouteHistoricTravelTime;
@property(nonatomic) unsigned int oldRouteHistoricTravelTime; // @synthesize oldRouteHistoricTravelTime=_oldRouteHistoricTravelTime;
@property(nonatomic) unsigned int reroutedRouteTravelTime; // @synthesize reroutedRouteTravelTime=_reroutedRouteTravelTime;
@property(nonatomic) unsigned int oldRouteTravelTime; // @synthesize oldRouteTravelTime=_oldRouteTravelTime;
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
@property(readonly, nonatomic) _Bool hasResponseId;
- (int)StringAsRerouteType:(id)arg1;
- (id)rerouteTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRerouteType;
@property(nonatomic) int rerouteType; // @synthesize rerouteType=_rerouteType;
@property(nonatomic) _Bool hasBackgrounded;
- (int)StringAsAlertType:(id)arg1;
- (id)alertTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAlertType;
@property(nonatomic) int alertType; // @synthesize alertType=_alertType;
- (int)StringAsActionType:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasActionType;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) _Bool hasReroutedRouteID;
@property(readonly, nonatomic) _Bool hasOldRouteID;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)oldRouteIncidentsCount;
- (void)addOldRouteIncidents:(id)arg1;
- (void)clearOldRouteIncidents;
@property(nonatomic) _Bool hasReroutedRouteHistoricTravelTime;
@property(nonatomic) _Bool hasOldRouteHistoricTravelTime;
@property(nonatomic) _Bool hasReroutedRouteTravelTime;
@property(nonatomic) _Bool hasOldRouteTravelTime;

@end

