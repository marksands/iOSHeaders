//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPCPlaybackEngine;

@interface _MPCLeaseManager : NSObject
{
    MPCPlaybackEngine *_playbackEngine;
}

@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void).cxx_destruct;
- (void)_playerDidPauseForPlaybackPreventionNotification:(id)arg1;
- (void)dealloc;
- (id)initWithPlaybackEngine:(id)arg1;

@end
