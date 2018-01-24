//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEORoutePreloader.h>

#import "GEORoutePreloaderSubclass.h"

@class GEOMapServiceTraits, GEOTransitDecoderData, GEOTransitSuggestedRoute, NSObject<OS_os_log>, NSTimer, _GEOTransitRoutePreloaderData;

@interface GEOTransitRoutePreloader : GEORoutePreloader <GEORoutePreloaderSubclass>
{
    GEOTransitDecoderData *_decoderData;
    GEOTransitSuggestedRoute *_suggestedRoute;
    _GEOTransitRoutePreloaderData *_reserved;
    GEOMapServiceTraits *_traits;
    double _endRoutePosition;
    long long _indexOfLastStepWithPreparedBatch;
    NSTimer *_geodCrashTimer;
    double _radialDistanceToImplicateTilesMeters;
    long long _tilesRequested;
    _Bool _shouldPreloadEntireRoute;
}

- (void).cxx_destruct;
- (void)_geodCrashed:(id)arg1;
- (void)_loadPlacecardsForBatch:(id)arg1;
- (void)_loadTilesForBatch:(id)arg1;
- (void)_processedFinishedBatch:(id)arg1 withPartialStatus:(unsigned long long)arg2;
- (void)_processBatches;
- (void)_makePreloadBatchForTilesOnRouteWithSteps:(id)arg1 andPriority:(unsigned int)arg2;
- (void)_makePreloadBatchForPlaceDataOnSteps:(id)arg1;
- (void)_makePreloadBatchForSteps:(id)arg1;
- (void)_makePreloadBatchForGraph;
- (void)_makeBatchForTilesAroundStationsForSteps:(id)arg1;
- (void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)arg1;
- (void)_makeBatchesForSteps:(id)arg1;
- (void)_performNextRequests;
- (struct PolylineCoordinate)_polylineCoordinateForDouble:(double)arg1;
- (void)_cancelAllBatches;
- (void)stopLoading;
- (void)beginLoading;
- (id)route;
- (void)updateWithRouteMatch:(id)arg1;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (_Bool)isSufficientlyLoaded;
@property(readonly, nonatomic) NSObject<OS_os_log> *preloaderLog;
- (_Bool)fullDebuggingEnabled;
- (_Bool)minimalDebuggingEnabled;
- (void)setShouldPreloadEntireRoute:(_Bool)arg1;
- (long long)tilesRequested;
- (void)setTraits:(id)arg1;
- (void)performTearDown;
- (void)_cancelPreloadTasks;
- (void)_resetErrorCounts;
- (void)_retryFailuresWithErrorsReset:(_Bool)arg1;
- (id)initWithRoute:(id)arg1 loggingEnabled:(_Bool)arg2 minimalDebugging:(_Bool)arg3 fullDebugging:(_Bool)arg4 batteryHandler:(CDUnknownBlockType)arg5;

@end

