//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNActiveRouteInfo, MNLocation, NSArray, NSTimer;

__attribute__((visibility("hidden")))
@interface MNTimeAndDistanceUpdater : NSObject
{
    id <MNTimeAndDistanceUpdaterDelegate> _delegate;
    MNLocation *_location;
    NSArray *_routes;
    NSTimer *_minuteTimer;
    MNActiveRouteInfo *_mainRoute;
    double _remainingTime;
    double _remainingDistance;
    double _distanceToManeuverStart;
    double _distanceToManeuverEnd;
}

@property(readonly, nonatomic) double distanceToManeuverEnd; // @synthesize distanceToManeuverEnd=_distanceToManeuverEnd;
@property(readonly, nonatomic) double distanceToManeuverStart; // @synthesize distanceToManeuverStart=_distanceToManeuverStart;
@property(readonly, nonatomic) double remainingDistance; // @synthesize remainingDistance=_remainingDistance;
@property(readonly, nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) __weak id <MNTimeAndDistanceUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_startTimerToNextMinute;
- (void)updateDisplayETAForRoute:(id)arg1 shouldNotifyDelegate:(_Bool)arg2;
- (void)setRoutes:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)stopUpdating;
- (void)startUpdating;
- (void)dealloc;

@end

