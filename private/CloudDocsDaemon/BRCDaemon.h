//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCAccountHandlerDelegate.h"
#import "BRCReachabilityDelegate.h"
#import "NSXPCListenerDelegate.h"

@class BRCAccountHandler, BRCAccountSession, BRCVersionsFileProvider, NSDate, NSError, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue, NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface BRCDaemon : NSObject <BRCReachabilityDelegate, NSXPCListenerDelegate, BRCAccountHandlerDelegate>
{
    NSObject<OS_dispatch_source> *_sigIntSrc;
    NSObject<OS_dispatch_source> *_sigQuitSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSXPCListener *_xpcListener;
    NSXPCListener *_tokenListener;
    _Bool _unitTestMode;
    _Bool _resumed;
    _Bool _hasNotEnoughDiskSpaceToBeFunctional;
    BRCAccountSession *_session;
    BRCAccountHandler *_accountHandler;
    NSObject<OS_dispatch_queue> *_xpcListenersReadyQueue;
    NSObject<OS_dispatch_queue> *_accountReadyQueue;
    NSObject<OS_dispatch_queue> *_accountResumedQueue;
    NSObject<OS_dispatch_queue> *_startupQueue;
    int _serverAvailabilityNotifyToken;
    NSObject<OS_dispatch_queue> *_accountLoaderQueue;
    NSMutableDictionary *_dirPaths;
    BRCVersionsFileProvider *_versionsProvider;
    NSMutableDictionary *_shareAcceptOperationsByURL;
    NSOperationQueue *_shareAcceptQueue;
    _Bool _disableAccountChangesHandling;
    _Bool _disableAppsChangesHandling;
    NSString *_logsDirPath;
    NSString *_appSupportDirPath;
    NSString *_cacheDirPath;
    Class _containerClass;
    NSError *_loggedOutError;
    NSString *_ubiquityTokenSalt;
    unsigned long long _forceIsGreedyState;
    NSDate *_startupDate;
}

+ (id)UTIForExtension:(id)arg1;
+ (_Bool)isDaemonRunning;
+ (id)daemon;
@property(nonatomic) _Bool doesNotHaveEnoughDiskSpaceToBeFunctional; // @synthesize doesNotHaveEnoughDiskSpaceToBeFunctional=_hasNotEnoughDiskSpaceToBeFunctional;
@property(readonly, nonatomic) BRCVersionsFileProvider *versionsProvider; // @synthesize versionsProvider=_versionsProvider;
@property(readonly, nonatomic) NSDate *startupDate; // @synthesize startupDate=_startupDate;
@property(readonly, nonatomic) BRCAccountHandler *accountHandler; // @synthesize accountHandler=_accountHandler;
@property(nonatomic) unsigned long long forceIsGreedyState; // @synthesize forceIsGreedyState=_forceIsGreedyState;
@property(nonatomic) _Bool disableAppsChangesHandling; // @synthesize disableAppsChangesHandling=_disableAppsChangesHandling;
@property(nonatomic) _Bool disableAccountChangesHandling; // @synthesize disableAccountChangesHandling=_disableAccountChangesHandling;
@property(retain, nonatomic) NSError *loggedOutError; // @synthesize loggedOutError=_loggedOutError;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(retain, nonatomic) Class containerClass; // @synthesize containerClass=_containerClass;
@property(retain, nonatomic) NSString *cacheDirPath; // @synthesize cacheDirPath=_cacheDirPath;
@property(retain, nonatomic) NSString *appSupportDirPath; // @synthesize appSupportDirPath=_appSupportDirPath;
@property(retain, nonatomic) NSString *logsDirPath; // @synthesize logsDirPath=_logsDirPath;
- (void).cxx_destruct;
- (void)resumeIPCAcceptation;
- (void)suspendIPCAcceptation;
- (void)exitWithCode:(int)arg1;
- (void)handleExitSignal:(int)arg1;
- (void)networkReachabilityFlagsChanged:(unsigned int)arg1;
- (void)networkReachabilityChanged:(_Bool)arg1;
- (_Bool)selfCheck:(struct __sFILE *)arg1;
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)waitOnAccountResumedQueue;
- (void)accountHandler:(id)arg1 didChangeSessionTo:(id)arg2;
- (void)accountHandler:(id)arg1 willChangeSessionFrom:(id)arg2;
- (id)dirPathForSyncedFolderType:(unsigned long long)arg1;
- (void)setDirPath:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (void)localeDidChange;
- (void)dumpToContext:(id)arg1;
- (id)registerShareAcceptOperation:(id)arg1 forURL:(id)arg2;
- (void)restart;
- (void)start;
- (void)_finishStartup;
- (void)_resumeAccount;
- (void)_startupAndLoadAccount;
- (void)_startXPCListeners;
- (void)_setupCacheDelete;
- (_Bool)_shouldCacheDeleteForVolume:(id)arg1;
- (void)loadAccount;
- (void)_loadAccountIfNeeded;
- (_Bool)checkEnoughDiskSpaceToBeFunctional;
- (void)setUpSandbox;
- (_Bool)_haveRequiredKernelFeatures;
@property(readonly, nonatomic) NSString *ubiquityTokenSalt; // @synthesize ubiquityTokenSalt=_ubiquityTokenSalt;
- (void)setUpAnonymousListener;
- (void)waitForConfiguration;
- (id)init;
- (void)_setupVNodeRapidAging;
- (void)_initSignals;
@property(nonatomic) _Bool isInSyncBubble;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

