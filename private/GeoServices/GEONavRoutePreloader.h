//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEORoutePreloader.h>

@class GEOTileKeyList, NSMapTable, NSMutableArray, NSMutableDictionary, NSTimer;
@protocol GEORoutePreloadCamera;

@interface GEONavRoutePreloader : GEORoutePreloader
{
    id <GEORoutePreloadCamera> _camera;
    GEOTileKeyList *_tilesLoadingOrLoaded;
    GEOTileKeyList *_tilesReceived;
    GEOTileKeyList *_tilesMissed;
    NSMutableArray *_steps;
    NSMutableArray *_failedSubscriptions;
    NSMutableDictionary *_subscriptions;
    unsigned int _stepGeneration;
    _Bool _tooFarFromRoute;
    long long _currentLoadingSteps;
    NSMapTable *_stepErrors;
    NSMapTable *_stepLifetimeErrors;
    _Bool _anyErrors;
    _Bool _finished;
    double _beginTime;
    double _mostRecentErrorTime;
    _Bool _hadEnoughTilesToDisableNetworking;
    NSTimer *_geodCrashTimer;
    double _maneuverSizeInMeters;
}

@property(retain, nonatomic) id <GEORoutePreloadCamera> camera; // @synthesize camera=_camera;
- (void).cxx_destruct;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)setTraits:(id)arg1;
- (void)updateWithRouteMatch:(id)arg1;
- (void)stopLoading;
- (void)beginLoading;
- (void)preloaderLog:(id)arg1;
- (void)_performNextRequests;
- (void)_performTileRequestsPreemptedStepIndex:(long long)arg1 currentRoutePositionStepIndex:(long long)arg2 firstErrorStepIndex:(long long)arg3 firstLoadStepIndex:(long long)arg4 loadStepsAhead:(long long)arg5 loadStepsAheadIfNoWiFi:(long long)arg6;
- (void)_performSubscriptionRequestsPreemptedStepIndex:(long long)arg1 currentRoutePositionStepIndex:(long long)arg2 firstErrorStepIndex:(long long)arg3 firstLoadStepIndex:(long long)arg4 loadStepsAhead:(long long)arg5 loadStepsAheadIfNoWiFi:(long long)arg6;
- (void)_cancelRequestsInPast;
- (id)_descriptionForStep:(id)arg1;
- (void)_incrementErrorForStep:(id)arg1;
- (_Bool)_loadStep:(id)arg1 requireWiFi:(_Bool)arg2;
- (void)_evaluateNetworkPerformance:(id)arg1;
- (void)_cancelAllSteps;
- (void)_cancelStep:(id)arg1;
- (void)_accumulateSteps;
- (void)_geodCrashed:(id)arg1;
- (void)_cancelPreloadTasks;
- (void)_retryFailuresWithErrorsReset:(_Bool)arg1;
- (void)_resetErrCounts;
- (void)setNetworkQuality:(unsigned long long)arg1;
- (_Bool)isSufficientlyLoaded;
- (_Bool)fullDebuggingEnabled;
- (_Bool)minimalDebuggingEnabled;
- (_Bool)loggingEnabled;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 loggingEnabled:(_Bool)arg2 minimalDebugging:(_Bool)arg3 fullDebugging:(_Bool)arg4 batteryHandler:(CDUnknownBlockType)arg5;

@end

