//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSString, VKRouteInfo;

@interface VKRouteContext : NSObject
{
    VKRouteInfo *_routeInfo;
    unsigned char useType;
    long long _inspectedLegIndex;
    long long _inspectedStepIndex;
    struct PolylineCoordinate _routeOffset;
    long long _currentLegIndex;
    long long _currentStepIndex;
    _Bool _snappingToTransitLines;
    CDStruct_2c43369c _puckLocation;
    float _puckRadius;
    unsigned long long _puckSnappedStopID;
    NSString *_locale;
    NSString *_accessPointEntryName;
    NSString *_accessPointExitName;
    _Bool _hasContextChangedForLabels;
    NSHashTable *_labelObservers;
    _Bool _hasContextChangedForRouteLine;
    NSHashTable *_routeLineObservers;
    _Bool _hasContextChangedForAlternateRouteLines;
    NSHashTable *_alternateRouteLineObservers;
    NSArray *_alternateRoutes;
    unsigned char _useType;
}

@property(retain, nonatomic) NSArray *alternateRoutes; // @synthesize alternateRoutes=_alternateRoutes;
@property(retain, nonatomic) NSString *accessPointExitName; // @synthesize accessPointExitName=_accessPointExitName;
@property(retain, nonatomic) NSString *accessPointEntryName; // @synthesize accessPointEntryName=_accessPointEntryName;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) unsigned long long puckSnappedStopID; // @synthesize puckSnappedStopID=_puckSnappedStopID;
@property(nonatomic) float puckRadius; // @synthesize puckRadius=_puckRadius;
@property(nonatomic) CDStruct_c3b9c2ee puckLocation; // @synthesize puckLocation=_puckLocation;
@property(nonatomic) long long inspectedStepIndex; // @synthesize inspectedStepIndex=_inspectedStepIndex;
@property(nonatomic) long long inspectedLegIndex; // @synthesize inspectedLegIndex=_inspectedLegIndex;
@property(nonatomic) _Bool snappingToTransitLines; // @synthesize snappingToTransitLines=_snappingToTransitLines;
@property(nonatomic) long long currentStepIndex; // @synthesize currentStepIndex=_currentStepIndex;
@property(nonatomic) long long currentLegIndex; // @synthesize currentLegIndex=_currentLegIndex;
@property(nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(readonly, nonatomic) unsigned char useType; // @synthesize useType=_useType;
@property(readonly, nonatomic) VKRouteInfo *routeInfo; // @synthesize routeInfo=_routeInfo;
- (id).cxx_construct;
- (void)resetNotificationsForObserverType:(unsigned char)arg1;
- (void)removeObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)addObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)_setHasContextChangedForObserverType:(unsigned char)arg1 withValue:(_Bool)arg2;
- (id)_hashTableForObserverType:(unsigned char)arg1;
- (void)dealloc;
- (id)initWithRouteInfo:(id)arg1 useType:(unsigned char)arg2;
- (id)initWithComposedRoute:(id)arg1 useType:(unsigned char)arg2 uniqueStart:(struct PolylineCoordinate)arg3 uniqueEnd:(struct PolylineCoordinate)arg4;

@end

