//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VKSceneConfiguration : NSObject
{
    shared_ptr_c37d6e02 _sceneManager;
    shared_ptr_a3c46825 _styleManager;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D>> _pointsOfInterest;
    unsigned char _navState;
    unsigned char _distanceToCurrentManeuver;
    double _distanceToDestination;
    int _currentManeuverType;
    unsigned char _currentStepLength;
    unsigned char _nextStepLength;
    unsigned char _currentIncidentType;
    unsigned char _currentManeuverComplexity;
    unsigned long long _currentGroupedManeuverCount;
    unsigned int _lineType;
    int _rampType;
    int _nextManeuverRampType;
    unsigned char _transportType;
    unsigned char _searchAlongTheRoute;
    unsigned char _vehicleSpeed;
    unsigned char _roadSpeed;
    unsigned long long _roadSpeedZeroes;
    unsigned char _cameraMode;
    unsigned char _navigationDestination;
    struct ManeveuverDistancesRange _distanceRanges;
    shared_ptr_e963992e _taskContext;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)analyticsLogContextWithNavigationState;
- (unsigned char)navigationState;
- (unsigned long long)navigationDestination;
- (void)setNavigationDestination:(unsigned long long)arg1;
- (unsigned long long)navCameraMode;
- (void)setNavCameraMode:(unsigned long long)arg1;
- (void)setRoadSpeed:(double)arg1;
- (void)setVehicleSpeed:(double)arg1;
- (void)setSearchAlongTheRoute:(_Bool)arg1;
- (void)setCurrentTransportationType:(int)arg1;
- (void)setNextManeuverRampType:(int)arg1;
- (void)setRampType:(int)arg1;
- (void)setLineType:(unsigned int)arg1;
- (void)setCurrentGroupedManeuverCount:(unsigned long long)arg1;
- (void)setCurrentManeuverJunctionsCount:(unsigned long long)arg1;
- (void)setCurrentIncidentType:(unsigned long long)arg1;
- (void)setNextStepLength:(double)arg1;
- (void)setCurrentStepLength:(double)arg1;
- (void)setCurrentManeuverType:(int)arg1;
- (void)setDistanceToDestination:(double)arg1;
- (void)setDistanceToCurrentManeuver:(double)arg1;
- (void)setNavigationState:(int)arg1;
- (shared_ptr_a3c46825)styleManager;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1;
- (shared_ptr_c37d6e02)sceneManager;
- (void)_updateStyleManager;
- (void)setSceneManager:(shared_ptr_c37d6e02)arg1;
- (void)resetState;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1;

@end

