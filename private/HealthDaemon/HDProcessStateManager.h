//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDiagnosticObject.h"

@class BKSApplicationStateMonitor, HDDaemon, NSHashTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface HDProcessStateManager : NSObject <HDDiagnosticObject>
{
    HDDaemon *_daemon;
    NSMutableDictionary *_processObserversByBundleID;
    NSHashTable *_foregroundClientProcessObservers;
    BKSApplicationStateMonitor *_applicationMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSMutableDictionary *_processInfoByBundleID;
}

+ (_Bool)applicationIsForeground:(id)arg1;
+ (int)processIdentifierForApplicationIdentifier:(id)arg1;
+ (id)bundleVersionStringForProcessIdentifier:(int)arg1;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)_queue_notifyObserversProcessWithBundleIdentifier:(id)arg1 processIdentifier:(int)arg2 applicationStateChanged:(unsigned int)arg3 previousApplicationState:(unsigned int)arg4;
- (void)_queue_handleProcessInfoChangedWithAllPreviousProcessInfos:(id)arg1;
- (void)_queue_handleBackboardApplicationInfoChanged:(id)arg1;
- (void)_handleBackboardApplicationInfoChanged:(id)arg1;
- (_Bool)isApplicationStateForegroundForBundleIdentifier:(id)arg1;
- (_Bool)isApplicationStateSuspendedForBundleIdentifier:(id)arg1;
- (unsigned int)_getApplicationStateForBundleIdentifier:(id)arg1;
- (void)unregisterForegroundClientProcessObserver:(id)arg1;
- (void)registerForegroundClientProcessObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (_Bool)registerObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithDaemon:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

