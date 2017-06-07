//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMTaskDispatcherDelegate-Protocol.h>

@class AXMAudioSession, AXMSoundComponent, AXMSpeechComponent, AXMTaskDispatcher, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface AXMOutputManager : NSObject <AXMTaskDispatcherDelegate>
{
    AXMTaskDispatcher *_outputRequests;
    AXMAudioSession *_audioSession;
    long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    AXMSoundComponent *_queue_soundComponent;
    AXMSpeechComponent *_queue_speechComponent;
    NSArray *_queue_activeComponents;
}

- (void).cxx_destruct;
- (void)dispatcher:(id)arg1 handleTask:(id)arg2;
- (void)playSound:(long long)arg1;
- (void)interruptPolitely;
- (void)interruptImmediately;
- (void)interrupt:(id)arg1;
- (void)speak:(id)arg1;
- (void)dispatchRequest:(id)arg1 options:(id)arg2;
- (void)enableWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

