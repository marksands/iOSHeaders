//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue
{
    MPPlaybackContext *_playbackContext;
    long long _replaceIntent;
}

- (void).cxx_destruct;
- (id)description;
- (id)siriWHAMetricsInfo;
- (id)siriRecommendationIdentifier;
- (id)siriAssetInfo;
- (void)setReplaceIntent:(long long)arg1;
- (long long)replaceIntent;
- (_Bool)isRequestingImmediatePlayback;
- (void)getPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPlaybackContext:(id)arg1;

@end

