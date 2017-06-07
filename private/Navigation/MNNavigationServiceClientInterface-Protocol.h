//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOAlightNotificationFeedback, GEOETARoute, GEOStep, MNActiveRouteDetails, MNAudioOutputSetting, MNGuidanceLaneInfo, MNGuidanceSignInfo, MNLocationDetails, MNTracePlaybackDetails, MNTrafficIncidentAlertDetails, NSArray, NSData, NSDate, NSError, NSString, NSUUID;
@protocol MNNavigationServiceProxy;

@protocol MNNavigationServiceClientInterface <NSObject>
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateAudioOutputRouteSelection:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateAudioOutputCurrentSettingForVoicePrompt:(MNAudioOutputSetting *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateAudioOutputCurrentSetting:(MNAudioOutputSetting *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateAudioOutputSettings:(NSData *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didStartUsingVoiceLanguage:(NSString *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didActivateAudioSession:(_Bool)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateFeedback:(GEOAlightNotificationFeedback *)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateTracePlaybackDetails:(MNTracePlaybackDetails *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdatePossibleCommuteDestinations:(NSArray *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateIsInVehicle:(_Bool)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didInvalidateTrafficIncidentAlert:(MNTrafficIncidentAlertDetails *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateTrafficIncidentAlert:(MNTrafficIncidentAlertDetails *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didReceiveTrafficIncidentAlert:(MNTrafficIncidentAlertDetails *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateAlternateRoutes:(NSArray *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(MNActiveRouteDetails *)arg3;
- (void)navigationServiceProxyDidCancelReroute:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didRerouteWithDetails:(MNActiveRouteDetails *)arg2 withLocationDetails:(MNLocationDetails *)arg3;
- (void)navigationServiceProxyWillReroute:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateTrafficForETARoute:(GEOETARoute *)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4 withRouteDetails:(MNActiveRouteDetails *)arg5;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateDisplayETA:(NSDate *)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRouteDetails:(MNActiveRouteDetails *)arg4;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationServiceProxyDidArrive:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 hideLaneDirectionsForId:(NSUUID *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 showLaneDirections:(MNGuidanceLaneInfo *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 updateSignsWithInfo:(MNGuidanceSignInfo *)arg2;
- (void)navigationServiceProxyHideSecondaryStep:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 displaySecondaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 displayPrimaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateMatchedLocation:(MNLocationDetails *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didFailWithError:(NSError *)arg2;
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxyWillPauseNavigation:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateActiveRouteDetails:(MNActiveRouteDetails *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
@end

