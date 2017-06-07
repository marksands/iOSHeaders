//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOrderedSet;
@protocol OS_dispatch_queue;

@interface MRNotificationClient : NSObject
{
    unsigned long long _registeredNowPlayingObservers;
    NSObject<OS_dispatch_queue> *_nowPlayingNotificationsQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOrderedSet *_nowPlayingNotifications;
    NSOrderedSet *_routesChangedNotifications;
    NSOrderedSet *_externalScreenNotifications;
    NSOrderedSet *_originNotifications;
    NSOrderedSet *_supportedCommandsNotifications;
    NSOrderedSet *_voiceInputNotifications;
    NSOrderedSet *_errorNotficiations;
    CDUnknownBlockType _notificationCallback;
    _Bool _receivesExternalScreenTypeChangedNotifications;
    _Bool _receivesSupportedCommandsNotifications;
    _Bool _receivesRoutesChangedNotifications;
    _Bool _receivesOriginChangedNotifications;
    _Bool _receivesPlaybackErrorNotifications;
    _Bool _receivesVoiceInputRecordingStateNotifications;
}

@property(nonatomic) _Bool receivesVoiceInputRecordingStateNotifications; // @synthesize receivesVoiceInputRecordingStateNotifications=_receivesVoiceInputRecordingStateNotifications;
@property(nonatomic) _Bool receivesPlaybackErrorNotifications; // @synthesize receivesPlaybackErrorNotifications=_receivesPlaybackErrorNotifications;
@property(nonatomic) _Bool receivesOriginChangedNotifications; // @synthesize receivesOriginChangedNotifications=_receivesOriginChangedNotifications;
@property(nonatomic) _Bool receivesRoutesChangedNotifications; // @synthesize receivesRoutesChangedNotifications=_receivesRoutesChangedNotifications;
@property(nonatomic) _Bool receivesSupportedCommandsNotifications; // @synthesize receivesSupportedCommandsNotifications=_receivesSupportedCommandsNotifications;
@property(nonatomic) _Bool receivesExternalScreenTypeChangedNotifications; // @synthesize receivesExternalScreenTypeChangedNotifications=_receivesExternalScreenTypeChangedNotifications;
- (_Bool)postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3;
@property(readonly, nonatomic, getter=isRegisteredForNowPlayingNotifications) _Bool registeredForNowPlayingNotifications;
- (void)unregisterForNowPlayingNotifications;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType notificationCallback;
- (void)dealloc;
- (id)initWithNotificationCallback:(CDUnknownBlockType)arg1;

@end

