//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMPanoramaCaptureRequest, CAMPanoramaProcessor;

@protocol CAMPanoramaProcessorDelegate <NSObject>
- (void)panoramaProcessor:(CAMPanoramaProcessor *)arg1 didProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withStatus:(int)arg3 forRequest:(CAMPanoramaCaptureRequest *)arg4;
@end
