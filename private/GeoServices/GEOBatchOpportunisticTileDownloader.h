//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOTileRequesterDelegate.h"

@class GEOTileKeyList, GEOTileRequester, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSString;

__attribute__((visibility("hidden")))
@interface GEOBatchOpportunisticTileDownloader : NSObject <GEOTileRequesterDelegate>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_os_log> *_log;
    NSString *_logPrefix;
    NSObject<OS_dispatch_group> *_preparationGroup;
    id <GEOBatchOpportunisticTileDownloaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_countryCode;
    NSString *_regionCode;
    _Bool _canceled;
    _Bool _paused;
    struct GEOOnce_s _finished;
    GEOTileRequester *_activeRequester;
    GEOTileKeyList *_remainingKeysForActiveRequester;
    unsigned long long _successfulTiles;
    unsigned long long _failedTiles;
    CDUnknownBlockType _tileRequesterCreationBlock;
}

- (void).cxx_destruct;
- (void)tileRequesterFinished:(id)arg1;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;
- (void)_pauseOrRequestNextBatch;
- (void)_startRequesterForKeys:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3;
- (void)_requestNextBatch;
- (_Bool)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)_finish;
- (void)cancel;
- (void)pause;
- (void)resume;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 countryCode:(id)arg3 region:(id)arg4 log:(id)arg5 logPrefix:(id)arg6 tileRequesterCreationBlock:(CDUnknownBlockType)arg7;
- (id)init;
- (void)downloadDidFailForTile:(struct _GEOTileKey *)arg1 error:(id)arg2;
- (void)downloadDidSucceedForTile:(struct _GEOTileKey *)arg1 downloadSize:(unsigned long long)arg2;
- (void)determineNextBatchWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

