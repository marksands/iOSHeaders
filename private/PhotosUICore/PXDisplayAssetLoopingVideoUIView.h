//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXDisplayAssetUIView.h>

#import "PXActivityCoordinatorItem.h"

@class AVPlayerItem, ISWrappedAVAudioSession, ISWrappedAVPlayer, NSNumber, NSString, PXVideoPlayerView;

@interface PXDisplayAssetLoopingVideoUIView : PXDisplayAssetUIView <PXActivityCoordinatorItem>
{
    PXVideoPlayerView *_videoView;
    long long _requestID;
    _Bool _canLoadVideo;
    ISWrappedAVPlayer *_videoPlayer;
    AVPlayerItem *_videoPlayerItem;
    NSNumber *_queuePosition;
    ISWrappedAVAudioSession *_audioSession;
}

@property(retain, nonatomic) ISWrappedAVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) NSNumber *queuePosition; // @synthesize queuePosition=_queuePosition;
@property(nonatomic) _Bool canLoadVideo; // @synthesize canLoadVideo=_canLoadVideo;
@property(retain, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;
@property(retain, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
- (void).cxx_destruct;
- (void)_updateVideoViewContentMode;
- (void)_updateVideoPlayerPlayerItem;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3;
- (void)_loadVideo;
- (void)_handleDidShowPlaceholderForUnloadingPlayerItem:(id)arg1;
- (void)_unloadVideo;
@property(nonatomic) unsigned long long activityCoordinatorQueuePosition;
- (void)contentsRectDidChange;
- (void)placeholderTransitionDurationDidChange;
- (_Bool)isDisplayingFullQualityContent;
- (void)contentModeDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)animatedContentEnabledDidChange;
- (void)imageDidChange;
- (void)updateContent;
- (void)didMoveToWindow;
- (id)currentImage;
- (struct CGRect)currentContentsRect;
- (id)contentView;
- (long long)playbackStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

