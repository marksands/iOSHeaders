//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSURLSessionDownloadDelegate-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUDownloadManager : NSObject <NSURLSessionDownloadDelegate>
{
    NSOperationQueue *_downloadSessionsQueue;
    NSHashTable *_downloadSessions;
    NSMapTable *_downloadResults;
    NSObject<OS_dispatch_queue> *_activeTasksQueue;
    NSMutableDictionary *_activeTasks;
    NSMutableDictionary *_inProgressDownloadItems;
    NSMutableArray *_inProcessDownloadQueue;
    NSMutableArray *_completionHandlers;
    NSURLSession *_defaultURLSession;
}

+ (id)newFilteredDownloadItems:(id)arg1;
+ (id)sharedManager;
+ (void)wakeUp;
+ (void)registerDownloadItemClass:(Class)arg1;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)notifyWhenAllTasksAreCompletedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelTasksWithDescriptions:(id)arg1 forDownloadSession:(id)arg2;
- (id)outstandingDownloadSessionForItems:(id)arg1 description:(id)arg2 delegate:(id)arg3;
- (id)downloadItems:(id)arg1 description:(id)arg2 delegate:(id)arg3;
- (_Bool)beginDownloadTaskForDownloadItem:(id)arg1 isInProcessDownloadTask:(_Bool)arg2 taskDescription:(id)arg3 urlOrNil:(id)arg4;
- (id)downloadSessionForItems:(id)arg1 description:(id)arg2 willRequestDownload:(_Bool)arg3 delegate:(id)arg4 taskHandler:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) NSURL *downloadInboxDirectory;
- (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initPrivate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

