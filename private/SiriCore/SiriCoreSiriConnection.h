//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/SiriCoreSiriBackgroundConnectionDelegate-Protocol.h>
#import <SiriCore/SiriCoreSiriConnection-Protocol.h>

@class NSError, NSMutableArray, NSMutableSet, NSString, NSURL, SAConnectionPolicy, SiriCoreSiriBackgroundConnection;
@protocol OS_dispatch_group, OS_dispatch_queue, SiriCoreSiriConnectionDelegate;

@interface SiriCoreSiriConnection : NSObject <SiriCoreSiriBackgroundConnectionDelegate, SiriCoreSiriConnection>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isCanceled;
    id <SiriCoreSiriConnectionDelegate> _delegate;
    NSURL *_url;
    _Bool _prefersWWAN;
    NSString *_aceHost;
    NSString *_languageCode;
    double _timeout;
    _Bool _sendPings;
    NSString *_assistantIdentifier;
    NSString *_peerAssistantIdentifier;
    NSString *_connectionId;
    _Bool _isCanceledInternal;
    NSMutableSet *_pendingBackgroundConnections;
    NSMutableSet *_deadBackgroundConnections;
    NSMutableSet *_scheduledRoutes;
    SiriCoreSiriBackgroundConnection *_activeBackgroundConnection;
    NSObject<OS_dispatch_group> *_activeConnectionGroup;
    NSString *_peerType;
    NSString *_peerVersion;
    NSString *_productTypePrefix;
    _Bool _usesProxyConnection;
    _Bool _deviceIsInWalkaboutExperimentGroup;
    _Bool _siriConnectionUsesPeerManagedSync;
    Class _peerProviderClass;
    NSMutableArray *_connMethodUsedHistory;
    _Bool _imposePolicyBan;
    _Bool _skipPeer;
    _Bool _skipEdge;
    NSError *_skipPeerError;
    SAConnectionPolicy *_connectionPolicy;
}

@property(copy, nonatomic) SAConnectionPolicy *connectionPolicy; // @synthesize connectionPolicy=_connectionPolicy;
@property(nonatomic) _Bool imposePolicyBan; // @synthesize imposePolicyBan=_imposePolicyBan;
@property(copy, nonatomic) NSString *connectionId; // @synthesize connectionId=_connectionId;
@property(retain, nonatomic) Class peerProviderClass; // @synthesize peerProviderClass=_peerProviderClass;
@property(nonatomic) _Bool siriConnectionUsesPeerManagedSync; // @synthesize siriConnectionUsesPeerManagedSync=_siriConnectionUsesPeerManagedSync;
@property(nonatomic) _Bool deviceIsInWalkaboutExperimentGroup; // @synthesize deviceIsInWalkaboutExperimentGroup=_deviceIsInWalkaboutExperimentGroup;
@property(nonatomic) _Bool usesProxyConnection; // @synthesize usesProxyConnection=_usesProxyConnection;
@property(copy, nonatomic) NSString *productTypePrefix; // @synthesize productTypePrefix=_productTypePrefix;
@property(copy, nonatomic) NSString *peerVersion; // @synthesize peerVersion=_peerVersion;
@property(copy, nonatomic) NSString *peerType; // @synthesize peerType=_peerType;
@property(copy, nonatomic) NSString *peerAssistantIdentifier; // @synthesize peerAssistantIdentifier=_peerAssistantIdentifier;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *aceHost; // @synthesize aceHost=_aceHost;
@property(nonatomic) _Bool prefersWWAN; // @synthesize prefersWWAN=_prefersWWAN;
@property(copy, nonatomic) NSError *skipPeerError; // @synthesize skipPeerError=_skipPeerError;
@property(nonatomic) _Bool skipEdge; // @synthesize skipEdge=_skipEdge;
@property(nonatomic) _Bool skipPeer; // @synthesize skipPeer=_skipPeer;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <SiriCoreSiriConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_recordConnectionMethodForMetrics:(id)arg1;
- (void)siriBackgroundConnection:(id)arg1 didEncounterError:(id)arg2 analysisInfo:(id)arg3;
- (void)siriBackgroundConnectionDidClose:(id)arg1;
- (void)siriBackgroundConnection:(id)arg1 didReceiveAceObject:(id)arg2;
- (void)siriBackgroundConnection:(id)arg1 didOpenWithConnectionType:(id)arg2 routeId:(id)arg3 delay:(double)arg4;
- (void)siriBackgroundConnection:(id)arg1 willStartWithConnectionType:(id)arg2;
- (void)_handleLastEventFromBackgroundConnection:(id)arg1 pendingConnectionExhaustionHandler:(CDUnknownBlockType)arg2;
- (id)_activeOrAnyPendingConnection;
- (void)_waitForActiveConnection:(CDUnknownBlockType)arg1;
- (void)_accessPotentiallyActiveConnections:(CDUnknownBlockType)arg1;
- (void)getConnectionMetrics:(CDUnknownBlockType)arg1;
- (void)getAnalysisInfo:(CDUnknownBlockType)arg1;
- (id)analysisInfo;
- (void)cancelSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)probeConnection;
- (void)barrier:(CDUnknownBlockType)arg1;
- (void)setSendPings:(_Bool)arg1;
- (void)sendCommand:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)start;
- (void)_scheduleBackgroundConnectionWithRoute:(id)arg1 delay:(double)arg2;
- (void)_startBackgroundConnectionWithRoute:(id)arg1;
- (id)_connectionInfoForRoute:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

