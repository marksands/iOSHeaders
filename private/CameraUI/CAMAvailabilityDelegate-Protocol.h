//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUCaptureController;

@protocol CAMAvailabilityDelegate <NSObject>
- (void)captureController:(CUCaptureController *)arg1 didOutputTorchAvailability:(_Bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputFlashAvailability:(_Bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputConfigurationAvailability:(_Bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputCaptureAvailability:(_Bool)arg2;
@end

