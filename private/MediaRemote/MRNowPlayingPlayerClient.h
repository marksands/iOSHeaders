//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MRNowPlayingClientState.h"
#import "MRTransactionSourceDelegate.h"

@class MRNowPlayingArtwork, MRNowPlayingPlayerClientCallbacks, MRPlaybackQueueSubscriptionController, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, _MRContentItemProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueProtobuf;

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState, MRTransactionSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _MRPlaybackQueueProtobuf *_playbackQueue;
    NSArray *_supportedCommands;
    NSDictionary *_nowPlayingInfo;
    MRNowPlayingArtwork *_nowPlayingArtwork;
    unsigned int _playbackState;
    double _playbackStateSetToPlayTimestamp;
    unsigned long long _capabilities;
    _Bool _coalescingInvalidations;
    _Bool _coalescingRequests;
    _Bool _triggerInvalidation;
    double _invalidatationTimestamp;
    NSMutableDictionary *_coelscingTransactionPackets;
    NSMutableArray *_transactionSources;
    NSMutableDictionary *_cachedContentItemUpdates;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    MRPlaybackQueueSubscriptionController *_subscriptionController;
    MRNowPlayingPlayerClientCallbacks *_clientCallbacks;
}

@property(readonly, nonatomic) MRNowPlayingPlayerClientCallbacks *clientCallbacks; // @synthesize clientCallbacks=_clientCallbacks;
@property(readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)updatePlaybackQueueWithCachedUpdates:(id)arg1 forPendingRequest:(id)arg2;
- (void)clearCachedContentItemArtworkForItems:(id)arg1;
- (void)cacheContentItemChangesForPendingRequests:(id)arg1;
- (void)startCachingContentItemUpdatesForItem:(id)arg1 forPendingRequest:(id)arg2;
- (void)addPendingRequest:(id)arg1;
- (void)transactionDidEnd:(id)arg1;
- (void)_onQueue_sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2;
- (void)sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2;
- (void)endSendingTransactions;
- (void)beginSendingTransactions;
- (void)restoreNowPlayingClientState;
- (void)preProcessCommand:(unsigned int)arg1 options:(id)arg2;
- (void)preProcessChangePlaybackRateCommandWithOptions:(id)arg1;
- (void)updateCacheWithContentItems:(id)arg1;
- (void)updateCacheWithItem:(id)arg1;
- (id)_onQueue_nowPlayingContentItem;
@property(readonly, nonatomic) _MRContentItemProtobuf *nowPlayingContentItem;
@property(retain, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
- (void)updateCacheWithPlaybackQueue:(id)arg1;
@property(nonatomic) unsigned long long capabilities;
- (_Bool)unsetCoalescingRequests;
- (_Bool)testAndSetCoalescingRequests;
- (void)unsetCoalescingInvalidations;
- (_Bool)testAndSetCoalescingInvalidations;
- (void)updatePlayer:(id)arg1;
@property(nonatomic) unsigned int playbackState;
@property(nonatomic) double invalidatationTimestamp;
@property(copy, nonatomic) NSArray *supportedCommands;
@property(retain, nonatomic) MRNowPlayingArtwork *nowPlayingArtwork;
@property(copy, nonatomic) NSDictionary *nowPlayingInfo;
- (id)initWithPlayerPath:(id)arg1;

@end

