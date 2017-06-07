//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CUCaptureController;

@protocol CAMBurstDelegate <NSObject>

@optional
- (void)captureControllerDidStopPlayingBurstEndSound:(CUCaptureController *)arg1;
- (void)captureControllerWillStartPlayingBurstEndSound:(CUCaptureController *)arg1;
- (void)captureControllerDidStopCapturingBurst:(CUCaptureController *)arg1;
- (void)captureControllerDidReachMaximumBurstLength:(CUCaptureController *)arg1;
- (void)captureControllerWillStartCapturingBurst:(CUCaptureController *)arg1;
@end
