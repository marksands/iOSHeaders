//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class ARVideoFormat, AVCaptureSession;

@interface ARImageSensorSettings : NSObject <NSCopying>
{
    _Bool _autoFocusEnabled;
    _Bool _mirrorVideoOutput;
    _Bool _audioCaptureEnabled;
    _Bool _allowCameraInMultipleForegroundAppLayout;
    ARVideoFormat *_videoFormat;
    AVCaptureSession *_captureSession;
}

@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) _Bool allowCameraInMultipleForegroundAppLayout; // @synthesize allowCameraInMultipleForegroundAppLayout=_allowCameraInMultipleForegroundAppLayout;
@property(nonatomic) _Bool audioCaptureEnabled; // @synthesize audioCaptureEnabled=_audioCaptureEnabled;
@property(nonatomic) _Bool mirrorVideoOutput; // @synthesize mirrorVideoOutput=_mirrorVideoOutput;
@property(nonatomic) _Bool autoFocusEnabled; // @synthesize autoFocusEnabled=_autoFocusEnabled;
@property(readonly, nonatomic) ARVideoFormat *videoFormat; // @synthesize videoFormat=_videoFormat;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithVideoFormat:(id)arg1;

@end

