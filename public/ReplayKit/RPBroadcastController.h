//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, RPBroadcastViewController;

@interface RPBroadcastController : NSObject
{
    NSDictionary *_serviceInfo;
    id <RPBroadcastControllerDelegate> _delegate;
    NSString *_broadcastExtensionBundleID;
    RPBroadcastViewController *_broadcastViewController;
}

@property(readonly, nonatomic) RPBroadcastViewController *broadcastViewController; // @synthesize broadcastViewController=_broadcastViewController;
@property(readonly, nonatomic) NSString *broadcastExtensionBundleID; // @synthesize broadcastExtensionBundleID=_broadcastExtensionBundleID;
@property(nonatomic) __weak id <RPBroadcastControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
- (void).cxx_destruct;
- (void)finishBroadcastWithHandler:(CDUnknownBlockType)arg1;
- (void)resumeBroadcast;
- (void)pauseBroadcast;
- (void)startBroadcastWithHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSURL *broadcastURL;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic, getter=isBroadcasting) _Bool broadcasting;
- (void)dealloc;
- (id)initWithCurrentSession;
- (id)initWithExtensionBundleID:(id)arg1 broadcastURL:(id)arg2 broadcastViewController:(id)arg3;
- (id)init;

@end

