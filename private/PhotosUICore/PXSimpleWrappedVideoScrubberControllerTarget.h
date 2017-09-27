//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISChangeObserver.h"
#import "PXVideoScrubberControllerTarget.h"

@class ISWrappedAVPlayer, NSString;

@interface PXSimpleWrappedVideoScrubberControllerTarget : NSObject <ISChangeObserver, PXVideoScrubberControllerTarget>
{
    CDUnknownBlockType statusChangeHandler;
    CDUnknownBlockType playerItemChangeHandler;
    CDUnknownBlockType durationChangeHandler;
    ISWrappedAVPlayer *_videoPlayer;
}

@property(readonly, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(copy, nonatomic) CDUnknownBlockType durationChangeHandler; // @synthesize durationChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType playerItemChangeHandler; // @synthesize playerItemChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType statusChangeHandler; // @synthesize statusChangeHandler;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)cancelPendingSeeks;
- (void)videoScrubberController:(id)arg1 seekToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)removeTimeObserver:(id)arg1;
- (CDStruct_1b6d18a9)currentItemDuration;
- (CDStruct_1b6d18a9)playerCurrentTime;
- (long long)playerStatus;
- (id)playerItem;
- (float)playRate;
- (id)initWithVideoPlayer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

