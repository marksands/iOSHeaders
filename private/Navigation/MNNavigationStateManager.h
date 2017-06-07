//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationManagerObserver-Protocol.h>
#import <Navigation/MNMapsAppStateMonitorObserver-Protocol.h>
#import <Navigation/MNNavigationStateInterface-Protocol.h>
#import <Navigation/MNSuggestionsManagerObserver-Protocol.h>
#import <Navigation/MNVehicleDetectorObserver-Protocol.h>

@class MNCommuteSession, MNMapsAppStateMonitor, MNNavigationState, MNObserverHashTable, MNResourceManager, MNSuggestionsManager, NSString;
@protocol MNNavigationSessionManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNNavigationStateManager : NSObject <MNMapsAppStateMonitorObserver, MNLocationManagerObserver, MNVehicleDetectorObserver, MNSuggestionsManagerObserver, MNNavigationStateInterface>
{
    _Bool _isStarted;
    MNNavigationState *_currentState;
    MNMapsAppStateMonitor *_mapsAppStateMonitor;
    MNSuggestionsManager *_suggestionsManager;
    MNCommuteSession *_commuteSession;
    MNResourceManager *_resourceManager;
    MNObserverHashTable *_navigationStateObservers;
    id <MNNavigationSessionManagerDelegate> _navigationDelegate;
}

+ (id)sharedManager;
@property(readonly, nonatomic) MNSuggestionsManager *suggestionsManager; // @synthesize suggestionsManager=_suggestionsManager;
@property(readonly, nonatomic) MNNavigationState *currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(nonatomic) __weak id <MNNavigationSessionManagerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void).cxx_destruct;
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(_Bool)arg1;
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setHFPPreference:(_Bool)arg1 forSetting:(id)arg2;
- (void)setGuidancePromptsEnabled:(_Bool)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)changeSettings:(id)arg1;
- (void)setFullGuidanceMode:(_Bool)arg1;
- (void)switchToRouteWithDetails:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopPredictingDestinations;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopNavigation;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)suggestionsManager:(id)arg1 didAddSuggestion:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)vehicleDetector:(id)arg1 didChangeStateTo:(unsigned long long)arg2;
- (_Bool)isVehicleDetected;
- (void)mapsAppStateMonitor:(id)arg1 didChangeToState:(unsigned int)arg2;
- (_Bool)isMapsActive;
- (id)_initialState;
- (void)_replayStateForNewObserver:(id)arg1;
- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
@property(readonly, nonatomic) MNCommuteSession *commuteSession;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)init;
- (unsigned long long)_stateTypeForState:(id)arg1;
- (void)_changeToDesiredResourcePolicy;
- (void)_changeToDesiredLocationProviderType;
- (void)transitionToState:(id)arg1;
- (void)setCurrentState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

