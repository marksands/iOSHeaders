//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface>
{
    NSXPCConnection *_connection;
    NSString *_className;
    _Bool _callbacksSuspended;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    int _remoteProcessIdentifier;
    NSString *_remoteProcessApplicationIdentifier;
}

@property(readonly, nonatomic) NSString *remoteProcessApplicationIdentifier; // @synthesize remoteProcessApplicationIdentifier=_remoteProcessApplicationIdentifier;
@property(readonly, nonatomic) int remoteProcessIdentifier; // @synthesize remoteProcessIdentifier=_remoteProcessIdentifier;
- (void).cxx_destruct;
- (void)serviceSuspended;
- (void)serviceResumed;
@property(readonly, nonatomic) NSString *remoteProcessBundleIdentifier;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)clearConnectionReference;
- (id)connection;
- (id)initWithConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

