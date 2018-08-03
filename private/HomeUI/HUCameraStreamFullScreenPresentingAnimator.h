//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUCameraStreamFullScreenAnimator.h>

#import "UIViewControllerAnimatedTransitioning.h"

@class HMCameraSnapshot, NSString, NSURL;

@interface HUCameraStreamFullScreenPresentingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning>
{
    HMCameraSnapshot *_cameraSnapshot;
    NSURL *_demoSnapshotURL;
}

@property(retain, nonatomic) NSURL *demoSnapshotURL; // @synthesize demoSnapshotURL=_demoSnapshotURL;
@property(readonly, nonatomic) HMCameraSnapshot *cameraSnapshot; // @synthesize cameraSnapshot=_cameraSnapshot;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithSourceCameraCell:(id)arg1 cameraSnapshot:(id)arg2 snapshotDemoURL:(id)arg3;
- (id)initWithSourceCameraCell:(id)arg1 cameraSnapshot:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

