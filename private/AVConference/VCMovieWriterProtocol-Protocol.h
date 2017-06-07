//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol VCMovieWriterProtocol
@property(readonly) unsigned char writerMode;
@property unsigned int endRTPTimeStamp;
@property unsigned int startRTPTimeStamp;
- (void)setEndRTPTimestampWithTimestamp:(unsigned int)arg1;
- (_Bool)shouldFinishWritingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 RTPtimeStamp:(unsigned int)arg2;
- (_Bool)shouldAppendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 RTPtimeStamp:(unsigned int)arg2;
- (void)finishWritingWithHandler:(void (^)(NSURL *, NSError *))arg1;
- (void)setStillImageTime:(CDStruct_1b6d18a9)arg1;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 mediaType:(unsigned char)arg2;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3;
@end

