//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RPCompanionLinkXPCServerInterface.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSXPCConnection, RPCompanionLinkClient, RPCompanionLinkDaemon;

__attribute__((visibility("hidden")))
@interface RPCompanionLinkXPCConnection : NSObject <RPCompanionLinkXPCServerInterface>
{
    RPCompanionLinkClient *_client;
    RPCompanionLinkDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _entitled;
    _Bool _localDeviceUpdated;
    NSMutableSet *_registeredEventIDs;
    NSMutableSet *_registeredRequestIDs;
    NSXPCConnection *_xpcCnx;
    unsigned int _xpcID;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)companionLinkSendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)companionLinkDeregisterRequestID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)companionLinkRegisterRequestID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)companionLinkSendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)companionLinkDeregisterEventID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)companionLinkRegisterEventID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)companionLinkInvalidateTransactionID:(id)arg1;
- (void)companionLinkActivateTransactionID:(id)arg1 label:(id)arg2;
- (void)companionLinkActivateClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_entitledAndReturnError:(id *)arg1;
- (void)connectionInvalidated;
- (id)initWithDaemon:(id)arg1 xpcConnection:(id)arg2;

@end

