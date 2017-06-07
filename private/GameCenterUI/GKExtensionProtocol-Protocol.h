//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKGame, NSData, NSDictionary, NSObject, NSString;

@protocol GKExtensionProtocol <NSObject>
@property(retain, nonatomic) GKGame *game;
- (void)setInitialState:(NSDictionary *)arg1 withReply:(void (^)(_Bool))arg2;
- (void)messageFromClient:(NSData *)arg1;

@optional
- (void)hostApp:(NSString *)arg1 grantingAccessExtensionSandbox:(NSString *)arg2 replyWithEndpoint:(void (^)(NSXPCListenerEndpoint *))arg3;
- (void)nudge;
- (void)setValue:(NSObject *)arg1 forKeyPath:(NSString *)arg2 withReply:(void (^)(_Bool))arg3;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;
@end

