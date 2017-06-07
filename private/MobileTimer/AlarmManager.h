//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Alarm, NSArray, NSDate, NSHashTable, NSMutableArray, NSString;

@interface AlarmManager : NSObject
{
    NSString *_defaultSound;
    long long _defaultSoundType;
    _Bool _dirty;
    NSMutableArray *_alarms;
    NSHashTable *_observers;
    _Bool invalidAlarmsDetected;
    NSMutableArray *logMessageList;
    Alarm *_sleepAlarm;
    NSDate *lastModified;
}

+ (id)copySleepAlarmFromPreferences;
+ (void)writeSleepAlarmToPreferences:(id)arg1;
+ (id)copyReadAlarmsFromPreferences;
+ (void)writeAlarmsToPreferences:(id)arg1;
+ (_Bool)discardOldVersion;
+ (_Bool)upgrade;
+ (_Bool)isAlarmNotification:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified;
@property(readonly, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
@property(nonatomic) _Bool invalidAlarmsDetected; // @synthesize invalidAlarmsDetected;
@property(retain, nonatomic) NSMutableArray *logMessageList; // @synthesize logMessageList;
- (void).cxx_destruct;
- (void)handleNotificationFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1;
- (void)handleExpiredOrSnoozedNotificationsOnly:(id)arg1;
- (void)handleAnyNotificationChanges;
- (void)reloadScheduledNotificationsWithRefreshActive:(_Bool)arg1 cancelUnused:(_Bool)arg2;
- (void)reloadScheduledNotifications;
- (void)loadScheduledNotificationsWithCancelUnused:(_Bool)arg1;
- (void)loadScheduledNotifications;
- (void)handleAlarm:(id)arg1 stoppedUsingSong:(id)arg2;
- (void)handleAlarm:(id)arg1 startedUsingSong:(id)arg2;
- (void)updateSleepAlarm:(id)arg1 active:(_Bool)arg2;
@property(readonly, nonatomic) Alarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
- (void)setAlarm:(id)arg1 active:(_Bool)arg2;
- (void)removeAlarm:(id)arg1;
- (void)_updateAlarm:(id)arg1 active:(_Bool)arg2 logIntent:(_Bool)arg3;
- (void)updateAlarm:(id)arg1 active:(_Bool)arg2;
- (void)addAlarm:(id)arg1 active:(_Bool)arg2;
- (id)nextAlarmForDate:(id)arg1 activeOnly:(_Bool)arg2 allowRepeating:(_Bool)arg3 allowSnoozed:(_Bool)arg4 allowSleepAlarm:(_Bool)arg5;
- (id)nextAlarmForDate:(id)arg1 activeOnly:(_Bool)arg2 allowRepeating:(_Bool)arg3 allowSnoozed:(_Bool)arg4;
- (id)nextAlarmForDate:(id)arg1 activeOnly:(_Bool)arg2 allowRepeating:(_Bool)arg3;
- (id)alarmWithIdUrl:(id)arg1;
- (id)alarmWithId:(id)arg1;
- (_Bool)checkIfAlarmsModified;
- (void)saveAlarms;
- (void)unloadAlarms;
- (void)loadAlarms;
- (void)countAlarmsInAggregateDictionary;
@property(retain, nonatomic) NSString *defaultVibrationID;
- (void)setDefaultSound:(id)arg1 ofType:(long long)arg2;
- (void)reloadDefaultSoundAndType;
- (void)loadDefaultSoundAndType;
@property(readonly, nonatomic) long long defaultSoundType;
@property(readonly, nonatomic) NSString *defaultSound;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

