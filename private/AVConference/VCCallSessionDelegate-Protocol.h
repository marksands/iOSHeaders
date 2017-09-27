//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSDictionary, NSError, NSString, VCCallSession, VCCaptionsTranscription, VCVideoRule, VideoAttributes;

@protocol VCCallSessionDelegate
- (void)session:(VCCallSession *)arg1 didReceiveMomentsRequest:(NSDictionary *)arg2;
- (void)session:(VCCallSession *)arg1 setMomentsCapabilities:(int)arg2;
- (struct AudioStreamBasicDescription)audioIOFormat;
- (void)session:(VCCallSession *)arg1 setRemoteBasebandCodecType:(unsigned int)arg2 sampleRate:(double)arg3;
- (void)session:(VCCallSession *)arg1 stopAudioWithCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)session:(VCCallSession *)arg1 startAudioWithFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo *)arg2 internalFormat:(struct AudioStreamBasicDescription)arg3 internalSamplesPerFrame:(unsigned int)arg4 completionHandler:(void (^)(_Bool, NSError *))arg5;
- (void)didReceiveCaptions:(VCCaptionsTranscription *)arg1 remoteClient:(unsigned int)arg2;
- (_Bool)session:(VCCallSession *)arg1 stopVideoReceive:(id *)arg2 isPausing:(_Bool)arg3;
- (_Bool)stopVideoSend:(_Bool)arg1 error:(id *)arg2;
- (_Bool)session:(VCCallSession *)arg1 startVideoReceive:(id *)arg2;
- (_Bool)session:(VCCallSession *)arg1 startVideoSend:(id *)arg2 captureRuleWifi:(VCVideoRule *)arg3 captureRuleCell:(VCVideoRule *)arg4 interface:(int)arg5 isUnpausing:(_Bool)arg6;
- (void)session:(VCCallSession *)arg1 remoteCallingModeChanged:(unsigned int)arg2 withCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 localAudioEnabled:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(NSError *)arg4;
- (void)session:(VCCallSession *)arg1 remoteAudioEnabled:(_Bool)arg2 withCallID:(unsigned int)arg3;
- (void)didChangeLocalVariablesForSession:(VCCallSession *)arg1;
- (void)session:(VCCallSession *)arg1 didReceiveData:(NSData *)arg2 messageType:(unsigned int)arg3 withCallID:(unsigned int)arg4;
- (void)session:(VCCallSession *)arg1 didReceiveARPLData:(NSData *)arg2 fromCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 changeVideoRulesToCaptureRule:(VCVideoRule *)arg2 encodeRule:(VCVideoRule *)arg3 featuresListString:(NSString *)arg4;
- (void)session:(VCCallSession *)arg1 connectionDidChangeWithLocalInterfaceType:(NSString *)arg2 remoteInterfaceType:(NSString *)arg3 callID:(unsigned int)arg4;
- (void)session:(VCCallSession *)arg1 localIPChange:(NSData *)arg2 withCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 didChangeVideoRule:(VCVideoRule *)arg2;
- (void)session:(VCCallSession *)arg1 withCallID:(unsigned int)arg2 networkHint:(_Bool)arg3;
- (void)session:(VCCallSession *)arg1 withCallID:(unsigned int)arg2 videoIsDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;
- (void)setBWEOptions:(_Bool)arg1 UseNewBWEMode:(_Bool)arg2 FakeLargeFrameMode:(_Bool)arg3 ProbingSenderLog:(_Bool)arg4;
- (void)session:(VCCallSession *)arg1 didChangeRemoteScreenAttributes:(VideoAttributes *)arg2;
- (void)session:(VCCallSession *)arg1 packMeters:(char *)arg2 withLength:(char *)arg3;
- (void)session:(VCCallSession *)arg1 remoteMediaStalled:(_Bool)arg2;
- (void)session:(VCCallSession *)arg1 receivedNoPacketsForSeconds:(double)arg2;
- (void)session:(VCCallSession *)arg1 cancelRelayRequest:(NSDictionary *)arg2;
- (void)session:(VCCallSession *)arg1 sendRelayResponse:(NSDictionary *)arg2;
- (void)session:(VCCallSession *)arg1 initiateRelayRequest:(NSDictionary *)arg2;
- (void)remoteVideoDidPause:(_Bool)arg1 callID:(unsigned int)arg2;
- (void)remoteAudioDidPause:(_Bool)arg1 callID:(unsigned int)arg2;
- (void)session:(VCCallSession *)arg1 didPauseVideo:(_Bool)arg2 error:(NSError *)arg3;
- (void)session:(VCCallSession *)arg1 didPauseAudio:(_Bool)arg2 error:(NSError *)arg3;
- (_Bool)session:(VCCallSession *)arg1 didStopVideoIO:(_Bool)arg2 error:(id *)arg3;
- (_Bool)session:(VCCallSession *)arg1 receivedRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 withScreenAttributes:(VideoAttributes *)arg4 videoAttributes:(VideoAttributes *)arg5 isFirstFrame:(_Bool)arg6 isVideoPaused:(_Bool)arg7;
- (void)session:(VCCallSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)session:(VCCallSession *)arg1 cleanUpWithDelay:(long long)arg2 error:(NSError *)arg3;
- (void)session:(VCCallSession *)arg1 didStart:(_Bool)arg2 connectionType:(unsigned int)arg3 localInterfaceType:(NSString *)arg4 remoteInterfaceType:(NSString *)arg5 error:(NSError *)arg6;
@end

