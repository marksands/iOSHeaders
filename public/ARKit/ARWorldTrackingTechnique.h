//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class ARPointCloud, ARTrackingErrorData, ARWorldTrackingData, NSMutableArray, NSObject<OS_dispatch_semaphore>, NSString;

@interface ARWorldTrackingTechnique : ARTechnique
{
    _Bool _useFixedIntrinsics;
    unsigned long long _vioState;
    NSObject<OS_dispatch_semaphore> *_vioStateSemaphore;
    NSMutableArray *_latestVisionFeaturePointDatas;
    ARPointCloud *_cachedFeaturePointCloud;
    ARTrackingErrorData *_errorData;
    ARWorldTrackingData *_cachedTrackingData;
    ARWorldTrackingData *_lastPointCloudTrackingData;
    NSObject<OS_dispatch_semaphore> *_resultSemaphore;
    double _lastErrorLogTimestamp;
    _Bool _relocalizationEnabled;
    NSString *_deviceModel;
    long long _latencyFrameCount;
}

+ (_Bool)isSupported;
@property(nonatomic) _Bool relocalizationEnabled; // @synthesize relocalizationEnabled=_relocalizationEnabled;
@property(readonly, nonatomic) long long latencyFrameCount; // @synthesize latencyFrameCount=_latencyFrameCount;
@property(readonly, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
- (void).cxx_destruct;
-     // Error parsing type: {?=[4]}24@0:8d16, name: cameraTransformAtTimestamp:
- (_Bool)isEqual:(id)arg1;
- (id)initWithDeviceModel:(id)arg1 latencyFrameCount:(long long)arg2;
- (id)init;

@end

