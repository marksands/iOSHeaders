//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEODaemon;

@interface GEOServer : NSObject
{
    GEODaemon *_daemon;
}

+ (_Bool)canHandleIncomingMessage:(id)arg1;
+ (Class)requestClassForMethod:(id)arg1;
+ (_Bool)usesModernRequestReply;
+ (_Bool)shouldStartImmediately;
+ (Class)peerClass;
+ (id)identifier;
@property(nonatomic) __weak GEODaemon *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (id)description;
- (void)peerDidDisconnect:(id)arg1;
- (void)peerDidConnect:(id)arg1;
- (void)handleRequest:(id)arg1;
- (void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2;

@end

