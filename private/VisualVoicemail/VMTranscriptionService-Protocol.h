//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VisualVoicemail/NSObject-Protocol.h>

@class NSArray, VMVoicemailTranscriptionController, VMVoicemailTranscriptionTask;

@protocol VMTranscriptionService <NSObject>
+ (NSArray *)transcriptionLanguageCodes;
@property(retain, nonatomic) VMVoicemailTranscriptionTask *transcriptionTask;
@property(retain, nonatomic) VMVoicemailTranscriptionController *transcriptionController;
@property(readonly, nonatomic, getter=isTranscriptionAvailable) _Bool transcriptionAvailable;
- (void)reportTranscriptionRatedAccurate:(_Bool)arg1 forRecord:(const void *)arg2;
- (void)reportTranscriptionProblemForRecord:(const void *)arg1;
- (void)processTranscriptForRecord:(const void *)arg1 priority:(long long)arg2 completion:(void (^)(_Bool))arg3;
- (void)unloadTranscriptionService;
- (void)loadTranscriptionService;
@end

