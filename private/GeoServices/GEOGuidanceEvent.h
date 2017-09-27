//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOSignGuidance, GEOSpokenGuidance, GEOVisualLaneGuidance;

@interface GEOGuidanceEvent : PBCodable <NSCopying>
{
    double _maxSpeed;
    double _minSpeed;
    int _distanceZilchIndex;
    int _endValidDistance;
    int _eventType;
    unsigned int _identifier;
    GEOVisualLaneGuidance *_laneGuidance;
    int _offsetForDistanceString;
    GEOSignGuidance *_signGuidance;
    GEOSpokenGuidance *_spokenGuidance;
    int _startValidDistance;
    _Bool _sticky;
    struct {
        unsigned int maxSpeed:1;
        unsigned int minSpeed:1;
        unsigned int distanceZilchIndex:1;
        unsigned int endValidDistance:1;
        unsigned int eventType:1;
        unsigned int identifier:1;
        unsigned int offsetForDistanceString:1;
        unsigned int startValidDistance:1;
        unsigned int sticky:1;
    } _has;
}

@property(nonatomic) _Bool sticky; // @synthesize sticky=_sticky;
@property(nonatomic) int offsetForDistanceString; // @synthesize offsetForDistanceString=_offsetForDistanceString;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double maxSpeed; // @synthesize maxSpeed=_maxSpeed;
@property(nonatomic) double minSpeed; // @synthesize minSpeed=_minSpeed;
@property(nonatomic) int distanceZilchIndex; // @synthesize distanceZilchIndex=_distanceZilchIndex;
@property(retain, nonatomic) GEOVisualLaneGuidance *laneGuidance; // @synthesize laneGuidance=_laneGuidance;
@property(retain, nonatomic) GEOSpokenGuidance *spokenGuidance; // @synthesize spokenGuidance=_spokenGuidance;
@property(retain, nonatomic) GEOSignGuidance *signGuidance; // @synthesize signGuidance=_signGuidance;
@property(nonatomic) int endValidDistance; // @synthesize endValidDistance=_endValidDistance;
@property(nonatomic) int startValidDistance; // @synthesize startValidDistance=_startValidDistance;
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
@property(nonatomic) _Bool hasSticky;
@property(nonatomic) _Bool hasOffsetForDistanceString;
@property(nonatomic) _Bool hasIdentifier;
- (int)StringAsEventType:(id)arg1;
- (id)eventTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) _Bool hasMaxSpeed;
@property(nonatomic) _Bool hasMinSpeed;
@property(nonatomic) _Bool hasDistanceZilchIndex;
@property(readonly, nonatomic) _Bool hasLaneGuidance;
@property(readonly, nonatomic) _Bool hasSpokenGuidance;
@property(readonly, nonatomic) _Bool hasSignGuidance;
@property(nonatomic) _Bool hasEndValidDistance;
@property(nonatomic) _Bool hasStartValidDistance;

@end

