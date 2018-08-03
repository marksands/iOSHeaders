//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoPlaybackAttemptTrackerFactory.h"

@class NSString;

@interface SVVideoPlaybackAttemptTrackerFactory : NSObject <SVVideoPlaybackAttemptTrackerFactory>
{
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
    id <SVPlayerTimeControlStatusObserverFactory> _timeControlStatusObserverFactorty;
    id <SVVideoPlaybackPolicyObserverFactory> _playbackPolicyObserverFactory;
    id <SVVideoVisibilityMonitorProviding> _visibilityMonitorProvider;
}

@property(readonly, nonatomic) id <SVVideoVisibilityMonitorProviding> visibilityMonitorProvider; // @synthesize visibilityMonitorProvider=_visibilityMonitorProvider;
@property(readonly, nonatomic) id <SVVideoPlaybackPolicyObserverFactory> playbackPolicyObserverFactory; // @synthesize playbackPolicyObserverFactory=_playbackPolicyObserverFactory;
@property(readonly, nonatomic) id <SVPlayerTimeControlStatusObserverFactory> timeControlStatusObserverFactorty; // @synthesize timeControlStatusObserverFactorty=_timeControlStatusObserverFactorty;
@property(readonly, nonatomic) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
- (void).cxx_destruct;
- (id)createPlaybackAttemptTrackerForVideo:(id)arg1;
- (id)initWithLoadingStateObserverFactory:(id)arg1 timeControlStatusObserverFactory:(id)arg2 playbackPolicyObserverFactory:(id)arg3 visibilityMonitorProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

