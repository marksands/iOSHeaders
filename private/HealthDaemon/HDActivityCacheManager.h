//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDataObserver.h"
#import "HDDatabaseProtectedDataObserver.h"
#import "HDHealthDaemonReadyObserver.h"

@class CMPedometer, CMPedometerData, HDActivityCacheDataSource, HDProfile, HDSourceEntity, HKActivityCache, HKHeartRateSummary, HKQuantitySample, HKQuantityType, NSCalendar, NSDate, NSDateInterval, NSHashTable, NSObject<OS_dispatch_queue>, NSSet, NSString, NSTimeZone, _HKDelayedOperation;

@interface HDActivityCacheManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDDatabaseProtectedDataObserver>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _todayActivityCacheIndex;
    long long _yesterdayActivityCacheIndex;
    long long _tomorrowActivityCacheIndex;
    _Bool _cacheIndicesAreSet;
    NSDateInterval *_todayDateInterval;
    NSDateInterval *_yesterdayDateInterval;
    _Bool _existingActivityCachesAreSet;
    HKActivityCache *_existingYesterdayActivityCache;
    HKActivityCache *_existingTodayActivityCache;
    HKHeartRateSummary *_todayHeartRateSummary;
    HKHeartRateSummary *_yesterdayHeartRateSummary;
    HDSourceEntity *_localDeviceSourceEntity;
    HDActivityCacheDataSource *_dataSource;
    HKQuantityType *_calorieGoalType;
    NSSet *_allQuantityTypes;
    HKQuantitySample *_todayGoal;
    HKQuantitySample *_yesterdayGoal;
    _Bool _shouldSendCacheUpdateNotification;
    _HKDelayedOperation *_updateCachesOperation;
    _HKDelayedOperation *_rebuildCachesOperation;
    NSHashTable *_observers;
    _Bool _hasSubscribedToSignificantTimeChangeNotifications;
    long long _wheelchairUse;
    CMPedometer *_pedometer;
    CMPedometerData *_lastPedometerData;
    NSDate *_dateOverride;
    NSTimeZone *_timeZoneOverride;
}

@property(retain, nonatomic) NSTimeZone *timeZoneOverride; // @synthesize timeZoneOverride=_timeZoneOverride;
@property(retain, nonatomic) NSDate *dateOverride; // @synthesize dateOverride=_dateOverride;
- (void).cxx_destruct;
- (void)_queue_updateWheelchairUse;
- (void)_userCharacteristicsDidChangeNotification:(id)arg1;
- (void)_queue_alertObservers:(id)arg1 heartRateSummaryChanged:(id)arg2;
- (void)_queue_alertObserversYesterdayActivityCacheChanged:(id)arg1;
- (void)_queue_alertObserversTodayActivityCacheChanged:(id)arg1;
- (void)removeActivityCacheObserver:(id)arg1;
- (void)addActivityCacheObserver:(id)arg1;
- (void)accessStatisticsBuilderWithCacheIndex:(long long)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) HKActivityCache *yesterdayActivityCache;
@property(readonly, nonatomic) HKActivityCache *currentActivityCache;
@property(readonly) NSCalendar *calendar;
- (void)_queue_deleteActivityCaches:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
- (void)_didReceiveSignificantTimeChangeNotification;
- (void)_significantTimeChangeOccurred:(id)arg1;
- (void)_queue_registerForSignificantTimeChangeNotification;
- (void)_queue_streamSamplesAdded;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_queue_rebuildActivityCaches;
- (void)_calculateCacheIndicesWithTodayIndex:(long long *)arg1 yesterdayIndex:(long long *)arg2 tomorrowIndex:(long long *)arg3 todayStart:(id)arg4 yesterdayStart:(id)arg5 tomorrowStart:(id)arg6 calendar:(id)arg7;
- (id)_queue_gregorianCalendar;
- (id)_queue_currentTimeZone;
- (id)_queue_today;
- (void)_queue_resetDataSource;
- (void)_queue_resetDailyGoals;
- (void)_queue_resetCacheIndices;
- (void)_queue_resetExistingActivityCaches;
- (void)_queue_resetEverything;
- (id)_mostRecentGoalBeforeDate:(id)arg1 error:(id *)arg2;
- (void)_queue_updateDateIntervalsWithExistingActivityCaches;
- (void)_queue_primeExistingActivityCaches;
- (void)_queue_primeLocalSource;
- (void)_queue_primeCacheIndices;
- (void)_queue_updateCaches;
- (void)_queue_updateDailyGoalsWithGoalSample:(id)arg1;
- (void)_queue_updateDailyGoalsWithSamples:(id)arg1;
- (void)_queue_primeDailyGoals;
- (_Bool)_queue_goalsSet;
- (void)_queue_primeDataSource;
- (_Bool)_queue_readyToPrimeDataSource;
- (void)_queue_updateHeartRateSummaries;
- (id)_queue_saveCacheWithDateInterval:(id)arg1 calorieGoal:(id)arg2 cacheIndex:(long long)arg3 previousCache:(id)arg4 statisticsBuilder:(id)arg5 wheelchairUse:(long long)arg6 generateStats:(_Bool)arg7;
- (void)_queue_saveCaches;
- (_Bool)_queue_saveYesterdayCache;
- (_Bool)_queue_saveTodayCache;
- (_Bool)_queue_readyToSaveCaches;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

