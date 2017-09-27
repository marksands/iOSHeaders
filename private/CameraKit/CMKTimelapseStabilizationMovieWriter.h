//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVOfflineVideoStabilizerDataProvider.h"
#import "CMKTimelapseMovieWriterProtocol.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVOfflineVideoStabilizer, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface CMKTimelapseStabilizationMovieWriter : NSObject <AVOfflineVideoStabilizerDataProvider, CMKTimelapseMovieWriterProtocol>
{
    NSArray *__frameFilePaths;
    NSArray *__visMetadataFilePaths;
    NSObject<OS_dispatch_queue> *__movieWritingQueue;
    AVOfflineVideoStabilizer *__stabilizer;
    AVAssetWriter *__writer;
    AVAssetWriterInput *__videoInput;
    AVAssetWriterInputPixelBufferAdaptor *__pixelBufferAdaptor;
    long long __framesPerSecond;
    long long __sourceFramesReadCount;
    long long __framesWrittenCount;
    struct __CVBuffer *__firstSourceFrame;
    struct opaqueCMFormatDescription *__videoFormatDescription;
    CDUnknownBlockType __completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType _completion; // @synthesize _completion=__completion;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *_videoFormatDescription; // @synthesize _videoFormatDescription=__videoFormatDescription;
@property(readonly, nonatomic) struct __CVBuffer *_firstSourceFrame; // @synthesize _firstSourceFrame=__firstSourceFrame;
@property(readonly, nonatomic) long long _framesWrittenCount; // @synthesize _framesWrittenCount=__framesWrittenCount;
@property(readonly, nonatomic) long long _sourceFramesReadCount; // @synthesize _sourceFramesReadCount=__sourceFramesReadCount;
@property(readonly, nonatomic) long long _framesPerSecond; // @synthesize _framesPerSecond=__framesPerSecond;
@property(readonly, nonatomic) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor; // @synthesize _pixelBufferAdaptor=__pixelBufferAdaptor;
@property(readonly, nonatomic) AVAssetWriterInput *_videoInput; // @synthesize _videoInput=__videoInput;
@property(readonly, nonatomic) AVAssetWriter *_writer; // @synthesize _writer=__writer;
@property(readonly, nonatomic) AVOfflineVideoStabilizer *_stabilizer; // @synthesize _stabilizer=__stabilizer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_movieWritingQueue; // @synthesize _movieWritingQueue=__movieWritingQueue;
@property(readonly, nonatomic) NSArray *_visMetadataFilePaths; // @synthesize _visMetadataFilePaths=__visMetadataFilePaths;
@property(readonly, nonatomic) NSArray *_frameFilePaths; // @synthesize _frameFilePaths=__frameFilePaths;
- (void).cxx_destruct;
- (id)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(CDStruct_198678f7 *)arg2 stabilizer:(id)arg3;
- (struct __CVBuffer *)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(CDStruct_198678f7 *)arg2 stabilizer:(id)arg3;
- (void)_finishMovieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1;
- (_Bool)_startWritingWithOutputPath:(id)arg1 width:(long long)arg2 height:(long long)arg3 videoFormatDescription:(struct opaqueCMFormatDescription *)arg4 transform:(struct CGAffineTransform)arg5 framesPerSecond:(long long)arg6 frameCount:(long long)arg7 visMetadataCount:(long long)arg8 videoMetadata:(id)arg9;
- (struct CGSize)_desiredOutputSizeForFrameSize:(struct CGSize)arg1;
- (struct __CVBuffer *)_copySourcePixelBufferForFrameNumber:(long long)arg1;
- (struct opaqueCMSampleBuffer *)_copyNextSampleBufferForAssetWriter;
- (void)_writeMovieAsynchronously;
- (void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(struct CGAffineTransform)arg6 framesPerSecond:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

