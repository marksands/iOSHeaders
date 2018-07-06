//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLAbstractObject.h"
#import "CPLEngineComponent.h"
#import "CPLEngineForceSyncTaskDelegate.h"
#import "CPLEngineSyncTaskDelegate.h"

@class CPLBackgroundDownloadsTask, CPLCleanupTask, CPLEngineForceSyncTask, CPLEngineLibrary, CPLMinglePulledChangesTask, CPLPlatformObject, CPLPullFromTransportTask, CPLPullScopesTask, CPLPushToTransportTask, CPLScopeUpdateTask, CPLTransportUpdateTask, NSError, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface CPLEngineSyncManager : NSObject <CPLEngineSyncTaskDelegate, CPLAbstractObject, CPLEngineComponent, CPLEngineForceSyncTaskDelegate>
{
    id <CPLEngineStoreUserIdentifier> _transportUserIdentifier;
    _Bool _setupIsDone;
    _Bool _shouldUpdateDisabledFeatures;
    _Bool _closed;
    id <CPLEngineTransportSetupTask> _setupTask;
    CDUnknownBlockType _closingCompletionHandler;
    NSObject<OS_dispatch_queue> *_lock;
    NSError *_lastError;
    CPLCleanupTask *_cleanupTask;
    CPLTransportUpdateTask *_transportUpdateTask;
    CPLPullScopesTask *_pullScopesTask;
    CPLScopeUpdateTask *_scopeUpdateTask;
    CPLPushToTransportTask *_pushHighPriorityTask;
    CPLPushToTransportTask *_pushTask;
    CPLPullFromTransportTask *_pullTask;
    CPLMinglePulledChangesTask *_mingleTask;
    CPLBackgroundDownloadsTask *_backgroundDownloadsTask;
    CPLEngineForceSyncTask *_currentForceSyncTask;
    CPLEngineForceSyncTask *_pendingForceSyncTask;
    unsigned long long _shouldRestartSessionFromState;
    NSMutableArray *_lastErrors;
    _Bool _foreground;
    _Bool _boostPriority;
    _Bool _hasOverridenBudgets;
    _Bool _disabledSchedulerForForceSyncTask;
    _Bool _hasTransactionForSyncSession;
    _Bool _shouldTryToMingleImmediately;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    unsigned long long _state;
}

+ (id)platformImplementationProtocol;
+ (unsigned int)qualityOfServiceForForcedTasks;
+ (unsigned int)qualityOfServiceForSyncSessions;
+ (id)shortDescriptionForState:(unsigned long long)arg1;
+ (id)descriptionForState:(unsigned long long)arg1;
@property(nonatomic) _Bool shouldTryToMingleImmediately; // @synthesize shouldTryToMingleImmediately=_shouldTryToMingleImmediately;
@property(nonatomic, setter=_setState:) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
@property(readonly, nonatomic) NSError *lastError;
- (void)endClientWork:(id)arg1;
- (void)beginClientWork:(id)arg1;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (_Bool)_didFinishBackgroundDownloadsTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (float)_progressForBackgroundDownloadsTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForBackgroundDownloads;
- (_Bool)_launchNecessaryTasksForBackgroundDownloads;
- (id)_descriptionForBackgroundDownloadsTasks;
- (_Bool)_didFinishPullTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (void)_releasePowerAssertionForMingleTaskIfNecessary;
- (void)_retainPowerAssertionForMingleTaskIfNecessary;
- (float)_progressForPullTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForPull;
- (_Bool)_launchNecessaryTasksForPull;
- (id)_descriptionForPullTasks;
- (_Bool)_didFinishPushTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (float)_progressForPushTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForPush:(_Bool)arg1;
- (_Bool)_launchNecessaryTasksForPush;
- (id)_descriptionForPushTasks;
- (_Bool)_didFinishPushHighPriorityTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (float)_progressForPushHighPriorityTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForPushHighPriority:(_Bool)arg1;
- (_Bool)_launchNecessaryTasksForPushHighPriority;
- (id)_descriptionForPushHighPriorityTasks;
- (_Bool)_didFinishScopeUpdateTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (float)_progressForScopeUpdateTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForScopeUpdate;
- (_Bool)_launchNecessaryTasksForScopeUpdate;
- (id)_descriptionForScopeUpdateTasks;
- (_Bool)_didFinishTransportUpdateTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (float)_progressForTransportUpdateTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForTransportUpdate;
- (_Bool)_launchNecessaryTasksForTransportUpdate;
- (id)_descriptionForTransportUpdateTasks;
- (_Bool)_didFinishPullScopesTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (float)_progressForPullScopesTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForPullScopes;
- (_Bool)_launchNecessaryTasksForPullScopes;
- (id)_descriptionForPullScopesTasks;
- (_Bool)_didFinishCleanupTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (float)_progressForCleanupTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForCleanup;
- (_Bool)_launchNecessaryTasksForCleanup;
- (id)_descriptionForCleanupTasks;
- (_Bool)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(_Bool *)arg2;
- (void)_cancelAllTasksForSetup;
- (_Bool)_launchSetupTask;
- (id)_descriptionForSetupTasks;
- (void)_launchForceSyncTaskIfNecessary;
- (void)forceSyncTaskHasBeenCancelled:(id)arg1;
- (void)launchForceSyncTaskWhenPossible:(id)arg1;
- (_Bool)_checkForegroundAtLaunchForForceSyncTask;
- (void)_reenableSchedulerForForceSyncTaskIfNecessary;
- (void)_disabledSchedulerForForceSyncTaskIfNecessary;
- (_Bool)_prepareAndLaunchSyncTask:(id *)arg1;
- (void)setBoostPriority:(_Bool)arg1;
- (void)_overrideBudgetsIfNeeded;
- (void)setSyncSessionShouldBeForeground:(_Bool)arg1;
- (void)discardTransportUserIdentifier;
- (void)resetTransportUserIdentifierAndRestartSync:(_Bool)arg1;
- (void)cancelCurrentSyncSession;
- (void)kickOffSyncSession;
- (void)startSyncSessionWithMinimalPhase:(unsigned long long)arg1;
- (void)_restartSyncSessionFromStateLocked:(unsigned long long)arg1 cancelIfNecessary:(_Bool)arg2;
- (void)_advanceToNextStateLockedMinimalState:(unsigned long long)arg1;
- (void)_advanceToNextStateLocked;
- (void)_notifyEndOfSyncSession;
- (_Bool)_launchNecessaryTasksForCurrentStateLocked;
- (id)_descriptionForLaunchedTasks;
- (id)_shortDescriptionForCurrentState;
- (id)_descriptionForCurrentState;
- (void)_moveAllTasksToBackgroundLocked;
- (void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:(_Bool)arg1;
- (void)_cancelAllTasksLocked;
- (void)_resetErrorForSyncSession;
- (void)_setErrorForSyncSession:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)dispatchForcedTaskBlock:(CDUnknownBlockType)arg1;
- (void)dispatchSyncBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

