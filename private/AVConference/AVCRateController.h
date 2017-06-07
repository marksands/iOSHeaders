//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCBasebandCongestionDetector, AVCRateControlFeedbackController, AVCStatisticsCollector, VCRateControlMediaController;
@protocol OS_dispatch_queue, VCRateControlAlgorithm;

__attribute__((visibility("hidden")))
@interface AVCRateController : NSObject
{
    id _rateControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    AVCRateControlFeedbackController *_feedbackController;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    VCRateControlMediaController *_mediaController;
    id <VCRateControlAlgorithm> _rateControlAlgorithm;
    struct AVCRateControlConfig _configuration;
    NSObject<OS_dispatch_queue> *_rateControllerQueue;
    unsigned int _targetBitrate;
    unsigned int _rateChangeCounter;
    unsigned int _roundTripTimeMilliseconds;
    unsigned int _packetLossPercentage;
    unsigned int _burstPacketLoss;
    _Bool _isNetworkCongested;
    void *_logDump;
    void *_logFeedbackDump;
    void *_logBasebandDump;
    _Bool _isDumpFileEnabled;
    unsigned int _dumpID;
    _Bool _isPeriodicLoggingEnabled;
    _Bool _isBasebandEnabled;
}

@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(retain, nonatomic) AVCRateControlFeedbackController *feedbackController; // @synthesize feedbackController=_feedbackController;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
- (void)printBasebandNotificationStatistics:(CDStruct_5cb394a5)arg1;
- (void)printFeedbackMessage:(CDStruct_5cb394a5)arg1;
- (void)releaseLogDumpFiles;
- (void)createBasebandLogDumpFile;
- (void)createLogDumpFiles:(unsigned int)arg1;
- (int)minTierAboveBitrate:(unsigned int)arg1 maxTierIndex:(int)arg2 minTierIndex:(int)arg3;
- (int)maxTierBelowBitrate:(unsigned int)arg1 maxTierIndex:(int)arg2 minTierIndex:(int)arg3;
- (void)reportTargetBitrateChange:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;
- (void)reportNetworkStatistics;
- (void)doRateControlWithBasebandStatistics:(CDStruct_5cb394a5)arg1;
- (void)doRateControlWithStatistics:(CDStruct_5cb394a5)arg1;
- (void)createVCRateControlAlgorithmWithConfiguration:(struct VCRateControlAlgorithmConfig)arg1;
- (void)configureAlgorithmWithRestart:(_Bool)arg1;
- (void)setDefaultAlgorithmConfiguration:(struct VCRateControlAlgorithmConfig *)arg1;
- (int)initialBitrateTierFromLearntBitrateWithLocalTechnology:(unsigned int)arg1 remoteTech:(unsigned int)arg2 defaultTier:(int)arg3;
- (id)indicatorFromRadioTech:(unsigned int)arg1;
- (unsigned int)radioAccessTechnologyFromAVConferenceCellTech:(int)arg1 isCellular:(_Bool)arg2;
- (unsigned int)rateControlModeFromAVConferenceOperatingMode:(int)arg1;
- (void)configureWithOperatingMode:(int)arg1 isLocalCellular:(_Bool)arg2 localCellTech:(int)arg3 isRemoteCellular:(_Bool)arg4 remoteCellTech:(int)arg5 bitrateCap:(unsigned int)arg6;
- (void)configure:(struct AVCRateControlConfig)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 dumpID:(unsigned int)arg2;

@end

