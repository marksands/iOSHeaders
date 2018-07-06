//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDWorkoutEventCollectorDelegate.h"
#import "HDWorkoutSessionController.h"

@class HDProfile, HDSessionAssertionGroup, HDWorkoutEventsManager, HDWorkoutSessionConfiguration, NSObject<OS_dispatch_queue>;

@interface HDDefaultWorkoutSessionController : NSObject <HDWorkoutEventCollectorDelegate, HDWorkoutSessionController>
{
    HDProfile *_profile;
    id <HDWorkoutSessionStateController> _sessionStateController;
    NSObject<OS_dispatch_queue> *_queue;
    HDWorkoutSessionConfiguration *_sessionConfiguration;
    HDSessionAssertionGroup *_assertionGroup;
    HDWorkoutEventsManager *_eventsManager;
    long long _sessionServerState;
    CDUnknownBlockType _hkTestTransitionCompletionHandler;
}

+ (void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2;
+ (id)recoveryIdentifier;
- (void).cxx_destruct;
- (id)_relaunchPayloadOptions;
- (id)_queue_assertionsPerStateForActivityType:(unsigned long long)arg1;
- (id)_takeQuietModeAssertion;
- (id)_takePowerSavingAssertion;
- (id)_takePlatinumAssertion;
- (id)_takeHeartRateRecoveryAssertion;
- (id)_takeEventsCollectionAssertion;
- (id)_takeDataCollectionAssertion;
- (id)_takeCarouselAssertion;
- (id)_takeCoreMotionAssertion;
- (id)_takeClientKeepAliveAssertion;
- (id)_takeAlertSuppressionAssertion;
- (id)_takeBackgroundRunningAssertion;
- (id)_ownerIdentifier;
- (void)_queue_setupAssertionGroup;
- (void)hktest_setStateTransitionCompletionHandler:(CDUnknownBlockType)arg1;
- (void)receivedWorkoutEvent:(id)arg1;
- (void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didTransitionToState:(long long)arg2 fromState:(long long)arg3;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;

@end

