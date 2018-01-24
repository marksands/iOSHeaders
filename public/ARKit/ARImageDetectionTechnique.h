//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class ARImageDetectionResultData, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface ARImageDetectionTechnique : ARTechnique
{
    NSMutableDictionary *_referenceImageMap;
    NSMutableDictionary *_detectionCountByImageID;
    struct OpaqueVTPixelTransferSession *_vtPixelTransferSession;
    struct __CVPixelBufferPool *_grayPixelBufferPool;
    ARImageDetectionResultData *_latestResultData;
    NSObject<OS_dispatch_queue> *_processDataQueue;
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    ARImageDetectionResultData *_referenceImageData;
    double _lastTimestamp;
    _Bool _continousDetection;
    _Bool _estimateScale;
    unsigned long long _estimateScaleCount;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)processImageDataAndPose:(id)arg1 worldTrackingPose:(id)arg2;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
@property(readonly, copy, nonatomic) ARImageDetectionResultData *currentDetectionResultData;
- (unsigned long long)requiredSensorDataTypes;
- (void)dealloc;
- (id)initWithReferenceImages:(id)arg1;

@end

