//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DCConnectivityTrackerDelegate.h"
#import "DCDocumentManager.h"

@class DCConnectivityTracker, DCService, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, SDFDispatchQueue;

@interface DCDocumentManager : NSObject <DCConnectivityTrackerDelegate, DCDocumentManager>
{
    DCService *_service;
    SDFDispatchQueue *_queue;
    DCConnectivityTracker *_connectivityTracker;
    NSMutableDictionary *_delegateStates;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    _Bool _synchronousContentsOfDirectory;
    NSDictionary *_watchedDocumentIdentifiersAndVersionIdentifiers;
}

+ (void)_deleteAllContent;
+ (void)deleteAllDataIfNecessary;
+ (_Bool)_synchronouslyRemoveItemAtURL:(id)arg1 withFileCoordinator:(id)arg2;
+ (id)documentManagerForService:(id)arg1;
+ (void)setPurposeIdentifier:(id)arg1;
@property(retain) NSObject<OS_dispatch_queue> *completionHandlerQueue; // @synthesize completionHandlerQueue=_completionHandlerQueue;
@property(readonly, retain) DCService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)rebuildDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_rebuildItemWithRelativePath:(id)arg1 parentDirectoryMetadata:(id)arg2;
- (_Bool)isConnected;
- (_Bool)connectionStatus;
- (void)connectivityTracker:(id)arg1 didUpdateConnectionStatus:(_Bool)arg2;
- (_Bool)hasPendingUploads;
- (_Bool)deleteAllLocalData;
- (void)allPendingUploadsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)uploadForItemAtPath:(id)arg1;
- (id)downloadTaskForItemAtPath:(id)arg1;
- (void)_finishUploadFileForTaskIdentifier:(id)arg1 sessionIdentifier:(id)arg2 responseContainer:(id)arg3 error:(id)arg4;
- (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)restartUploads;
- (void)evictItemAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelDownloadingItemAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startDownloadingItemAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelUploadingItemAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startUploadingItemAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeToFileAtPath:(id)arg1 source:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removePreflightedWriteToNewFileAtPath:(id)arg1;
- (void)preflightWriteToNewFileAtPath:(id)arg1 source:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_continuePreviewOfItem:(id)arg1 preview:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)thumbnailOfItemAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_continueContentsOfFile:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)contentsOfFileAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)attributesOfItemAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)contentsOfDirectoryAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_contentsOfDirectoryAtPath:(id)arg1 downloadIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_synchronousNextContentsOfDirectory;
- (void)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)pathsOfItemAtURL:(id)arg1 error:(id *)arg2;
- (id)fileURLOfItemAtPath:(id)arg1 error:(id *)arg2;
- (void)_finishFetchingUpdates;
- (void)_startFetchingUpdates;
- (void)_adjustFetchingUpdatesIfNecessary;
- (void)removeDelegateForFilterPath:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)delegateForFilterPath:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2 forFilterPath:(id)arg3;
- (void)setDelegate:(id)arg1 forFilterPath:(id)arg2;
- (void)_uploadItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_finishUploadFile:(id)arg1 container:(id)arg2 error:(id)arg3;
- (void)_startUploadingFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startDownloadItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_downloadItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_downloadStaleFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_downloadStaleDirectory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateFreshlyDownloadedFile:(id)arg1 downloadedFile:(id)arg2;
- (void)_fetchDirectoryHierarchyOfDirectory:(id)arg1;
- (void)_updateFreshlyDownloadedDirectory:(id)arg1 downloadedDirectory:(id)arg2 fetchingForChild:(id)arg3 remoteMetadata:(id *)arg4;
- (void)_updateFreshlyDownloadedDirectory:(id)arg1 downloadedDirectory:(id)arg2;
- (_Bool)_didDownloadChangedItem:(id)arg1 downloadedMetadata:(id)arg2;
- (void)_processDirectoryChangesWithDirectory:(id)arg1 currentContents:(id)arg2 previousContents:(id)arg3 fetchingForChild:(id)arg4 remoteMetadata:(id *)arg5;
- (id)_synthesizedMetadataForItem:(id)arg1 parentContentsMetadata:(id)arg2;
- (id)_dictionaryMappingNamesToParentContentsMetadataForDirectory:(id)arg1;
- (id)_dictionaryMappingDocumentIdentifiersToParentContentsMetadataForDirectory:(id)arg1;
- (id)_localItemsInDirectory:(id)arg1;
- (void)_didUpdateVersionIdentifier:(id)arg1 forDocumentIdentifier:(id)arg2;
- (_Bool)_shouldCallDelegate:(id)arg1 forPath:(id)arg2;
- (_Bool)_needsToCallDelegateForPath:(id)arg1;
- (void)_dispatchMaybeCallSelector:(SEL)arg1 path:(id)arg2 function:(const char *)arg3 line:(unsigned int)arg4 block:(CDUnknownBlockType)arg5;
- (_Bool)_isWatchedAndUpToDateItem:(id)arg1;
- (id)_activityInfoForItem:(id)arg1;
- (void)_logFunction:(const char *)arg1 path:(id)arg2 item:(id)arg3 relativePath:(id)arg4;
- (_Bool)_performPreOperationChecksWithPath:(id)arg1 itemClass:(Class)arg2 itemMustBeKnown:(_Bool)arg3 item:(id *)arg4 relativePath:(id *)arg5 error:(id *)arg6;
- (void)dealloc;
- (id)_initWithService:(id)arg1;
- (void)resetCachedItemManagerForService:(id)arg1;

@end

