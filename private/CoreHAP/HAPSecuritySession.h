//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSData, NSMutableData, NSObject<OS_dispatch_queue>;

@interface HAPSecuritySession : HMFObject
{
    unsigned long long _state;
    NSData *_broadcastKey;
    id <HAPSecuritySessionDelegate> _delegate;
    unsigned long long _role;
    unsigned long long _resumeSessionID;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    struct PairingSessionPrivate *_pairingSession;
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
}

@property(retain, nonatomic) NSMutableData *outputNonce; // @synthesize outputNonce=_outputNonce;
@property(retain, nonatomic) NSData *outputKey; // @synthesize outputKey=_outputKey;
@property(retain, nonatomic) NSMutableData *inputNonce; // @synthesize inputNonce=_inputNonce;
@property(retain, nonatomic) NSData *inputKey; // @synthesize inputKey=_inputKey;
@property(nonatomic) struct PairingSessionPrivate *pairingSession; // @synthesize pairingSession=_pairingSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) unsigned long long resumeSessionID; // @synthesize resumeSessionID=_resumeSessionID;
@property(readonly, nonatomic) unsigned long long role; // @synthesize role=_role;
@property(readonly) __weak id <HAPSecuritySessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (id)getBroadcastEncryptionKey;
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (void)_closeWithError:(id)arg1;
- (void)closeWithError:(id)arg1;
- (void)close;
- (void)_notifyOpened;
- (void)_notifyOpening;
- (void)reallyOpen;
- (void)open;
- (void)_handleSetupExchangeComplete;
- (id)_broadcastInfo;
- (id)_outputInfo;
- (id)_inputInfo;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)_initiateClientSessionSetupExchange;
- (id)_handlePeerPairingIdentityRequestWithIdentifier:(id)arg1 status:(int *)arg2;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)arg1;
- (_Bool)_initializeSetupSession:(unsigned long long)arg1;
- (id)description;
- (id)debugDescription;
- (void)_invalidate;
- (void)setResumeSessionID:(unsigned long long)arg1;
@property(readonly, getter=isOpening) _Bool opening;
@property(readonly, getter=isOpen) _Bool open;
@property(retain, nonatomic) NSData *broadcastKey; // @synthesize broadcastKey=_broadcastKey;
@property unsigned long long state; // @synthesize state=_state;
- (void)dealloc;
- (id)initWithRole:(unsigned long long)arg1 resumeSessionID:(unsigned long long)arg2 delegate:(id)arg3;

@end

