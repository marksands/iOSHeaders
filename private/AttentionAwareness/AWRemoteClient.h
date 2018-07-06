//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AWRemoteClient.h"

@class AWAttentionAwarenessConfiguration, AWAttentionEvent, AWScheduler, NSArray, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AWRemoteClient : NSObject <AWRemoteClient>
{
    NSObject<OS_dispatch_queue> *_queue;
    AWScheduler *_scheduler;
    id <AWFrameworkClient> _proxy;
    NSXPCConnection *_connection;
    unsigned long long _lastPositiveEventTime;
    unsigned long long _lastPositiveNonSampledEventTime;
    unsigned long long _pollingStartTime;
    unsigned long long _pollingDeadline;
    _Bool _sentPollInitialized;
    _Bool _lastAttentionState;
    AWAttentionEvent *_lastEvent;
    unsigned long long _tagIndex;
    unsigned long long _eventMask;
    _Bool _samplingClient;
    int _supportedEventsNotify;
    AWAttentionAwarenessConfiguration *_lastConfig;
    double _lastNegativeEventTimeoutValueSec;
    NSArray *_attentionLostTimeoutsSec;
    _Bool _invalid;
    _Bool _unitTestSampling;
    NSString *_identifier;
    unsigned long long _samplingInterval;
    unsigned long long _samplingDelay;
}

@property(nonatomic) _Bool unitTestSampling; // @synthesize unitTestSampling=_unitTestSampling;
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) unsigned long long samplingDelay; // @synthesize samplingDelay=_samplingDelay;
@property(readonly, nonatomic) unsigned long long samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)useUnitTestSampling:(_Bool)arg1;
- (unsigned long long)nextTimerForTime:(unsigned long long)arg1 attentionSampler:(id)arg2;
- (void)updateDeadlinesForTime:(unsigned long long)arg1 attentionSampler:(id)arg2;
- (unsigned long long)nextSampleTimeForSampler:(id)arg1;
- (unsigned long long)nextAttentionLostTime:(_Bool *)arg1;
- (void)pollWithTimeout:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetAttentionLostTimer;
- (void)_resetAttentionLostTimer;
- (void)getLastEvent:(CDUnknownBlockType)arg1;
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)updateEventTimesForMask:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)deliverPollEventType:(unsigned long long)arg1 event:(id)arg2;
- (void)deliverEvent:(id)arg1;
- (void)setClientConfig:(id)arg1 shouldReset:(_Bool)arg2;
- (void)_reevaluateConfig;
- (void)_setClientConfig:(id)arg1 shouldReset:(_Bool)arg2;
- (void)invalidate;
- (id)connection;
- (id)description;
- (id)initWithProxy:(id)arg1 connection:(id)arg2 clientConfig:(id)arg3 error:(id *)arg4;

@end

