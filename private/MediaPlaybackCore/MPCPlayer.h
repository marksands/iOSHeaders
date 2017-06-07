//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCMediaRemoteMuxerDelegate-Protocol.h>

@class AVPlayerLayer, MPCMediaRemoteMuxer, MPCPlayerItem, MPCPlayerItemContainer, MPRemoteCommandCenter, NSArray, NSPointerArray, NSString;

@interface MPCPlayer : NSObject <MPCMediaRemoteMuxerDelegate>
{
    NSPointerArray *_nowPlayingInfoHandlers;
    NSPointerArray *_playbackErrorObservers;
    NSPointerArray *_playbackIntentObservers;
    _Bool _shouldRestorePlaybackState;
    _Bool _restoringPlaybackState;
    _Bool _syncingNowPlayingInfo;
    long long _state;
    MPCPlayerItem *_currentItem;
    MPRemoteCommandCenter *_commandCenter;
    AVPlayerLayer *_videoLayer;
    NSString *_activeRouteName;
    MPCPlayerItemContainer *_currentContainer;
    MPCMediaRemoteMuxer *_mediaRemoteMuxer;
    NSString *_parentAppBundleID;
}

+ (Class)queueRequestOperationClass;
@property(copy, nonatomic) NSString *parentAppBundleID; // @synthesize parentAppBundleID=_parentAppBundleID;
@property(nonatomic) __weak MPCMediaRemoteMuxer *mediaRemoteMuxer; // @synthesize mediaRemoteMuxer=_mediaRemoteMuxer;
@property(readonly, nonatomic, getter=isSyncingNowPlayingInfo) _Bool syncingNowPlayingInfo; // @synthesize syncingNowPlayingInfo=_syncingNowPlayingInfo;
@property(readonly, nonatomic, getter=isRestoringPlaybackState) _Bool restoringPlaybackState; // @synthesize restoringPlaybackState=_restoringPlaybackState;
@property(nonatomic) _Bool shouldRestorePlaybackState; // @synthesize shouldRestorePlaybackState=_shouldRestorePlaybackState;
@property(nonatomic) MPCPlayerItemContainer *currentContainer; // @synthesize currentContainer=_currentContainer;
@property(readonly, copy, nonatomic) NSString *activeRouteName; // @synthesize activeRouteName=_activeRouteName;
@property(readonly, nonatomic) AVPlayerLayer *videoLayer; // @synthesize videoLayer=_videoLayer;
@property(retain, nonatomic) MPRemoteCommandCenter *commandCenter; // @synthesize commandCenter=_commandCenter;
@property(nonatomic) MPCPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)stopSyncingNowPlayingInfo;
- (void)startSyncingNowPlayingInfo;
- (void)updateSupportedCommandsForCommandCenter:(id)arg1 muxer:(id)arg2 action:(SEL)arg3;
- (void)restorePlaybackStateCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *playbackIntentObservers;
@property(readonly, copy, nonatomic) NSArray *playbackErrorObservers;
@property(readonly, copy, nonatomic) NSArray *nowPlayingInfoHandlers;
- (void)unregisterPlaybackIntentObserver:(id)arg1;
- (void)unregisterPlaybackErrorObserver:(id)arg1;
- (void)unregisterNowPlayingInfoHandler:(id)arg1;
- (void)registerPlaybackIntentObserver:(id)arg1;
- (void)registerPlaybackErrorObserver:(id)arg1;
- (void)registerNowPlayingInfoHandler:(id)arg1;
- (void)recordLyricsViewEvent:(id)arg1;
- (void)clearPlaybackQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)addPlaybackIntent:(id)arg1 withOptions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

