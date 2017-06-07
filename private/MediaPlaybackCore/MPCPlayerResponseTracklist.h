//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCPlayerResponse, MPSectionedCollection, NSIndexPath;

@interface MPCPlayerResponseTracklist : NSObject
{
    long long _lastChangeDirection;
    long long _repeatType;
    long long _shuffleType;
    MPCPlayerResponse *_response;
    MPSectionedCollection *_items;
    NSIndexPath *_playingItemIndexPath;
    long long _playingItemGlobalIndex;
    long long _globalItemCount;
}

@property(readonly, nonatomic) long long globalItemCount; // @synthesize globalItemCount=_globalItemCount;
@property(readonly, nonatomic) long long playingItemGlobalIndex; // @synthesize playingItemGlobalIndex=_playingItemGlobalIndex;
@property(readonly, copy, nonatomic) NSIndexPath *playingItemIndexPath; // @synthesize playingItemIndexPath=_playingItemIndexPath;
@property(readonly, copy, nonatomic) MPSectionedCollection *items; // @synthesize items=_items;
@property(readonly, nonatomic) __weak MPCPlayerResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(readonly, nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(readonly, nonatomic) long long lastChangeDirection; // @synthesize lastChangeDirection=_lastChangeDirection;
- (void).cxx_destruct;
- (id)changeItemCommand;
- (id)shuffleCommand;
- (id)repeatCommand;
- (id)reorderCommand;
- (id)insertCommand;
- (id)resetCommand;
- (id)initWithResponse:(id)arg1;

@end

