//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationWalkingMapMatcher : GEONavigationMapMatcher
{
    unsigned long long _numProgressionsOffRoute;
}

- (id)_routeMatcherForRoute:(id)arg1;
- (int)transportType;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;

@end

