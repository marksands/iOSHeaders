//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, CalGeocoder, EKTravelEngineHypothesis, EKTravelEngineOriginalEvent, EKTravelEngineThrottle, GEORouteHypothesizer, NSData, NSObject<OS_dispatch_queue>, NSString;

@interface EKTravelEngineAgendaEntry : NSObject
{
    _Bool _dismissed;
    _Bool _geocodedEventEncountered;
    _Bool _hypothesizerSentAtLeastOneHypothesis;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _entrySignificantlyChangedBlock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    EKTravelEngineOriginalEvent *_originalEventInternal;
    EKTravelEngineThrottle *_throttle;
    CalGeocoder *_geocoder;
    GEORouteHypothesizer *_hypothesizer;
    EKTravelEngineHypothesis *_latestHypothesis;
    CLLocation *_geoLocation;
    NSData *_mapKitHandle;
    long long _travelTimeThresholdExceededState;
    double _maximumTravelDurationEncountered;
    NSString *_agendaEntryIdentifier;
}

+ (void)_accountForHypothesizerNeverHavingSentHypothesis;
+ (void)_accountForHypothesizerSendingHypothesis;
+ (void)_accountForGeocodingFailureWithError:(id)arg1;
+ (void)_accountForLocationEnhancementSuccess;
+ (void)_accountForNoLocationEnhancementNeeded;
+ (double)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;
@property(retain, nonatomic) NSString *agendaEntryIdentifier; // @synthesize agendaEntryIdentifier=_agendaEntryIdentifier;
@property(nonatomic) double maximumTravelDurationEncountered; // @synthesize maximumTravelDurationEncountered=_maximumTravelDurationEncountered;
@property(nonatomic) long long travelTimeThresholdExceededState; // @synthesize travelTimeThresholdExceededState=_travelTimeThresholdExceededState;
@property(nonatomic) _Bool hypothesizerSentAtLeastOneHypothesis; // @synthesize hypothesizerSentAtLeastOneHypothesis=_hypothesizerSentAtLeastOneHypothesis;
@property(nonatomic) _Bool geocodedEventEncountered; // @synthesize geocodedEventEncountered=_geocodedEventEncountered;
@property(retain, nonatomic) NSData *mapKitHandle; // @synthesize mapKitHandle=_mapKitHandle;
@property(retain, nonatomic) CLLocation *geoLocation; // @synthesize geoLocation=_geoLocation;
@property(retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis; // @synthesize latestHypothesis=_latestHypothesis;
@property(retain, nonatomic) GEORouteHypothesizer *hypothesizer; // @synthesize hypothesizer=_hypothesizer;
@property(retain, nonatomic) CalGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain, nonatomic) EKTravelEngineThrottle *throttle; // @synthesize throttle=_throttle;
@property(retain, nonatomic) EKTravelEngineOriginalEvent *originalEventInternal; // @synthesize originalEventInternal=_originalEventInternal;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(copy, nonatomic) CDUnknownBlockType entrySignificantlyChangedBlock; // @synthesize entrySignificantlyChangedBlock=_entrySignificantlyChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (void).cxx_destruct;
- (void)_updateWithHypothesis:(id)arg1;
- (void)_createHypothesizerForDestination:(id)arg1;
- (id)_createSyntheticHypothesis;
- (id)_generateDestination;
- (void)_setUpRouteMonitoring;
- (void)_enhanceLocation;
- (void)_clearEverything;
- (void)_sendFeedbackToHypothesizerForPostingNotification:(unsigned long long)arg1;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (id)emissionHypothesisRefreshBTAJobName;
- (id)requestHypothesisRefreshBTAJobName;
- (void)_performAnalyticsPostProcessing;
- (void)_updateTravelTimeExceededThresholdStateUsingExceededValue:(_Bool)arg1;
- (void)_accountForTravelDurationThresholdExceededState;
- (void)_accountForMaximumTravelDuration;
- (void)_trackTTLCandidateEvent:(id)arg1;
- (void)_accountForGeocodedEventEncounter;
- (void)sendFeedbackForPostingLeaveNowNotification;
- (void)sendFeedbackForPostingLeaveByNotification;
@property(readonly, nonatomic) EKTravelEngineOriginalEvent *originalEvent;
- (void)reset;
- (void)_uninstallEmissionHypothesisRefreshTimer;
- (void)_createEmissionHypothesisRefreshTimerWithDate:(id)arg1;
- (void)_uninstallRequestHypothesisRefreshTimer;
- (void)_createHypothesisRequestRefreshTimerWithDate:(id)arg1;
- (void)removeBTAJobWithName:(id)arg1;
- (void)createBTAJobWithName:(id)arg1 atDate:(id)arg2;
- (void)cancelEmissionHypothesisRefresh;
- (void)cancelHypothesisRefreshRequest;
- (void)requestHypothesisRefreshAtDate:(id)arg1;
- (void)_emissionHypothesisRefreshTimerFired;
- (void)_requestHypothesisRefreshTimerFired:(id)arg1;
- (void)_hypothesisRefreshTimerFired;
- (void)updateWithOriginalEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

