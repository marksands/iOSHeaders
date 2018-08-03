//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoPlaybackPolicyObserving.h"

@class NSString, SVKeyValueObserver;

@interface SVVideoPlaybackPolicyObserver : NSObject <SVVideoPlaybackPolicyObserving>
{
    CDUnknownBlockType requestStateChangeBlock;
    CDUnknownBlockType allowedStateChangeBlock;
    id <SVVideoPlaybackPolicy> _policy;
    SVKeyValueObserver *_playbackAllowedObserver;
    SVKeyValueObserver *_playbackRequestedObserver;
}

@property(readonly, nonatomic) SVKeyValueObserver *playbackRequestedObserver; // @synthesize playbackRequestedObserver=_playbackRequestedObserver;
@property(readonly, nonatomic) SVKeyValueObserver *playbackAllowedObserver; // @synthesize playbackAllowedObserver=_playbackAllowedObserver;
@property(readonly, nonatomic) id <SVVideoPlaybackPolicy> policy; // @synthesize policy=_policy;
@property(copy, nonatomic, setter=onAllowedStateChange:) CDUnknownBlockType allowedStateChangeBlock; // @synthesize allowedStateChangeBlock;
@property(copy, nonatomic, setter=onRequestStateChange:) CDUnknownBlockType requestStateChangeBlock; // @synthesize requestStateChangeBlock;
- (void).cxx_destruct;
- (void)playbackRequestedStateChanged;
- (void)playbackAllowedStateChanged;
- (id)initWithPlaybackPolicy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

