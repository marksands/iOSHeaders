//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface BYBuddyDaemonGeneralClient : NSObject
{
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)_daemonConnection;
- (void)observeFinishSetupTriggers;
- (id)backupMetadata;
- (_Bool)setupAssistantNeedsToRun;
- (id)init;

@end

