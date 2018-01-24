//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ARKit/ARImageSensor.h>

#import "AVCaptureDataOutputSynchronizerDelegate.h"
#import "AVCaptureMetadataOutputObjectsDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDataOutputSynchronizer, AVCaptureDepthDataOutput, AVCaptureMetadataOutput, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface ARFaceTrackingImageSensor : ARImageSensor <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDataOutputSynchronizerDelegate>
{
    AVCaptureMetadataOutput *_metaDataOutput;
    NSArray *_availableMetadataObjectTypes;
    AVCaptureDepthDataOutput *_depthDataOutput;
    AVCaptureDataOutputSynchronizer *_outputSynchronizer;
    NSObject<OS_dispatch_queue> *_outputSynchronizerQueue;
    NSMutableArray *_outputSynchronizerOutputs;
    NSMutableArray *_faceDetections;
    NSMutableDictionary *_avFaceMeshPayload;
    NSObject<OS_dispatch_semaphore> *_faceSemaphore;
    _Bool _signpostFirstFrameDone;
    _Bool _signpostFirstFaceDone;
    double _startTime;
    unsigned long long _droppedFramesPerSec;
    _Bool _recordingMode;
    NSString *_requiredFaceMetaDataObjectType;
}

@property(retain, nonatomic) NSString *requiredFaceMetaDataObjectType; // @synthesize requiredFaceMetaDataObjectType=_requiredFaceMetaDataObjectType;
@property(nonatomic) _Bool recordingMode; // @synthesize recordingMode=_recordingMode;
- (void).cxx_destruct;
- (void)prepareSynchronizedOutputs:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)faceDataFromMetadataObjects:(id)arg1 mirroredVideoInput:(_Bool)arg2 pFaceBoundingBoxes:(id *)arg3 pFacePayload:(id *)arg4;
- (void)capturedSynchedOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromVideoConnection:(id)arg3 metaDataOutput:(id)arg4 didOutputMetadataObjects:(id)arg5 didOutputDepthData:(id)arg6 atTime:(CDStruct_1b6d18a9)arg7;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)_configureMetaDataOutput;
- (void)stop;
- (void)start;
- (id)configureCaptureDevice;
- (id)configureCaptureSession;
- (unsigned long long)providedDataTypes;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

