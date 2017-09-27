//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import "HDActivityCacheManagerObserver.h"

@class HDActivityCacheManager, HKActivityCache, NSCalendar, NSDateComponents, NSString;

@interface HDCurrentActivityCacheQueryServer : HDQueryServer <HDActivityCacheManagerObserver>
{
    double _createdTime;
    double _firstResultsTime;
    NSDateComponents *_statisticsIntervalComponents;
    NSCalendar *_calendar;
    HKActivityCache *_lastActivityCache;
    HDActivityCacheManager *_activityCacheManager;
}

- (void).cxx_destruct;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (_Bool)_shouldListenForUpdates;
- (void)_queue_stop;
- (void)_queue_start;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6 activityCacheManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

