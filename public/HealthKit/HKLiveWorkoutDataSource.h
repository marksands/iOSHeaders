//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_HKXPCExportable.h"

@class HKHealthStore, HKTaskServerProxyProvider, HKWorkoutConfiguration, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HKLiveWorkoutDataSource : NSObject <_HKXPCExportable>
{
    HKWorkoutConfiguration *_workoutConfiguration;
    HKTaskServerProxyProvider *_proxyProvider;
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_mutableSampleTypesToCollect;
    NSMutableDictionary *_mutableFiltersBySampleType;
    NSUUID *_identifier;
}

+ (id)serverInterface;
+ (id)clientInterface;
+ (id)defaultConfigurationWithWorkoutConfiguration:(id)arg1;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableDictionary *mutableFiltersBySampleType; // @synthesize mutableFiltersBySampleType=_mutableFiltersBySampleType;
@property(retain, nonatomic) NSMutableSet *mutableSampleTypesToCollect; // @synthesize mutableSampleTypesToCollect=_mutableSampleTypesToCollect;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // @synthesize proxyProvider=_proxyProvider;
- (void).cxx_destruct;
- (void)_startTaskServerIfNeeded;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)workoutBuilderDidFinish;
- (id)_queue_dataSourceConfiguration;
- (void)disableCollectionForType:(id)arg1;
- (void)enableCollectionForType:(id)arg1 predicate:(id)arg2;
@property(readonly, copy) NSSet *typesToCollect;
- (id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

