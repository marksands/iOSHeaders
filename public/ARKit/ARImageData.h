//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARSensorData.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class ARFaceData, AVDepthData, NSDate, NSString;

@interface ARImageData : NSObject <ARSensorData, NSCopying, NSSecureCoding>
{
    _Bool _pixelBufferIsMirrored;
    _Bool _shouldRestrictFrameRate;
    float _exposureTargetOffset;
    float _temperature;
    float _tint;
    float _ISO;
    double _timestamp;
    NSDate *_captureDate;
    struct __CVBuffer *_pixelBuffer;
    double _exposureDuration;
    ARFaceData *_faceData;
    AVDepthData *_depthData;
    double _depthDataTimestamp;
    long long _cameraPosition;
    long long _targetFramesPerSecond;
    // Error parsing type: {?="columns"[3]}, name: _cameraIntrinsics
}

+ (_Bool)supportsSecureCoding;
+ (id)captureDateFromPresentationTimestamp:(CDStruct_1b6d18a9)arg1 session:(id)arg2;
@property(nonatomic) _Bool shouldRestrictFrameRate; // @synthesize shouldRestrictFrameRate=_shouldRestrictFrameRate;
@property(nonatomic) long long targetFramesPerSecond; // @synthesize targetFramesPerSecond=_targetFramesPerSecond;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(nonatomic) double depthDataTimestamp; // @synthesize depthDataTimestamp=_depthDataTimestamp;
@property(retain, nonatomic) AVDepthData *depthData; // @synthesize depthData=_depthData;
@property(retain, nonatomic) ARFaceData *faceData; // @synthesize faceData=_faceData;
@property(nonatomic) float ISO; // @synthesize ISO=_ISO;
@property(nonatomic) double exposureDuration; // @synthesize exposureDuration=_exposureDuration;
@property(nonatomic) float tint; // @synthesize tint=_tint;
@property(nonatomic) float temperature; // @synthesize temperature=_temperature;
@property(nonatomic) float exposureTargetOffset; // @synthesize exposureTargetOffset=_exposureTargetOffset;
@property(nonatomic) _Bool pixelBufferIsMirrored; // @synthesize pixelBufferIsMirrored=_pixelBufferIsMirrored;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
// Error parsing type for property cameraIntrinsics:
// Property attributes: T{?=[3]},N,V_cameraIntrinsics

@property(retain, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) struct CGSize imageResolution;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 captureDevice:(id)arg2 captureSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

