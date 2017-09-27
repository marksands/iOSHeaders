//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSXPCConnection<FPDDaemon>;

@interface FPDaemonConnection : NSObject
{
    NSXPCConnection<FPDDaemon> *_connectionQueueConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_getAttributeConnections;
    NSObject<OS_dispatch_source> *_getAttributeConnectionsIdleCleanupTimer;
    unsigned int _user;
}

+ (id)newXPCConnection;
+ (id)connectionForUser:(unsigned int)arg1;
+ (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
+ (id)sharedConnection;
@property(nonatomic) unsigned int user; // @synthesize user=_user;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSXPCConnection<FPDDaemon> *connectionQueueConnection; // @synthesize connectionQueueConnection=_connectionQueueConnection;
- (void).cxx_destruct;
- (void)dumpStateTo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)endpointForItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unobserveWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)documentURLFromBookmarkableString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateLastUsedDateForFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchSupportedServicesForDocumentAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRemoteServiceEndpointCreatingProviderWithIdentifier:(id)arg1 itemURL:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchRemoteFileProviderWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)providersCompletionHandler:(CDUnknownBlockType)arg1;
- (void)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(_Bool)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)wakeUpCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSXPCConnection<FPDDaemon> *connection;
- (id)initWithUser:(unsigned int)arg1;

@end

