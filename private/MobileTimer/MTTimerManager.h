//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTMetrics, MTTimerCache, MTTimerManagerExportedObject, MTXPCConnectionProvider, NSNotificationCenter;

@interface MTTimerManager : NSObject
{
    MTTimerManagerExportedObject *_exportedObject;
    struct MTXPCConnectionProvider *_connectionProvider;
    MTMetrics *_metrics;
    MTTimerCache *_cache;
    NSNotificationCenter *_notificationCenter;
}

+ (void)warmUp;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) MTTimerCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) MTMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) MTXPCConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
@property(retain, nonatomic) MTTimerManagerExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
- (void).cxx_destruct;
- (_Bool)resumeCurrentTimerSync;
- (_Bool)pauseCurrentTimerSync;
- (_Bool)stopCurrentTimerSync;
- (_Bool)_updateCurrentTimerWithStateSync:(unsigned long long)arg1;
- (_Bool)startCurrentTimerWithDurationSync:(double)arg1;
- (id)getCurrentTimerSync;
- (id)startCurrentTimerWithDuration:(double)arg1;
- (id)resumeCurrentTimer;
- (id)pauseCurrentTimer;
- (id)stopCurrentTimer;
- (id)_updateCurrentTimerWithState:(unsigned long long)arg1;
- (id)currentTimer;
- (id)repeatTimerWithIdentifier:(id)arg1;
- (id)dismissTimerWithIdentifier:(id)arg1;
- (id)removeTimer:(id)arg1;
- (id)updateTimer:(id)arg1;
- (id)addTimer:(id)arg1;
- (id)nextTimersForDate:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)timersSync;
- (id)nextTimer;
- (id)timers;
- (void)_getCachedTimersWithFuture:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)reconnect;
- (void)checkIn;
- (void)dealloc;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2;
- (id)initWithMetrics:(id)arg1;
- (id)init;

@end

