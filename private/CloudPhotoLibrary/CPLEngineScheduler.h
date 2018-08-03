//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLAbstractObject.h"
#import "CPLEngineComponent.h"

@class CPLEngineLibrary, CPLPlatformObject, NSCountedSet, NSDate, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface CPLEngineScheduler : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    unsigned long long _requiredFirstState;
    unsigned long long _lastRequestGeneration;
    unsigned long long _currentRequestGeneration;
    NSDate *_nextScheduledDate;
    double _intervalForRetry;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentSyncState;
    _Bool _needsToUpdateScopeList;
    _Bool _shouldNoteServerHasChanges;
    _Bool _opened;
    NSDate *_unavailabilityLimitDate;
    unsigned long long _foregroundCalls;
    NSCountedSet *_disablingReasons;
    NSCountedSet *_blockingElements;
    NSMutableDictionary *_blockedElements;
    NSMutableSet *_blockWaiters;
    NSCountedSet *_unblockOnceElements;
    NSObject<OS_dispatch_queue> *_blockingLock;
    unsigned long long _significantWorkCalls;
    unsigned long long _disablingMinglingCount;
    NSDate *_lastSyncSessionDateCausedByForeground;
    _Bool _protectAgainstFastRelaunch;
    _Bool _didWriteFirstSyncMarker;
    _Bool _delayedFirstSyncBecauseOfRapidLaunch;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    CDUnknownBlockType _requiredStateObserverBlock;
    CDUnknownBlockType _shouldBackOffOnErrorBlock;
}

+ (id)validElements;
+ (id)platformImplementationProtocol;
@property(copy, nonatomic) CDUnknownBlockType shouldBackOffOnErrorBlock; // @synthesize shouldBackOffOnErrorBlock=_shouldBackOffOnErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType requiredStateObserverBlock; // @synthesize requiredStateObserverBlock=_requiredStateObserverBlock;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long requiredState;
- (void)_resetFirstSynchronizationMarker;
- (id)_minimalDateForFirstSync;
- (void)_writeFirstSynchronizationMarker;
- (id)_pathToFirstSynchronizationMarker;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetBackoffInterval;
- (void)noteSyncSessionFailedDuringPhase:(unsigned long long)arg1 withError:(id)arg2;
- (void)_handleResetGlobalAnchorWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetAnchorWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetCloudCacheWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetClientCacheWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)noteSyncSessionSucceeded;
- (void)noteSyncSessionStateWillBeAttempted:(unsigned long long)arg1;
- (void)noteNetworkStateDidChange;
- (void)noteServerIsUnavailableWithError:(id)arg1;
- (void)_noteServerIsUnavailableWithErrorLocked:(id)arg1;
- (void)_disableRetryAfterLocked;
- (_Bool)isSynchronizationDisabledWithReasonError:(id *)arg1;
- (_Bool)isMinglingEnabled;
- (void)enableMingling;
- (void)disableMingling;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)unblockEngineElementOnce:(id)arg1;
- (void)waitForEngineElementToBeBlocked:(id)arg1;
- (void)willRunEngineElement:(id)arg1;
- (void)unblockEngineElement:(id)arg1;
- (void)blockEngineElement:(id)arg1;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)_enableSynchronizationWithReasonLocked:(id)arg1;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)_disableSynchronizationWithReasonLocked:(id)arg1;
- (_Bool)isClientInForeground;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteResourceDownloadQueueIsFull;
- (void)noteServerHasChanges;
- (void)_reallyNoteServerHasChangesLocked;
- (void)noteClientIsNotInSyncWithClientCache;
- (void)noteClientIsInSyncWithClientCache;
- (void)noteClientNeedsToPull;
- (void)noteScopeNeedsToPullFromTransport;
- (void)noteScopeNeedsToPushToTransport;
- (void)noteScopeNeedsToPushHighPriorityToTransport;
- (void)_disableFastRelaunchProtection;
- (void)noteScopeNeedsUpdate;
- (void)noteScopeListNeedsUpdate;
- (void)noteTransportNeedsUpdate;
- (void)noteStoreNeedsCleanup;
- (void)noteStoreNeedsToUpdateDisabledFeatures;
- (void)noteStoreNeedsSetup;
- (void)kickOffSyncSession;
- (void)startRequiredSyncSessionNow;
- (void)_backOff;
- (void)_noteSyncSessionNeededFromState:(unsigned long long)arg1;
- (void)_unscheduleNextSyncSession;
- (void)_reallyUnscheduleSession;
- (void)_scheduleNextSyncSession;
- (void)_startRequiredSyncSession;
- (void)_reallyStartSyncSession;
- (void)_startSyncSessionWithMinimalPhase:(unsigned long long)arg1;
- (_Bool)_syncSessionIsPossible;
- (void)_setRequiredFirstState:(unsigned long long)arg1;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

