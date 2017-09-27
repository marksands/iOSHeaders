//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MSCLAudioPlayerDelegate.h"
#import "MSCLSoundBiteViewDelegate.h"
#import "MSCLVoiceRecorderDelegate.h"

@class MSCLAttachment, MSCLAttachmentPreviewView, MSCLAudioPlayer, MSCLConfiguration, MSCLSoundBiteView, MSCLVoiceRecorder, MSCLWaveformImageProducer, NSNumberFormatter, NSString, SKUIClientContext;

@interface MSCLSoundBiteViewController : UIViewController <MSCLAudioPlayerDelegate, MSCLSoundBiteViewDelegate, MSCLVoiceRecorderDelegate>
{
    MSCLAttachment *_attachment;
    MSCLAudioPlayer *_audioPlayer;
    SKUIClientContext *_clientContext;
    MSCLConfiguration *_configuration;
    _Bool _isExplicit;
    NSNumberFormatter *_leadingZeroFormatter;
    NSNumberFormatter *_numberFormatter;
    long long _recordingActivationMode;
    NSString *_recordingFilePath;
    double _recordingStartTime;
    MSCLSoundBiteView *_soundBiteView;
    MSCLWaveformImageProducer *_waveformImageProducer;
    MSCLVoiceRecorder *_voiceRecorder;
    id <MSCLSoundBiteViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MSCLSoundBiteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) MSCLConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) MSCLAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (id)_timeStringWithSeconds:(double)arg1;
- (void)_startRecordingWithActivationMode:(long long)arg1;
- (void)_reloadSoundBiteRecordingUI;
- (void)_reloadSoundBiteRecordedUI;
- (void)_reloadSoundBitePlaybackUI;
- (double)_maximumRecordingDuration;
- (void)_endAudioPlayback;
- (void)voiceRecorder:(id)arg1 didUpdateAveragePower:(float)arg2;
- (void)voiceRecorder:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)soundBiteViewDidToggleExplicit:(id)arg1;
- (void)soundBiteViewDidTogglePlayback:(id)arg1;
- (void)soundBiteViewDidReleaseRecordButton:(id)arg1;
- (void)soundBiteViewDidHoldRecordButton:(id)arg1;
- (void)soundBiteViewFaceProximityDidEnd:(id)arg1;
- (void)soundBiteViewFaceProximityDidBegin:(id)arg1;
- (void)audioPlayer:(id)arg1 didFailWithError:(id)arg2;
- (void)audioPlayer:(id)arg1 didChangeStatus:(id)arg2;
- (void)loadView;
- (void)stopPlayback;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) MSCLAttachmentPreviewView *view; // @dynamic view;

@end

