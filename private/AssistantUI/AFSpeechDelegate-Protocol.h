//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFConnection, AFSpeechInterpretation, AFXPCWrapper, NSArray, NSError, NSString, SASSpeechPartialResult, SASSpeechRecognized;

@protocol AFSpeechDelegate <NSObject>

@optional
- (void)assistantConnection:(AFConnection *)arg1 recognitionUpdateDidFinishWithError:(NSError *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 recognitionUpdateWillBeginForTask:(NSString *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 recognitionWithPhrases:(NSArray *)arg2 utterances:(NSArray *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 recognitionUpdateWithPhrases:(NSArray *)arg2 utterances:(NSArray *)arg3 refId:(NSString *)arg4;
- (void)assistantConnection:(AFConnection *)arg1 recognizedAdditionalSpeechInterpretation:(AFSpeechInterpretation *)arg2 refId:(NSString *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 speechRecognizedPartialResult:(SASSpeechPartialResult *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 speechRecognized:(SASSpeechRecognized *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 speechRecognitionDidFail:(NSError *)arg2;
- (void)assistantConnectionDidChangeAudioRecordingPower:(AFConnection *)arg1;
- (void)assistantConnection:(AFConnection *)arg1 speechRecordingDidFail:(NSError *)arg2;
- (void)assistantConnectionSpeechRecordingDidCancel:(AFConnection *)arg1;
- (void)assistantConnectionSpeechRecordingDidEnd:(AFConnection *)arg1;
- (void)assistantConnection:(AFConnection *)arg1 speechRecordingPerformTwoShotPromptWithType:(long long)arg2 completion:(void (^)(double, double, NSError *))arg3;
- (void)assistantConnectionSpeechRecordingDidDetectStartpoint:(AFConnection *)arg1;
- (void)assistantConnection:(AFConnection *)arg1 speechRecordingDidChangeAVRecordRoute:(NSString *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg2 audioSessionID:(unsigned int)arg3;
- (void)assistantConnection:(AFConnection *)arg1 speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(AFXPCWrapper *)arg2;
- (void)assistantConnectionSpeechRecordingWillBegin:(AFConnection *)arg1;
@end

