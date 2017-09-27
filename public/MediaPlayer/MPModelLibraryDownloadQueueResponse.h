//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPModelResponse.h>

#import "MPMediaDownloadObserver.h"

@class NSString;

@interface MPModelLibraryDownloadQueueResponse : MPModelResponse <MPMediaDownloadObserver>
{
}

- (void)downloadManager:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;
- (void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;
- (void)getChangeDetailsFromPreviousResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

