//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@interface EKPersistentAlarm : EKPersistentObject
{
}

+ (id)defaultPropertiesToLoad;
+ (id)relations;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)snoozedAlarms;
- (void)setSnoozedAlarms:(id)arg1;
- (id)originalAlarm;
- (void)setOriginalAlarm:(id)arg1;
- (void)setDefaultAlarm:(_Bool)arg1;
- (_Bool)isDefaultAlarm;
- (id)acknowledgedDate;
- (void)setAcknowledgedDate:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)structuredLocation;
- (void)setStructuredLocation:(id)arg1;
- (long long)proximity;
- (void)setProximity:(long long)arg1;
- (void)setCalendarOwner:(id)arg1;
- (id)calendarOwner;
- (void)setCalendarItemOwner:(id)arg1;
- (id)calendarItemOwner;
- (void)setExternalID:(id)arg1;
- (id)externalID;
- (void)setExternalData:(id)arg1;
- (id)externalData;
- (void)setAlarmType:(long long)arg1;
- (long long)alarmType;
- (void)setAbsoluteDate:(id)arg1;
- (id)absoluteDate;
- (void)setRelativeOffset:(id)arg1;
- (id)relativeOffset;
- (void)setUUID:(id)arg1;
- (id)UUID;
- (int)entityType;

@end

