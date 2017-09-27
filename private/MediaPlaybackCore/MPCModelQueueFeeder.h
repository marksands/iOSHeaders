//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPQueueFeeder.h"

#import "MPCQueueBehaviorManaging.h"
#import "MPRTCReportingItemSessionContaining.h"
#import "MPShuffleControllerDataSource.h"

@class MPCPlaybackRequestEnvironment, MPIdentifierSet, MPModelRequest, MPModelResponse, MPPlaceholderAVItem, MPPlaybackPlaceholderMediaItem, MPShuffleController, NSDictionary, NSHashTable, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface MPCModelQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, MPShuffleControllerDataSource, MPCQueueBehaviorManaging>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_activeModelGenericAVItems;
    NSDictionary *_assetStoreFronts;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    long long _currentRevisionID;
    NSDictionary *_endTimeModifications;
    CDUnknownBlockType _finalTracklistLoadingCompletionHandler;
    _Bool _hasFoundStartItem;
    _Bool _hasLoadedFinalResponse;
    NSOperationQueue *_operationQueue;
    MPPlaceholderAVItem *_placeholderAVItem;
    MPPlaybackPlaceholderMediaItem *_placeholderMediaItem;
    MPModelRequest *_request;
    MPModelResponse *_response;
    NSString *_rtcReportingPlayQueueSourceIdentifier;
    MPShuffleController *_shuffleController;
    _Bool _isSiriInitiated;
    MPIdentifierSet *_startItemIdentifiers;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    struct map<unsigned long, MPIdentifierSet *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, MPIdentifierSet *>>> _retrievedIndexToIdentifiers;
    NSDictionary *_startTimeModifications;
}

+ (id)requiredPropertiesForStaticMediaClips;
+ (_Bool)supportsStateRestoration;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_unregisterNotificationsForResponse:(id)arg1;
- (unsigned long long)_songShuffledIndexForIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfItemWithIdentifier:(id)arg1 shouldIgnoreShuffle:(_Bool)arg2;
- (void)_reloadModelRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reloadModelRequestForInvalidation;
- (void)_reloadForInitialRequest;
- (void)_registerNotificationsForResponse:(id)arg1;
- (id)_newModelRequest;
- (id)_modelObjectAtIndex:(unsigned long long)arg1;
- (id)_identifierSetAtIndex:(unsigned long long)arg1;
- (void)_handleFinalResponseWithPreferredStartIndex:(unsigned long long)arg1;
- (_Bool)_hasPlaceholderItemAtIndex:(unsigned long long)arg1;
- (id)_genericObjectForModelObject:(id)arg1;
- (id)_equivalencySourceAdamIDForIdentifierSet:(id)arg1;
- (void)_endBackgroundTaskAssertion;
- (long long)_currentPreferredStartIndexWithFinalResponse:(_Bool)arg1;
- (void)_beginBackgroundTaskAssertion;
- (void)_responseDidInvalidateNotification:(id)arg1;
- (void)_playbackUserDefaultsMusicShuffleTypeDidChangeNotification:(id)arg1;
- (void)_playbackUserDefaultsMusicRepeatTypeDidChangeNotification:(id)arg1;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (_Bool)isPlaceholderItemForQueueIdentifier:(id)arg1;
- (_Bool)supportsAddToQueue;
- (unsigned long long)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned long long)arg3;
- (id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)itemCountForShuffleController:(id)arg1;
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (id)modelPlayEvent;
- (void)shuffleItemsWithAnchor:(unsigned long long *)arg1;
- (_Bool)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 requireFinalTracklist:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)realShuffleType;
- (long long)realRepeatType;
- (id)query;
- (_Bool)playerPreparesItemsForPlaybackAsynchronously;
- (id)playbackInfoForIdentifier:(id)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)mediaItemForIdentifier:(id)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (long long)itemTypeForIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (Class)itemClass;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (_Bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (void)applyVolumeNormalizationForItem:(id)arg1;
- (void)restoreState:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool allowsUserVisibleUpcomingItems;
@property(readonly, nonatomic) _Bool canSeek;
@property(readonly, nonatomic) _Bool canSkipToPreviousItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long playbackMode;
@property(readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool userCanChangeShuffleAndRepeatType;

@end

