//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

#import <MediaPlaybackCore/MPCPlayerInsertItemsCommand-Protocol.h>

@class NSSet, NSString;

@interface _MPCPlayerInsertItemsCommand : _MPCPlayerCommand <MPCPlayerInsertItemsCommand>
{
    NSSet *_supportedInsertionPositions;
    NSSet *_supportedQueueTypes;
    NSSet *_supportedCustomDataQueueIdentifiers;
}

@property(retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers; // @synthesize supportedCustomDataQueueIdentifiers=_supportedCustomDataQueueIdentifiers;
@property(retain, nonatomic) NSSet *supportedQueueTypes; // @synthesize supportedQueueTypes=_supportedQueueTypes;
@property(retain, nonatomic) NSSet *supportedInsertionPositions; // @synthesize supportedInsertionPositions=_supportedInsertionPositions;
- (void).cxx_destruct;
- (id)insertAtEndOfTracklistWithPlaybackIntent:(id)arg1;
- (id)insertPlaybackIntent:(id)arg1 afterItem:(id)arg2;
- (id)insertAfterPlayingItemWithPlaybackIntent:(id)arg1;
- (_Bool)_isSupportedPlaybackIntent:(id)arg1 forRemotePlayer:(_Bool)arg2 atInsertionPosition:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

