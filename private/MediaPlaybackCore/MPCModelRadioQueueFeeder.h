//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPQueueFeeder.h"

#import "MPRTCReportingItemSessionContaining.h"

@class ICStoreRequestContext, ICUserIdentity, ICUserIdentityStore, MPAVItem, MPCModelRadioPersonalizationResponse, MPCModelRadioPlaybackQueue, MPCPlaybackRequestEnvironment, NSDictionary, NSOperationQueue, NSString, SSVPlayActivityController;

@interface MPCModelRadioQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining>
{
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    MPAVItem *_currentItem;
    _Bool _hasLoadedAdditionalItemsForCurrentItem;
    id <MPAVItemQueueIdentifier> _lastCleanPlayedIdentifier;
    id <MPAVItemQueueIdentifier> _lastPlayedIdentifier;
    MPCModelRadioPersonalizationResponse *_lastResponse;
    long long _loadingOperationDepth;
    NSOperationQueue *_loadingOperationQueue;
    _Bool _mayHaveRestrictedContent;
    ICUserIdentityStore *_observedIdentityStore;
    SSVPlayActivityController *_playActivityController;
    MPCModelRadioPlaybackQueue *_playbackQueue;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    ICUserIdentity *_proactiveCacheIdentity;
    long long _queueGeneration;
    NSString *_siriAssetInfo;
    ICStoreRequestContext *_storeRequestContext;
}

- (void).cxx_destruct;
- (void)_updateProactiveCaching;
- (id)_startPlaybackRequestWithPlaybackContext:(id)arg1;
- (void)_savePlaybackHistoryWithCurrentIndex:(long long)arg1;
- (void)_repersonalizeCurrentTracks;
- (void)_responseDidInvalidate;
- (void)_removeRestrictedTracks;
- (void)_observePersonalizationResponse:(id)arg1;
- (void)_loadTracksWithRequest:(id)arg1;
- (void)_loadAdditionalItemsIfNeeded;
- (long long)_indexOfAVItem:(id)arg1;
- (void)_handlePersonalizationResponse:(id)arg1 personalizationError:(id)arg2 fromRequest:(id)arg3;
- (void)_handleGetTracksResponse:(id)arg1 getTracksError:(id)arg2 fromRequest:(id)arg3;
- (void)_failAfterRequest:(id)arg1 withError:(id)arg2;
- (void)_endObservingIdentityStoreForSignOut;
- (void)_endBackgroundTaskAssertion;
- (void)_detectSignOutForIdentityStore:(id)arg1;
- (id)_defaultGetTracksRequestWithContext:(id)arg1 radioStation:(id)arg2;
- (void)_beginObservingIdentityStoreForSignOut;
- (void)_beginBackgroundTaskAssertion;
- (void)_responseDidInvalidateNotification:(id)arg1;
- (void)_detectSignOutForIdentityStoreChangeNotification:(id)arg1;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (_Bool)isPlaceholderItemForQueueIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (_Bool)isRadioQueueFeeder;
- (_Bool)userCanChangeShuffleAndRepeatType;
- (id)modelPlayEvent;
- (_Bool)canSkipToPreviousItemForItem:(id)arg1;
- (_Bool)canSkipItem:(id)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 requireFinalTracklist:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)realShuffleType;
- (long long)realRepeatType;
- (_Bool)preventsHardQueueModificationsForItem:(id)arg1;
- (_Bool)playerPreparesItemsForPlaybackAsynchronously;
- (void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2;
- (unsigned long long)itemCount;
- (Class)itemClass;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (_Bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (_Bool)canReorder;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (_Bool)allowsUserVisibleUpcomingItems;
- (_Bool)allowsQueueResetWhenReachingEnd;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

