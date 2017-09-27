//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXUIClientDelegate.h"

@class AXUIClient, NSString;

@interface SpeakThisServices : NSObject <AXUIClientDelegate>
{
    AXUIClient *_client;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_descriptionForMessageIdentifier:(unsigned long long)arg1;
- (void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_sendMessageWithIdentifier:(unsigned long long)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)_client;
- (id)_clientIdentifier;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)rewind:(CDUnknownBlockType)arg1;
- (void)fastForward:(CDUnknownBlockType)arg1;
- (void)speakSlower:(CDUnknownBlockType)arg1;
- (void)speakFaster:(CDUnknownBlockType)arg1;
- (void)toggleSpeaking:(CDUnknownBlockType)arg1;
- (void)resumeSpeaking:(CDUnknownBlockType)arg1;
- (void)pauseSpeaking:(CDUnknownBlockType)arg1;
- (void)didCancelSpeakThisErrorHandler:(CDUnknownBlockType)arg1;
- (void)speakThisWithOptions:(long long)arg1 useAppAtPoint:(struct CGPoint)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)speakThisWithOptions:(long long)arg1 errorHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

