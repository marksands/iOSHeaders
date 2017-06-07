//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, VSPresynthesizedAudioRequest, VSSpeechConnectionDelegateWrapper, VSSpeechRequest;
@protocol OS_dispatch_queue, VSSpeechConnectionDelegate;

@interface VSSpeechConnection : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSString *_identifier;
    id <VSSpeechConnectionDelegate> _delegate;
    VSSpeechConnectionDelegateWrapper *_delegateWrapper;
    NSObject<OS_dispatch_queue> *_threadSafeQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *threadSafeQueue; // @synthesize threadSafeQueue=_threadSafeQueue;
@property(retain, nonatomic) VSSpeechConnectionDelegateWrapper *delegateWrapper; // @synthesize delegateWrapper=_delegateWrapper;
@property(nonatomic) __weak id <VSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)getLogToFile:(CDUnknownBlockType)arg1;
- (void)setLogToFile:(_Bool)arg1;
- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)getVoiceResourceForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)getLocalVoiceResources:(CDUnknownBlockType)arg1;
- (void)getLocalVoiceAssets:(CDUnknownBlockType)arg1;
- (oneway void)cleanUnusedAssets:(CDUnknownBlockType)arg1;
- (void)continueCurrentSpeechRequest;
- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1;
- (void)stopCurrentSpeechRequestAtMark:(long long)arg1;
- (void)startSynthesisRequest:(id)arg1;
- (void)stopPresynthesizedAudioRequest;
- (void)startPresynthesizedAudioRequest:(id)arg1;
- (void)startSpeechRequest:(id)arg1;
- (_Bool)isSystemSpeakingOnBehalfOfCurrentConnection;
- (_Bool)isSystemSpeaking;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (void)prewarmIfNeededWithRequest:(id)arg1;
- (void)updateWithConnectionIdentifier:(id)arg1;
@property(readonly, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;
- (void)setPresynthesizedAudioRequest:(id)arg1;
@property(readonly, nonatomic) VSSpeechRequest *synthesisRequest;
- (void)setSynthesisRequest:(id)arg1;
@property(readonly, nonatomic) VSSpeechRequest *request;
- (void)setRequest:(id)arg1;
- (void)_connectionInvalidated;
- (id)_remoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObject;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)dealloc;
- (id)init;

@end

