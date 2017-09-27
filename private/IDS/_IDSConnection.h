//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSAccountDelegate.h"
#import "IDSDaemonListenerProtocol.h"

@class IDSAccount, NSMapTable, NSMutableDictionary, NSSet, NSString;

@interface _IDSConnection : NSObject <IDSDaemonListenerProtocol, IDSAccountDelegate>
{
    id _messageContext;
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    IDSAccount *_account;
    NSSet *_commands;
    NSString *_serviceToken;
    NSMutableDictionary *_pendingSends;
    unsigned int _delegateCapabilities;
    _Bool _indirectDelegateCallouts;
}

- (void).cxx_destruct;
- (void)checkTransportLogWithReason:(long long)arg1;
- (void)updateDeviceIdentity:(id)arg1 error:(id)arg2;
- (void)groupShareReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6;
- (void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)accessoryReportMessageReceived:(id)arg1 accessoryID:(id)arg2 controllerID:(id)arg3 withGUID:(id)arg4 forTopic:(id)arg5 toIdentifier:(id)arg6 fromID:(id)arg7 context:(id)arg8;
- (void)accessoryDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)engramDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;
- (_Bool)_shouldAcceptIncomingType:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 validateAliases:(_Bool)arg5;
- (void)_setTemporaryMessageContext:(id)arg1;
- (void)messageIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(_Bool)arg6 context:(id)arg7;
- (void)daemonConnected;
- (void)_resendPendingSends;
- (void)_handleLastCallForPendingIdentifier:(id)arg1 callbackID:(id)arg2;
- (void)_connect;
- (void)account:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)account:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)account:(id)arg1 devicesChanged:(id)arg2;
- (void)account:(id)arg1 isActiveChanged:(_Bool)arg2;
- (_Bool)sendServerMessage:(id)arg1 command:(id)arg2;
- (_Bool)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (_Bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (_Bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (void)_replaceSentinelInSendParameters:(id)arg1 withCurrentActiveDevice:(id)arg2;
- (id)_sendWithParameters:(id)arg1 options:(id)arg2 loggingType:(id)arg3 loggingDataSize:(unsigned long long)arg4;
- (void)setDelegateCapabilities:(unsigned int)arg1;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4 group:(id)arg5;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)_activeDevice;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) IDSAccount *account;
- (id)daemonListener;
- (id)daemonController;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(_Bool)arg3 delegateContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

