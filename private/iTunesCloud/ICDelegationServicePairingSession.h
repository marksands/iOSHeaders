//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDelegationServiceSecuritySettings, NSData, NSMutableArray, NSMutableData;
@protocol ICDelegationServicePairingSessionDelegate, OS_dispatch_queue;

@interface ICDelegationServicePairingSession : NSObject
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableArray *_existingPairingCompletionHandlers;
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
    struct PairingSessionPrivate *_pairingSession;
    long long _state;
    id <ICDelegationServicePairingSessionDelegate> _delegate;
    long long _role;
    ICDelegationServiceSecuritySettings *_securitySettings;
}

@property(readonly, nonatomic) ICDelegationServiceSecuritySettings *securitySettings; // @synthesize securitySettings=_securitySettings;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) __weak id <ICDelegationServicePairingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_receivedData:(id)arg1;
- (_Bool)_deriveEncryptionKeysReturningError:(id *)arg1;
- (void)_handlePairingSessionCompletionWithError:(id)arg1;
- (id)_encryptedDataForData:(id)arg1;
- (void)getEncryptedDataForData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getDecryptedDataForEncryptedData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)receievedData:(id)arg1;
- (void)prepareEncryptedSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithRole:(long long)arg1 securitySettings:(id)arg2;

@end

