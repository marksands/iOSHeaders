//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDaemonListener, IMLocalObject, IMRemoteObject, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSProtocolChecker, NSRecursiveLock, NSString;
@protocol IMRemoteDaemonProtocol, OS_dispatch_queue;

@interface IMDaemonController : NSObject
{
    id _delegate;
    IMRemoteObject<IMRemoteDaemonProtocol> *_remoteObject;
    NSMutableDictionary *_listenerMap;
    IMLocalObject *_localObject;
    IMDaemonListener *_daemonListener;
    NSMutableArray *_services;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSRecursiveLock *_connectionLock;
    NSArray *_servicesToAllow;
    NSArray *_servicesToDeny;
    struct __CFRunLoopSource *_runLoopSource;
    NSLock *_blockingLock;
    _Bool _hasCheckedForDaemon;
    _Bool _preventReconnect;
    _Bool _inBlockingConnect;
    _Bool _acquiringDaemonConnection;
    _Bool _autoReconnect;
    _Bool _blocksConnectionAtResume;
    _Bool _hasBeenSuspended;
    unsigned int _gMyFZListenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdatedCapabilities;
    _Bool _requestingConnection;
    NSMutableDictionary *_requestQOSClassCompletionBlocks;
}

+ (void)_setApplicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (_Bool)_applicationWillTerminate;
+ (id)sharedController;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *requestQOSClassCompletionBlocks; // @synthesize requestQOSClassCompletionBlocks=_requestQOSClassCompletionBlocks;
@property(readonly, nonatomic, getter=isRequestingConnection) _Bool requestingConnection; // @synthesize requestingConnection=_requestingConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue; // @synthesize _remoteMessageQueue;
@property(retain, setter=_setServicesToDeny:) NSArray *_servicesToDeny; // @synthesize _servicesToDeny;
@property(retain, setter=_setServicesToAllow:) NSArray *_servicesToAllow; // @synthesize _servicesToAllow;
@property(setter=__setCapabilities:) unsigned int _capabilities; // @synthesize _capabilities=_gMyFZListenerCapabilities;
@property(setter=_setAutoReconnect:) _Bool _autoReconnect; // @synthesize _autoReconnect;
@property(retain, nonatomic, setter=_setListenerID:) NSString *_listenerID; // @synthesize _listenerID;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setBlocksConnectionAtResume:) _Bool _blocksConnectionAtResume; // @synthesize _blocksConnectionAtResume;
@property(readonly, nonatomic) IMDaemonListener *listener; // @synthesize listener=_daemonListener;
- (void).cxx_destruct;
- (void)systemApplicationDidResume;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidSuspend;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setDaemonLogsOutWithoutStatusListeners:(_Bool)arg1;
- (void)setDaemonTerminatesWithoutListeners:(_Bool)arg1;
- (void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3;
- (void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3;
- (void)remoteObjectDiedNotification:(id)arg1;
- (void)localObjectDiedNotification:(id)arg1;
- (void)_setCapabilities:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int capabilities;
- (void)listener:(id)arg1 setListenerCapabilities:(unsigned int)arg2;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (_Bool)localObjectExists;
- (_Bool)remoteObjectExists;
- (_Bool)__isRemoteObjectValidOnQueue:(id)arg1;
- (_Bool)__isLocalObjectValidOnQueue:(id)arg1;
- (void)_noteSetupComplete;
- (void)blockUntilConnected;
- (double)_connectionTimeout;
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly, nonatomic) _Bool isConnecting;
- (_Bool)_acquiringDaemonConnection;
- (void)_addressBookChanged:(id)arg1;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 forAccount:(id)arg3;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2;
- (void)setMyPicture:(id)arg1 smallPictureData:(id)arg2;
- (id)_remoteObject;
- (_Bool)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (_Bool)removeListenerID:(id)arg1;
- (_Bool)hasListenerForID:(id)arg1;
- (_Bool)addListenerID:(id)arg1 capabilities:(unsigned int)arg2;
- (void)_listenerSetUpdated;
- (void)sendABInformationToDaemon;
- (_Bool)connectToDaemonWithLaunch:(_Bool)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(_Bool)arg3;
- (_Bool)connectToDaemon;
- (_Bool)connectToDaemonWithLaunch:(_Bool)arg1;
- (void)_connectToDaemonWithLaunch:(_Bool)arg1 capabilities:(unsigned int)arg2;
- (void)disconnectFromDaemon;
- (void)_disconnectFromDaemonWithForce:(_Bool)arg1;
- (void)disconnectFromDaemonWithForce:(_Bool)arg1;
- (void)killDaemon;
- (void)_blockUntilSendQueueIsEmpty;
- (_Bool)_makeConnectionWithLaunch:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_handleDaemonException:(id)arg1;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)dealloc;
- (void)_handleReceivedQOSClassWhileServicingRequestsNotification:(id)arg1;
- (void)requestQOSClassOfAgentWhileServicingRequests:(CDUnknownBlockType)arg1;
- (id)init;

@end

