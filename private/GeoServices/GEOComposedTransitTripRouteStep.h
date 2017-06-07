//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOComposedTransitTripRouteLeg, GEOTransitVehicleInfo, NSArray, NSDate, NSTimeZone;
@protocol GEOTransitLine, GEOTransitSystem;

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep
{
    NSArray *_departureTimes;
    NSArray *_arrivalTimes;
    double _departureTimeIntervalMin;
    double _departureTimeIntervalMax;
    GEOTransitVehicleInfo *_transitVehicle;
    id <GEOTransitLine> _transitLine;
    id <GEOTransitSystem> _transitSystem;
    NSArray *_routeLineArtwork;
    _Bool _isRail;
    _Bool _isBus;
    _Bool _canPreloadTiles;
}

@property(readonly, nonatomic) _Bool isBus; // @synthesize isBus=_isBus;
@property(readonly, nonatomic) _Bool isRail; // @synthesize isRail=_isRail;
@property(readonly, nonatomic) NSArray *routeLineArtwork; // @synthesize routeLineArtwork=_routeLineArtwork;
@property(readonly, nonatomic) id <GEOTransitSystem> transitSystem; // @synthesize transitSystem=_transitSystem;
@property(readonly, nonatomic) id <GEOTransitLine> transitLine; // @synthesize transitLine=_transitLine;
@property(readonly, nonatomic) GEOTransitVehicleInfo *transitVehicle; // @synthesize transitVehicle=_transitVehicle;
@property(readonly, nonatomic) double departureTimeIntervalMax; // @synthesize departureTimeIntervalMax=_departureTimeIntervalMax;
@property(readonly, nonatomic) double departureTimeIntervalMin; // @synthesize departureTimeIntervalMin=_departureTimeIntervalMin;
@property(readonly, nonatomic) NSArray *arrivalTimes; // @synthesize arrivalTimes=_arrivalTimes;
@property(readonly, nonatomic) NSArray *departureTimes; // @synthesize departureTimes=_departureTimes;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool canPreloadTilesForThisStep;
- (unsigned int)duration;
- (_Bool)hasDuration;
@property(readonly, nonatomic) NSDate *arrivalTime;
@property(readonly, nonatomic) NSDate *departureTime;
@property(readonly, nonatomic) NSTimeZone *arrivalTimeZone;
@property(readonly, nonatomic) NSTimeZone *departureTimeZone;
@property(readonly, nonatomic) GEOComposedTransitTripRouteLeg *tripLeg;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange)arg6;

@end

