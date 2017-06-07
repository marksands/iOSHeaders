//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCFuture, MPCPlayerPath, NSMutableArray, NSMutableDictionary, NSString;
@protocol MPArtworkDataSource, OS_dispatch_queue;

@interface MPCMediaRemoteController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPCFuture *_playbackStateFuture;
    long long _playbackStateCacheState;
    MPCFuture *_supportedCommandsFuture;
    long long _supportedCommandsCacheState;
    long long _playingIdentifierCacheState;
    NSString *_playingItemIdentifier;
    struct _MSVSignedRange _maximumLoadedRange;
    NSMutableArray *_contentItemIDs;
    NSMutableDictionary *_contentItems;
    MPCFuture *_playingItemIdentifierFuture;
    NSMutableDictionary *_contentItemIDsFutures;
    NSMutableDictionary *_contentItemFutures;
    NSMutableDictionary *_contentItemArtworkFutures;
    MPCPlayerPath *_resolvedPlayerPath;
    id <MPArtworkDataSource> _artworkDataSource;
    id _invalidationToken;
}

+ (_Bool)_isRemote;
+ (id)controllerForPlayerPath:(id)arg1;
@property(retain, nonatomic) id invalidationToken; // @synthesize invalidationToken=_invalidationToken;
@property(readonly, nonatomic) id <MPArtworkDataSource> artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
@property(retain, nonatomic) MPCPlayerPath *resolvedPlayerPath; // @synthesize resolvedPlayerPath=_resolvedPlayerPath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long playingIdentifierCacheState; // @synthesize playingIdentifierCacheState=_playingIdentifierCacheState;
@property(readonly, nonatomic) long long supportedCommandsCacheState; // @synthesize supportedCommandsCacheState=_supportedCommandsCacheState;
@property(readonly, nonatomic) long long playbackStateCacheState; // @synthesize playbackStateCacheState=_playbackStateCacheState;
- (CDUnknownBlockType)_onQueue_updateOptimisticStateForCommand:(unsigned int)arg1 options:(id)arg2;
- (CDUnknownBlockType)_onQueue_setOptimisticPlaybackState:(unsigned int)arg1;
- (void)_onQueue_mergeContentItems:(id)arg1 queueRange:(struct _MSVSignedRange)arg2;
- (id)_onQueue_identifiersForRange:(struct _MSVSignedRange)arg1;
- (void)invalidateAllTokens;
- (void)_supportedCommandsDidChangedNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_playbackQueueContentItemsChangedNotification:(id)arg1;
- (void)_playbackQueueChangedNotification:(id)arg1;
- (id)contentItemArtworkForIdentifier:(id)arg1 size:(struct CGSize)arg2;
- (long long)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(struct CGSize)arg2;
- (id)contentItemForIdentifier:(id)arg1;
- (long long)contentItemCacheStateForIdentifier:(id)arg1;
@property(readonly, nonatomic) MPCFuture *playingIdentifier;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange)arg1;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange)arg1;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) MPCFuture *supportedCommands;
@property(readonly, nonatomic) MPCFuture *playbackState;
- (void)dealloc;
- (id)_init;

@end

