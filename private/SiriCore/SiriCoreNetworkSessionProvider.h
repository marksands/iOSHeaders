//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"
#import "NSURLSessionDelegate.h"
#import "SiriCoreConnectionProvider.h"

@class NSInputStream, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue, NSOutputStream, NSString, NSURL, NSURLSession, NSURLSessionStreamTask, SAConnectionPolicy, SAConnectionPolicyRoute, SiriCoreConnectionType;

@interface SiriCoreNetworkSessionProvider : NSObject <NSURLSessionDelegate, NSStreamDelegate, SiriCoreConnectionProvider>
{
    id <SiriCoreConnectionProviderDelegate> _delegate;
    NSURL *_url;
    SAConnectionPolicyRoute *_route;
    SAConnectionPolicy *_policy;
    _Bool _prefersWWAN;
    _Bool _connectByPOPEnabled;
    _Bool _enforceEV;
    _Bool _isMPTCP;
    SiriCoreConnectionType *_connectionType;
    int _interfaceIndex;
    NSString *_interfaceName;
    _Bool _isCanceled;
    _Bool _isEstablishing;
    _Bool _isReady;
    NSURLSession *_urlSession;
    NSOperationQueue *_opQueue;
    NSURLSessionStreamTask *_streamTask;
    CDUnknownBlockType _completion_block;
    NSString *_resolvedHost;
    NSString *_connectionId;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _readBuffer[10240];
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_group> *_readGroup;
    _Bool _waitingOnReadGroup;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_source> *_openTimer;
    NSObject<OS_dispatch_source> *_staleConnectionTimer;
    unsigned long long _readWriteCounter;
}

+ (void)getMetricsContext:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readData:(CDUnknownBlockType)arg1;
- (void)setEnforceExtendedValidation:(_Bool)arg1;
- (void)setConnectByPOPMethod:(_Bool)arg1;
- (void)setPrefersWWAN:(_Bool)arg1;
- (void)setProviderConnectionPolicy:(id)arg1;
- (void)setPolicyRoute:(id)arg1;
- (_Bool)isCanceled;
- (_Bool)isReady;
- (_Bool)isEstablishing;
- (_Bool)isMultipath;
- (_Bool)shouldFallbackFromError:(id)arg1;
- (_Bool)isNetworkDownError:(id)arg1;
- (_Bool)isPeerNotNearbyError:(id)arg1;
- (_Bool)isPeerConnectionError:(id)arg1;
- (void)_closeWithError:(id)arg1;
- (void)close;
- (id)resolvedHost;
- (_Bool)providerStatsIndicatePoorLinkQuality;
- (void)updateConnectionMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)analysisInfo;
- (id)connectionType;
- (_Bool)hasActiveConnection;
- (void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_cancelOpenTimer;
- (void)_setupOpenTimer;
- (_Bool)supportsInitialPayload;
- (void)_cancelStaleConnectionTimer;
- (void)_setupStaleConnectionTimer;
- (void)_streamDidBecomeUnviable;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_invokeOpenCompletionWithError:(id)arg1;
- (_Bool)shouldFallbackQuickly;
- (id)headerDataWithForceReconnect:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

