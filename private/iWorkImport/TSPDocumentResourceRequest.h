//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSPDocumentResourceFileURLProvider.h"
#import "TSUResourceRequest.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSProgress, NSSet, NSString, TSPDocumentResourceCache;

__attribute__((visibility("hidden")))
@interface TSPDocumentResourceRequest : NSObject <TSPDocumentResourceFileURLProvider, TSUResourceRequest>
{
    TSPDocumentResourceCache *_documentResourceCache;
    NSSet *_documentResourceInfos;
    NSProgress *_progress;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_accessQueue_documentResourceLocalURLs;
    NSMutableDictionary *_accessQueue_documentResourceRemoteURLs;
    NSObject<OS_dispatch_group> *_accessQueue_downloadGroup;
    NSMutableArray *_accessQueue_deferredResourceAccessBlocks;
    struct {
        unsigned int isResourcesAvailable:1;
    } _accessQueue_flags;
}

- (void).cxx_destruct;
@property(readonly) NSSet *tags;
@property(readonly) unsigned long long estimatedDownloadSize;
- (void)performResourceAccessAsynchronouslyUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performResourceAccessUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fileURLForDocumentResourceInfo:(id)arg1;
@property(readonly) NSProgress *progress;
- (id)remoteURLForDocumentResourceInfo:(id)arg1;
- (void)accessQueue_conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithDocumentResourceInfos:(id)arg1 documentResourceCache:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

