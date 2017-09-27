//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSURL, NSURLSession;

@interface PKRemoteAssetManager : NSObject
{
    NSURL *_directoryURL;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_manifestItemsByRelativeURL;
    NSMutableArray *_completionHandlers;
}

- (void).cxx_destruct;
- (void)_flushBundleCaches;
- (void)cancelDownloads;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id *)arg3;
- (void)_callCompletionHandlersWithFinishState:(_Bool)arg1 progress:(float)arg2 error:(id)arg3;
- (void)_downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)assetExistsLocally:(id)arg1;
- (id)itemWithRelativePath:(id)arg1;
- (id)deviceSpecificItemsForScreenScale:(double)arg1 suffix:(id)arg2;
- (id)deviceSpecificItems;
- (id)remoteAssetManifests;
- (id)initWithFileURL:(id)arg1 queue:(id)arg2;

@end

