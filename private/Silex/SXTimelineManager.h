//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoTransitionObserver.h"

@class NSString, SXTimeline;

@interface SXTimelineManager : NSObject <SXVideoTransitionObserver>
{
    SXTimeline *_timeline;
    id <SXVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
    id <SXVideoPlaybackProgressObserving> _playbackProgressObserver;
}

@property(retain, nonatomic) id <SXVideoPlaybackProgressObserving> playbackProgressObserver; // @synthesize playbackProgressObserver=_playbackProgressObserver;
@property(readonly, nonatomic) id <SXVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory; // @synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory;
@property(readonly, nonatomic) SXTimeline *timeline; // @synthesize timeline=_timeline;
- (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithTimeline:(id)arg1 playbackProgressObserverFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

