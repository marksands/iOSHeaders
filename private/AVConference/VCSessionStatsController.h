//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCStatisticsCollector, NSObject<OS_dispatch_source>, VCConnectionManager, VCTransportStream;

__attribute__((visibility("hidden")))
@interface VCSessionStatsController : NSObject
{
    AVCStatisticsCollector *_uplinkStatisticsCollector;
    AVCStatisticsCollector *_downlinkStatisticsCollector;
    CDStruct_2756d7ac _remoteStats;
    NSObject<OS_dispatch_source> *_localSessionStatsTimemoutSource;
    unsigned int _statsRequestCounter;
    VCConnectionManager *_connectionManager;
    VCTransportStream *_transportStream;
    double _lastTriggerRateControlTime;
    id _reportingAgentWeak;
    unsigned int _uplinkServerStatsByteUsed;
    unsigned int _downlinkServerStatsByteUsed;
    struct tagVCRealTimeThread *_statsReceiveThread;
    unsigned short _streamID;
    unsigned short _statsArrayIndex;
    unsigned int _previousTotalPacketSent;
    unsigned int _previousTotalPacketReceived;
    unsigned int _uplinkMostRecentSendTimestamp;
    unsigned int _downlinkMostRecentSendTimestamp;
    _Bool _didReceiveServerStatsResponse;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    double _lastUpdateTime;
    double _lastTimeReceiveStatsFailed;
    _Bool _isReceiveStatsFailedSymptomReported;
    unsigned int _statsResponseCounter;
    unsigned int _numStatsDroppedDueToStatsID;
    unsigned int _numStatsDroppedDueToLinkID;
    unsigned int _numStatsProcessed;
    unsigned int _numStatsTriggered;
    double _totalStatsTransportStreamQueueTime;
    double _maxStatsTransportStreamQueueTime;
    double _lastHealthPrintTime;
}

- (void)flushRealTimeReportingStats;
- (void)deregisterPeriodicTask;
- (void)registerPeriodicTask;
@property(readonly) id reportingAgent;
- (void)resetHealthPrintCounters;
- (void)healthPrintForServerStats;
- (void)handleRemoteSessionStats:(CDStruct_88f6cd69 *)arg1;
- (void)statsReceiveStatsPayload;
- (void)triggerRateControlWithLocalSessionStats:(CDStruct_b5e1e8f2)arg1 time:(double)arg2;
- (unsigned short)translateTimestampFromMicro:(double)arg1;
- (void)updateRemoteSessionStats:(CDStruct_2756d7ac)arg1;
- (void)stopLocalSessionStatsUpdate;
- (void)startLocalSessionStatsSend;
- (int)startLocalSessionStatsReceive;
- (void)startLocalSessionStatsUpdate;
- (void)sendLocalStats;
- (void)reset;
- (void)dealloc;
- (id)initWithConnectionManager:(id)arg1 uplinkStatsCollector:(id)arg2 downlinkStatsCollector:(id)arg3 reportingAgent:(struct opaqueRTCReporting *)arg4 transportSessionID:(unsigned int)arg5 streamID:(unsigned short)arg6 mediaQueue:(struct tagVCMediaQueue *)arg7;

@end

