//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, VCVideoRule;

@protocol VCVideoCaptureClient
- (void)thermalLevelDidChange:(int)arg1;
- (VCVideoRule *)clientCaptureRule;
- (void)avConferencePreviewError:(NSString *)arg1;
- (_Bool)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;

@optional
- (void)avConferenceScreenCaptureError:(NSString *)arg1;
@end

