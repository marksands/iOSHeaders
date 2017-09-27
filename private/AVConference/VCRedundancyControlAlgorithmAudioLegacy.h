//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCRedundancyControlAlgorithm.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmAudioLegacy : NSObject <VCRedundancyControlAlgorithm>
{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    unsigned int _packetLossPercentage;
    _Bool _isUplinkRecentlyCongested;
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
- (void)computeRedundancyInfo;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_5cb394a5)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

