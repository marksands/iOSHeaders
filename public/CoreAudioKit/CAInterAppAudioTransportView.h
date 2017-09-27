//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAUITransportButton, NSTimer, UIColor, UIFont, UILabel;

@interface CAInterAppAudioTransportView : UIView
{
    CAUITransportButton *rewindButton;
    CAUITransportButton *playPauseButton;
    CAUITransportButton *recordButton;
    UILabel *currentTimeLabel;
    UIColor *pauseButtonColor;
    UIColor *playButtonColor;
    struct OpaqueAudioComponentInstance *outputUnit;
    struct HostCallbackInfo *callBackInfo;
    NSTimer *pollingPlayerTimer;
    _Bool enabled;
    _Bool inForeground;
    _Bool _playing;
    _Bool _recording;
    _Bool _connected;
    double _playTime;
    UIFont *_currentTimeLabelFont;
}

@property(retain, nonatomic) UIFont *currentTimeLabelFont; // @synthesize currentTimeLabelFont=_currentTimeLabelFont;
@property(readonly, nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(readonly, nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
- (void)updateTransportControls;
- (void)layoutSubviews;
- (void)sendStateToRemoteHost:(unsigned int)arg1;
- (void)toggleRecording:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)rewindAction:(id)arg1;
- (_Bool)canPlay;
- (_Bool)canRewind;
- (_Bool)canRecord;
- (_Bool)isHostConnected;
- (void)updateStatefromTransportCallBack;
- (void)getHostCallbackInfo;
- (void)appHasGoneForeground;
- (void)appHasGoneInBackground;
- (id)getPlayTimeString;
- (void)pollHost;
- (void)stopPollingPlayer;
- (void)startPollingPlayer;
- (void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance *)arg1;
@property(retain, nonatomic) UIColor *recordButtonColor;
@property(retain, nonatomic) UIColor *pauseButtonColor;
@property(retain, nonatomic) UIColor *playButtonColor;
@property(retain, nonatomic) UIColor *rewindButtonColor;
@property(retain, nonatomic) UIColor *labelColor;
@property(getter=isEnabled) _Bool enabled;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialize;
- (void)audioUnitPropertyChangedListener:(void *)arg1 unit:(struct OpaqueAudioComponentInstance *)arg2 propID:(unsigned int)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5;

@end

