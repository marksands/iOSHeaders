//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDFitnessMachineSessionObserver.h"
#import "HDWorkoutSessionController.h"
#import "HDWorkoutSessionStateController.h"

@class HDDefaultWorkoutSessionController, HDProfile, NSObject<OS_dispatch_queue>, NSUUID;

@interface HDGymKitWorkoutSessionController : NSObject <HDFitnessMachineSessionObserver, HDWorkoutSessionController, HDWorkoutSessionStateController>
{
    HDProfile *_profile;
    id <HDWorkoutSessionStateController> _sessionStateController;
    NSObject<OS_dispatch_queue> *_queue;
    HDDefaultWorkoutSessionController *_defaultSessionController;
    NSUUID *_fitnessMachineSessionUUID;
    _Bool _acceptsDataAccumulators;
    id <HDWorkoutDataAccumulator> _currentAccumulator;
}

+ (void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2;
+ (id)recoveryIdentifier;
- (void).cxx_destruct;
- (void)_queue_sessionFinished;
- (void)_queue_sessionPrepared;
- (void)hktest_setStateTransitionCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishAggregationWithDate:(id)arg1;
- (_Bool)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) id <HDWorkoutDataAccumulator> workoutDataAccumulator;
- (void)generateError:(id)arg1;
- (void)generateEvent:(id)arg1;
- (void)finish;
- (void)endHeartRateRecovery;
- (void)autoResumeWithDate:(id)arg1;
- (void)autoPauseWithDate:(id)arg1;
- (_Bool)resumeWithError:(id *)arg1;
- (_Bool)pauseWithError:(id *)arg1;
- (_Bool)endWithError:(id *)arg1;
- (_Bool)stopActivityWithDate:(id)arg1 error:(id *)arg2;
- (_Bool)startActivityWithDate:(id)arg1 error:(id *)arg2;
- (_Bool)prepareWithError:(id *)arg1;
- (void)fitnessMachineSessionUUID:(id)arg1 updatedRecoveryConfiguration:(id)arg2;
- (void)_queue_reconnectFitnessMachineFromRecoveryState:(id)arg1;
- (void)_queue_storeSessionRecoveryConfiguration:(id)arg1;
- (void)_setupRecoveryState:(id)arg1;
- (void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(id)arg4;
- (id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;

@end

