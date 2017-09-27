//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface LPMediaPlaybackManager : NSObject
{
    NSHashTable *_mediaPlayers;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)volumeChanged:(id)arg1;
- (void)_updateAudioSessionCategory;
- (_Bool)_sharedSessionHasPlayingAudio;
- (id)audioSession;
- (_Bool)releaseDecodingResourcesForInactivePlayers;
- (void)_deactivateAllPlayingMediaPlayersExcept:(id)arg1;
- (void)mediaPlayer:(id)arg1 didChangeMutedState:(_Bool)arg2;
- (void)mediaPlayer:(id)arg1 didChangePlayingState:(_Bool)arg2;
- (void)removeMediaPlayer:(id)arg1;
- (void)addMediaPlayer:(id)arg1;
- (id)init;

@end

