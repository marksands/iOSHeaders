//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, VCRateControlBandwidthEstimatorMap, VCRateControlOWRDEstimator, VCStatisticsCollectorQueue, VCStatisticsHistory;

__attribute__((visibility("hidden")))
@interface AVCStatisticsCollector : NSObject
{
    NSMutableDictionary *_statistics;
    struct tagVCStatisticsCollection *_statisticsCollection;
    NSMutableDictionary *_statisticChangeHandlerDictionary;
    VCRateControlBandwidthEstimatorMap *_bandwidthEstimatorMap;
    VCRateControlOWRDEstimator *_owrdEstimator;
    VCStatisticsHistory *_history;
    VCStatisticsCollectorQueue *_queue;
    unsigned int _radioAccessTechnology;
    unsigned int _mode;
    unsigned int _sharedEstimatedBandwidth;
    unsigned int _sharedEstimatedBandwidthUncapped;
    unsigned int _sharedRemoteEstimatedBandwidth;
    unsigned int _estimatedBandwidthCap;
    unsigned int _expectedBitrate;
    struct _opaque_pthread_rwlock_t _statisticsCollectionLock;
}

@property(nonatomic) unsigned int expectedBitrate; // @synthesize expectedBitrate=_expectedBitrate;
@property(nonatomic) unsigned int estimatedBandwidthCap; // @synthesize estimatedBandwidthCap=_estimatedBandwidthCap;
@property(readonly, nonatomic) unsigned int sharedRemoteEstimatedBandwidth; // @synthesize sharedRemoteEstimatedBandwidth=_sharedRemoteEstimatedBandwidth;
@property(readonly, nonatomic) unsigned int sharedEstimatedBandwidthUncapped; // @synthesize sharedEstimatedBandwidthUncapped=_sharedEstimatedBandwidthUncapped;
@property(readonly, nonatomic) unsigned int sharedEstimatedBandwidth; // @synthesize sharedEstimatedBandwidth=_sharedEstimatedBandwidth;
@property(nonatomic) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (void)addActualBitrateInfo:(CDStruct_48a7b5a5 *)arg1;
- (void)addPacketLossInfo:(CDStruct_48a7b5a5 *)arg1;
- (void)computeOWRDEstimation:(CDStruct_48a7b5a5 *)arg1;
- (void)computeBWEstimation:(CDStruct_48a7b5a5 *)arg1;
- (void)updateLocalEstimatedBandwidth;
- (void)recordRemoteEstimatedBandwidthForLargeFrameInfo:(CDStruct_48a7b5a5 *)arg1;
- (void)computeOtherStatistics:(CDStruct_48a7b5a5 *)arg1;
- (void)addStatisticsHistory:(CDStruct_48a7b5a5)arg1;
- (void)addEntriesFromStatistics:(CDStruct_48a7b5a5)arg1;
- (void)processVCStatistics:(CDStruct_48a7b5a5)arg1;
- (CDStruct_48a7b5a5)getVCStatisticsWithType:(int)arg1 time:(double)arg2;
- (void)setVCStatistics:(CDStruct_48a7b5a5)arg1;
- (void)registerStatisticsChangeHandlerWithType:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getStatistics:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initForSimulation:(_Bool)arg1;
- (id)init;

@end

