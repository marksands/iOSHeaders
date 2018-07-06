//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SiriCoreConnectionProvider.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_nw_connection>, NSObject<OS_nw_endpoint>, NSString, NSURL, SAConnectionPolicy, SAConnectionPolicyRoute, SiriCoreConnectionMetrics, SiriCoreConnectionType;

@interface SiriCoreNWConnection : NSObject <SiriCoreConnectionProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <SiriCoreConnectionProviderDelegate> _delegate;
    NSURL *_url;
    NSString *_resolvedHost;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_nw_endpoint> *_endpoint;
    SAConnectionPolicyRoute *_route;
    SAConnectionPolicy *_policy;
    _Bool _prefersWWAN;
    _Bool _connectByPOPEnabled;
    _Bool _enforceEV;
    _Bool _isMPTCP;
    _Bool _isCanceled;
    _Bool _isEstablishing;
    _Bool _isReady;
    _Bool _usingTLS;
    NSString *_connectionId;
    SiriCoreConnectionType *_connectionType;
    int _interfaceIndex;
    CDUnknownBlockType _openCompletion;
    NSObject<OS_dispatch_source> *_openTimer;
    NSObject<OS_dispatch_source> *_staleConnectionTimer;
    unsigned long long _readWriteCounter;
    NSArray *_attemptedEndpoints;
    _Bool _isViable;
    _Bool _scopeToWiFiOnly;
    SiriCoreConnectionMetrics *_metrics;
    double _keepaliveIdleTime;
    double _keepaliveIntervalTime;
    double _retransmissionBasedConnectionDropTime;
    unsigned long long _keepaliveUnackedCount;
    double _staleConnectionInterval;
}

+ (void)getMetricsContext:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)_getAttemptedEndpoints;
- (_Bool)providerStatsIndicatePoorLinkQuality;
- (id)_setParametersForHost:(const char *)arg1 useTLS:(_Bool)arg2 initialPayload:(id)arg3;
- (id)resolvedHost;
- (void)setRetransmitConnectionDropTime:(double)arg1;
- (void)setKeepAlive:(double)arg1 withInterval:(double)arg2 withCount:(unsigned long long)arg3;
- (void)setScopeIsWiFiOnly;
- (_Bool)shouldFallbackFromError:(id)arg1;
- (_Bool)isCanceled;
- (_Bool)isReady;
- (_Bool)isEstablishing;
- (_Bool)isMultipath;
- (_Bool)isPeerNotNearbyError:(id)arg1;
- (_Bool)isPeerConnectionError:(id)arg1;
- (void)close;
- (void)_receivedBetterRouteNotification:(_Bool)arg1;
- (void)_receivedViabilityChangeNotification:(_Bool)arg1;
- (void)_closeWithError:(id)arg1;
- (void)updateConnectionMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)analysisInfo;
- (id)connectionType;
- (id)_sendBufferBytesRemaining:(id)arg1;
- (_Bool)supportsInitialPayload;
- (_Bool)shouldFallbackQuickly;
- (id)headerDataWithForceReconnect:(_Bool)arg1;
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readData:(CDUnknownBlockType)arg1;
- (_Bool)hasActiveConnection;
- (void)_cancelOpenTimer;
- (void)_setupOpenTimer;
- (void)_configureConnection:(id)arg1;
- (void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_getNWConnectionWithInitialData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cancelStaleConnectionTimer;
- (void)_setupStaleConnectionTimer;
- (_Bool)_connectByPOPMethod;
- (id)_connectionId;
- (id)_url;
- (id)delegate;
- (void)setStaleInterval:(double)arg1;
- (void)setEnforceExtendedValidation:(_Bool)arg1;
- (void)setConnectByPOPMethod:(_Bool)arg1;
- (void)setPrefersWWAN:(_Bool)arg1;
- (void)setProviderConnectionPolicy:(id)arg1;
- (void)setPolicyRoute:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)_invokeOpenCompletionWithError:(id)arg1;
- (id)_queue;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

