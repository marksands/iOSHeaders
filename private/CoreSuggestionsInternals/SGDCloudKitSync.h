//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/APSConnectionDelegate-Protocol.h>

@class APSConnection, CKContainer, CKDatabase, NSError, NSOperation, NSOperationQueue, NSString, _SGDCloudKitSyncPersistedState;
@protocol OS_dispatch_queue;

@interface SGDCloudKitSync : NSObject <APSConnectionDelegate>
{
    CKDatabase *_database;
    CDUnknownBlockType _callback;
    APSConnection *_apsConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_opQueue;
    CKContainer *_container;
    _SGDCloudKitSyncPersistedState *_persistedState;
    long long _suspendCount;
    _Bool _noZone;
    _Bool _disabled;
    NSOperation *_inProgressProcureSaltOperation;
    NSOperation *_inProgressCreateZoneOperation;
    NSOperation *_inProgressDeleteZoneOperation;
    NSOperation *_inProgressFetchNewEntitiesOperation;
    _Bool _requestedFetchNewEntitiesWhileRequestAlreadyInFlight;
    NSError *_createZoneError;
    NSError *_deleteZoneError;
    NSError *_procureSaltError;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)recordZoneId;
- (void)setNewEntitiesCallback:(CDUnknownBlockType)arg1;
- (void)addEntity:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)createSubscriptionWithRetries:(unsigned long long)arg1;
- (id)apsEnvironmentStringForContainer:(id)arg1;
- (id)init;
- (id)addOperation:(id)arg1;
- (id)addWriteOperationForRecordGetter:(CDUnknownBlockType)arg1 withRetries:(unsigned long long)arg2 isFirstTry:(_Bool)arg3;
- (id)addWriteOperationForRecordGetter:(CDUnknownBlockType)arg1 withRetries:(unsigned long long)arg2;
- (id)addFetchNewEntitiesAttemptOperationWithRetries:(unsigned long long)arg1;
- (id)addFetchNewEntitiesOperation;
- (id)addProcureSaltAttemptOperationWithRetries:(unsigned long long)arg1;
- (id)_ckErrorForId:(id)arg1 inError:(id)arg2;
- (id)ckErrorForRecordZoneId:(id)arg1 inError:(id)arg2;
- (id)ckErrorForRecordId:(id)arg1 inError:(id)arg2;
- (id)addProcureSaltOperation;
- (id)addCreateZoneAttemptOperationWithRetries:(unsigned long long)arg1;
- (id)addCreateZoneOperation;
- (id)addDeleteZoneAttemptOperationWithRetries:(unsigned long long)arg1;
- (id)addDeleteZoneOperation;
- (_Bool)willPauseForError:(id)arg1;
- (id)getUnderlyingError:(id)arg1;
- (void)resume;
- (void)suspendAndResumeAfter:(double)arg1;
- (void)suspend;
- (void)failSalt;
- (void)disable;
- (void)clearErrors;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

