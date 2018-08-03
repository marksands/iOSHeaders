//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDHealthDaemonReadyObserver.h"

@class HDDataAggregatorConfiguration, HDDataCollectionManager, HKObjectType, NSLock, NSMapTable, NSString;

@interface HDDataAggregator : NSObject <HDHealthDaemonReadyObserver>
{
    NSLock *_lock;
    NSMapTable *_lock_collectorRegistry;
    HDDataAggregatorConfiguration *_lock_configuration;
    // Error parsing type: AB, name: _hasStartedCollectors
    _Bool _lock_canStartCollectors;
    HDDataCollectionManager *_dataCollectionManager;
}

@property(readonly, nonatomic) __weak HDDataCollectionManager *dataCollectionManager; // @synthesize dataCollectionManager=_dataCollectionManager;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)daemonReady:(id)arg1;
- (id)configurationForCollector:(id)arg1;
- (void)recomputeCollectorConfiguration;
@property(readonly, copy, nonatomic) HKObjectType *objectType;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (id)_keyValueDomain;
- (void)_startCollector:(id)arg1;
- (void)_considerStartingCollectors;
- (_Bool)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id *)arg4;
- (_Bool)persistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 source:(id)arg4 device:(id)arg5 error:(id *)arg6;
- (void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2 device:(id)arg3;
- (void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2;
- (void)dataCollector:(id)arg1 didChangeState:(id)arg2;
- (id)allCollectors;
- (void)unregisterDataCollector:(id)arg1;
- (void)registerDataCollector:(id)arg1 state:(id)arg2;
@property(copy) HDDataAggregatorConfiguration *configuration;
- (void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (double)defaultDataCollectionInterval;
- (id)initWithDataCollectionManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

