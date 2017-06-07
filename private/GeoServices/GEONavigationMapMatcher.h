//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOLocationShifter, GEONavigationMatchResult, GEORoadMatcher, GEORouteMatcher;

@interface GEONavigationMapMatcher : NSObject
{
    GEONavigationMatchResult *_previousMatchResult;
    GEOComposedRoute *_route;
    GEORouteMatcher *_routeMatcher;
    GEORoadMatcher *_roadMatcher;
    GEOLocationShifter *_locationShifter;
    _Bool _isSimulation;
}

@property(nonatomic) _Bool isSimulation; // @synthesize isSimulation=_isSimulation;
@property(retain, nonatomic) GEONavigationMatchResult *previousMatchResult; // @synthesize previousMatchResult=_previousMatchResult;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (id)_routeMatcherForRoute:(id)arg1;
- (void)setShouldSnapRouteMatchToRoute:(_Bool)arg1;
- (void)resetToLocation:(id)arg1;
- (int)transportType;
- (id)updateForReroute:(id)arg1 location:(id)arg2;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (id)initWithRoute:(id)arg1;

@end

