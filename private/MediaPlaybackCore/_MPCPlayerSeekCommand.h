//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>

#import "MPCPlayerSeekCommand.h"

@class NSArray, NSString;

@interface _MPCPlayerSeekCommand : _MPCPlayerItemCommand <MPCPlayerSeekCommand>
{
    _Bool _supportsBeginFastForward;
    _Bool _supportsEndFastForward;
    _Bool _supportsBeginRewind;
    _Bool _supportsEndRewind;
    _Bool _supportsSkipForward;
    _Bool _supportsSkipBackward;
    _Bool _prefersNegativeBackwardSkipIntervals;
    _Bool _supportsSeekToPlaybackPosition;
    NSArray *_preferredBackwardJumpIntervals;
    NSArray *_preferredForwardJumpIntervals;
}

@property(copy, nonatomic) NSArray *preferredForwardJumpIntervals; // @synthesize preferredForwardJumpIntervals=_preferredForwardJumpIntervals;
@property(copy, nonatomic) NSArray *preferredBackwardJumpIntervals; // @synthesize preferredBackwardJumpIntervals=_preferredBackwardJumpIntervals;
@property(nonatomic) _Bool supportsSeekToPlaybackPosition; // @synthesize supportsSeekToPlaybackPosition=_supportsSeekToPlaybackPosition;
@property(nonatomic) _Bool prefersNegativeBackwardSkipIntervals; // @synthesize prefersNegativeBackwardSkipIntervals=_prefersNegativeBackwardSkipIntervals;
@property(nonatomic) _Bool supportsSkipBackward; // @synthesize supportsSkipBackward=_supportsSkipBackward;
@property(nonatomic) _Bool supportsSkipForward; // @synthesize supportsSkipForward=_supportsSkipForward;
@property(nonatomic) _Bool supportsEndRewind; // @synthesize supportsEndRewind=_supportsEndRewind;
@property(nonatomic) _Bool supportsBeginRewind; // @synthesize supportsBeginRewind=_supportsBeginRewind;
@property(nonatomic) _Bool supportsEndFastForward; // @synthesize supportsEndFastForward=_supportsEndFastForward;
@property(nonatomic) _Bool supportsBeginFastForward; // @synthesize supportsBeginFastForward=_supportsBeginFastForward;
- (void).cxx_destruct;
- (id)_seekCommandWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2;
- (id)changePositionToElapsedInterval:(double)arg1;
- (id)jumpByInterval:(double)arg1;
- (id)endSeek;
- (id)beginSeekWithDirection:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

