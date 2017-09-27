//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPRemoteCommandDelegate_Internal.h"

@class MPAdvanceRepeatModeCommand, MPAdvanceShuffleModeCommand, MPChangePlaybackPositionCommand, MPChangePlaybackProgressCommand, MPChangePlaybackRateCommand, MPChangeRepeatModeCommand, MPChangeShuffleModeCommand, MPFeedbackCommand, MPInsertIntoPlaybackQueueCommand, MPPurchaseCommand, MPRatingCommand, MPRemoteCommand, MPReorderQueueCommand, MPSetPlaybackQueueCommand, MPSkipIntervalCommand, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate_Internal>
{
    NSMutableArray *_activeCommands;
    NSObject<OS_dispatch_queue> *_serialQueue;
    void *_mediaRemoteCommandHandler;
    _Bool _scheduledSupportedCommandsChangedNotification;
    _Bool _canBeNowPlayingApplication;
    _Bool _handlingPlaybackQueueCommands;
    void *_playerPath;
    MPRemoteCommand *_pauseCommand;
    MPRemoteCommand *_playCommand;
    MPRemoteCommand *_stopCommand;
    MPRemoteCommand *_togglePlayPauseCommand;
    MPRemoteCommand *_enableLanguageOptionCommand;
    MPRemoteCommand *_disableLanguageOptionCommand;
    MPRemoteCommand *_nextTrackCommand;
    MPRemoteCommand *_previousTrackCommand;
    MPSkipIntervalCommand *_skipForwardCommand;
    MPSkipIntervalCommand *_skipBackwardCommand;
    MPRemoteCommand *_seekForwardCommand;
    MPRemoteCommand *_seekBackwardCommand;
    MPRatingCommand *_ratingCommand;
    MPChangePlaybackRateCommand *_changePlaybackRateCommand;
    MPFeedbackCommand *_likeCommand;
    MPFeedbackCommand *_dislikeCommand;
    MPFeedbackCommand *_bookmarkCommand;
    MPChangePlaybackPositionCommand *_changePlaybackPositionCommand;
    MPChangeRepeatModeCommand *_changeRepeatModeCommand;
    MPChangeShuffleModeCommand *_changeShuffleModeCommand;
    MPRemoteCommand *_specialSeekForwardCommand;
    MPRemoteCommand *_specialSeekBackwardCommand;
    MPPurchaseCommand *_buyTrackCommand;
    MPPurchaseCommand *_buyAlbumCommand;
    MPPurchaseCommand *_preOrderAlbumCommand;
    MPPurchaseCommand *_cancelDownloadCommand;
    MPAdvanceShuffleModeCommand *_advanceShuffleModeCommand;
    MPAdvanceRepeatModeCommand *_advanceRepeatModeCommand;
    MPRemoteCommand *_createRadioStationCommand;
    MPSetPlaybackQueueCommand *_setPlaybackQueueCommand;
    MPInsertIntoPlaybackQueueCommand *_insertIntoPlaybackQueueCommand;
    MPRemoteCommand *_removeFromPlaybackQueueCommand;
    MPReorderQueueCommand *_reorderQueueCommand;
    MPRemoteCommand *_playItemInQueueCommand;
    MPFeedbackCommand *_addNowPlayingItemToLibraryCommand;
    MPFeedbackCommand *_addItemToLibraryCommand;
    MPChangePlaybackProgressCommand *_changePlaybackProgressCommand;
    NSString *_playerID;
}

+ (id)commandCenterForPlayerID:(id)arg1;
+ (id)sharedCommandCenter;
@property(readonly, copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
- (void).cxx_destruct;
- (long long)_handlePlayItemCommand:(id)arg1;
- (long long)_handleRemoveCommand:(id)arg1;
- (long long)_handleReorderCommand:(id)arg1;
- (void)_playbackQueueDelegateDidChangeNotification:(id)arg1;
- (void)_commandTargetsDidChangeNotification:(id)arg1;
- (void)_scheduleSupportedCommandsChanged;
- (void)_teardownNotifications;
- (void)_setupNotifications;
- (id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned int)arg2;
@property(readonly, nonatomic, getter=_activeCommands) NSArray *activeCommands;
- (void)_teardownMediaRemoteCommandHandler;
- (void)_setupMediaRemoteCommandHandler;
@property(readonly, nonatomic) MPChangePlaybackProgressCommand *changePlaybackProgressCommand; // @synthesize changePlaybackProgressCommand=_changePlaybackProgressCommand;
@property(readonly, nonatomic) MPFeedbackCommand *addItemToLibraryCommand; // @synthesize addItemToLibraryCommand=_addItemToLibraryCommand;
@property(readonly, nonatomic) MPFeedbackCommand *addNowPlayingItemToLibraryCommand; // @synthesize addNowPlayingItemToLibraryCommand=_addNowPlayingItemToLibraryCommand;
@property(readonly, nonatomic) MPRemoteCommand *playItemInQueueCommand; // @synthesize playItemInQueueCommand=_playItemInQueueCommand;
@property(readonly, nonatomic) MPReorderQueueCommand *reorderQueueCommand; // @synthesize reorderQueueCommand=_reorderQueueCommand;
@property(readonly, nonatomic) MPRemoteCommand *removeFromPlaybackQueueCommand; // @synthesize removeFromPlaybackQueueCommand=_removeFromPlaybackQueueCommand;
@property(readonly, nonatomic) MPInsertIntoPlaybackQueueCommand *insertIntoPlaybackQueueCommand; // @synthesize insertIntoPlaybackQueueCommand=_insertIntoPlaybackQueueCommand;
@property(readonly, nonatomic) MPSetPlaybackQueueCommand *setPlaybackQueueCommand; // @synthesize setPlaybackQueueCommand=_setPlaybackQueueCommand;
@property(readonly, nonatomic) MPRemoteCommand *createRadioStationCommand; // @synthesize createRadioStationCommand=_createRadioStationCommand;
@property(readonly, nonatomic) MPAdvanceRepeatModeCommand *advanceRepeatModeCommand; // @synthesize advanceRepeatModeCommand=_advanceRepeatModeCommand;
@property(readonly, nonatomic) MPAdvanceShuffleModeCommand *advanceShuffleModeCommand; // @synthesize advanceShuffleModeCommand=_advanceShuffleModeCommand;
@property(readonly, nonatomic) MPPurchaseCommand *cancelDownloadCommand; // @synthesize cancelDownloadCommand=_cancelDownloadCommand;
@property(readonly, nonatomic) MPPurchaseCommand *preOrderAlbumCommand; // @synthesize preOrderAlbumCommand=_preOrderAlbumCommand;
@property(readonly, nonatomic) MPPurchaseCommand *buyAlbumCommand; // @synthesize buyAlbumCommand=_buyAlbumCommand;
@property(readonly, nonatomic) MPPurchaseCommand *buyTrackCommand; // @synthesize buyTrackCommand=_buyTrackCommand;
@property(readonly, nonatomic) MPRemoteCommand *specialSeekBackwardCommand; // @synthesize specialSeekBackwardCommand=_specialSeekBackwardCommand;
@property(readonly, nonatomic) MPRemoteCommand *specialSeekForwardCommand; // @synthesize specialSeekForwardCommand=_specialSeekForwardCommand;
@property(readonly, nonatomic) MPChangeShuffleModeCommand *changeShuffleModeCommand; // @synthesize changeShuffleModeCommand=_changeShuffleModeCommand;
@property(readonly, nonatomic) MPChangeRepeatModeCommand *changeRepeatModeCommand; // @synthesize changeRepeatModeCommand=_changeRepeatModeCommand;
@property(readonly, nonatomic) MPChangePlaybackPositionCommand *changePlaybackPositionCommand; // @synthesize changePlaybackPositionCommand=_changePlaybackPositionCommand;
@property(readonly, nonatomic) MPFeedbackCommand *bookmarkCommand; // @synthesize bookmarkCommand=_bookmarkCommand;
@property(readonly, nonatomic) MPFeedbackCommand *dislikeCommand; // @synthesize dislikeCommand=_dislikeCommand;
@property(readonly, nonatomic) MPFeedbackCommand *likeCommand; // @synthesize likeCommand=_likeCommand;
@property(readonly, nonatomic) MPChangePlaybackRateCommand *changePlaybackRateCommand; // @synthesize changePlaybackRateCommand=_changePlaybackRateCommand;
@property(readonly, nonatomic) MPRatingCommand *ratingCommand; // @synthesize ratingCommand=_ratingCommand;
@property(readonly, nonatomic) MPRemoteCommand *seekBackwardCommand; // @synthesize seekBackwardCommand=_seekBackwardCommand;
@property(readonly, nonatomic) MPRemoteCommand *seekForwardCommand; // @synthesize seekForwardCommand=_seekForwardCommand;
@property(readonly, nonatomic) MPSkipIntervalCommand *skipBackwardCommand; // @synthesize skipBackwardCommand=_skipBackwardCommand;
@property(readonly, nonatomic) MPSkipIntervalCommand *skipForwardCommand; // @synthesize skipForwardCommand=_skipForwardCommand;
@property(readonly, nonatomic) MPRemoteCommand *previousTrackCommand; // @synthesize previousTrackCommand=_previousTrackCommand;
@property(readonly, nonatomic) MPRemoteCommand *nextTrackCommand; // @synthesize nextTrackCommand=_nextTrackCommand;
@property(readonly, nonatomic) MPRemoteCommand *disableLanguageOptionCommand; // @synthesize disableLanguageOptionCommand=_disableLanguageOptionCommand;
@property(readonly, nonatomic) MPRemoteCommand *enableLanguageOptionCommand; // @synthesize enableLanguageOptionCommand=_enableLanguageOptionCommand;
@property(readonly, nonatomic) MPRemoteCommand *togglePlayPauseCommand; // @synthesize togglePlayPauseCommand=_togglePlayPauseCommand;
@property(readonly, nonatomic) MPRemoteCommand *stopCommand; // @synthesize stopCommand=_stopCommand;
@property(readonly, nonatomic) MPRemoteCommand *playCommand; // @synthesize playCommand=_playCommand;
@property(readonly, nonatomic) MPRemoteCommand *pauseCommand; // @synthesize pauseCommand=_pauseCommand;
- (void)dispatchCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopMediaRemoteSync;
- (void)startMediaRemoteSync;
- (void)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary *)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary *)arg2;
- (const struct __CFArray *)_copySupportedCommands;
- (void)remoteCommandDidMutatePropagatableProperty:(id)arg1;
- (void)dealloc;
- (id)initWithPlayerID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

