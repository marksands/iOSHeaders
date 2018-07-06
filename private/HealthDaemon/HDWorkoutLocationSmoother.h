//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationSmootherDelegate.h"

@class CLLocationSmoother, HDProfile, HDSmoothingTask, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate>
{
    NSString *_xpcTransactionName;
    CLLocationSmoother *_smoother;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    NSMutableArray *_pendingSmoothingTasks;
    HDSmoothingTask *_currentSmoothingTask;
    NSObject<OS_dispatch_source> *_timeoutSource;
    double _smoothingTaskTimeout;
}

- (void).cxx_destruct;
- (void)unitTest_smoothRouteSample:(id)arg1 withSmoother:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_cancelTimeout;
- (void)_queue_scheduleSmoothingTimeoutTimerForTask:(id)arg1;
- (id)_locationsForSampleUUID:(id)arg1 error:(id *)arg2;
- (_Bool)_containsWorkoutObject:(id)arg1 error:(id *)arg2;
- (_Bool)_deleteSample:(id)arg1 error:(id *)arg2;
- (id)_createWorkoutRouteWithMetadata:(id)arg1 sourceEntity:(id)arg2 locations:(id)arg3 error:(id *)arg4;
- (_Bool)_queue_insertInitialMetadataForRoute:(id)arg1 syncIdentifier:(id)arg2 error:(id *)arg3;
- (void)_finishSmoothingSample;
- (id)_queue_createNewSeriesFromTask:(id)arg1 locations:(id)arg2 error:(id *)arg3;
- (void)_queue_saveLocations:(id)arg1 forTask:(id)arg2 smoothingError:(id)arg3;
- (void)_queue_smoothingDidFailForTask:(id)arg1 error:(id)arg2 shouldRetry:(_Bool)arg3;
- (void)_queue_startSmoothingTask:(id)arg1;
- (void)_queue_smoothRouteSampleForTask:(id)arg1;
- (void)_queue_smoothNextSample;
- (void)_queue_locationManagerDidSmoothLocations:(id)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)smoothRouteSample:(id)arg1;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

