//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSAccountControllerDelegate-Protocol.h>
#import <IDS/IDSConnectionDelegatePrivate-Protocol.h>
#import <IDS/IDSDaemonListenerProtocol-Protocol.h>
#import <IDS/IDSGroupContextControllerDelegate-Protocol.h>

@class IDSAccount, IDSAccountController, IDSGroupContextController, IDSQuickSwitchAcknowledgementTracker, NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol OS_xpc_object;

@interface _IDSService : NSObject <IDSGroupContextControllerDelegate, IDSAccountControllerDelegate, IDSConnectionDelegatePrivate, IDSDaemonListenerProtocol>
{
    IDSAccountController *_accountController;
    NSMutableDictionary *_uniqueIDToConnection;
    NSSet *_commands;
    NSString *_rerouteService;
    NSMapTable *_delegateToInfo;
    id _delegateContext;
    NSMutableDictionary *_protobufSelectors;
    NSMutableSet *_lastIsActiveSet;
    NSMutableDictionary *_subServices;
    _Bool _pretendingToBeFull;
    _Bool _everHadDelegate;
    _Bool _manuallyAckMessages;
    unsigned int _listenerCaps;
    NSObject<OS_xpc_object> *_connection;
    IDSGroupContextController *_groupContextController;
    id _idsSimulatorSupportDataHandlerToken;
    IDSQuickSwitchAcknowledgementTracker *_acknowledgementTracker;
    CDUnknownBlockType _pendingRegisteredIdentitiesBlock;
}

@property(readonly, retain, nonatomic) IDSGroupContextController *groupContextController; // @synthesize groupContextController=_groupContextController;
@property(nonatomic) _Bool manuallyAckMessages; // @synthesize manuallyAckMessages=_manuallyAckMessages;
- (void).cxx_destruct;
- (id)groupContextController:(id)arg1 accountsForAlises:(id)arg2;
- (void)identitiesForGroupContextController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)groupContextController:(id)arg1 didCreateGroup:(id)arg2;
- (void)connection:(id)arg1 didHintCheckingTransportLogWithReason:(long long)arg2;
- (void)connection:(id)arg1 didUpdateDeviceIdentity:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)fetchRegisteredDeviceIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (void)scheduleTransactionLogTask:(id)arg1;
- (void)performGroupTask:(CDUnknownBlockType)arg1;
- (void)_disableAccount:(id)arg1;
- (void)_enableAccount:(id)arg1;
- (void)disableiCloudUser;
- (void)enableiCloudUser;
- (void)disablePhoneUser;
- (void)enablePhoneUser;
- (void)disable;
- (void)enable;
- (id)datagramChannelForSocketDescriptor:(int)arg1 error:(id *)arg2;
- (id)datagramChannelForSessionDestination:(id)arg1 error:(id *)arg2;
- (id)streamConnectionForSocketDescriptor:(int)arg1 error:(id *)arg2;
- (id)streamConnectionForSessionDestination:(id)arg1 error:(id *)arg2;
- (id)datagramConnectionForSocketDescriptor:(int)arg1 error:(id *)arg2;
- (id)datagramConnectionForSessionDestination:(id)arg1 error:(id *)arg2;
- (void)sendAckForMessageWithContext:(id)arg1;
- (_Bool)sendAheadGroup:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id *)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)sendResourceAtURL:(id)arg1 metadata:(id)arg2 fromAccount:(id)arg3 toDestinations:(id)arg4 priority:(long long)arg5 options:(id)arg6 identifier:(id *)arg7 error:(id *)arg8;
- (void)testCloudQRConnection;
- (void)startOTRTest:(long long)arg1;
- (void)setLinkPreferences:(id)arg1;
- (void)setPreferInfraWiFi:(_Bool)arg1;
- (id)deviceForUniqueID:(id)arg1;
- (id)devicesForBTUUID:(id)arg1;
- (id)firstRoutableInternetDestinationForSelf;
- (id)deviceForFromID:(id)arg1;
- (id)uriForFromID:(id)arg1;
- (_Bool)cancelIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;
- (_Bool)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id *)arg4 error:(id *)arg5;
- (_Bool)sendAccessoryData:(id)arg1 toAccessoryID:(id)arg2 accessToken:(id)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (_Bool)_sendSimulatorData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (_Bool)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (void)_handlePretendingToBeFullWithIdentifier:(id *)arg1;
- (_Bool)_sendSimulatorProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (_Bool)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (_Bool)_sendSimulatorMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (_Bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (id)_sendingAccountForAccount:(id)arg1 destination:(id)arg2;
- (id)_sendingAccountForAccount:(id)arg1;
- (_Bool)canSendMessageWithAccount:(id)arg1 toDestination:(id)arg2;
- (SEL)protobufActionForType:(unsigned short)arg1 isResponse:(_Bool)arg2;
- (void)setProtobufAction:(SEL)arg1 forProtobufType:(unsigned short)arg2 isResponse:(_Bool)arg3;
- (void)resendSubServicesToDaemonForCurrentDevice;
- (_Bool)updateSubServices:(id)arg1 forDevice:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *devices;
@property(readonly, copy, nonatomic) NSSet *internalAccounts;
@property(readonly, copy, nonatomic) NSSet *accounts;
- (id)_filteredAccountsFrom:(id)arg1;
- (id)phoneNumberAccount;
@property(readonly, nonatomic) IDSAccount *iCloudAccount;
@property(readonly, copy, nonatomic) NSString *serviceDomain;
@property(nonatomic, getter=isPretendingToBeFull) _Bool pretendingToBeFull;
- (void)connection:(id)arg1 account:(id)arg2 sessionInviteReceived:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 options:(id)arg6 context:(id)arg7 messageContext:(id)arg8;
- (void)connection:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3;
- (void)connection:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(_Bool)arg3 error:(id)arg4 context:(id)arg5;
- (void)connection:(id)arg1 identifier:(id)arg2 alternateCallbackID:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
- (void)connection:(id)arg1 messageIdentifier:(id)arg2 alternateCallbackID:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(_Bool)arg6 messageContext:(id)arg7;
- (void)connection:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)connection:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)_callDelegatesForDevicesChanged;
- (void)connection:(id)arg1 devicesChanged:(id)arg2;
- (void)connection:(id)arg1 isActiveChanged:(_Bool)arg2;
- (void)connection:(id)arg1 incomingEngramMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (id)_payloadFromDecryptedData:(id)arg1;
- (void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4;
- (void)connection:(id)arg1 incomingProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingAccessoryReportMessage:(id)arg2 accessoryID:(id)arg3 controllerID:(id)arg4 context:(id)arg5;
- (void)connection:(id)arg1 incomingAccessoryData:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingGroupData:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)_callIsActiveChanged;
- (void)_processAccountSet:(id)arg1;
- (void)_tearDownConnectionForUniqueID:(id)arg1;
- (void)_setupNewConnectionForAccount:(id)arg1;
- (void)_logConnectionMap;
- (_Bool)_isDroppingMessages;
- (void)_stopAwaitingQuickSwitchAcknowledgementFromDelegateWithIdentifier:(id)arg1;
- (CDUnknownBlockType)_acknowledgementBlockWithDelegateIdentifier:(id)arg1;
- (void)didSwitchActivePairedDevice:(id)arg1 forService:(id)arg2 wasHandled:(_Bool *)arg3;
- (void)OTRTestCallback:(id)arg1 time:(double)arg2 error:(id)arg3;
- (void)daemonConnected;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4 group:(id)arg5;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)receivedIDSSimulatorSupportData:(id)arg1 serviceName:(id)arg2 messageIdentifier:(id)arg3;
- (void)dealloc;
- (id)initWithService:(id)arg1 serviceDomain:(id)arg2 delegateContext:(id)arg3;
- (id)initWithService:(id)arg1 commands:(id)arg2 delegateContext:(id)arg3;
- (void)_setupIDSWakeListenerForService:(id)arg1;
- (id)daemonController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

