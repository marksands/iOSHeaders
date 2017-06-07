//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/NSXPCListenerDelegate-Protocol.h>
#import <PhotoAnalysis/PHPhotoLibraryAvailabilityObserver-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, PHAPhotoLibraryList, PHASleepWakeMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface PHAExecutive : NSObject <PHPhotoLibraryAvailabilityObserver, NSXPCListenerDelegate>
{
    _Bool _isPhotoAnalysisAgent;
    _Bool _backgroundAnalysisActivityTriggered;
    unsigned char _state;
    NSMutableSet *_clients;
    NSMutableDictionary *_managersByLibraryPath;
    NSObject<OS_dispatch_queue> *_executiveStateQueue;
    PHAPhotoLibraryList *_photoLibraryList;
    PHASleepWakeMonitor *_sleepWakeMonitor;
    long long _countOfCoordinatorsRunningBackgroundAnalysis;
    NSObject<OS_dispatch_source> *_backgroundAnalysisMonitorTimer;
    NSObject<OS_xpc_object> *_backgroundAnalysisActivity;
}

+ (void)registerEmptyBackgroundActivity;
@property(retain) NSObject<OS_xpc_object> *backgroundAnalysisActivity; // @synthesize backgroundAnalysisActivity=_backgroundAnalysisActivity;
@property(retain) NSObject<OS_dispatch_source> *backgroundAnalysisMonitorTimer; // @synthesize backgroundAnalysisMonitorTimer=_backgroundAnalysisMonitorTimer;
@property long long countOfCoordinatorsRunningBackgroundAnalysis; // @synthesize countOfCoordinatorsRunningBackgroundAnalysis=_countOfCoordinatorsRunningBackgroundAnalysis;
@property(retain) PHASleepWakeMonitor *sleepWakeMonitor; // @synthesize sleepWakeMonitor=_sleepWakeMonitor;
@property(retain) PHAPhotoLibraryList *photoLibraryList; // @synthesize photoLibraryList=_photoLibraryList;
@property(retain) NSObject<OS_dispatch_queue> *executiveStateQueue; // @synthesize executiveStateQueue=_executiveStateQueue;
@property unsigned char state; // @synthesize state=_state;
@property(retain) NSMutableDictionary *managersByLibraryPath; // @synthesize managersByLibraryPath=_managersByLibraryPath;
@property(retain) NSMutableSet *clients; // @synthesize clients=_clients;
- (void).cxx_destruct;
- (void)_cleanupAfterBackgroundActivityFinishedForDefer:(_Bool)arg1 skipActivityStateCheck:(_Bool)arg2 message:(id)arg3;
- (void)_registerBackgroundActivity;
- (void)_installBackgroundAnalysisMonitor;
- (void)_stopAllBackgroundAnalysisWithCompletion:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)stopBackgroundActivity;
- (void)triggerBackgroundActivity;
- (void)checkQuiescenceForManager:(id)arg1;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)dispatchAsyncToExecutiveStateQueue:(CDUnknownBlockType)arg1;
- (void)_dispatchAsyncToQueue:(id)arg1 withTransactionBlock:(CDUnknownBlockType)arg2;
- (void)terminateManagerIfQuiescentAndNoConnectedClients:(id)arg1;
- (void)removeClientHandler:(id)arg1;
- (id)clientInfoForManager:(id)arg1;
- (_Bool)hasConnectedClientsForManager:(id)arg1;
- (void)terminateManagerForPhotoLibraryURL:(id)arg1;
- (id)managerForPhotoLibraryURL:(id)arg1;
- (id)_urlForSystemPhotoLibrary;
- (id)statusAsDictionary;
- (void)dumpStatusToLog;
- (void)shutdown;
- (void)_backgroundActivityDidBegin;
- (_Bool)_photoAnalysisEnabled;
- (void)startup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

