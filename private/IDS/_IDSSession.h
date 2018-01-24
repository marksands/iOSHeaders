//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSBaseSocketPairConnectionDelegate.h"
#import "IDSDaemonListenerProtocol.h"

@class CUTWeakReference, IDSBaseSocketPairConnection, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface _IDSSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate>
{
    id _delegateContext;
    id _boostContext;
    NSString *_uniqueID;
    NSString *_accountID;
    NSSet *_destinations;
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _state;
    long long _transportType;
    unsigned long long _initialLinkType;
    int _socket;
    _Bool _isAudioEnabled;
    _Bool _isMuted;
    _Bool _isLegacy;
    long long _inviteTimeout;
    unsigned long long _connectionCountHint;
    _Bool _needsToWaitForPreConnectionData;
    _Bool _disallowCellularInterface;
    _Bool _disallowWifiInterface;
    unsigned long long _preferredAddressFamily;
    _Bool _preferCellularForCallSetup;
    NSString *_clientUUID;
    _Bool _disableEncryption;
    _Bool _shouldUseSocketForTransport;
    _Bool _enableSingleChannelDirectMode;
    _Bool _alwaysSkipSelf;
    unsigned int _sessionEndedReason;
    NSMutableDictionary *_preferences;
    NSMutableDictionary *_sessionConfig;
}

@property(readonly, nonatomic) unsigned long long initialLinkType; // @synthesize initialLinkType=_initialLinkType;
@property(retain, nonatomic) id boostContext; // @synthesize boostContext=_boostContext;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)session:(id)arg1 muted:(_Bool)arg2;
- (void)session:(id)arg1 audioEnabled:(_Bool)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)allocationDone:(id)arg1 sessionInfo:(id)arg2;
- (void)session:(id)arg1 invitationSentToTokens:(id)arg2 shouldBreakBeforeMake:(_Bool)arg3;
- (void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (_Bool)sendData:(id)arg1 error:(id *)arg2;
- (unsigned long long)MTUForAddressFamily:(unsigned long long)arg1;
- (_Bool)shouldUseSocketForTransport;
@property(readonly, nonatomic) unsigned int sessionEndedReason;
@property(nonatomic) long long inviteTimeout;
- (id)getPreferences;
- (void)setPreferences:(id)arg1;
- (_Bool)getMuted;
- (void)setMuted:(_Bool)arg1;
- (_Bool)getAudioEnabled;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;
- (void)sendSessionMessage:(id)arg1;
- (void)endSessionWithData:(id)arg1;
- (void)endSession;
- (void)declineInvitationWithData:(id)arg1;
- (void)declineInvitation;
- (void)acceptInvitationWithData:(id)arg1;
- (void)acceptInvitation;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;
- (void)cancelInvitationWithData:(id)arg1;
- (void)cancelInvitation;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)sendAllocationRequest:(id)arg1;
- (void)_cleanupSocketPairConnections;
- (void)_setupSocketPairToDaemon;
- (void)_setupUnreliableSocketPairConnection;
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) int socket;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_broadcastNewSessionToDaemon;
- (void)daemonDisconnected;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 connectionCountHint:(unsigned long long)arg4 needsToWaitForPreConnectionData:(_Bool)arg5 uniqueID:(id)arg6 delegateContext:(id)arg7;
- (id)daemonController;
- (id)daemonListener;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

