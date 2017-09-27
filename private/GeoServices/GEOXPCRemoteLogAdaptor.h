//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOBaseLogAdaptor.h>

#import "GEOProtobufSessionTaskDelegate.h"

@class GEOLogMessageCacheManager, GEOLogMessageCollectionRequest, GEOProtobufSessionTask, NSLock, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface GEOXPCRemoteLogAdaptor : GEOBaseLogAdaptor <GEOProtobufSessionTaskDelegate>
{
    NSURL *_remoteURL;
    NSString *_debugRequestName;
    unsigned long long _retryInterval;
    unsigned long long _backOffRetryInterval;
    _Bool _shouldAddIntervalJitter;
    unsigned long long _intervalJitter;
    _Bool _shouldCacheOnDisk;
    unsigned long long _cacheEncryptionType;
    long long _cacheMaxAllowedMessageCount;
    long long _logMessagesOverflowPurgeSize;
    long long _cacheMessageExpiryInterval;
    long long _maxMessageChunkSize;
    long long _maxMessageChunkCount;
    _Bool _requireWiFi;
    _Bool _sendInRealtime;
    long long _cacheCountFlushThreshold;
    _Bool _shouldCompressRequest;
    NSLock *_xpcActivityInfoLock;
    NSString *_logMessageCacheFilePath;
    GEOLogMessageCacheManager *_logMessageCacheManager;
    GEOProtobufSessionTask *_logMessageCollectionSessionTask;
    GEOLogMessageCollectionRequest *_request;
    _Bool _logMessageCollectionRequestPending;
    NSLock *_logMessageCollectionRequesterLock;
    NSObject<OS_dispatch_queue> *_logMessageSendQueue;
    NSString *_adaptorIdentifier;
    NSString *_policyIdentifier;
    NSString *_xpcActivityName;
    CDUnknownBlockType _shouldDeferXPCActivityBlock;
    NSLock *_shouldDeferXPCActivityBlockLock;
    _Bool _observingNetworkChange;
    NSObject<OS_dispatch_queue> *_networkChangeObserverQueue;
}

@property(retain, nonatomic) NSString *debugRequestName; // @synthesize debugRequestName=_debugRequestName;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
- (void).cxx_destruct;
- (void)_purgeLogMessageCache;
- (void)_networkReachabilityChanged;
- (void)_removeNetworkObserver;
- (void)_addNetworkObserver;
- (void)_deviceUnlocked;
- (void)_deviceLocking;
- (void)_purgeExpiredLogMessagesFromCache;
- (void)_purgeAndSendLogMessages;
- (void)_unregisterXPCActivityTimer;
- (void)_registerXPCActivityTimer;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)_continueToSendNextBatch:(_Bool)arg1;
- (void)_requesterStartSendRequest:(id)arg1;
- (void)_sendLogMessageRequest:(id)arg1;
- (void)_sendNextLogMessageChunk;
- (_Bool)_isLogMessageCollectionRequesterPending;
- (void)_queueNextLogMessagesChunkForSending;
- (void)_beginSendingLogMessageChunks;
- (void)_cleanupLogMessageCollectionRequester;
- (void)updateAdaptorPolicyConfiguration:(id)arg1;
- (int)logMsgEventNetworkServiceForSupportedLogMsgType;
- (_Bool)isLogFrameworkAdaptor;
- (void)forceFlushLogs;
- (void)flushLogs;
- (void)queueLogMessage:(id)arg1;
- (void)dealloc;
- (void)_setupXPCActivity;
- (void)_setupLogMessageCache;
- (_Bool)_useInMemoryLogMessageCache;
@property(readonly) int supportedLogMessageType;
@property(readonly) NSString *adaptorIdentifier;
- (void)_setupQueueAndNotifications;
- (void)_initializeAdaptor;
- (id)initWithAdaptorPolicy:(id)arg1;
- (id)initWithRemoteURL:(id)arg1 debugRequestName:(id)arg2 supportedTypes:(id)arg3;
- (void)incrementXpcActivityTriggerCount;
@property(nonatomic) long long xpcActivityTriggerCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

