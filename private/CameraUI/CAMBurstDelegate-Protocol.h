//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUCaptureController;

@protocol CAMBurstDelegate <NSObject>

@optional
- (void)captureControllerDidStopPlayingBurstEndSound:(CUCaptureController *)arg1;
- (void)captureControllerWillStartPlayingBurstEndSound:(CUCaptureController *)arg1;
- (void)captureControllerDidStopCapturingBurst:(CUCaptureController *)arg1;
- (void)captureControllerDidReachMaximumBurstLength:(CUCaptureController *)arg1;
- (void)captureControllerWillStartCapturingBurst:(CUCaptureController *)arg1;
@end

