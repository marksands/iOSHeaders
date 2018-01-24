//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class ARDeviceOrientationData, ARWorldAlignmentData, NSObject<OS_dispatch_semaphore>;

@interface ARWorldAlignmentTechnique : ARTechnique
{
    ARDeviceOrientationData *_deviceOrientationData;
    // Error parsing type: {?="columns"[4]}, name: _deviceOrientationAlignment
    _Bool _deviceOrientationReferenced;
    _Bool _trackingReferenced;
    _Bool _imageMirrored;
    long long _lastTrackingStateReason;
    _Bool _relocalizing;
    ARWorldAlignmentData *_relocalizedAlignmentData;
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
    long long _alignment;
    long long _cameraPosition;
}

@property(readonly, nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)_handleTrackingStateChanges:(id)arg1 initialized:(_Bool *)arg2 relocalized:(_Bool *)arg3;
- (id)_deviceOrientationPoseData;
- (id)_worldAlignmentDataWithTrackingData:(id)arg1;
- (void)_referenceDeviceOrientation;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)processData:(id)arg1;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithAlignment:(long long)arg1 cameraPosition:(long long)arg2;
- (id)initWithAlignment:(long long)arg1;

@end

