//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PKPeerPaymentAccount, PKPeerPaymentWebServiceContext, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKPeerPaymentService : NSObject
{
    PKXPCService *_remoteService;
    PKPeerPaymentAccount *_account;
    NSObject<OS_dispatch_queue> *_accountQueue;
}

- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyForSelector:(SEL)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (void)_accountChanged:(id)arg1;
- (void)_sharedPeerPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)balanceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)noteAccountDeleted;
- (void)presentRegistrationFlowWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentIdentityVerificationFlowWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PKPeerPaymentAccount *account;
@property(retain, nonatomic) PKPeerPaymentWebServiceContext *sharedPeerPaymentWebServiceContext;
- (void)dealloc;
- (id)init;

@end

