//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

#import <MediaPlaybackCore/MPCPlayerReorderItemsCommand-Protocol.h>

@class NSString;

@interface _MPCPlayerReorderItemsCommand : _MPCPlayerCommand <MPCPlayerReorderItemsCommand>
{
}

- (id)moveItem:(id)arg1 afterItem:(id)arg2;
- (_Bool)canMoveItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

