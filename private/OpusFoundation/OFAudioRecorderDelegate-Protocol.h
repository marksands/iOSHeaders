//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSURL, OFAudioRecorder;

@protocol OFAudioRecorderDelegate
- (void)recorder:(OFAudioRecorder *)arg1 recordingDidFinishToOutputFileURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)recorderRecordingDidBegin:(OFAudioRecorder *)arg1;
@end

