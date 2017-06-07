//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NUBufferRenderClient, NUComposition, NUImageDataClient;
@protocol OS_dispatch_queue;

@interface _GUWhiteColorCalculator : NSObject
{
    NUComposition *_composition;
    NUBufferRenderClient *_bufferRenderClient;
    NUImageDataClient *_imageDataClient;
    NSObject<OS_dispatch_queue> *_q;
    _Bool _useSushi;
}

- (void).cxx_destruct;
- (void)_submitGERenderRequest:(CDUnknownBlockType)arg1;
- (void)_submitGWRenderRequest:(CDUnknownBlockType)arg1;
- (void)_computeGreenPercentage:(CDUnknownBlockType)arg1;
- (void)_configureRequest:(id)arg1;
- (CDStruct_92960315)_whitePointColorFromGrayEdgesImage:(id)arg1 grayWorldImage:(id)arg2 greenChannelPercentage:(double)arg3 RAWCameraSpaceProperties:(id)arg4;
- (CDStruct_92960315)_computeWhitePointColorWithGrayEdgesBuffer:(id)arg1 grayWorldBuffer:(id)arg2 greenChannelPercentage:(double)arg3 RAWCameraSpaceProperties:(id)arg4;
- (id)_brightnessMultiplierFromImageProperties:(id)arg1;
- (void)calculateColorWithProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readBufferFromImage:(id)arg1 withRGBAfBufferBlock:(CDUnknownBlockType)arg2;
- (id)initWithComposition:(id)arg1 useSushi:(_Bool)arg2;

@end

