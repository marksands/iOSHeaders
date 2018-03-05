//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSNewsAnalyticsArticleViewingSessionTracker.h"
#import "NUVideoPlayerEventTracker.h"

@class NSArray, NSData, NSSNewsAnalyticsEventAnnotator, NSString, NTPBEvent, NUNewsAnalyticsVideoPlayerEventTrackerConfiguration;

@interface NUNewsAnalyticsVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker, NSSNewsAnalyticsArticleViewingSessionTracker>
{
    _Bool _playbackFinishedForLastVideo;
    _Bool _videoPlayerIsVisible;
    int _currentVideoPlayMethod;
    id <NSSNewsAnalyticsPBEventStreamObserver> _observer;
    NUNewsAnalyticsVideoPlayerEventTrackerConfiguration *_configuration;
    NSSNewsAnalyticsEventAnnotator *_eventAnnotator;
    id <NSSNewsAnalyticsSessionManager> _sessionManager;
    NSArray *_videoItems;
    NSData *_leadingVideoItemSessionID;
    id <NUVideoItem> _currentVideo;
    NTPBEvent *_articleHostViewExposureEvent;
}

@property(nonatomic, getter=isVideoPlayerVisible) _Bool videoPlayerIsVisible; // @synthesize videoPlayerIsVisible=_videoPlayerIsVisible;
@property(retain, nonatomic) NTPBEvent *articleHostViewExposureEvent; // @synthesize articleHostViewExposureEvent=_articleHostViewExposureEvent;
@property(nonatomic) int currentVideoPlayMethod; // @synthesize currentVideoPlayMethod=_currentVideoPlayMethod;
@property(copy, nonatomic) id <NUVideoItem> currentVideo; // @synthesize currentVideo=_currentVideo;
@property(nonatomic) _Bool playbackFinishedForLastVideo; // @synthesize playbackFinishedForLastVideo=_playbackFinishedForLastVideo;
@property(readonly, copy, nonatomic) NSData *leadingVideoItemSessionID; // @synthesize leadingVideoItemSessionID=_leadingVideoItemSessionID;
@property(readonly, copy, nonatomic) NSArray *videoItems; // @synthesize videoItems=_videoItems;
@property(readonly, nonatomic) __weak id <NSSNewsAnalyticsSessionManager> sessionManager; // @synthesize sessionManager=_sessionManager;
@property(readonly, nonatomic) NSSNewsAnalyticsEventAnnotator *eventAnnotator; // @synthesize eventAnnotator=_eventAnnotator;
@property(readonly, copy, nonatomic) NUNewsAnalyticsVideoPlayerEventTrackerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) __weak id <NSSNewsAnalyticsPBEventStreamObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)_currentArticleViewingSessionID;
- (id)_currentArticleID;
- (id)_articleViewingSessionIDForVideoItem:(id)arg1;
- (unsigned long long)_displayRankOfVideoItem:(id)arg1;
- (id)_widgetEngagementForVideoItem:(id)arg1;
- (id)_eventObjectWithLinkTapEvent:(id)arg1;
- (id)_linkTapEventWithLinkType:(int)arg1 forVideoItem:(id)arg2;
- (void)userEngagedWithAdvanceButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithReplayButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithNowPlayingButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithDiscoverMoreButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithCallToActionBarWithVideoItem:(id)arg1;
- (void)_finishAndSubmitArticleHostViewExposureEvent;
- (void)_createArticleHostViewExposureEventConfiguredForVideoItem:(id)arg1 withArticlePresentationReason:(int)arg2;
- (id)_eventObjectWithAdImpressionEvent:(id)arg1;
- (id)_eventObjectWithAdEngagementEvent:(id)arg1;
- (id)_adImpressionEventConfiguredWithMetadata:(id)arg1;
- (id)_adEngagementEventWithType:(int)arg1 configuredWithMetadata:(id)arg2;
- (id)_eventObjectWithMediaEngageEvent:(id)arg1;
- (id)_mediaEngageCompleteEventConfiguredForVideoItem:(id)arg1;
- (id)_mediaEngageEventWithUserAction:(int)arg1 configuredForVideoItem:(id)arg2;
- (void)_submitEvent:(id)arg1;
- (void)_submitEventForEventObject:(id)arg1;
- (id)_eventForEventObject:(id)arg1;
- (id)articleViewingSessionIDForArticleWithID:(id)arg1;
- (void)userSkippedPlaybackOfVideoAdWithMetadata:(id)arg1;
- (void)userEngagedWithCallToActionOfVideoAdWithMetadata:(id)arg1;
- (void)playbackFinishedForVideoAdWithMetadata:(id)arg1;
- (void)playbackPausedForVideoAdWithMetadata:(id)arg1;
- (void)impressionThresholdReachedForVideoAdWithMetadata:(id)arg1;
- (void)videoPlayerDidBecomeInvisible;
- (void)videoPlayerDidBecomeVisible;
- (void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)muteStateChanged:(_Bool)arg1 withVideoItem:(id)arg2 metadata:(id)arg3;
- (void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (id)initWithConfiguration:(id)arg1 observer:(id)arg2 sessionManager:(id)arg3 userIDProvider:(id)arg4 videoItems:(id)arg5 leadingVideoItemSessionID:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

