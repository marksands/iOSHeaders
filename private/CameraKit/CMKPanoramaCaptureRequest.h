//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CMKCaptureRequest.h>

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface CMKPanoramaCaptureRequest : CMKCaptureRequest <NSCopying, NSMutableCopying>
{
    long long _deviceOrientation;
    long long _captureDevice;
}

@property(readonly, nonatomic) long long captureDevice; // @synthesize captureDevice=_captureDevice;
@property(readonly, nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

