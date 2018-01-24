//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MRNowPlayingClientState.h"
#import "MRTransactionSourceDelegate.h"

@class MRNowPlayingArtwork, MRNowPlayingPlayerClientCallbacks, MRPlaybackQueuePlayerClient, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState, MRTransactionSourceDelegate>
{
    void *_playerPath;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_supportedCommands;
    NSDictionary *_nowPlayingInfo;
    MRNowPlayingArtwork *_nowPlayingArtwork;
    unsigned int _playbackState;
    double _playbackStateSetToPlayTimestamp;
    void *_playbackQueue;
    void *_capabilities;
    _Bool _coalescingInvalidations;
    _Bool _coalescingRequests;
    _Bool _triggerInvalidation;
    double _invalidatationTimestamp;
    NSMutableDictionary *_coelscingTransactionPackets;
    NSMutableArray *_transactionSources;
    NSMutableDictionary *_cachedContentItemUpdates;
    MRPlaybackQueuePlayerClient *_playbackQueueClient;
    MRNowPlayingPlayerClientCallbacks *_clientCallbacks;
}

@property(readonly, nonatomic) MRNowPlayingPlayerClientCallbacks *clientCallbacks; // @synthesize clientCallbacks=_clientCallbacks;
@property(readonly, nonatomic) MRPlaybackQueuePlayerClient *playbackQueueClient; // @synthesize playbackQueueClient=_playbackQueueClient;
@property(nonatomic) void *playerPath; // @synthesize playerPath=_playerPath;
- (id)debugDescription;
- (id)description;
- (void)updatePlaybackQueueWithCachedUpdates:(void *)arg1 forPendingRequest:(void *)arg2;
- (void)clearCachedContentItemArtworkForItems:(id)arg1;
- (void)cacheContentItemUpdates:(id)arg1;
- (void)startCachingContentItemUpdatesForItem:(void *)arg1 forPendingRequest:(void *)arg2;
- (void)addPendingRequest:(void *)arg1;
- (void)transactionDidEnd:(id)arg1;
- (void)_onQueue_sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2;
- (void)sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2;
- (void)endSendingTransactions;
- (void)beginSendingTransactions;
- (void)restoreNowPlayingClientState;
- (void)preProcessCommand:(unsigned int)arg1 options:(struct __CFDictionary *)arg2;
- (void)preProcessChangePlaybackRateCommandWithOptions:(struct __CFDictionary *)arg1;
- (void)updateCacheWithContentItems:(id)arg1;
- (void)updateCacheWithItem:(void *)arg1;
- (void *)_onQueue_nowPlayingContentItem;
@property(readonly, nonatomic) void *nowPlayingContentItem;
@property(nonatomic) void *playbackQueue;
- (void)updateCacheWithPlaybackQueue:(void *)arg1;
@property(nonatomic) void *capabilities;
- (_Bool)unsetCoalescingRequests;
- (_Bool)testAndSetCoalescingRequests;
- (void)unsetCoalescingInvalidations;
- (_Bool)testAndSetCoalescingInvalidations;
- (void)updatePlayer:(void *)arg1;
@property(nonatomic) unsigned int playbackState;
@property(nonatomic) double invalidatationTimestamp;
@property(copy, nonatomic) NSArray *supportedCommands;
@property(retain, nonatomic) MRNowPlayingArtwork *nowPlayingArtwork;
@property(copy, nonatomic) NSDictionary *nowPlayingInfo;
- (void)dealloc;
- (id)initWithPlayerPath:(void *)arg1;

@end

