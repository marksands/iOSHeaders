//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapFeatureAccess;

__attribute__((visibility("hidden")))
@interface GEORouteRoadMatcher : NSObject
{
    GEOMapFeatureAccess *_mapFeatureAccess;
}

- (void).cxx_destruct;
- (_Bool)allowsNetworkTileLoad;
- (CDStruct_a2ef2718 *)findRoadOnCoordinate:(CDStruct_c3b9c2ee)arg1 withCourse:(double)arg2;
- (id)init;

@end

