//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ISChangeObserver.h"

@class ISLivePhotoPlayer, ISLivePhotoUIView, ISPlayerItem, NSString, PHLivePhoto, UIGestureRecognizer;

@interface PHLivePhotoView : UIView <ISChangeObserver>
{
    struct {
        _Bool respondsToWillBeginPlaybackWithStyle;
        _Bool respondsToDidEndPlayback;
    } _delegateFlags;
    struct {
        _Bool respondsToDidEndPlayingVitality;
        _Bool respondsToDidBeginHinting;
        _Bool respondsToDidBeginScrubbing;
        _Bool respondsToDidEndScrubbing;
    } _delegatePrivateFlags;
    long long _currentPlaybackStyle;
    _Bool _muted;
    _Bool __playingVitality;
    _Bool __playbackRequested;
    _Bool _scrubbing;
    _Bool _shouldApplyTargetReadiness;
    _Bool _showsStatusBorder;
    id <PHLivePhotoViewDelegate> _delegate;
    PHLivePhoto *_livePhoto;
    ISPlayerItem *__playerItem;
    long long _targetReadiness;
    UIView *_photoView;
    ISLivePhotoUIView *_playerView;
    ISLivePhotoPlayer *_player;
    struct CGPoint _scaleAnchorOffset;
    CDStruct_e83c9415 _trimmedTimeRange;
}

+ (id)livePhotoBadgeImageWithOptions:(unsigned long long)arg1;
@property(nonatomic) CDStruct_e83c9415 trimmedTimeRange; // @synthesize trimmedTimeRange=_trimmedTimeRange;
@property(nonatomic) _Bool showsStatusBorder; // @synthesize showsStatusBorder=_showsStatusBorder;
@property(retain, nonatomic) ISLivePhotoPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) ISLivePhotoUIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) struct CGPoint scaleAnchorOffset; // @synthesize scaleAnchorOffset=_scaleAnchorOffset;
@property(retain, nonatomic) UIView *photoView; // @synthesize photoView=_photoView;
@property(nonatomic) _Bool shouldApplyTargetReadiness; // @synthesize shouldApplyTargetReadiness=_shouldApplyTargetReadiness;
@property(nonatomic) long long targetReadiness; // @synthesize targetReadiness=_targetReadiness;
@property(nonatomic, setter=_setScrubbing:) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic, setter=_setPlaybackRequested:) _Bool _playbackRequested; // @synthesize _playbackRequested=__playbackRequested;
@property(nonatomic, setter=_setPlayingVitality:) _Bool _playingVitality; // @synthesize _playingVitality=__playingVitality;
@property(retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem; // @synthesize _playerItem=__playerItem;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(nonatomic) __weak id <PHLivePhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_handlePlayerItemStatusChanged;
- (void)_updatePlayerTargetReadiness;
- (void)_playerDidBeginHinting;
- (void)_updateCurrentPlaybackStyleAndSeeking;
- (void)_updateStatusBorder;
- (void)_updatePlayingVitality;
- (void)_updatePlayerAudioEnabled;
@property(readonly, nonatomic, getter=isDisplayingPhoto) _Bool displayingPhoto;
- (id)generateSnapshotImage;
@property(nonatomic) struct CGImage *overridePhoto;
- (void)setContentMode:(long long)arg1;
- (void)stopPlayback;
- (void)startPlaybackWithStyle:(long long)arg1;
@property(nonatomic) CDStruct_1b6d18a9 seekTime;
@property(readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer;
- (void)_commonPHLivePhotoViewInitialization;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

