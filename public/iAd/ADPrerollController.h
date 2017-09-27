//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADPlayerDelegate.h"
#import "ADPrerollViewDelegate.h"

@class ADPlayer, ADPrerollView, AVPlayerViewController, MPMoviePlayerController, NSString;

@interface ADPrerollController : NSObject <ADPrerollViewDelegate, ADPlayerDelegate>
{
    AVPlayerViewController *_avPlayerViewController;
    MPMoviePlayerController *_moviePlayerController;
    _Bool _setupInProgress;
    _Bool _isObservingThirdPartyAVPlayer;
    unsigned long long _type;
    ADPrerollView *_view;
    ADPlayer *_adPlayer;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool isObservingThirdPartyAVPlayer; // @synthesize isObservingThirdPartyAVPlayer=_isObservingThirdPartyAVPlayer;
@property(nonatomic) _Bool setupInProgress; // @synthesize setupInProgress=_setupInProgress;
@property(retain, nonatomic) ADPlayer *adPlayer; // @synthesize adPlayer=_adPlayer;
@property(retain, nonatomic) ADPrerollView *view; // @synthesize view=_view;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_appWillResignActive;
- (void)_handlePlaybackCompletion:(_Bool)arg1;
- (_Bool)_beginPlayback;
- (void)_addAccessibilityIdentifier:(id)arg1;
- (id)_advertisementView;
@property(nonatomic) __weak MPMoviePlayerController *moviePlayerController;
@property(nonatomic) __weak AVPlayerViewController *avPlayerViewController;
- (void)adPlayerDidBeginAction:(id)arg1;
- (id)viewControllerForActionFromAdPlayer:(id)arg1;
- (void)adPlayerDidFinishPlayback:(id)arg1;
- (void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2;
- (void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
- (void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
- (void)adPlayerFailedToLoadAsset:(id)arg1;
- (void)adPlayerDidTimeout:(id)arg1;
- (void)privacyButtonPressed;
- (void)actionButtonPressed;
- (void)skipButtonPressed;
- (void)pauseButtonPressed;
- (void)playButtonPressed;
- (void)doneButtonPressed;
- (_Bool)_isEmbedded;
- (_Bool)prerollViewRequestsEmbeddedStatus;
- (void)shutdown;
- (void)cancel;
- (void)playPrerollAdWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMoviePlayerController:(id)arg1;
- (id)initWithAVPlayerViewController:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

