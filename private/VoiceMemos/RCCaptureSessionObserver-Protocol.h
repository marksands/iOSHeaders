//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RCCaptureSession;

@protocol RCCaptureSessionObserver <NSObject>
- (void)captureSession:(RCCaptureSession *)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2 usingDisplayLinkSmoothing:(_Bool)arg3;
- (void)captureSession:(RCCaptureSession *)arg1 rateDidChangeToRate:(float)arg2;
- (void)captureSession:(RCCaptureSession *)arg1 didFinishWithSuccess:(_Bool)arg2;
@end

