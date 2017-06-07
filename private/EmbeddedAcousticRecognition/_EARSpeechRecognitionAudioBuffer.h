//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _EARSpeechRecognizer;
@protocol OS_dispatch_queue;

@interface _EARSpeechRecognitionAudioBuffer : NSObject
{
    shared_ptr_809f9c31 _buffer;
    NSObject<OS_dispatch_queue> *_queue;
    _EARSpeechRecognizer *_speechRecognizer;
    _Bool _cancelled;
    _Bool _ended;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_detachFromRecognizer;
- (void)cancelRecognition;
- (void)endAudio;
- (void)addAudioSampleData:(id)arg1;
- (void)addAudioSamples:(const short *)arg1 count:(unsigned long long)arg2;
- (id)_initWithAudioBuffer:(shared_ptr_809f9c31)arg1 speechRecognizer:(id)arg2;

@end

