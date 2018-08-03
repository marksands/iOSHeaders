//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideo.h"
#import "SVVideoProviding.h"

@class NSString;

@interface NUVideoProvider : NSObject <SVVideo, SVVideoProviding>
{
    NSString *_identifier;
    id <NUVideoItem> _videoItem;
    id <SVVideoMetadata> _metadata;
    id <NUVideoEventTracker> _eventTracker;
}

@property(retain, nonatomic) id <NUVideoEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
@property(retain, nonatomic) id <SVVideoMetadata> metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) id <NUVideoItem> videoItem; // @synthesize videoItem=_videoItem;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)tappedNowPlaying;
- (void)tappedDiscoverMore;
- (void)tappedAdvance;
- (void)tappedReplay;
- (void)tappedCallToAction;
- (id)videoMetadataForCurrentState;
- (void)muteStateChanged:(_Bool)arg1;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)playbackInitiated;
- (void)didDisappear;
- (void)didAppear;
- (CDUnknownBlockType)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool allowsCallToActionBar;
@property(readonly, nonatomic) unsigned long long videoType;
@property(readonly, nonatomic, getter=areNeighboringAdsAllowed) _Bool neighboringAdsAreAllowed;
- (id)initWithVideoItem:(id)arg1 eventTracker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

