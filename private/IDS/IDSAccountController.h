//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, _IDSAccountController;

@interface IDSAccountController : NSObject
{
    _IDSAccountController *_internal;
}

- (void).cxx_destruct;
- (void)_disableAccount:(id)arg1;
- (void)_enableAccount:(id)arg1;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (void)_removeAccount:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 aliases:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)accountWithUniqueID:(id)arg1;
- (id)accountWithLoginID:(id)arg1 service:(id)arg2;
- (id)serviceName;
- (id)enabledAccounts;
@property(readonly, nonatomic) NSSet *accounts;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)_internal;
- (void)dealloc;
- (id)initWithService:(id)arg1;
- (id)_initWithService:(id)arg1;
- (id)_initWithService:(id)arg1 onIDSQueue:(_Bool)arg2;

@end

