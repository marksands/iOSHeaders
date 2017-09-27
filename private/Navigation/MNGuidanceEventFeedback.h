//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString, NSUUID;

@interface MNGuidanceEventFeedback : PBCodable <NSCopying>
{
    double _endDistance;
    double _endTime;
    double _maneuverTime;
    double _startDistance;
    double _startTime;
    double _vehicleSpeed;
    unsigned int _enrouteNoticeIndex;
    NSString *_eventDescription;
    unsigned int _eventIndex;
    NSData *_routeID;
    unsigned int _selectedPrimaryStringIndex;
    unsigned int _selectedSecondaryStringIndex;
    unsigned int _stepID;
    unsigned int _trafficColor;
    int _type;
    NSString *_uniqueIDstring;
    _Bool _shortPrompt;
    struct {
        unsigned int endDistance:1;
        unsigned int endTime:1;
        unsigned int maneuverTime:1;
        unsigned int startDistance:1;
        unsigned int startTime:1;
        unsigned int vehicleSpeed:1;
        unsigned int enrouteNoticeIndex:1;
        unsigned int eventIndex:1;
        unsigned int selectedPrimaryStringIndex:1;
        unsigned int selectedSecondaryStringIndex:1;
        unsigned int stepID:1;
        unsigned int trafficColor:1;
        unsigned int type:1;
        unsigned int shortPrompt:1;
    } _has;
}

@property(retain, nonatomic) NSString *eventDescription; // @synthesize eventDescription=_eventDescription;
@property(nonatomic) double maneuverTime; // @synthesize maneuverTime=_maneuverTime;
@property(nonatomic) double endDistance; // @synthesize endDistance=_endDistance;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) _Bool shortPrompt; // @synthesize shortPrompt=_shortPrompt;
@property(nonatomic) unsigned int selectedSecondaryStringIndex; // @synthesize selectedSecondaryStringIndex=_selectedSecondaryStringIndex;
@property(nonatomic) unsigned int selectedPrimaryStringIndex; // @synthesize selectedPrimaryStringIndex=_selectedPrimaryStringIndex;
@property(nonatomic) unsigned int trafficColor; // @synthesize trafficColor=_trafficColor;
@property(nonatomic) double vehicleSpeed; // @synthesize vehicleSpeed=_vehicleSpeed;
@property(nonatomic) double startDistance; // @synthesize startDistance=_startDistance;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int eventIndex; // @synthesize eventIndex=_eventIndex;
@property(nonatomic) unsigned int enrouteNoticeIndex; // @synthesize enrouteNoticeIndex=_enrouteNoticeIndex;
@property(nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(retain, nonatomic) NSString *uniqueIDstring; // @synthesize uniqueIDstring=_uniqueIDstring;
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
@property(readonly, nonatomic) _Bool hasEventDescription;
@property(nonatomic) _Bool hasManeuverTime;
@property(nonatomic) _Bool hasEndDistance;
@property(nonatomic) _Bool hasEndTime;
@property(nonatomic) _Bool hasShortPrompt;
@property(nonatomic) _Bool hasSelectedSecondaryStringIndex;
@property(nonatomic) _Bool hasSelectedPrimaryStringIndex;
@property(nonatomic) _Bool hasTrafficColor;
@property(nonatomic) _Bool hasVehicleSpeed;
@property(nonatomic) _Bool hasStartDistance;
@property(nonatomic) _Bool hasStartTime;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasEventIndex;
@property(nonatomic) _Bool hasEnrouteNoticeIndex;
@property(nonatomic) _Bool hasStepID;
@property(readonly, nonatomic) _Bool hasRouteID;
@property(readonly, nonatomic) _Bool hasUniqueIDstring;
@property(readonly, nonatomic) NSUUID *uniqueID;
- (id)initWithEvent:(id)arg1;

@end

