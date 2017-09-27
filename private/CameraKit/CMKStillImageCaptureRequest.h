//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CMKCaptureRequest.h>

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface CMKStillImageCaptureRequest : CMKCaptureRequest <NSCopying, NSMutableCopying>
{
    _Bool _transient;
    long long _deviceOrientation;
    long long _captureDevice;
    long long _flashMode;
    int _hdrMode;
    _Bool _usesStillImageStabilization;
    _Bool _wantsAudioForCapture;
    id <CMKStillImageCaptureRequestDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <CMKStillImageCaptureRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool wantsAudioForCapture; // @synthesize wantsAudioForCapture=_wantsAudioForCapture;
@property(readonly, nonatomic) _Bool usesStillImageStabilization; // @synthesize usesStillImageStabilization=_usesStillImageStabilization;
@property(readonly, nonatomic) int hdrMode; // @synthesize hdrMode=_hdrMode;
@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(readonly, nonatomic) long long captureDevice; // @synthesize captureDevice=_captureDevice;
@property(readonly, nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(readonly, nonatomic, getter=isTransient) _Bool transient; // @synthesize transient=_transient;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

