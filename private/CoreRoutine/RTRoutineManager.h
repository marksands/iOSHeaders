//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/RTFrameworkProtocol-Protocol.h>

@class NSString, NSXPCConnection, RTEventAgentHelper, RTRoutineManagerRegistrantAction, RTRoutineManagerRegistrantApplicationPrediction, RTRoutineManagerRegistrantScenarioTrigger;
@protocol OS_dispatch_queue;

@interface RTRoutineManager : NSObject <RTFrameworkProtocol>
{
    NSXPCConnection *_xpcConnection;
    CDUnknownBlockType _visitHandler;
    CDUnknownBlockType _leechedVisitHandler;
    CDUnknownBlockType _leechedLowConfidenceVisitHandler;
    RTRoutineManagerRegistrantApplicationPrediction *_applicationPredictionRegistrant;
    CDUnknownBlockType _nextPredictedLocationsOfInterestHandler;
    CDUnknownBlockType _vehicleEventsHandler;
    NSString *_restorationIdentifier;
    RTEventAgentHelper *_eventAgentHelper;
    RTRoutineManagerRegistrantAction *_actionRegistrant;
    RTRoutineManagerRegistrantScenarioTrigger *_scenarioTriggerRegistrant;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultManager;
+ (id)modeOfTransportationToString:(long long)arg1;
+ (id)routineModeToString:(long long)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTRoutineManagerRegistrantScenarioTrigger *scenarioTriggerRegistrant; // @synthesize scenarioTriggerRegistrant=_scenarioTriggerRegistrant;
@property(retain, nonatomic) RTRoutineManagerRegistrantAction *actionRegistrant; // @synthesize actionRegistrant=_actionRegistrant;
@property(retain, nonatomic) RTEventAgentHelper *eventAgentHelper; // @synthesize eventAgentHelper=_eventAgentHelper;
@property(retain, nonatomic) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
@property(copy, nonatomic) CDUnknownBlockType vehicleEventsHandler; // @synthesize vehicleEventsHandler=_vehicleEventsHandler;
@property(copy, nonatomic) CDUnknownBlockType nextPredictedLocationsOfInterestHandler; // @synthesize nextPredictedLocationsOfInterestHandler=_nextPredictedLocationsOfInterestHandler;
@property(retain, nonatomic) RTRoutineManagerRegistrantApplicationPrediction *applicationPredictionRegistrant; // @synthesize applicationPredictionRegistrant=_applicationPredictionRegistrant;
@property(copy, nonatomic) CDUnknownBlockType leechedLowConfidenceVisitHandler; // @synthesize leechedLowConfidenceVisitHandler=_leechedLowConfidenceVisitHandler;
@property(copy, nonatomic) CDUnknownBlockType leechedVisitHandler; // @synthesize leechedVisitHandler=_leechedVisitHandler;
@property(copy, nonatomic) CDUnknownBlockType visitHandler; // @synthesize visitHandler=_visitHandler;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)fetchPredictedContentForBundleWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)sortRoutes:(id)arg1 toLocationOfInterestWithIdentifier:(id)arg2 fromLocation:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)fetchPredictedRoutesToLocationOfInterestWithIdentifier:(id)arg1 fromLocation:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3;
- (void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(CDUnknownBlockType)arg1;
- (void)stopMonitoringVehicleEvents;
- (void)startMonitoringVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;
- (void)onNextPredictedLocationsOfInterest:(id)arg1 withError:(id)arg2;
- (void)engageInVehicleEventWithIdentifier:(id)arg1;
- (void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2;
- (void)clearAllVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)clearAllVehicleEvents;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2;
- (void)fetchLastVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopMonitoringNextPredictedLocationsOfInterest;
- (void)startMonitoringNextPredictedLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)onPredictedApplications:(id)arg1 error:(id)arg2;
- (void)fetchPredictedApplicationsWithPredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedApplications:(CDUnknownBlockType)arg1;
- (void)stopMonitoringForPredictedApplications;
- (void)startMonitoringForPredictedApplicationsWithHandler:(CDUnknownBlockType)arg1;
- (void)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)extendLifetimeOfVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeLocationOfInterest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItem:(id)arg3 customLabel:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setMapItem:(id)arg1 forLocationOfInterestWithIdentifier:(id)arg2;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchPredictedExitDatesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchMonitoredScenarioTriggerTypesWithHandler:(CDUnknownBlockType)arg1;
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchPathToDiagnosticFilesWithHandler:(CDUnknownBlockType)arg1;
- (void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2;
- (void)stopLeechingLowConfidenceVisits;
- (void)startLeechingLowConfidenceVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;
- (void)stopLeechingVisits;
- (void)startLeechingVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (void)stopMonitoringVisits;
- (void)startMonitoringVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedConditionsForAction:(id)arg1 dateInterval:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchPredictedConditionsForAction:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedConditionsForAction:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)provideFeedbackForAction:(id)arg1 engagementResult:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)onActionConditions:(id)arg1 error:(id)arg2;
- (void)stopMonitoringPredictedConditionsForAction:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startMonitoringPredictedConditionsForAction:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchAllRoutesForSettingsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchAllLocationsOfInterestForSettingsWithHandler:(CDUnknownBlockType)arg1;
- (void)submitMetricWithIdentifier:(id)arg1 dictionary:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)simulateApplicationPredictionWithBundleIdentifier:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateCloudSyncProvisionedForAccount:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchCloudSyncAuthorizationState:(CDUnknownBlockType)arg1;
- (void)clearRoutineWithHandler:(CDUnknownBlockType)arg1;
- (void)setRoutineEnabled:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setRoutineEnabled:(_Bool)arg1;
- (void)fetchRoutineEnabledWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)_proxyForServicingSelector:(SEL)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (id)_proxyForServicingSelector:(SEL)arg1;
- (void)handleDaemonStart;
- (void)createConnection;
- (void)_createConnection;
- (void)dealloc;
- (id)init;
- (id)initWithRestorationIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

