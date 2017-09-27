//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSWRMMetricContainer, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface IDSWRMExchange : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    unsigned long long _recommendedLinkType;
    unsigned long long _activeLinkType;
    unsigned long long _activeRecommendationType;
    _Bool _registered;
    _Bool _subscribed;
    unsigned long long _reportInterval;
    _Bool _shouldSendReport;
    IDSWRMMetricContainer *_metrics;
    unsigned short _connectCount;
    unsigned long long _nearbyOverWiFi;
    _Bool _isPaired;
    _Bool _isNearby;
    _Bool _isConnected;
    int _isPairedNotifyToken;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CDUnknownBlockType _delegateBlock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)handleNetworkStateChangeUpdate:(_Bool)arg1 nearby:(_Bool)arg2;
- (void)handleActiveLinkChange:(unsigned long long)arg1;
- (void)_resetLocalMetric;
- (void)_updateLocalMetric:(id)arg1;
- (void)submitMetric:(id)arg1;
- (void)_sendMetricReportPeriodically;
- (void)_sendMetricReport;
- (id)_newMetricReportMessage;
- (_Bool)_processMetricsConfigEvent:(id)arg1;
- (void)_setReportInterval:(unsigned long long)arg1;
- (void)_notifyDelegate;
- (_Bool)_setRecommendedLinkType:(unsigned long long)arg1;
- (unsigned long long)recommendedLinkType;
- (_Bool)isBTRecommended;
- (_Bool)isWiFiRecommended;
- (_Bool)_processLinkPreferenceNotificationEvent:(id)arg1;
- (_Bool)_processXPCMessage:(id)arg1;
- (void)unsubscribeForRecommendation;
- (void)_restartSubscriptionIfNeeded;
- (void)subscribeForRecommendation:(id)arg1 recommendationType:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)_registerWithWRM;
- (id)_newUnsubscribeMessage;
- (id)_newPrefSubscribeMessage:(_Bool)arg1;
- (id)_newSubscribeStatusUpdateMessage:(_Bool)arg1 nearby:(_Bool)arg2;
- (id)_newSubscribeStatusUpdateMessage;
- (id)_newSubscribeMessage;
- (id)_newRegisterMessage;
- (_Bool)_isXPCDictionary:(id)arg1;
- (void)_sendXPCMessage:(id)arg1;
- (void)_reconnectUntilTimeout;
- (void)_processXPCEvent:(id)arg1;
- (void)_restartClient;
- (void)_stopXPCConnection;
- (void)_startXPCConnection;
- (void)_dispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)_submitBlockAsync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

