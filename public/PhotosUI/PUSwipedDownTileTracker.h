//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUInteractiveTileTracker.h>

@class PHSwipeDownTracker, PUTileController, PUTileLayoutInfo, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUSwipedDownTileTracker : PUInteractiveTileTracker
{
    UIPanGestureRecognizer *_panGestureRecognizer;
    PUTileController *_designatedTileController;
    PHSwipeDownTracker *__swipeDownTracker;
    PUTileLayoutInfo *__trackedTileLayoutInfo;
}

@property(retain, nonatomic, setter=_setTrackedTileLayoutInfo:) PUTileLayoutInfo *_trackedTileLayoutInfo; // @synthesize _trackedTileLayoutInfo=__trackedTileLayoutInfo;
@property(retain, nonatomic, setter=_setSwipeDownTracker:) PHSwipeDownTracker *_swipeDownTracker; // @synthesize _swipeDownTracker=__swipeDownTracker;
@property(retain, nonatomic) PUTileController *designatedTileController; // @synthesize designatedTileController=_designatedTileController;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (void).cxx_destruct;
- (id)tileControllerToTrack;
- (void)completeTracking;
- (void)updateTileControllerTracking;
- (void)startTileControllerTracking;
- (void)updateGestureRecognizerTracking;
- (id)initWithPanGestureRecognizer:(id)arg1 tilingView:(id)arg2;
- (id)initWithTilingView:(id)arg1;

@end

