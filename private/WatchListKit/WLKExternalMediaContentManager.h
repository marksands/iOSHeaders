//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface WLKExternalMediaContentManager : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_proxy;
- (id)_connection;
- (void)_deletePlaybackActivityWithIdentifier:(id)arg1 bundleID:(id)arg2;
- (void)deletePlaybackActivityWithIdentifier:(id)arg1;
- (id)_init;
- (id)init;

@end

