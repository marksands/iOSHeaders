//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPDetailSliderDelegate.h"
#import "NCAudioPlayerControllerDelegate.h"
#import "NCAudioPlayerControlsDelegate.h"

@class NCAudioPlayerController, NCAudioPlayerControlsView, NSString, NSURL;

@interface NCAudioPlayerControlsViewController : UIViewController <MPDetailSliderDelegate, NCAudioPlayerControllerDelegate, NCAudioPlayerControlsDelegate>
{
    NSURL *_URL;
    NCAudioPlayerController *_playerController;
    NCAudioPlayerControlsView *_playerControlsView;
}

@property(retain, nonatomic) NCAudioPlayerControlsView *playerControlsView; // @synthesize playerControlsView=_playerControlsView;
@property(retain, nonatomic) NCAudioPlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)playbackControls:(id)arg1 didRequestState:(long long)arg2;
- (void)playerController:(id)arg1 didSeekToTime:(float)arg2;
- (void)playerController:(id)arg1 didChangeToStatus:(long long)arg2;
- (void)playerController:(id)arg1 didChangeToPlaybackState:(long long)arg2;
- (void)playerController:(id)arg1 didChangeToDuration:(double)arg2;
- (void)playerController:(id)arg1 didChangeToCurrentTime:(float)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

