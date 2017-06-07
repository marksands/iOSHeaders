//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class VCRateControlMediaController;

@protocol VCRateControlAlgorithm <NSObject>
@property(nonatomic) unsigned int localBandwidthEstimation;
@property(readonly, nonatomic) _Bool isNewRateSentOut;
@property(readonly, nonatomic) double roundTripTime;
@property(readonly, nonatomic) double packetLossRate;
@property(readonly, nonatomic) unsigned int mostBurstLoss;
@property(readonly, nonatomic) _Bool isCongested;
@property(readonly, nonatomic) unsigned int rateChangeCounter;
@property(readonly, nonatomic) unsigned int targetBitrate;
@property(retain, nonatomic) VCRateControlMediaController *mediaController;
- (void)enableBasebandDump:(void *)arg1;
- (void)enableLogDump:(void *)arg1 enablePeriodicLogging:(_Bool)arg2;
- (void)doRateControlWithBasebandStatistics:(CDStruct_5cb394a5)arg1;
- (void)doRateControlWithStatistics:(CDStruct_5cb394a5)arg1;
- (void)configure:(struct VCRateControlAlgorithmConfig)arg1 restartRequired:(_Bool)arg2;
@end

