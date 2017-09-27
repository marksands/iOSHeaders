//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NUFaceDetectionRequest;

@interface NUFaceDetectionJob : NURenderJob
{
    NSArray *_faces;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (id)result;
- (_Bool)render:(out id *)arg1;
- (id)detectFaceLandmarksInBuffer:(struct __CVBuffer *)arg1 withFaceRects:(id)arg2 error:(out id *)arg3;
- (id)detectFaceRectsInBuffer:(struct __CVBuffer *)arg1 maxResultCount:(unsigned long long)arg2 error:(out id *)arg3;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputImage;
- (id)scalePolicy;
@property(readonly) NUFaceDetectionRequest *faceDetectionRequest;
- (id)initWithRequest:(id)arg1;
- (id)initWithFaceDetectionRequest:(id)arg1;

@end

