//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationDrivingMapMatcher : GEONavigationMapMatcher
{
}

- (id)_routeMatcherForRoute:(id)arg1;
- (double)_approximateMaxSpeedForRoad:(CDStruct_a2ef2718 *)arg1;
- (_Bool)_isParkingLotFormOfWay:(int)arg1;
- (_Bool)_shouldConsiderRoadMatch:(id)arg1 overRouteMatch:(id)arg2 forLocation:(id)arg3;
- (_Bool)_locationMeetsSpeedThresholdForRoadMatch:(id)arg1 distanceFromRoute:(double)arg2;
- (int)transportType;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;

@end

