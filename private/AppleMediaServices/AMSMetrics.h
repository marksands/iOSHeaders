//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSMetricsDatabase, AMSURLSession, NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface AMSMetrics : NSObject
{
    _Bool _flushCancelled;
    _Bool _flushOnForeground;
    id <AMSMetricsBagContract> _bagContract;
    NSString *_containerId;
    long long _maxBatchSize;
    long long _maxRequestCount;
    AMSMetricsDatabase *_database;
    NSMutableSet *_chainedFlushPromises;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _flushTimerBlock;
    NSDictionary *_lastMetricsDictionary;
    NSObject<OS_dispatch_queue> *_metricsQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSMutableSet *_requestPromises;
    AMSURLSession *_URLSession;
}

+ (id)_sharedTimerQueue;
+ (void)setLastKnownBagContract:(id)arg1;
+ (double)timeIntervalFromServerTime:(id)arg1;
+ (id)serverTimeFromTimeInterval:(double)arg1;
+ (id)serverTimeFromDate:(id)arg1;
+ (void)setFlushTimerEnabled:(_Bool)arg1;
+ (_Bool)flushTimerEnabled;
+ (id)_sharedInstance;
@property(retain, nonatomic) AMSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) NSMutableSet *requestPromises; // @synthesize requestPromises=_requestPromises;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property(retain, nonatomic) NSDictionary *lastMetricsDictionary; // @synthesize lastMetricsDictionary=_lastMetricsDictionary;
@property(copy, nonatomic) CDUnknownBlockType flushTimerBlock; // @synthesize flushTimerBlock=_flushTimerBlock;
@property(nonatomic) _Bool flushOnForeground; // @synthesize flushOnForeground=_flushOnForeground;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSMutableSet *chainedFlushPromises; // @synthesize chainedFlushPromises=_chainedFlushPromises;
@property(retain, nonatomic) AMSMetricsDatabase *database; // @synthesize database=_database;
@property(nonatomic) long long maxRequestCount; // @synthesize maxRequestCount=_maxRequestCount;
@property(nonatomic) long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
@property(readonly, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
- (void).cxx_destruct;
- (_Bool)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2;
- (_Bool)_shouldAllowEvent:(id)arg1;
- (id)_prepareEvent:(id)arg1;
- (void)_postEvents:(id)arg1 reportURL:(id)arg2 logKey:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_openDatabaseIfNeeded;
- (id)_metricsDictionary;
- (id)_mescalSignatureWithBodyData:(id)arg1 logKey:(id)arg2;
- (void)_flushTimerUpdated;
- (void)_flushTimerStart;
- (void)_flushTimerInvalidate;
- (void)_handleFlushTimer;
- (id)_createRequestWithURL:(id)arg1 canary:(id)arg2 body:(id)arg3 signature:(id)arg4 logKey:(id)arg5;
- (id)_baseMetricsURL;
- (void)_addCancellablePromise:(id)arg1;
- (void)_batchEventArray:(id)arg1 batchBlock:(CDUnknownBlockType)arg2;
- (id)_nextTopicWithLockKey:(id)arg1 error:(id *)arg2;
- (id)_nextBatchWithTopic:(id)arg1 lockKey:(id)arg2 error:(id *)arg3;
- (void)_flushNextBatchWithTopic:(id)arg1 lockKey:(id)arg2 logKey:(id)arg3 requestCount:(long long)arg4 flushedEventCount:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_flushDatabaseMetricsWithLockKey:(id)arg1 logKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_applicationWillEnterForeground;
- (id)flushEvents:(id)arg1;
- (id)flush;
- (id)enqueueAsyncEvents:(id)arg1;
- (void)enqueueEvents:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)dropEvents;
- (void)cancel;
@property(nonatomic) _Bool flushTimerEnabled;
@property(nonatomic) _Bool flushCancelled; // @synthesize flushCancelled=_flushCancelled;
@property(retain, nonatomic) id <AMSMetricsBagContract> bagContract; // @synthesize bagContract=_bagContract;
@property(readonly, nonatomic) double flushInterval;
@property(readonly, nonatomic) long long eventCount;
- (void)dealloc;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;

@end

