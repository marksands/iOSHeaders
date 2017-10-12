//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_semaphore>, NSString, SXAVPlayer;

@interface SXAudioSession : NSObject
{
    _Bool _audioSessionActive;
    NSHashTable *_players;
    NSString *_desiredAudioSessionCategory;
    SXAVPlayer *_foregroundPlayer;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)sharedSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) __weak SXAVPlayer *foregroundPlayer; // @synthesize foregroundPlayer=_foregroundPlayer;
@property(retain, nonatomic) NSString *desiredAudioSessionCategory; // @synthesize desiredAudioSessionCategory=_desiredAudioSessionCategory;
@property(nonatomic, getter=isAudioSessionActive) _Bool audioSessionActive; // @synthesize audioSessionActive=_audioSessionActive;
@property(readonly, nonatomic) NSHashTable *players; // @synthesize players=_players;
- (void).cxx_destruct;
- (void)deactivateAudioSessionCategory;
- (void)activateAudioSessionCategory;
- (void)setupAudioSessionCategory;
- (_Bool)needsToSetupAudioSessionCategory;
- (_Bool)canDeactivateAudioSession;
- (_Bool)shouldActivateAudioSession;
- (void)deactivateForegroundAudioPlaybackForPlayer:(id)arg1;
- (void)activateForegroundAudioPlaybackForPlayer:(id)arg1;
- (void)removeInterestForPlayer:(id)arg1;
- (void)addInterestForPlayer:(id)arg1;
- (id)init;

@end
