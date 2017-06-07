//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@protocol NUPurgeableImage;

@interface NUVideoFrameRenderJob : NURenderJob
{
    id <NUPurgeableImage> _renderedImage;
    struct __CVBuffer *_frame;
}

@property(retain) struct __CVBuffer *frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)cleanUp;
- (_Bool)complete:(out id *)arg1;
- (_Bool)copyBufferFrame:(struct __CVBuffer *)arg1 error:(out id *)arg2;
- (id)newOutputImage;
- (_Bool)render:(out id *)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)result;
- (_Bool)renderVideoFrames:(id)arg1 intoPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 colorSpace:(id)arg4 error:(out id *)arg5;
- (id)generateVideoComposition:(out id *)arg1;
- (id)scalePolicy;
- (_Bool)wantsOutputVideo;
- (_Bool)wantsOutputGeometry;
- (id)frameRequest;
- (void)dealloc;

@end

