//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPCPlaybackIntent, MPCPlayerPath, MPProtocolProxy<MPCPlaybackEngineEventObserving>, NSString, UIView, _MPCAVController, _MPCLeaseManager, _MPCMediaRemotePublisher, _MPCReportingController;

@interface MPCPlaybackEngine : NSObject
{
    _Bool _pictureInPictureSupported;
    _Bool _videoSupported;
    _Bool _stateRestorationSupported;
    _Bool _scheduledPlaybackStatePreservation;
    _Bool _systemMusicApplication;
    NSString *_playerID;
    id <MPCPlaybackEngineDelegate> _delegate;
    MPCPlaybackIntent *_fallbackPlaybackIntent;
    MPProtocolProxy<MPCPlaybackEngineEventObserving> *_eventObserver;
    _MPCAVController *_implementation;
    _MPCMediaRemotePublisher *_mediaRemotePublisher;
    _MPCReportingController *_reportingController;
    _MPCLeaseManager *_leaseManager;
    NSString *_audioSessionCategory;
}

+ (void)preheatPlayback;
@property(copy, nonatomic) NSString *audioSessionCategory; // @synthesize audioSessionCategory=_audioSessionCategory;
@property(nonatomic, getter=isSystemMusicApplication) _Bool systemMusicApplication; // @synthesize systemMusicApplication=_systemMusicApplication;
@property(readonly, nonatomic) _MPCLeaseManager *leaseManager; // @synthesize leaseManager=_leaseManager;
@property(readonly, nonatomic) _MPCReportingController *reportingController; // @synthesize reportingController=_reportingController;
@property(readonly, nonatomic) _MPCMediaRemotePublisher *mediaRemotePublisher; // @synthesize mediaRemotePublisher=_mediaRemotePublisher;
@property(readonly, nonatomic) _MPCAVController *implementation; // @synthesize implementation=_implementation;
@property(readonly, nonatomic) MPProtocolProxy<MPCPlaybackEngineEventObserving> *eventObserver; // @synthesize eventObserver=_eventObserver;
@property(nonatomic, getter=hasScheduledPlaybackStatePreservation) _Bool scheduledPlaybackStatePreservation; // @synthesize scheduledPlaybackStatePreservation=_scheduledPlaybackStatePreservation;
@property(nonatomic, getter=isStateRestorationSupported) _Bool stateRestorationSupported; // @synthesize stateRestorationSupported=_stateRestorationSupported;
@property(retain, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent; // @synthesize fallbackPlaybackIntent=_fallbackPlaybackIntent;
@property(nonatomic, getter=isVideoSupported) _Bool videoSupported; // @synthesize videoSupported=_videoSupported;
@property(nonatomic, getter=isPictureInPictureSupported) _Bool pictureInPictureSupported; // @synthesize pictureInPictureSupported=_pictureInPictureSupported;
@property(nonatomic) __weak id <MPCPlaybackEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
- (void).cxx_destruct;
- (void)_restorePlaybackStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_preservePlaybackStateImmediately;
- (void)_initializePlaybackStack;
- (void)schedulePlaybackStatePreservation;
@property(readonly, nonatomic) UIView *videoView;
@property(readonly, nonatomic) MPCPlayerPath *playerPath;
- (void)reportUserSeekFromTime:(double)arg1 toTime:(double)arg2;
- (void)removeEngineObserver:(id)arg1;
- (void)addEngineObserver:(id)arg1;
- (void)removeSupportedSpecializedQueueIdentifier:(id)arg1;
- (void)addSupportedSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;
- (void)restoreStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)becomeActive;
- (void)start;
- (id)initWithPlayerID:(id)arg1;

@end

