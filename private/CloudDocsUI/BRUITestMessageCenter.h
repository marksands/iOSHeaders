//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BRUITestMessageCenter : NSObject
{
    NSMutableDictionary *_pendingReplies;
    NSMutableDictionary *_messageHandlers;
    NSObject<OS_dispatch_queue> *_messageQueue;
    _Bool _started;
    _Bool _isSender;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
- (void)setHandler:(id)arg1 forMessageNamed:(id)arg2;
- (void)didReceiveMessage:(id)arg1;
- (void)_sendMessageNamed:(id)arg1 userInfo:(id)arg2 isReply:(_Bool)arg3 messageUUID:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)sendMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)stop;
- (void)startReceiver;
- (void)startSender;
- (id)_init;
- (id)init;

@end

