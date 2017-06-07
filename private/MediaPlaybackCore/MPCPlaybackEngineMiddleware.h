//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlayerResponseBuilder-Protocol.h>
#import <MediaPlaybackCore/MPMiddleware-Protocol.h>

@class MPCPlaybackEngine, NSArray, NSString;

@interface MPCPlaybackEngineMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware>
{
    NSArray *_invalidationObservers;
    MPCPlaybackEngine *_playbackEngine;
}

@property(retain, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (void).cxx_destruct;
- (id)operationsForPlayerRequest:(id)arg1;
- (id)operationsForRequest:(id)arg1;
- (id)playerVideoView:(id)arg1 chain:(id)arg2;
- (id)playerCommandOptionValue:(id)arg1 forKey:(id)arg2 command:(unsigned int)arg3 chain:(id)arg4;
- (_Bool)playerCommandEnabled:(_Bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;
- (_Bool)playerCommandSupported:(_Bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;
- (long long)playerGlobalItemCount:(long long)arg1 chain:(id)arg2;
- (long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(id)arg2;
- (id)playerPlayingItemIndexPath:(id)arg1 chain:(id)arg2;
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;
- (CDStruct_98c298d5)playerItemDuration:(CDStruct_98c298d5)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(id)arg3;
- (unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(id)arg2;
- (long long)playerLastChangeDirection:(long long)arg1 chain:(id)arg2;
- (long long)playerShuffleType:(long long)arg1 chain:(id)arg2;
- (long long)playerRepeatType:(long long)arg1 chain:(id)arg2;
- (long long)playerState:(long long)arg1 chain:(id)arg2;
- (id)controller:(id)arg1 chain:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

