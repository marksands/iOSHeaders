//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEODirectionService : NSObject
{
}

+ (id)sharedService;
- (id)ticketForTransitRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForTransitRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 requestMode:(int)arg4;
- (id)ticketForTransitWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 requestMode:(int)arg7;
- (id)ticketForWalkingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForWalkingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 requestMode:(int)arg4;
- (id)ticketForWalkingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 requestMode:(int)arg7;
- (id)ticketForDrivingDoomFromOrigin:(id)arg1 toDestination:(id)arg2 requestPriority:(id)arg3 routeAttributes:(id)arg4;
- (id)ticketForDrivingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForDrivingSearchAlongRoute:(id)arg1 currentLocation:(id)arg2 originalRouteZilchPoints:(id)arg3 originalRouteID:(id)arg4 returnToOriginalDestination:(_Bool)arg5 isReroute:(_Bool)arg6 routeAttributes:(id)arg7;
- (id)ticketForDrivingSearchAlongRoute:(id)arg1 currentLocation:(id)arg2 originalRoute:(id)arg3 returnToOriginalDestination:(_Bool)arg4 isReroute:(_Bool)arg5 routeAttributes:(id)arg6;
- (id)ticketForDrivingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 routeAttributes:(id)arg3 stepIndex:(unsigned long long)arg4 requestMode:(int)arg5;
- (id)ticketForDrivingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 requestMode:(int)arg7;
- (id)directionsURL;

@end

