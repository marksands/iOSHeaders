//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFError, MailAccount, NSLock, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface MFSecureMIMECompositionManager : NSObject
{
    id <MFSecureMIMECompositionManagerDelegate> _delegate;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    MailAccount *_sendingAccount;
    NSString *_sendingAddress;
    struct __SecIdentity *_signingIdentity;
    MFError *_signingIdentityError;
    struct __SecIdentity *_encryptionIdentity;
    MFError *_encryptionIdentityError;
    NSMutableSet *_recipients;
    NSMutableDictionary *_errorsByRecipient;
    NSMutableDictionary *_certificatesByRecipient;
    int _signingPolicy;
    int _encryptionPolicy;
    int _signingStatus;
    int _encryptionStatus;
    unsigned long long _encryptionStatusSemaphore;
    unsigned long long _signingStatusSemaphore;
    _Bool _invalidated;
}

+ (_Bool)isRevokedCertificate:(struct __SecCertificate *)arg1 sendingAddress:(id)arg2;
+ (id)copyEncryptionCertificatesForAccount:(id)arg1 recipientAddress:(id)arg2 error:(id *)arg3;
+ (struct __SecIdentity *)copyEncryptionIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id *)arg3;
+ (struct __SecIdentity *)copySigningIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id *)arg3;
- (_Bool)_shouldAllowSend_nts;
- (_Bool)_shouldEncrypt_nts;
- (_Bool)_shouldSign_nts;
- (_Bool)shouldAllowSend;
- (id)compositionSpecification;
@property(readonly) NSSet *recipients;
@property(readonly) int encryptionStatus;
- (void)_notifyDelegateEncryptionStatusDidChange:(int)arg1 certsByRecipient:(id)arg2 errorsByRecipient:(id)arg3 identity:(struct __SecIdentity *)arg4 error:(id)arg5;
- (void)_nts_copyEncryptionIdentity:(struct __SecIdentity **)arg1 error:(id *)arg2 certificatesByRecipient:(id *)arg3 errorsByRecipient:(id *)arg4;
- (void)_nts_setEncryptionIdentity:(struct __SecIdentity *)arg1 error:(id)arg2;
- (_Bool)_updateEncryptionStatus_nts;
- (void)_determineEncryptionStatusWithNewRecipients:(id)arg1;
- (void)_determineEncryptionStatusWithSendingAddress:(id)arg1;
@property(readonly) int signingStatus;
- (void)_nts_copySigningIdentity:(struct __SecIdentity **)arg1 error:(id *)arg2;
- (void)_nts_setSigningIdentity:(struct __SecIdentity *)arg1 error:(id)arg2;
- (_Bool)_updateSigningStatus_nts;
- (void)_notifyDelegateSigningStatusDidChange:(int)arg1 identity:(struct __SecIdentity *)arg2 error:(id)arg3;
- (void)_determineSigningStatusWithSendingAddress:(id)arg1;
- (void)_determineRevocationStatusWithIdentity:(struct __SecIdentity *)arg1 sendingAddress:(id)arg2;
- (void)_determineIdentitiesWithSendingAddress:(id)arg1 forSigning:(_Bool)arg2 encryption:(_Bool)arg3;
@property(readonly) int encryptionPolicy;
@property(readonly) int signingPolicy;
@property(readonly) MailAccount *sendingAccount;
@property(copy) NSString *sendingAddress;
@property id <MFSecureMIMECompositionManagerDelegate> delegate;
- (void)invalidate;
- (void)removeRecipients:(id)arg1;
- (void)addRecipients:(id)arg1;
- (void)dealloc;
- (id)initWithSendingAccount:(id)arg1 signingPolicy:(int)arg2 encryptionPolicy:(int)arg3;
- (id)initWithSigningPolicy:(int)arg1 encryptionPolicy:(int)arg2;
- (id)init;

@end

