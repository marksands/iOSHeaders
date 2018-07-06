//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVObservationController, AVPlayerController, NSObject<OS_dispatch_queue>;

@interface AVNowPlayingInfoController : NSObject
{
    id _playerControllerCurrentTimeJumpedObserver;
    _Bool _nowPlayingInfoNeedsUpdate;
    _Bool _enabled;
    void *_commandHandlerIdentifier;
    AVObservationController *_keyValueObservationController;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    _Bool _requiresLinearPlayback;
    AVPlayerController *_playerController;
    AVPlayerController *_playerControllerToActivateAfterDelay;
}

+ (void)sharedNowPlayingInfoControllerWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak AVPlayerController *playerControllerToActivateAfterDelay; // @synthesize playerControllerToActivateAfterDelay=_playerControllerToActivateAfterDelay;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) _Bool requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
- (void).cxx_destruct;
- (unsigned int)_handleRemoteCommand:(unsigned int)arg1 options:(id)arg2;
- (void)_updateRegisteredRemoteCommandEnabledStatesWithCommandsAndStates:(id)arg1;
- (id)_makeCommandsAndStatesDictionaryForPlayerController:(id)arg1;
- (id)_makeNowPlayingInfo;
- (void)_updateNowPlayingInfo:(id)arg1 commandsAndStates:(id)arg2 playbackState:(unsigned int)arg3;
- (void)_updateNowPlayingInfoIfNeeded;
- (void)_setNowPlayingInfoNeedsUpdate;
- (void)stopNowPlayingUpdatesForPlayerController:(id)arg1;
- (void)startNowPlayingUpdatesForPlayerController:(id)arg1 afterDelay:(double)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;
- (id)init;

@end

