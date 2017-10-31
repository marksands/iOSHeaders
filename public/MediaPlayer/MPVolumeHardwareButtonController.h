//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPVolumeHardwareButtonController : NSObject
{
    double _pendingVolumeChange;
    _Bool _debounceVolumeRepeat;
    id <MPVolumeControllerDataSource> _activeDataSource;
}

+ (id)sharedController;
@property(retain, nonatomic) id <MPVolumeControllerDataSource> activeDataSource; // @synthesize activeDataSource=_activeDataSource;
- (void).cxx_destruct;
- (void)_unregisterButtonNotifications;
- (void)_registerButtonNotifications;
- (void)_applicationWillResignActiveNotification;
- (void)_applicationDidBecomeActiveNotification;
- (void)_volumeDownButtonTouchUp:(id)arg1;
- (void)_volumeDownButtonTouchDown:(id)arg1;
- (void)_volumeUpButtonTouchUp:(id)arg1;
- (void)_volumeUpButtonTouchDown:(id)arg1;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(_Bool)arg2;
- (void)cancelVolumeEvent;
- (void)decreaseVolume;
- (void)increaseVolume;
- (double)_calculateButtonRepeatDelay;
- (void)_commitVolumeChange;
- (void)_changeVolumeBy:(double)arg1;
- (id)_init;

@end
