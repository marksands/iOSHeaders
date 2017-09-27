//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import "HDWorkoutServerInterface.h"

@class HDFitnessMachineManager, HDWorkoutManager, NSString, NSUUID;

@interface HDWorkoutServer : HDSubserver <HDWorkoutServerInterface>
{
    HDWorkoutManager *_workoutManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    NSUUID *_fitnessMachineConnectionUUID;
}

- (void).cxx_destruct;
- (void)remote_simulateDisconnect;
- (void)remote_simulateAccept;
- (void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)remote_setActivityType:(unsigned long long)arg1;
- (void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_permitConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_markClientReadyWithConnectionUUID:(id)arg1;
- (void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_endFitnessMachineConnectionWithUUID:(id)arg1;
- (void)remote_registerClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_resumeWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_pauseWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_stopWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_startWorkoutSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_generatePauseOrResumeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_getFirstPartyWorkoutSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_activeWorkoutApplicationIdentifier:(CDUnknownBlockType)arg1;
- (void)remote_associateSamplesWithUUIDs:(id)arg1 withWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_pauseAllActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_attachWorkoutServerWithClient:(id)arg1 serverConfiguration:(id)arg2 fitnessMachineConnectionClient:(id)arg3 fitnessMachineSessionConfiguration:(id)arg4 willReactivate:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
- (CDUnknownBlockType)_completionHandlerForReplaceWithOriginalWorkout:(id)arg1 newWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_addSamples:(id)arg1 toWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (id)initWithParentServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

