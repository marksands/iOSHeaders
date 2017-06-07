//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraKit/CMKStillImageCaptureRequestDelegate-Protocol.h>

@class CMKLowDiskSpaceAlertController, CMKTimelapseState, NSCountedSet, NSDate, NSMutableSet, NSString;
@protocol OS_dispatch_source;

@interface CMKTimelapseController : NSObject <CMKStillImageCaptureRequestDelegate>
{
    _Bool __ignoringTimerCallbacksForTearDown;
    _Bool __ignoringTimerCallbacksWaitingForCaptureResponse;
    _Bool __backendRecoveryNeeded;
    _Bool __previewStarted;
    CMKTimelapseState *__state;
    NSObject<OS_dispatch_source> *__captureTimer;
    NSCountedSet *__inFlightTimelapseUUIDs;
    NSMutableSet *__pendingCompletedStates;
    CMKLowDiskSpaceAlertController *__diskSpaceAlert;
}

+ (void)recoverFromCrashIfNeededForceEndLastSession:(_Bool)arg1;
+ (id)_videoPreviewImageForTimelapseState:(id)arg1;
+ (id)createPlaceholderAssetResponseForTimelapseState:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic, setter=_setPreviewStarted:) _Bool _previewStarted; // @synthesize _previewStarted=__previewStarted;
@property(nonatomic, setter=_setBackendRecoveryNeeded:) _Bool _backendRecoveryNeeded; // @synthesize _backendRecoveryNeeded=__backendRecoveryNeeded;
@property(readonly, nonatomic) CMKLowDiskSpaceAlertController *_diskSpaceAlert; // @synthesize _diskSpaceAlert=__diskSpaceAlert;
@property(readonly, nonatomic) NSMutableSet *_pendingCompletedStates; // @synthesize _pendingCompletedStates=__pendingCompletedStates;
@property(readonly, nonatomic) NSCountedSet *_inFlightTimelapseUUIDs; // @synthesize _inFlightTimelapseUUIDs=__inFlightTimelapseUUIDs;
@property(readonly, nonatomic) _Bool _ignoringTimerCallbacksWaitingForCaptureResponse; // @synthesize _ignoringTimerCallbacksWaitingForCaptureResponse=__ignoringTimerCallbacksWaitingForCaptureResponse;
@property(readonly, nonatomic) _Bool _ignoringTimerCallbacksForTearDown; // @synthesize _ignoringTimerCallbacksForTearDown=__ignoringTimerCallbacksForTearDown;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *_captureTimer; // @synthesize _captureTimer=__captureTimer;
@property(readonly, nonatomic) CMKTimelapseState *_state; // @synthesize _state=__state;
- (void).cxx_destruct;
- (void)_notifyAGGDForDidStopCapturingWithState:(id)arg1;
- (void)_notifyAGGDForDidStartCapturingWithState:(id)arg1;
- (void)_updateLocationIfNecessary;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_dismissDiskSpaceAlert;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2;
- (void)_previewStarted:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (id)_createPlaceholderAssetForTimelapseState:(id)arg1;
- (void)captureController:(id)arg1 didFinishWriteForResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (void)captureController:(id)arg1 didGenerateResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (void)_saveStateToDisk:(id)arg1;
- (void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)_updateFocusAndExposureForStopCapturing;
- (void)_updateFocusAndExposureForStartCapturing;
- (_Bool)_enqueueCaptureRequest;
- (void)_captureTimerFired;
- (void)_teardownCaptureTimer;
- (void)_startCaptureTimer;
@property(readonly, nonatomic) NSDate *captureStartTime;
- (_Bool)_reserveDiskSpaceForTimelapseUUID:(id)arg1;
- (void)_restoreCaptureStateFromDisk;
- (void)_setNewCaptureState;
- (void)_stopCapturingWithReasons:(long long)arg1;
- (_Bool)_startCapturing;
- (void)stopCapturingWithReasons:(long long)arg1;
- (_Bool)startCapturing;
@property(readonly, nonatomic, getter=isCapturing) _Bool capturing;
- (void)_prepareForTimelapseCapture;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (void)restoreConfiguration;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

