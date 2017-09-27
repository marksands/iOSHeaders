//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedRoute, GEOComposedRouteStep, GEOGuidanceEvent, GEOJunction, GEONameInfo, NSArray, NSMutableArray, NSString, NSUUID;

@interface GEOComposedGuidanceEvent : NSObject
{
    NSUUID *_uniqueID;
    unsigned long long _creationOrder;
    GEOGuidanceEvent *_guidanceEvent;
    GEOComposedRoute *_route;
    unsigned long long _source;
    unsigned long long _stepIndex;
    unsigned long long _enrouteNoticeIndex;
    unsigned long long _sourceIndex;
    _Bool _clampToStep;
    NSMutableArray *_lanes;
    double _startValidDistance;
    double _endValidDistance;
    double _referencePointDistance;
    double _distanceForStrings;
    GEOJunction *_maneuverJunction;
}

@property(readonly, nonatomic) double distanceForStrings; // @synthesize distanceForStrings=_distanceForStrings;
@property(readonly, nonatomic) double referencePointDistance; // @synthesize referencePointDistance=_referencePointDistance;
@property(readonly, nonatomic) unsigned long long enrouteNoticeIndex; // @synthesize enrouteNoticeIndex=_enrouteNoticeIndex;
@property(retain, nonatomic) GEOGuidanceEvent *guidanceEvent; // @synthesize guidanceEvent=_guidanceEvent;
@property(readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (long long)comparePriority:(id)arg1;
- (long long)compareFactoringInSpeed:(id)arg1 speed:(double)arg2;
- (long long)compare:(id)arg1;
- (_Bool)_MapsCarPlay_isEqual:(id)arg1;
- (double)desiredTimeGapToEvent:(id)arg1 chained:(_Bool)arg2;
- (double)triggerDistanceForSpeed:(double)arg1 andDuration:(CDUnknownBlockType)arg2;
- (double)endDistanceForSpeed:(double)arg1;
- (double)startDistanceForSpeed:(double)arg1;
- (_Bool)isValidForSpeed:(double)arg1;
@property(readonly, nonatomic) double endValidDistance; // @synthesize endValidDistance=_endValidDistance;
@property(readonly, nonatomic) double startValidDistance; // @synthesize startValidDistance=_startValidDistance;
@property(readonly, nonatomic) unsigned long long numChainedAnnouncements;
@property(readonly, nonatomic) _Bool isLaneGuidanceForManeuver;
@property(readonly, nonatomic) int composedGuidanceEventType;
@property(readonly, nonatomic) NSArray *laneInstructions;
@property(readonly, nonatomic) NSArray *lanes;
@property(readonly, nonatomic) _Bool isSticky;
@property(readonly, nonatomic) _Bool hasHaptics;
@property(readonly, nonatomic) double repetitionInterval;
@property(readonly, nonatomic) NSArray *announcements;
@property(readonly, nonatomic) NSString *exclusiveSetIdentifier;
@property(readonly, nonatomic) GEOJunction *maneuverJunction;
@property(readonly, nonatomic) int drivingSide;
@property(readonly, nonatomic) int maneuverArrow;
@property(readonly, nonatomic) GEONameInfo *shieldInfo;
@property(readonly, nonatomic) NSArray *signDetails;
@property(readonly, nonatomic) NSArray *signTitles;
@property(readonly, nonatomic) unsigned long long stackRanking;
@property(readonly, nonatomic) _Bool hasSpokenGuidance;
@property(readonly, nonatomic) _Bool hasSignGuidance;
@property(readonly, nonatomic) unsigned long long sourceIndex;
@property(readonly, nonatomic) unsigned long long source;
- (void)_findSource;
@property(readonly, nonatomic) GEOComposedRouteStep *step;
- (id)description;
- (void)_lazyInit;
- (_Bool)_needsLazyInit;
- (id)initWithGuidanceEvent:(id)arg1 stepIndex:(unsigned long long)arg2 composedRoute:(id)arg3 clampToStep:(_Bool)arg4;

@end

