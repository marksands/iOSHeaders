//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/NSCopying-Protocol.h>

@class EKTravelEngineHypothesis, NSData, NSDate, NSString, NSTimeZone, NSURL, NSUserActivity;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying>
{
    _Bool _allDay;
    _Bool _tentative;
    _Bool _acknowledged;
    _Bool _refiring;
    _Bool _isOffsetFromTravelTimeStart;
    _Bool _isPseudoEvent;
    _Bool _hasGeoLocationCoordinates;
    _Bool _hasOrganizerThatIsNotCurrentUser;
    _Bool _isSuggestedLocation;
    _Bool _isOnSharedCalendar;
    _Bool _hasDisplayedLeaveByMessage;
    _Bool _hasDisplayedLeaveNowMessage;
    _Bool _hasDisplayedRunningLateMessage;
    NSString *_publisherBulletinID;
    NSString *_title;
    NSString *_location;
    NSDate *_eventDate;
    NSDate *_endDate;
    NSTimeZone *_eventTimeZone;
    NSUserActivity *_appLink;
    NSURL *_action;
    NSURL *_entityID;
    long long _proximity;
    NSString *_externalID;
    NSString *_dismissalID;
    NSString *_alarmID;
    NSData *_mapKitHandle;
    NSString *_organizerEmailAddress;
    NSString *_startLocationRouting;
    NSString *_locationAddress;
    EKTravelEngineHypothesis *_latestHypothesis;
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;
    NSDate *_lastTimeBulletinAdded;
    NSURL *_conferenceURL;
    unsigned long long _currentRouteHypothesizerNotificationType;
    NSDate *_fireDate;
    struct CLLocationCoordinate2D _geoLocationCoordinates;
}

@property(retain, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(nonatomic) unsigned long long currentRouteHypothesizerNotificationType; // @synthesize currentRouteHypothesizerNotificationType=_currentRouteHypothesizerNotificationType;
@property(nonatomic) _Bool hasDisplayedRunningLateMessage; // @synthesize hasDisplayedRunningLateMessage=_hasDisplayedRunningLateMessage;
@property(nonatomic) _Bool hasDisplayedLeaveNowMessage; // @synthesize hasDisplayedLeaveNowMessage=_hasDisplayedLeaveNowMessage;
@property(nonatomic) _Bool hasDisplayedLeaveByMessage; // @synthesize hasDisplayedLeaveByMessage=_hasDisplayedLeaveByMessage;
@property(nonatomic) _Bool isOnSharedCalendar; // @synthesize isOnSharedCalendar=_isOnSharedCalendar;
@property(retain, nonatomic) NSURL *conferenceURL; // @synthesize conferenceURL=_conferenceURL;
@property(nonatomic) _Bool isSuggestedLocation; // @synthesize isSuggestedLocation=_isSuggestedLocation;
@property(retain, nonatomic) NSDate *lastTimeBulletinAdded; // @synthesize lastTimeBulletinAdded=_lastTimeBulletinAdded;
@property(retain, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // @synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime;
@property(retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis; // @synthesize latestHypothesis=_latestHypothesis;
@property(retain, nonatomic) NSString *locationAddress; // @synthesize locationAddress=_locationAddress;
@property(retain, nonatomic) NSString *startLocationRouting; // @synthesize startLocationRouting=_startLocationRouting;
@property(retain, nonatomic) NSString *organizerEmailAddress; // @synthesize organizerEmailAddress=_organizerEmailAddress;
@property(nonatomic) _Bool hasOrganizerThatIsNotCurrentUser; // @synthesize hasOrganizerThatIsNotCurrentUser=_hasOrganizerThatIsNotCurrentUser;
@property(nonatomic) struct CLLocationCoordinate2D geoLocationCoordinates; // @synthesize geoLocationCoordinates=_geoLocationCoordinates;
@property(nonatomic) _Bool hasGeoLocationCoordinates; // @synthesize hasGeoLocationCoordinates=_hasGeoLocationCoordinates;
@property(retain, nonatomic) NSData *mapKitHandle; // @synthesize mapKitHandle=_mapKitHandle;
@property(readonly, nonatomic) _Bool isPseudoEvent; // @synthesize isPseudoEvent=_isPseudoEvent;
@property(readonly, nonatomic) _Bool isOffsetFromTravelTimeStart; // @synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart;
@property(readonly, nonatomic) _Bool refiring; // @synthesize refiring=_refiring;
@property(readonly, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
@property(readonly, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property(readonly, nonatomic) _Bool acknowledged; // @synthesize acknowledged=_acknowledged;
@property(readonly, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property(readonly, nonatomic) _Bool tentative; // @synthesize tentative=_tentative;
@property(readonly, nonatomic) _Bool allDay; // @synthesize allDay=_allDay;
@property(readonly, nonatomic) NSURL *entityID; // @synthesize entityID=_entityID;
@property(readonly, nonatomic) NSURL *action; // @synthesize action=_action;
@property(readonly, nonatomic) NSUserActivity *appLink; // @synthesize appLink=_appLink;
@property(readonly, nonatomic) NSTimeZone *eventTimeZone; // @synthesize eventTimeZone=_eventTimeZone;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *eventDate; // @synthesize eventDate=_eventDate;
@property(readonly, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
- (void).cxx_destruct;
- (void)resetTimeToLeaveDisplayState;
@property(readonly, nonatomic) _Bool isPurelyATimeToLeaveAlert;
@property(readonly, nonatomic) NSString *recordID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(_Bool)arg6 tentative:(_Bool)arg7 publisherBulletinID:(id)arg8 entityID:(id)arg9 appLink:(id)arg10 action:(id)arg11 proximity:(long long)arg12 externalID:(id)arg13 acknowledged:(_Bool)arg14 dismissalID:(id)arg15 alarmID:(id)arg16 isOffsetFromTravelTimeStart:(_Bool)arg17 refiring:(_Bool)arg18 pseudoEvent:(_Bool)arg19;

@end

