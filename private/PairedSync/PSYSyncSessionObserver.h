//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSYSyncSessionObserverInterface.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, PSYSyncSession, PSYSyncSessionObserverExportedObject;

@interface PSYSyncSessionObserver : NSObject <PSYSyncSessionObserverInterface>
{
    PSYSyncSession *_currentSyncSession;
    PSYSyncSessionObserverExportedObject *_exportedObject;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    _Bool _shouldCheckinAfterInvalidationHandler;
    int _daemonDidLaunchNotifyToken;
    _Bool _resignedActive;
    id <PSYSyncSessionObserverDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <PSYSyncSessionObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)invalidateSyncSession:(id)arg1;
- (oneway void)updateSyncSession:(id)arg1;
- (oneway void)syncSessionWillStart:(id)arg1;
- (id)providerWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_queue_invalidateSyncSession:(id)arg1;
- (void)_connectionInvalidated;
- (void)_queue_loadConnectionIfNeeded;
- (void)_checkin:(_Bool)arg1;
- (void)_handleDaemonStarted;
- (void)startObservingSyncSessionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setCurrentSyncSession:(id)arg1;
- (void)dealloc;
- (void)_reconnectToPairedSync;
- (void)_disconnectFromPairedSync;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

