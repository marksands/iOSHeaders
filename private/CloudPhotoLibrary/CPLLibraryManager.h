//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLAbstractObject.h"

@class CPLChangeSession, CPLConfiguration, CPLPlatformObject, CPLStatus, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL, _CPLWeakLibraryManager;

@interface CPLLibraryManager : NSObject <CPLAbstractObject>
{
    CPLChangeSession *_currentSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sessionLock;
    _Bool _sizeOfResourcesToUploadIsSet;
    NSObject<OS_dispatch_queue> *_initLock;
    CPLConfiguration *_configuration;
    CPLStatus *_syncStatus;
    _CPLWeakLibraryManager *_weakSelf;
    _Bool _preventObserving;
    CPLPlatformObject *_platformObject;
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSString *_libraryIdentifier;
    NSString *_libraryVersion;
    unsigned long long _estimatedInitialSizeForLocalLibrary;
    unsigned long long _estimatedInitialAssetCountForLocalLibrary;
    unsigned long long _sizeOfResourcesToUpload;
    unsigned long long _sizeOfOriginalResourcesToUpload;
    unsigned long long _numberOfImagesToUpload;
    unsigned long long _numberOfVideosToUpload;
    unsigned long long _numberOfOtherItemsToUpload;
    id <CPLLibraryManagerDelegate> _delegate;
    id <CPLResourceProgressDelegate> _resourceProgressDelegate;
    id <CPLLibraryManagerOwner> _owner;
    unsigned long long _status;
    NSError *_statusError;
    unsigned long long _state;
    NSString *_userOverride;
    NSString *_effectiveClientBundleIdentifier;
}

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;
+ (void)useCloudPhotoDaemonImplementation;
@property(copy, nonatomic) NSString *effectiveClientBundleIdentifier; // @synthesize effectiveClientBundleIdentifier=_effectiveClientBundleIdentifier;
@property(copy, nonatomic) NSString *userOverride; // @synthesize userOverride=_userOverride;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSError *statusError; // @synthesize statusError=_statusError;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <CPLLibraryManagerOwner> owner; // @synthesize owner=_owner;
@property(nonatomic) __weak id <CPLResourceProgressDelegate> resourceProgressDelegate; // @synthesize resourceProgressDelegate=_resourceProgressDelegate;
@property(nonatomic) __weak id <CPLLibraryManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long numberOfOtherItemsToUpload; // @synthesize numberOfOtherItemsToUpload=_numberOfOtherItemsToUpload;
@property(readonly, nonatomic) unsigned long long numberOfVideosToUpload; // @synthesize numberOfVideosToUpload=_numberOfVideosToUpload;
@property(readonly, nonatomic) unsigned long long numberOfImagesToUpload; // @synthesize numberOfImagesToUpload=_numberOfImagesToUpload;
@property(readonly, nonatomic) unsigned long long sizeOfOriginalResourcesToUpload; // @synthesize sizeOfOriginalResourcesToUpload=_sizeOfOriginalResourcesToUpload;
@property(readonly, nonatomic) unsigned long long sizeOfResourcesToUpload; // @synthesize sizeOfResourcesToUpload=_sizeOfResourcesToUpload;
@property(nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary; // @synthesize estimatedInitialAssetCountForLocalLibrary=_estimatedInitialAssetCountForLocalLibrary;
@property(nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary; // @synthesize estimatedInitialSizeForLocalLibrary=_estimatedInitialSizeForLocalLibrary;
@property(readonly, copy, nonatomic) NSString *libraryVersion; // @synthesize libraryVersion=_libraryVersion;
@property(readonly, copy, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryResourceStorageURL; // @synthesize cloudLibraryResourceStorageURL=_cloudLibraryResourceStorageURL;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryStateStorageURL; // @synthesize cloudLibraryStateStorageURL=_cloudLibraryStateStorageURL;
@property(readonly, copy, nonatomic) NSURL *clientLibraryBaseURL; // @synthesize clientLibraryBaseURL=_clientLibraryBaseURL;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)addInfoToLog:(id)arg1;
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)compactFileCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool diagnosticsEnabled;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enableMingling;
- (void)disableMingling;
- (void)addStatusChangesForRecordsWithIdentifiers:(id)arg1 persist:(_Bool)arg2;
- (void)acknowledgeChangedStatuses:(id)arg1;
- (void)getChangedStatusesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusForRecordsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)setShouldOverrideSystemBudgetsForSyncSession:(_Bool)arg1;
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientReceivedNotificationOfServerChanges;
- (id)addSubscriberUsingPublishingHandler:(CDUnknownBlockType)arg1;
- (void)startSyncSession;
- (void)resetStatus;
- (void)_setSizeOfResourcesToUpload:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (_Bool)_setStatus:(unsigned long long)arg1 andError:(id)arg2;
- (void)getLocalIdentifiersForCloudIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCloudIdentifiersForLocalIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)publishResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginDownloadForResource:(id)arg1 highPriority:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(_Bool)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setLibraryVersion:(id)arg1;
- (void)_setCurrentSession:(id)arg1;
- (void)discardCurrentSession;
- (id)currentSession;
- (void)removeCloudLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CPLStatus *syncStatus;
- (void)_statusDidChange;
@property(readonly, nonatomic) CPLConfiguration *configuration;
- (void)_configurationDidChange;
- (void)deactivateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_closeDeactivating:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)barrier;
- (id)initForManagement;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (void)unblockEngineElementOnce:(id)arg1;
- (void)unblockEngineElement:(id)arg1;
- (void)blockEngineElement:(id)arg1;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)reportSetting:(id)arg1 hasBeenEnabled:(_Bool)arg2;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCloudCacheForRecordWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

