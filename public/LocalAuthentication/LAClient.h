//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LAContextCallbackXPC.h"
#import "LAContextXPC.h"

@class LACachedExternalizedContext, NSData, NSError, NSMutableArray, NSObject<OS_dispatch_queue>, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface LAClient : NSObject <LAContextXPC, LAContextCallbackXPC>
{
    id <LAContextXPC> _remoteContext;
    NSXPCConnection *_serverConnection;
    NSError *_permanentError;
    NSData *_existingContext;
    NSMutableArray *_callInvalidationBlocks;
    _Bool _shouldRecoverConnection;
    LACachedExternalizedContext *_cachedExternalizedContext;
    NSObject<OS_dispatch_queue> *_uncork_queue;
    id <LAUIDelegate> _uiDelegate;
}

+ (void)_performInvalidationBlocks:(id)arg1;
+ (id)_recoveryQueue;
+ (id)_queue;
@property(nonatomic) __weak id <LAUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
- (void).cxx_destruct;
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)notifyEvent:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resetWithReply:(CDUnknownBlockType)arg1;
- (void)prearmTouchIdWithReply:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSData *externalizedContext;
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;
- (_Bool)setServerPropertyForOption:(long long)arg1 value:(id)arg2 error:(id *)arg3;
- (id)serverPropertyForOption:(long long)arg1 error:(id *)arg2;
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)serverPropertyForOption:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)isCredentialSet:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluateACL:(id)arg1 operation:(long long)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluateACL:(id)arg1 operation:(long long)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_checkIdResultForTCC:(id)arg1 error:(id)arg2 retryBlock:(CDUnknownBlockType)arg3 finally:(CDUnknownBlockType)arg4;
- (id)_updateOptions:(id)arg1;
- (_Bool)_setPermanentError:(id)arg1;
- (void)_performCallBool:(CDUnknownBlockType)arg1 finally:(CDUnknownBlockType)arg2;
- (void)_performCallIdCore:(CDUnknownBlockType)arg1 finally:(CDUnknownBlockType)arg2;
- (void)_performCallId:(CDUnknownBlockType)arg1 finally:(CDUnknownBlockType)arg2;
- (void)_serializedInvalidateWithMessage:(id)arg1;
- (void)invalidateWithMessage:(id)arg1;
- (void)dealloc;
- (void)tccPreflightWithService:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)invalidatedWithError:(id)arg1;
- (void)_recoverConnection;
- (void)_scheduleRecovery;
- (id)initWithExistingContext:(id)arg1;
- (void)connectToServerWithInterruptionHandler:(CDUnknownBlockType)arg1;

@end

