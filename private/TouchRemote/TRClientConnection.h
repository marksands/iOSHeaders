//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TouchRemote/TRConnection.h>

@class SFSession;

@interface TRClientConnection : TRConnection
{
    SFSession *_session;
}

@property(retain) SFSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)connectToNearbyDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)sendResponse:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)setRequestMessageHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)requestMessageHandler;
- (void)setEventMessageHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)eventMessageHandler;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)invalidationHandler;
- (void)setInterruptionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)interruptionHandler;

@end

