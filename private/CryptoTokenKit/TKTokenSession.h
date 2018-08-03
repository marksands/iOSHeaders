//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LAContext, NSDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString, TKToken;

@interface TKTokenSession : NSObject
{
    NSObject<OS_xpc_object> *_clientConnection;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    TKToken *_token;
    id <TKTokenSessionDelegate> _delegate;
    LAContext *_LAContext;
    NSDictionary *_parameters;
    NSNumber *_callerPID;
}

@property(readonly) NSObject<OS_xpc_object> *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain) NSNumber *callerPID; // @synthesize callerPID=_callerPID;
@property(retain) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain) LAContext *LAContext; // @synthesize LAContext=_LAContext;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property __weak id <TKTokenSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) TKToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name;
- (void)terminate;
- (_Bool)handleOperation:(long long)arg1 auditToken:(CDStruct_6ad76789)arg2 event:(id)arg3 reply:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)handleCopyIdentitiesEvent:(id)arg1 reply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)handleCopyItemsEvent:(id)arg1 reply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)handleControlEvent:(id)arg1 reply:(id)arg2 attributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)handleDeleteObjectEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)handleUpdateObjectEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 attributes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)handleCreateObjectEvent:(id)arg1 reply:(id)arg2 attributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)completeReply:(id)arg1 objectID:(id)arg2 attributes:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)handlePerformOperationEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)handleReadDataEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)handleGetPublicKeyEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)handleGetObjectAccessControlEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)handleEvaluateAccessControlEvent:(id)arg1 auditToken:(CDStruct_6ad76789)arg2 reply:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)evaluateAuthOperation:(id)arg1 auditToken:(CDStruct_6ad76789)arg2 retry:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)finalizeAuthOperation:(id)arg1 evaluatedAuthOperation:(id)arg2 auditToken:(CDStruct_6ad76789)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluateAuthOperation:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)endRequest;
- (_Bool)beginRequest:(long long)arg1 error:(id *)arg2;
- (void)controlWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateObject:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)createObjectWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)performKeyExchangeWithPublicKey:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)decryptData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)signData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)checkOperation:(long long)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getPublicKeyDataOfObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getDataOfObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)beginAuthForOperation:(long long)arg1 constraint:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getAccessControlOfObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly) id <TKTokenSessionPrivateDelegate> privateDelegate;
- (void)assignClientConnection:(id)arg1;
- (id)initWithToken:(id)arg1;

@end

