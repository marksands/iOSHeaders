//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPCPlayerCommand.h"

@class MPCPlaybackIntent, MPCPlayerCommandRequest, MPCPlayerResponseItem;

@protocol MPCPlayerInsertItemsCommand <MPCPlayerCommand>
- (MPCPlayerCommandRequest *)insertAtEndOfTracklistWithPlaybackIntent:(MPCPlaybackIntent *)arg1;
- (MPCPlayerCommandRequest *)insertPlaybackIntent:(MPCPlaybackIntent *)arg1 afterItem:(MPCPlayerResponseItem *)arg2;
- (MPCPlayerCommandRequest *)insertAfterPlayingItemWithPlaybackIntent:(MPCPlaybackIntent *)arg1;
@end

